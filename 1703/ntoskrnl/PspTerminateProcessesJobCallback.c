/*
 * XREFs of PspTerminateProcessesJobCallback @ 0x14054D280
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     PspIsServerSilo @ 0x14011E800 (PspIsServerSilo.c)
 *     PspRemoveProcessFromJobChain @ 0x14054727C (PspRemoveProcessFromJobChain.c)
 *     PspGetNextJobProcess @ 0x14054D334 (PspGetNextJobProcess.c)
 *     PspCompleteServerSiloShutdown @ 0x1406DE7E4 (PspCompleteServerSiloShutdown.c)
 *     PspMarkServerSiloAsTerminating @ 0x1406E3238 (PspMarkServerSiloAsTerminating.c)
 */

__int64 __fastcall PspTerminateProcessesJobCallback(__int64 a1, __int64 a2)
{
  int *v4; // rdx
  __int64 v5; // rcx
  char v6; // si
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v8; // ebp
  ULONG_PTR i; // r9
  ULONG_PTR NextJobProcess; // rax
  ULONG_PTR v11; // r14
  int v13; // ebp
  _DWORD *ServerSiloGlobals; // r14
  char v15[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( PspIsServerSilo(a1) )
  {
    v13 = *v4;
    ServerSiloGlobals = PsGetServerSiloGlobals(v5);
    v6 = PspMarkServerSiloAsTerminating(a1);
    if ( v6 )
      ServerSiloGlobals[265] = v13;
  }
  else
  {
    v6 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  v8 = (8 * (*(_BYTE *)(a2 + 4) & 1)) | 6;
  for ( i = 0LL; ; i = v11 )
  {
    NextJobProcess = PspGetNextJobProcess(a1, CurrentThread, v15, i);
    v11 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    if ( (*(_DWORD *)(NextJobProcess + 768) & 0x800) == 0 )
      *(_BYTE *)(a2 + 4) |= 2u;
    PspRemoveProcessFromJobChain(NextJobProcess, 0LL, v8, *(_DWORD *)a2);
  }
  if ( v6 )
    PspCompleteServerSiloShutdown(a1);
  return 0LL;
}
