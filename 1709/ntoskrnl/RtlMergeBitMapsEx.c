/*
 * XREFs of RtlMergeBitMapsEx @ 0x140253290
 * Callers:
 *     MiMergePageNodes @ 0x140237FA0 (MiMergePageNodes.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1406BB5EC (IopLiveDumpWriteDumpFileWithHvPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlMergeBitMapsEx(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rdx

  result = *a1;
  v4 = *a2;
  if ( *a1 < *a2 )
    v4 = *a1;
  if ( v4 )
  {
    v5 = 0LL;
    do
    {
      v6 = a1[1];
      result = a2[1];
      if ( v4 < 0x40 )
      {
        *(_QWORD *)(v5 + v6) |= *(_QWORD *)(v5 + result) & ((1 << v4) - 1);
        v4 = 0LL;
      }
      else
      {
        v4 -= 64LL;
        *(_QWORD *)(v5 + v6) |= *(_QWORD *)(v5 + result);
        v5 += 8LL;
      }
    }
    while ( v4 );
  }
  return result;
}
