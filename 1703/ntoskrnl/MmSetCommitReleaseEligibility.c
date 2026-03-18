/*
 * XREFs of MmSetCommitReleaseEligibility @ 0x14020CA28
 * Callers:
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall MmSetCommitReleaseEligibility(__int64 a1, int a2)
{
  int v2; // ebp
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  int v7; // ecx
  unsigned int v8; // ebx
  char v9; // cl
  $5BC46E0569261879018906DEC3127961 v11; // [rsp+28h] [rbp-50h] BYREF

  v2 = 0;
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)a1 )
  {
    v2 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)&v11);
  }
  SharedVm = MiGetSharedVm(a1 + 1280);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v7 = *(_DWORD *)(a1 + 1472);
  if ( (*(_DWORD *)(a1 + 772) & 0x20) != 0 )
  {
    v8 = -1073741558;
  }
  else
  {
    if ( a2 )
      v9 = HIBYTE(v7) & 0x3F | 0x40;
    else
      v9 = HIBYTE(v7) & 0x3F;
    *(_BYTE *)(a1 + 1475) = v9;
    v8 = 0;
  }
  MiUnlockWorkingSetExclusive(a1 + 1280, v6);
  if ( v2 )
    KiUnstackDetachProcess(&v11, 0LL);
  return v8;
}
