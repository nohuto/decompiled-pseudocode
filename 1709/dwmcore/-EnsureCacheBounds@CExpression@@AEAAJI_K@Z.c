/*
 * XREFs of ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x1800A7E58
 * Callers:
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x1800A7600 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x180162748 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpression::EnsureCacheBounds(CExpression *this, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // eax
  DWORD v5; // ebx

  v3 = -1;
  if ( a3 > 0xFFFFFFFF )
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070216, 0x293u);
  }
  else
  {
    v4 = a3 + a2;
    if ( (unsigned int)a3 + a2 >= a2 )
      v3 = a3 + a2;
    v5 = v4 < a2 ? 0x80070216 : 0;
    if ( v4 < a2 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x294u);
    }
    else if ( v3 > *((_DWORD *)this + 78) )
    {
      v5 = -2147483637;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8000000B, 0x299u);
    }
    else
    {
      return 0;
    }
  }
  return v5;
}
