/*
 * XREFs of RtlpComputeEpilogueOffset @ 0x140177544
 * Callers:
 *     FsRtlTruncateSmallMcb @ 0x140261EA0 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     sub_140283780 @ 0x140283780 (sub_140283780.c)
 */

__int64 __fastcall RtlpComputeEpilogueOffset(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rbx
  unsigned int i; // eax
  int v5; // r9d
  _QWORD *v6; // rax

  v3 = a2;
  for ( i = 0; i < 0x19; ++i )
    *a2++ ^= a3;
  *(_DWORD *)v3 ^= a3;
  v5 = *((_DWORD *)v3 + 49);
  if ( v5 )
  {
    v6 = &a2[v5 - 1];
    do
    {
      *v6 ^= a3;
      a3 = __ROR8__(a3, v5);
      --v6;
      --v5;
    }
    while ( v5 );
  }
  sub_140283780(a1, v3, 0LL, 0LL);
  return ((__int64 (__fastcall *)(_QWORD *, __int64))v3[34])(v3 + 179, 1LL);
}
