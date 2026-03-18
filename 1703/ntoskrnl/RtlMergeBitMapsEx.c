/*
 * XREFs of RtlMergeBitMapsEx @ 0x14023D5C0
 * Callers:
 *     MiMergePageNodes @ 0x14021E7A8 (MiMergePageNodes.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x14068F920 (IopLiveDumpWriteDumpFileWithHvPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlMergeBitMapsEx(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v3; // r8
  unsigned __int64 v5; // r9
  __int64 v6; // r8
  unsigned __int64 v7; // rdx

  result = *a2;
  v3 = a2;
  if ( *a1 < *a2 )
    v3 = a1;
  v5 = *v3;
  if ( *v3 )
  {
    v6 = 0LL;
    do
    {
      v7 = a1[1];
      result = a2[1];
      if ( v5 < 0x40 )
      {
        *(_QWORD *)(v7 + v6) |= *(_QWORD *)(result + v6) & ((1 << v5) - 1);
        v5 = 0LL;
      }
      else
      {
        v5 -= 64LL;
        *(_QWORD *)(v7 + v6) |= *(_QWORD *)(result + v6);
        v6 += 8LL;
      }
    }
    while ( v5 );
  }
  return result;
}
