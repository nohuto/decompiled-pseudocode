/*
 * XREFs of PopPolicyWorkerAction @ 0x1406FD480
 * Callers:
 *     PopPolicyWorkerThread @ 0x1400B0E10 (PopPolicyWorkerThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     PopGetPolicyWorker @ 0x1400B11B4 (PopGetPolicyWorker.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PopSetPowerActionState @ 0x1402422E8 (PopSetPowerActionState.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopCompleteAction @ 0x1406FCAA8 (PopCompleteAction.c)
 *     PopIssueActionRequest @ 0x1406FD0C4 (PopIssueActionRequest.c)
 */

__int64 PopPolicyWorkerAction()
{
  char v0; // si
  __int64 v1; // r14
  SYSTEM_POWER_STATE v2; // edi
  int v3; // ebx
  int v4; // ebp
  LONG v5; // edi
  int v6; // ecx
  __int64 *i; // rbx
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  LONG v10; // [rsp+38h] [rbp-30h]
  __int64 *v11; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+4Ch] [rbp-1Ch]

  v0 = 0;
  PopAcquirePolicyLock();
  if ( byte_1403657E1 == 1 )
  {
    v1 = (int)qword_1403657E4;
    v2 = HIDWORD(qword_1403657E4);
    v3 = dword_1403657EC;
    PopSetPowerActionState(2);
    v4 = dword_1403657F4;
    v5 = PopIssueActionRequest(0, (POWER_ACTION)v1, v2, v3);
    v0 = 1;
    if ( (PopAction & 2) != 0 )
    {
      if ( HIDWORD(qword_1403657E4) == 5 )
        v4 = 6;
      dword_1403657F4 = v4;
      dword_1403657EC = dword_1403657EC & 0x7FFFFFDC | 0x80000020;
      PopAction &= ~2u;
      PopSetPowerActionState(1);
      v6 = 2;
    }
    else
    {
      if ( (xmmword_140401150 & 0x8000) != 0 )
      {
        v13 = 0;
        v11 = &v9;
        v9 = v1;
        v10 = v5;
        v12 = 16;
        EtwTraceKernelEvent((__int64)&v11, 1u, 0x80008000, 0x1223u, 0x401802u);
      }
      dword_1403657F0 = v5;
      PopSetPowerActionState(0);
      for ( i = (__int64 *)PopActionWaiters; i != &PopActionWaiters; i = (__int64 *)*i )
        PopCompleteAction(i[2], v5);
      v6 = 1;
    }
    PopGetPolicyWorker(v6);
  }
  PopReleasePolicyLock();
  if ( v0 && PoPdcCallbacks )
    PoPdcCallbacks();
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
