/*
 * XREFs of VerifierIofCallDriver @ 0x1407706E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VerifierIofCallDriver(void *a1, __int64 a2)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( pXdvIofCallDriver )
    return pXdvIofCallDriver(a1, a2, retaddr, IofCallDriverSpecifyReturn);
  else
    return IofCallDriverSpecifyReturn(a1);
}
