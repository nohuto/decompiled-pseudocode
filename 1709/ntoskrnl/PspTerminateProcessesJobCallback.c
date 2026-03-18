/*
 * XREFs of PspTerminateProcessesJobCallback @ 0x14050BBC0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     PsIsServerSilo @ 0x1400D4250 (PsIsServerSilo.c)
 *     PspGetNextJobProcess @ 0x14050CEAC (PspGetNextJobProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x14050E398 (PspRemoveProcessFromJobChain.c)
 *     PspCompleteServerSiloShutdown @ 0x140714C58 (PspCompleteServerSiloShutdown.c)
 *     PspMarkServerSiloAsTerminating @ 0x14071980C (PspMarkServerSiloAsTerminating.c)
 */

__int64 __fastcall PspTerminateProcessesJobCallback(__int64 a1, __int64 a2)
{
  int *v4; // rdx
  __int64 v5; // rcx
  char v6; // si
  struct _KTHREAD *CurrentThread; // r14
  ULONG_PTR i; // r9
  ULONG_PTR NextJobProcess; // rax
  ULONG_PTR v10; // rbp
  int v12; // ebp
  _DWORD *ServerSiloGlobals; // r14
  char v14[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( PsIsServerSilo(a1) )
  {
    v12 = *v4;
    ServerSiloGlobals = PsGetServerSiloGlobals(v5);
    v6 = PspMarkServerSiloAsTerminating(a1);
    if ( v6 )
      ServerSiloGlobals[273] = v12;
  }
  else
  {
    v6 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  for ( i = 0LL; ; i = v10 )
  {
    NextJobProcess = PspGetNextJobProcess(a1, CurrentThread, v14, i);
    v10 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    if ( (*(_DWORD *)(NextJobProcess + 768) & 0x800) == 0 )
      *(_BYTE *)(a2 + 4) |= 2u;
    PspRemoveProcessFromJobChain(NextJobProcess);
  }
  if ( v6 )
    PspCompleteServerSiloShutdown(a1);
  return 0LL;
}
