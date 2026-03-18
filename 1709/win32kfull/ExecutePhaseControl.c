/*
 * XREFs of ExecutePhaseControl @ 0x1C02C90A8
 * Callers:
 *     itrp_Execute @ 0x1C02CB118 (itrp_Execute.c)
 *     itrp_IUP @ 0x1C02CDBA0 (itrp_IUP.c)
 *     itrp_SHC @ 0x1C02D2810 (itrp_SHC.c)
 * Callees:
 *     PhaseShift @ 0x1C02C975C (PhaseShift.c)
 */

__int64 __fastcall ExecutePhaseControl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax
  int v6; // r8d
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rdx
  _BYTE *v10; // rcx
  unsigned __int16 v11; // bp

  v2 = 0;
  result = *(_QWORD *)(a2 + 64);
  v6 = 0;
  v7 = *(__int16 *)(result + 2LL * (*(__int16 *)(a2 + 80) - 1)) + 5;
  if ( v7 > 0 )
  {
    v8 = *(_QWORD *)(a2 + 104);
    v9 = 0LL;
    v10 = (_BYTE *)(v8 + 6);
    do
    {
      if ( (*v10 & 1) != 0 )
        break;
      ++v6;
      ++v9;
      v10 += 12;
    }
    while ( v9 < v7 );
  }
  v11 = v6 < v7;
  if ( v7 > 0 )
  {
    do
      result = PhaseShift(a1, a2, v11, (unsigned int)v2++);
    while ( v2 < v7 );
  }
  *(_DWORD *)(a2 + 96) = 1;
  return result;
}
