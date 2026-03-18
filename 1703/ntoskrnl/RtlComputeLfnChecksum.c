/*
 * XREFs of RtlComputeLfnChecksum @ 0x140437A38
 * Callers:
 *     RtlGenerate8dot3Name @ 0x140437580 (RtlGenerate8dot3Name.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlComputeLfnChecksum(unsigned __int16 *a1)
{
  unsigned __int16 v1; // r8
  _WORD *v2; // rdx
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r10

  v1 = 0;
  v2 = (_WORD *)*((_QWORD *)a1 + 1);
  v3 = 0LL;
  v4 = (unsigned __int64)*a1 >> 1;
  v5 = (2 * v4 + 1) >> 1;
  if ( v2 > &v2[v4] )
    v5 = 0LL;
  if ( v5 )
  {
    do
    {
      ++v3;
      v1 = *v2++ + 37 * v1;
    }
    while ( v3 < v5 );
  }
  return (unsigned __int16)((int)abs32(314159269 * v1) % 1000000007);
}
