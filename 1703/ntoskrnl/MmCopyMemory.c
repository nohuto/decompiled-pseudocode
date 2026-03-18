/*
 * XREFs of MmCopyMemory @ 0x140210B00
 * Callers:
 *     <none>
 * Callees:
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400FE040 (MiGetEffectivePagePriorityThread.c)
 *     MiPrefetchVirtualMemory @ 0x140108070 (MiPrefetchVirtualMemory.c)
 *     ZwReadVirtualMemory @ 0x14017E720 (ZwReadVirtualMemory.c)
 *     MiCopySinglePage @ 0x140210384 (MiCopySinglePage.c)
 *     MiTranslatePageForCopy @ 0x1402105E8 (MiTranslatePageForCopy.c)
 *     MiCheckPhysicalAddressRange @ 0x14021AB54 (MiCheckPhysicalAddressRange.c)
 */

NTSTATUS __fastcall MmCopyMemory(
        char *Buffer,
        unsigned __int64 BaseAddress,
        SIZE_T NumberOfBytesToRead,
        int a4,
        PSIZE_T a5)
{
  ULONG_PTR *NumberOfBytesRead; // rdx
  char v7; // r13
  SIZE_T v8; // r14
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r12
  char *v13; // rax
  int v14; // esi
  size_t v15; // r15
  _QWORD *v16; // rcx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  int SystemRegionType; // eax
  char *v21; // r8
  int v22; // r9d
  unsigned __int64 v23; // r10
  size_t v24; // rdx
  char *v25; // rcx
  __int64 v26; // r8
  unsigned __int64 v27; // rdi
  __int64 v28; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-31h] BYREF
  __int64 v30; // [rsp+48h] [rbp-29h]
  __int64 v31; // [rsp+50h] [rbp-21h]
  unsigned __int64 v32; // [rsp+58h] [rbp-19h] BYREF
  __int64 v33; // [rsp+60h] [rbp-11h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-9h]
  struct _KPROCESS *Process; // [rsp+70h] [rbp-1h]
  _QWORD *v36; // [rsp+78h] [rbp+7h]
  _QWORD v37[8]; // [rsp+80h] [rbp+Fh] BYREF
  char *v38; // [rsp+D0h] [rbp+5Fh]
  KIRQL v39; // [rsp+E8h] [rbp+77h] BYREF

  v38 = Buffer;
  v31 = 0LL;
  NumberOfBytesRead = a5;
  v7 = a4;
  v8 = NumberOfBytesToRead;
  *a5 = 0LL;
  if ( !a4 || (a4 & 0xFFFFFFFC) != 0 || ((a4 - 1) & a4) != 0 || KeGetCurrentIrql() > 1u )
    return -1073741582;
  if ( (a4 & 1) == 0 )
  {
    v13 = (char *)(BaseAddress + NumberOfBytesToRead);
    if ( BaseAddress + NumberOfBytesToRead > BaseAddress )
    {
      v10 = 0x7FFFFFFEFFFFLL;
      if ( BaseAddress > 0x7FFFFFFEFFFFLL )
        goto LABEL_8;
      if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL )
        return ZwReadVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID)BaseAddress, Buffer, v8, NumberOfBytesRead);
    }
    return -1073741800;
  }
  if ( !(unsigned int)MiCheckPhysicalAddressRange(BaseAddress, NumberOfBytesToRead) )
    return -1073741800;
LABEL_8:
  v11 = BaseAddress & 0xFFF;
  v12 = (v11 + v8 + 4095) >> 12;
  if ( v12 >= 0x100000000LL )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v14 = 0;
  v36 = (_QWORD *)MiReservePtes((__int64)&qword_14036D0A0, (unsigned int)v12, v10);
  v30 = (__int64)v36;
  v15 = 4096 - v11;
  v16 = v36;
  v17 = v7 & 1;
  if ( 4096 - v11 > v8 )
    v15 = v8;
  if ( (v7 & 1) != 0 )
  {
    v29 = BaseAddress >> 12;
    v17 = v7 & 1;
  }
  else
  {
    v29 = -1LL;
  }
  if ( v8 )
  {
    while ( 1 )
    {
      v33 = 0LL;
      v32 = 0LL;
      if ( v17 )
        break;
      v18 = MiTranslatePageForCopy(BaseAddress, (char **)&v28, (__int64 *)&v29, &v33, &v39, &v32);
      v14 = v18;
      if ( v18 >= 0 )
      {
        if ( v18 == 273 )
        {
          v14 = 0;
          v24 = v15;
          if ( v15 )
          {
            v25 = &v38[-v11];
            do
            {
              v25[v11] = *((_BYTE *)&v32 + (v11 & 7));
              ++v11;
              --v24;
            }
            while ( v24 );
          }
LABEL_46:
          v31 += v15;
          v8 -= v15;
          v38 += v15;
          BaseAddress += v15;
          ++v29;
          v16 = (_QWORD *)v30;
          v15 = v8;
          if ( v8 > 0x1000 )
            v15 = 4096LL;
          v11 = 0LL;
          if ( v30 )
          {
            v16 = (_QWORD *)(v30 + 8);
            v30 += 8LL;
          }
          goto LABEL_50;
        }
        v16 = (_QWORD *)v30;
LABEL_41:
        v26 = v11;
        v27 = v29;
        v14 = MiCopySinglePage(v38, v29, v26, v15, (unsigned __int64)v16, v7);
        if ( v28 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(48 * v27 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v33 )
            MiUnlockProtoPoolPage(v33, 2u);
          MiUnlockWorkingSetExclusive(v28, v39);
        }
        if ( v14 < 0 )
          goto LABEL_54;
        goto LABEL_46;
      }
      if ( v18 != -1073741608 )
        goto LABEL_54;
      MiGetEffectivePagePriorityThread((__int64)CurrentThread);
      v37[0] = BaseAddress;
      v28 = 1LL;
      v19 = v8;
      if ( v8 > 0x200000 - (BaseAddress & 0x1FFFFF) )
        v19 = 0x200000 - (BaseAddress & 0x1FFFFF);
      v37[1] = v19;
      SystemRegionType = MiGetSystemRegionType(BaseAddress);
      if ( SystemRegionType == (_DWORD)v23 )
      {
        if ( !Process[1].ActiveProcessors.Bitmap[2] || Process == PsInitialSystemProcess )
        {
          v14 = -1073741819;
          goto LABEL_54;
        }
        v21 = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
        v28 = (__int64)v21;
      }
      if ( BaseAddress >= qword_14036D870 && BaseAddress <= qword_14036C5D0 )
      {
        v14 = -1073741585;
        goto LABEL_54;
      }
      v14 = MiPrefetchVirtualMemory(v23, (__int64)v37, (__int64)v21, v22);
      if ( v14 < 0 )
        goto LABEL_54;
      v16 = (_QWORD *)v30;
LABEL_50:
      if ( !v8 )
        goto LABEL_54;
      v17 = v7 & 1;
    }
    v28 = 0LL;
    v39 = 17;
    goto LABEL_41;
  }
LABEL_54:
  if ( v36 )
    MiReleasePtes((__int64)&qword_14036D0A0, v36, v12);
  *a5 += v31;
  return v14;
}
