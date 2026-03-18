/*
 * XREFs of MmSetCommitReleaseEligibility @ 0x1402139D4
 * Callers:
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall MmSetCommitReleaseEligibility(__int64 a1, int a2)
{
  int v2; // ebp
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  int v8; // ecx
  unsigned int v9; // ebx
  char v10; // cl
  $709EDFC2F9E0D4565D6AA3C4377BC643 v12; // [rsp+28h] [rbp-50h] BYREF

  v2 = 0;
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)a1 )
  {
    v2 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)&v12);
  }
  SharedVm = MiGetSharedVm(a1 + 1280);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v7 = *(unsigned int *)(a1 + 772);
  v8 = *(_DWORD *)(a1 + 1472);
  if ( (v7 & 0x20) != 0 )
  {
    v9 = -1073741558;
  }
  else
  {
    if ( a2 )
      v10 = HIBYTE(v8) & 0x9F | 0x20;
    else
      v10 = HIBYTE(v8) & 0x9F;
    *(_BYTE *)(a1 + 1475) = v10;
    v9 = 0;
  }
  LOBYTE(v7) = v6;
  MiUnlockWorkingSetExclusive(a1 + 1280, v7);
  if ( v2 )
    KiUnstackDetachProcess(&v12, 0LL);
  return v9;
}
