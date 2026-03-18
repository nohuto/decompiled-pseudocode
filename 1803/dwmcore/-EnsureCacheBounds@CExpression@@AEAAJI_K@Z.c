/*
 * XREFs of ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x180054548
 * Callers:
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x1800535D8 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x180053660 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpression::EnsureCacheBounds(CExpression *this, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v3; // r9d
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // eax

  v3 = -1;
  v4 = -1;
  if ( a3 <= 0xFFFFFFFF )
    v4 = a3;
  v5 = a3 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( a3 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x2B6u);
  }
  else
  {
    v6 = a2 + v4;
    if ( v6 >= a2 )
      v3 = v6;
    v5 = v6 < a2 ? 0x80070216 : 0;
    if ( v6 < a2 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x2B7u);
    }
    else if ( v3 > *((_DWORD *)this + 82) )
    {
      v5 = -2147483637;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147483637, 0x2BCu);
    }
    else
    {
      return 0;
    }
  }
  return v5;
}
