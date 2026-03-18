/*
 * XREFs of MmCopyMemory @ 0x140218220
 * Callers:
 *     <none>
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x140028114 (MiGetEffectivePagePriorityThread.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiPrefetchVirtualMemory @ 0x140109C80 (MiPrefetchVirtualMemory.c)
 *     ZwReadVirtualMemory @ 0x14017E0A0 (ZwReadVirtualMemory.c)
 *     MiCopySinglePage @ 0x1402179B4 (MiCopySinglePage.c)
 *     MiTranslatePageForCopy @ 0x140217C58 (MiTranslatePageForCopy.c)
 *     MiCheckPhysicalAddressRange @ 0x1402273F8 (MiCheckPhysicalAddressRange.c)
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
  __int64 v10; // r8
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r12
  char *v13; // rax
  int v14; // esi
  unsigned __int64 v15; // r9
  size_t v16; // r15
  unsigned __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  int SystemRegionType; // eax
  char *v22; // r8
  unsigned __int64 v23; // r10
  size_t v24; // rdx
  char *v25; // rcx
  __int64 v26; // r8
  unsigned __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-31h] BYREF
  ULONG_PTR v31; // [rsp+48h] [rbp-29h]
  __int64 v32; // [rsp+50h] [rbp-21h]
  unsigned __int64 v33; // [rsp+58h] [rbp-19h] BYREF
  __int64 v34; // [rsp+60h] [rbp-11h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-9h]
  _KPROCESS *Process; // [rsp+70h] [rbp-1h]
  ULONG_PTR v37; // [rsp+78h] [rbp+7h]
  _QWORD v38[8]; // [rsp+80h] [rbp+Fh] BYREF
  char *v39; // [rsp+D0h] [rbp+5Fh]
  KIRQL v40; // [rsp+E8h] [rbp+77h] BYREF

  v39 = Buffer;
  v32 = 0LL;
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
  v37 = MiReservePtes((__int64)&qword_140389360, (unsigned int)v12, v10);
  v31 = v37;
  v16 = 4096 - v11;
  v17 = v37;
  v18 = v7 & 1;
  if ( 4096 - v11 > v8 )
    v16 = v8;
  if ( (v7 & 1) != 0 )
  {
    v30 = BaseAddress >> 12;
    v18 = v7 & 1;
  }
  else
  {
    v30 = -1LL;
  }
  if ( v8 )
  {
    while ( 1 )
    {
      v34 = 0LL;
      v33 = 0LL;
      if ( v18 )
        break;
      v19 = MiTranslatePageForCopy(BaseAddress, (char **)&v29, (__int64 *)&v30, &v34, &v40, &v33);
      v14 = v19;
      if ( v19 >= 0 )
      {
        if ( v19 == 273 )
        {
          v14 = 0;
          v24 = v16;
          if ( v16 )
          {
            v25 = &v39[-v11];
            do
            {
              v25[v11] = *((_BYTE *)&v33 + (v11 & 7));
              ++v11;
              --v24;
            }
            while ( v24 );
          }
LABEL_46:
          v32 += v16;
          v8 -= v16;
          v39 += v16;
          BaseAddress += v16;
          ++v30;
          v17 = v31;
          v16 = v8;
          if ( v8 > 0x1000 )
            v16 = 4096LL;
          v11 = 0LL;
          if ( v31 )
          {
            v17 = v31 + 8;
            v31 += 8LL;
          }
          goto LABEL_50;
        }
        v17 = v31;
LABEL_41:
        v26 = v11;
        v27 = v30;
        v14 = MiCopySinglePage(v39, v30, v26, v16, v17, v7);
        if ( v29 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(48 * v27 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v34 )
            MiUnlockProtoPoolPage(v34, 2u);
          LOBYTE(v28) = v40;
          MiUnlockWorkingSetExclusive(v29, v28);
        }
        if ( v14 < 0 )
          goto LABEL_54;
        goto LABEL_46;
      }
      if ( v19 != -1073741608 )
        goto LABEL_54;
      MiGetEffectivePagePriorityThread((__int64)CurrentThread);
      v38[0] = BaseAddress;
      v29 = 1LL;
      v20 = v8;
      if ( v8 > 0x200000 - (BaseAddress & 0x1FFFFF) )
        v20 = 0x200000 - (BaseAddress & 0x1FFFFF);
      v38[1] = v20;
      SystemRegionType = MiGetSystemRegionType(BaseAddress);
      if ( SystemRegionType == (_DWORD)v23 )
      {
        if ( !Process[1].ActiveProcessors.Bitmap[2] || (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        {
          v14 = -1073741819;
          goto LABEL_54;
        }
        v22 = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
        v29 = (__int64)v22;
      }
      if ( BaseAddress >= qword_140389B40 && BaseAddress <= qword_140388958 )
      {
        v14 = -1073741585;
        goto LABEL_54;
      }
      v14 = MiPrefetchVirtualMemory(v23, (__int64)v38, (__int64)v22, v15);
      if ( v14 < 0 )
        goto LABEL_54;
      v17 = v31;
LABEL_50:
      if ( !v8 )
        goto LABEL_54;
      v18 = v7 & 1;
    }
    v29 = 0LL;
    v40 = 17;
    goto LABEL_41;
  }
LABEL_54:
  if ( v37 )
    MiReleasePtes((__int64)&qword_140389360, v37, v12, v15);
  *a5 += v32;
  return v14;
}
