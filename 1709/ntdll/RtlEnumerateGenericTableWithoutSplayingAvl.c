/*
 * XREFs of RtlEnumerateGenericTableWithoutSplayingAvl @ 0x180070080
 * Callers:
 *     <none>
 * Callees:
 *     RealSuccessor @ 0x1800700D8 (RealSuccessor.c)
 */

__int64 __fastcall RtlEnumerateGenericTableWithoutSplayingAvl(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 *v3; // r8
  __int64 i; // rcx

  if ( !*(_DWORD *)(a1 + 44) )
    return 0LL;
  if ( *a2 )
  {
    v2 = RealSuccessor(*a2, a2, a2);
    if ( v2 )
      *v3 = v2;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 16);
    for ( i = *(_QWORD *)(v2 + 8); i; i = *(_QWORD *)(i + 8) )
      v2 = i;
    *a2 = v2;
  }
  return (v2 + 32) & -(__int64)(v2 != 0);
}
