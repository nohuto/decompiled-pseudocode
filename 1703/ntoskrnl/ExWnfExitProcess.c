/*
 * XREFs of ExWnfExitProcess @ 0x140498BC4
 * Callers:
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 * Callees:
 *     ExpWnfDeleteProcessContext @ 0x140438158 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteScopeById @ 0x1404997D0 (ExpWnfDeleteScopeById.c)
 */

void __fastcall ExWnfExitProcess(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = *(unsigned __int64 **)(v5 + 1720);
  if ( v4 )
    ExpWnfDeleteProcessContext(v4, a2);
  if ( a2 )
    ExpWnfDeleteScopeById(3LL, &v5);
  KeLeaveCriticalRegion();
}
