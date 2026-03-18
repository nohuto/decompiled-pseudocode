/*
 * XREFs of CmpRefreshParent @ 0x14069FEA0
 * Callers:
 *     <none>
 * Callees:
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14047F63C (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404E6360 (CmpDereferenceKeyControlBlockUnsafe.c)
 */

__int64 __fastcall CmpRefreshParent(__int64 a1, __int64 a2, volatile signed __int32 **a3)
{
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rax

  v3 = *a3;
  v4 = a3[1];
  if ( *(volatile signed __int32 **)(a1 + 64) == *a3 )
  {
    ++*(_QWORD *)(a1 + 296);
    *(_QWORD *)(a1 + 64) = v4;
    if ( *v3 )
    {
      CmpReferenceKeyControlBlockUnsafe(v4);
      CmpDereferenceKeyControlBlockUnsafe(v3);
    }
  }
  return 0LL;
}
