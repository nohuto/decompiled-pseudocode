/*
 * XREFs of ComputeUnicodeNameLength @ 0x1405664F0
 * Callers:
 *     RtlInsertUnicodePrefix @ 0x140566110 (RtlInsertUnicodePrefix.c)
 *     RtlFindUnicodePrefix @ 0x140566270 (RtlFindUnicodePrefix.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeUnicodeNameLength(unsigned __int16 *a1)
{
  int v1; // eax
  unsigned int v2; // r8d
  unsigned int v3; // eax
  __int16 *v4; // r9
  __int64 v5; // r10
  __int16 v6; // dx
  unsigned int v7; // ecx

  v1 = *a1 >> 1;
  if ( !v1 )
    return 1LL;
  v2 = 1;
  v3 = v1 - 1;
  if ( v3 )
  {
    v4 = (__int16 *)*((_QWORD *)a1 + 1);
    v5 = v3;
    do
    {
      v6 = *v4;
      v7 = v2 + 1;
      ++v4;
      if ( v6 != 92 )
        v7 = v2;
      v2 = v7;
      --v5;
    }
    while ( v5 );
  }
  return v2;
}
