/*
 * XREFs of VerifierExAcquireResourceSharedLite @ 0x14077D350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfDeadlockAcquireResource @ 0x140778A28 (VfDeadlockAcquireResource.c)
 *     ViResourceAcquireSanityChecks @ 0x14077DC74 (ViResourceAcquireSanityChecks.c)
 */

char __fastcall VerifierExAcquireResourceSharedLite(ULONG_PTR a1, char a2)
{
  __int64 v4; // rdx
  char v5; // al
  unsigned int v6; // r9d
  char v7; // bl
  void *retaddr; // [rsp+38h] [rbp+0h]

  ViResourceAcquireSanityChecks(a1);
  LOBYTE(v4) = a2;
  v5 = ((__int64 (__fastcall *)(ULONG_PTR, __int64))pXdvExAcquireResourceSharedLite)(a1, v4);
  v6 = 0;
  v7 = v5;
  if ( v5 )
  {
    LOBYTE(v6) = a2 == 0;
    VfDeadlockAcquireResource(a1, 8u, (__int64)KeGetCurrentThread(), v6, retaddr);
  }
  return v7;
}
