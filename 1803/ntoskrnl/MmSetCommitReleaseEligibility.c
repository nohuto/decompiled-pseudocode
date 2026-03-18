/*
 * XREFs of MmSetCommitReleaseEligibility @ 0x140251DD0
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall MmSetCommitReleaseEligibility(__int64 a1, int a2)
{
  int v2; // ebp
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  unsigned int v7; // ebx
  int v8; // edx
  char v9; // dl
  _BYTE v11[48]; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)a1 )
  {
    v2 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v11);
  }
  SharedVm = MiGetSharedVm(a1 + 1280);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  if ( (*(_DWORD *)(a1 + 772) & 0x20) != 0 )
  {
    v7 = -1073741558;
  }
  else
  {
    v8 = HIBYTE(*(_DWORD *)(a1 + 1464));
    if ( a2 )
      v9 = v8 & 0x9F | 0x20;
    else
      v9 = v8 & 0x9F;
    *(_BYTE *)(a1 + 1467) = v9;
    v7 = 0;
  }
  MiUnlockWorkingSetExclusive(a1 + 1280, v6);
  if ( v2 )
    KiUnstackDetachProcess((__int64)v11, 0LL);
  return v7;
}
