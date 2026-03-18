/*
 * XREFs of MmCopyMemory @ 0x14015B270
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiUnlockSystemVa @ 0x14003FA38 (MiUnlockSystemVa.c)
 *     MiGetEffectivePagePriorityThread @ 0x14005605C (MiGetEffectivePagePriorityThread.c)
 *     MiPrefetchVirtualMemory @ 0x14007F6B0 (MiPrefetchVirtualMemory.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiCopySinglePage @ 0x14015B52C (MiCopySinglePage.c)
 *     MiTranslatePageForCopy @ 0x14015B6C0 (MiTranslatePageForCopy.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwReadVirtualMemory @ 0x1401A7CA0 (ZwReadVirtualMemory.c)
 *     MiCheckPhysicalAddressRange @ 0x1402604F4 (MiCheckPhysicalAddressRange.c)
 */

NTSTATUS __fastcall MmCopyMemory(
        PVOID Buffer,
        char *BaseAddress,
        SIZE_T NumberOfBytesToRead,
        int a4,
        PSIZE_T NumberOfBytesRead)
{
  PSIZE_T v5; // r13
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  __int16 v8; // ax
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r14
  int v12; // edi
  __int64 v13; // r15
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rax
  int SystemRegionType; // eax
  unsigned __int64 SessionVm; // r8
  int v28; // r9d
  unsigned __int64 v29; // r10
  __int64 v30; // rdx
  char *v31; // rcx
  int v32; // [rsp+38h] [rbp-C8h]
  __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  void *v34; // [rsp+48h] [rbp-B8h]
  __int64 v35; // [rsp+50h] [rbp-B0h]
  char v36[8]; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR v39; // [rsp+70h] [rbp-90h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-88h]
  _KPROCESS *Process; // [rsp+80h] [rbp-80h]
  ULONG_PTR v42; // [rsp+88h] [rbp-78h]
  _QWORD v43[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v44[24]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-48h]

  v5 = NumberOfBytesRead;
  v6 = NumberOfBytesToRead;
  v37 = 0LL;
  v7 = (unsigned __int64)BaseAddress;
  *(_DWORD *)v36 = a4;
  v34 = Buffer;
  *NumberOfBytesRead = 0LL;
  if ( !a4 || (a4 & 0xFFFFFFFC) != 0 || ((a4 - 1) & a4) != 0 || KeGetCurrentIrql() > 1u )
    return -1073741582;
  v32 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    if ( (unsigned int)MiCheckPhysicalAddressRange(BaseAddress, NumberOfBytesToRead) )
    {
      v8 = v7;
      v9 = v6 + 4095;
      goto LABEL_10;
    }
    return -1073741800;
  }
  if ( &BaseAddress[NumberOfBytesToRead] <= BaseAddress )
    return -1073741800;
  if ( (unsigned __int64)BaseAddress <= 0x7FFFFFFEFFFFLL )
  {
    if ( (unsigned __int64)&BaseAddress[NumberOfBytesToRead] <= 0x7FFFFFFEFFFFLL )
      return ZwReadVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               BaseAddress,
               Buffer,
               NumberOfBytesToRead,
               NumberOfBytesRead);
    return -1073741800;
  }
  if ( (unsigned __int64)BaseAddress < 0xFFFF800000000000uLL )
    return -1073741800;
  v8 = (__int16)BaseAddress;
  v9 = NumberOfBytesToRead + 4095;
LABEL_10:
  v10 = ((v8 & 0xFFF) + v9) >> 12;
  if ( v10 >= 0x100000000LL )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v11 = v7 & 0xFFF;
  v42 = MiReservePtes((__int64)&qword_1403CC5E0, v10);
  v35 = v42;
  v12 = 0;
  v13 = v6;
  v14 = v42;
  if ( 4096 - v11 <= v6 )
    v13 = 4096 - v11;
  v15 = v32;
  if ( v32 )
    v16 = v7 >> 12;
  else
    v16 = -1LL;
  v33 = v16;
  if ( !v6 )
    goto LABEL_31;
  while ( 1 )
  {
    v39 = 0LL;
    v38 = 0LL;
    if ( v15 )
    {
      v19 = 0LL;
      goto LABEL_20;
    }
    v17 = MiTranslatePageForCopy(v7, v44, &v33, &v39, &v38);
    v12 = v17;
    if ( v17 >= 0 )
    {
      v19 = v45;
      if ( v17 == 273 )
      {
        MiUnlockSystemVa((__int64)v44, v18);
        v12 = 0;
        v30 = v13;
        if ( v13 )
        {
          v31 = (char *)v34 - v11;
          do
          {
            v31[v11] = *((_BYTE *)&v38 + (v11 & 7));
            ++v11;
            --v30;
          }
          while ( v30 );
        }
LABEL_25:
        v37 += v13;
        v6 -= v13;
        v34 = (char *)v34 + v13;
        v7 += v13;
        ++v33;
        v14 = v35;
        v13 = v6;
        if ( v6 > 0x1000 )
          v13 = 4096LL;
        v11 = 0LL;
        if ( v35 )
        {
          v14 = v35 + 8;
          v35 += 8LL;
        }
        goto LABEL_29;
      }
      v14 = v35;
LABEL_20:
      v20 = v33;
      v12 = MiCopySinglePage(v34, v14, v36[0]);
      if ( v19 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(48 * v20 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v39 )
        {
          LOBYTE(v21) = 2;
          MiUnlockProtoPoolPage(v39, v21, v22, v23);
        }
        MiUnlockSystemVa((__int64)v44, v21);
      }
      if ( v12 < 0 )
        goto LABEL_30;
      goto LABEL_25;
    }
    if ( v17 != -1073741608 )
      goto LABEL_30;
    MiGetEffectivePagePriorityThread((__int64)CurrentThread);
    v43[0] = v7;
    v25 = v6;
    if ( v6 > 0x200000 - (v7 & 0x1FFFFF) )
      v25 = 0x200000 - (v7 & 0x1FFFFF);
    v43[1] = v25;
    SystemRegionType = MiGetSystemRegionType(v7);
    if ( SystemRegionType == (_DWORD)v29 )
      break;
LABEL_51:
    if ( v7 >= qword_1403CD100 && v7 <= qword_1403CBB70 )
    {
      v12 = -1073741585;
      goto LABEL_30;
    }
    v12 = MiPrefetchVirtualMemory(v29, (__int64)v43, SessionVm, v28);
    if ( v12 < 0 )
      goto LABEL_30;
    v14 = v35;
LABEL_29:
    if ( !v6 )
      goto LABEL_30;
    v15 = v32;
  }
  if ( Process[1].ActiveProcessors.Bitmap[2] && (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
  {
    SessionVm = MiGetSessionVm();
    goto LABEL_51;
  }
  v12 = -1073741819;
LABEL_30:
  v5 = NumberOfBytesRead;
LABEL_31:
  if ( v42 )
    MiReleasePtes((__int64)&qword_1403CC5E0, v42, (unsigned int)v10);
  *v5 += v37;
  return v12;
}
