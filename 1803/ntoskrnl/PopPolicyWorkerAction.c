/*
 * XREFs of PopPolicyWorkerAction @ 0x1405EBDD0
 * Callers:
 *     PopPolicyWorkerThread @ 0x140073DA0 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x140074BCC (PopGetPolicyWorker.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     PopSetPowerActionState @ 0x14014E860 (PopSetPowerActionState.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopCompleteAction @ 0x1405EBB9C (PopCompleteAction.c)
 *     PopIssueActionRequest @ 0x1405EBF50 (PopIssueActionRequest.c)
 */

__int64 PopPolicyWorkerAction()
{
  char v0; // si
  __int64 v1; // r14
  unsigned int v2; // edi
  unsigned int v3; // ebx
  int v4; // ebp
  LONG v5; // edi
  __int64 *i; // rbx
  int v7; // ecx
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  LONG v10; // [rsp+38h] [rbp-30h]
  __int64 *v11; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+4Ch] [rbp-1Ch]

  v0 = 0;
  PopAcquirePolicyLock();
  if ( byte_1403AA061 == 1 )
  {
    v1 = (int)qword_1403AA064;
    v2 = HIDWORD(qword_1403AA064);
    v3 = dword_1403AA06C;
    PopSetPowerActionState(2);
    v4 = dword_1403AA074;
    v5 = PopIssueActionRequest(0LL, (unsigned int)v1, v2, v3);
    v0 = 1;
    if ( (PopAction & 2) != 0 )
    {
      if ( HIDWORD(qword_1403AA064) == 5 )
        v4 = 6;
      dword_1403AA074 = v4;
      dword_1403AA06C = dword_1403AA06C & 0x7FFFFFDC | 0x80000020;
      PopAction &= ~2u;
      PopSetPowerActionState(1);
      v7 = 2;
    }
    else
    {
      if ( (xmmword_14044C2D0 & 0x8000) != 0 )
      {
        v13 = 0;
        v11 = &v9;
        v9 = v1;
        v10 = v5;
        v12 = 16;
        EtwTraceKernelEvent((int)&v11, 1, 0x80008000, 4643, 4200450);
      }
      dword_1403AA070 = v5;
      PopSetPowerActionState(0);
      for ( i = (__int64 *)PopActionWaiters; i != &PopActionWaiters; i = (__int64 *)*i )
        PopCompleteAction(i[2], v5);
      v7 = 1;
    }
    PopGetPolicyWorker(v7);
  }
  PopReleasePolicyLock();
  if ( v0 && PoPdcCallbacks )
    PoPdcCallbacks();
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
