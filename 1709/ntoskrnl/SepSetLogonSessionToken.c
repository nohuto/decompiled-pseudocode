/*
 * XREFs of SepSetLogonSessionToken @ 0x14045A9BC
 * Callers:
 *     SepFilterToken @ 0x14045B120 (SepFilterToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     SepDuplicateToken @ 0x1404C6BB0 (SepDuplicateToken.c)
 *     SepStopReferencingLogonSession @ 0x1405D9B60 (SepStopReferencingLogonSession.c)
 */

__int64 __fastcall SepSetLogonSessionToken(__int64 a1)
{
  __int64 result; // rax
  PVOID v3; // rdi
  PVOID v4; // rcx
  int v5; // [rsp+40h] [rbp-38h] BYREF
  __int64 v6; // [rsp+48h] [rbp-30h]
  __int64 v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  __int128 v9; // [rsp+60h] [rbp-18h]
  PVOID Object; // [rsp+80h] [rbp+8h] BYREF

  result = *(_QWORD *)(a1 + 216);
  if ( !*(_QWORD *)(result + 48) )
  {
    result = *(unsigned int *)(a1 + 200);
    if ( (result & 0x10) == 0 && (result & 8) == 0 )
    {
      Object = 0LL;
      v6 = 0LL;
      v8 = 0;
      v7 = 0LL;
      v5 = 48;
      v9 = 0LL;
      result = SepDuplicateToken(a1, (unsigned int)&v5, 0, 1, 0, 0, 0, (__int64)&Object);
      if ( (int)result >= 0 )
      {
        v3 = Object;
        if ( (int)SepStopReferencingLogonSession(Object) < 0 )
        {
          v4 = v3;
          return ObfDereferenceObject(v4);
        }
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(*(_QWORD *)(a1 + 216) + 48LL),
                   (signed __int64)v3,
                   0LL);
        if ( result )
        {
          v4 = Object;
          return ObfDereferenceObject(v4);
        }
      }
    }
  }
  return result;
}
