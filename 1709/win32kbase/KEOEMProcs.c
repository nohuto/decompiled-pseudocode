/*
 * XREFs of KEOEMProcs @ 0x1C001204C
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00103E0 (xxxProcessKeyEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KEOEMProcs(struct tagKE *a1)
{
  __int64 v1; // rbx
  __int64 (__fastcall **v2)(struct tagKE *); // rax

  v1 = 0LL;
  v2 = aKEProcOEM;
  while ( (unsigned int)(*v2)(a1) )
  {
    v2 = &aKEProcOEM[++v1];
    if ( !*v2 )
      return 1LL;
  }
  return 0LL;
}
