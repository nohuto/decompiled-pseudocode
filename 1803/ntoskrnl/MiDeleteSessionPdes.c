/*
 * XREFs of MiDeleteSessionPdes @ 0x140155518
 * Callers:
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiDeletePagablePteRange @ 0x1400726A0 (MiDeletePagablePteRange.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     MiReturnSystemCharges @ 0x1401377CC (MiReturnSystemCharges.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

void __fastcall MiDeleteSessionPdes(__int64 a1, __int64 a2)
{
  unsigned __int64 SessionVm; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7[4]; // [rsp+40h] [rbp-38h] BYREF

  memset(v7, 0, sizeof(v7));
  SessionVm = MiGetSessionVm();
  v5 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
  MiDeletePagablePteRange(SessionVm, 0x11u, a1 << 25 >> 16 << 25 >> 16, a2 << 25 >> 16 << 25 >> 16, 1, 0, (__int64)v7);
  v6 = v7[0];
  MiReturnCommit(v5, v7[0]);
  MiReturnSystemCharges(v5, v6, 1);
}
