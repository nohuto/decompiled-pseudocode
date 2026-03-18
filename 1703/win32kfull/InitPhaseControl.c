/*
 * XREFs of InitPhaseControl @ 0x1C02CF484
 * Callers:
 *     itrp_Execute @ 0x1C02D1328 (itrp_Execute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitPhaseControl(__int64 a1)
{
  int v1; // r10d
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // rax

  v1 = 0;
  result = *(_QWORD *)(a1 + 64);
  if ( *(__int16 *)(result + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 5 > 0 )
  {
    v3 = 0LL;
    do
    {
      v4 = *(_QWORD *)(a1 + 104);
      ++v1;
      *(_WORD *)(v3 + v4 + 4) = -1;
      *(_WORD *)(v3 + v4 + 2) = -1;
      *(_WORD *)(v3 + v4) = -1;
      *(_WORD *)(v3 + v4 + 6) = 0;
      *(_DWORD *)(v3 + v4 + 8) = 0;
      v3 += 12LL;
      result = *(_QWORD *)(a1 + 64);
    }
    while ( v1 < *(__int16 *)(result + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 5 );
  }
  *(_DWORD *)(a1 + 96) = 0;
  return result;
}
