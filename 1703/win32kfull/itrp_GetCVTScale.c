/*
 * XREFs of itrp_GetCVTScale @ 0x1C02D2650
 * Callers:
 *     InvokeGetCVTEntry @ 0x1C02CF540 (InvokeGetCVTEntry.c)
 *     itrp_ChangeCvtSlow @ 0x1C02D08C4 (itrp_ChangeCvtSlow.c)
 *     itrp_CheckSingleWidth @ 0x1C02D091C (itrp_CheckSingleWidth.c)
 *     itrp_DeltaEngine @ 0x1C02D0D3C (itrp_DeltaEngine.c)
 *     itrp_MPPEM @ 0x1C02D66E0 (itrp_MPPEM.c)
 *     itrp_WCVT @ 0x1C02DAEF0 (itrp_WCVT.c)
 * Callees:
 *     FixMul @ 0x1C02BD1FC (FixMul.c)
 *     FracSqrt @ 0x1C02BD34C (FracSqrt.c)
 */

__int64 itrp_GetCVTScale()
{
  __int64 result; // rax
  int v1; // ebx
  int fixed; // eax
  int v3; // r10d
  int v4; // r11d
  int v5; // eax
  int v6; // eax
  int v7; // r10d
  int v8; // r10d

  if ( !HIWORD(dword_1C032C9D8) )
    return *(unsigned int *)(qword_1C032CA00 + 312);
  if ( !(_WORD)dword_1C032C9D8 )
    return *(unsigned int *)(qword_1C032CA00 + 316);
  result = (unsigned int)dword_1C032CA48;
  if ( !dword_1C032CA48 )
  {
    v1 = SHIWORD(dword_1C032C9D8);
    fixed = FixMul(*(_DWORD *)(qword_1C032CA00 + 312), *(_DWORD *)(qword_1C032CA00 + 312));
    FixMul(4 * (__int16)((v3 * v3 + 0x2000) >> 14), fixed);
    v5 = FixMul(v4, v4);
    v6 = FixMul(4 * (__int16)((v1 * v1 + 0x2000) >> 14), v5);
    v8 = v6 + v7;
    result = 0x10000LL;
    if ( v8 <= 0x10000 )
    {
      result = (unsigned int)((int)(FracSqrt(v8 << 14) + 0x2000) >> 14);
      dword_1C032CA48 = result;
    }
  }
  return result;
}
