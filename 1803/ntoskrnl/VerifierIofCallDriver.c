/*
 * XREFs of VerifierIofCallDriver @ 0x14081F610
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriverSpecifyReturn @ 0x140167E50 (IofCallDriverSpecifyReturn.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VerifierIofCallDriver(void *a1, __int64 a2)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( pXdvIofCallDriver )
    return pXdvIofCallDriver(a1, a2, retaddr, IofCallDriverSpecifyReturn);
  else
    return IofCallDriverSpecifyReturn(a1);
}
