/*
 * XREFs of RtlEnumerateGenericTableWithoutSplayingAvl @ 0x180072F00
 * Callers:
 *     RtlEnumerateGenericTableAvl @ 0x180072EE0 (RtlEnumerateGenericTableAvl.c)
 * Callees:
 *     sub_180072F58 @ 0x180072F58 (sub_180072F58.c)
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
    v2 = sub_180072F58(*a2, a2, a2);
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
