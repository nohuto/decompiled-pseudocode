/*
 * XREFs of ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x1800333D8
 * Callers:
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x1800327E0 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x18016A9B4 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpression::EnsureCacheBounds(CExpression *this, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v3; // r9d
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  int v8; // r9d
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v3 = -1;
  if ( a3 > 0xFFFFFFFF )
  {
    v6 = -2147024362;
    v9 = 499;
LABEL_10:
    v8 = v6;
LABEL_12:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v9);
    return v6;
  }
  v5 = a3 + a2;
  if ( (unsigned int)a3 + a2 >= a2 )
    v3 = a3 + a2;
  v6 = v5 < a2 ? 0x80070216 : 0;
  if ( v5 < a2 )
  {
    v9 = 500;
    v8 = v5 < a2 ? 0x80070216 : 0;
    goto LABEL_12;
  }
  if ( v3 > *((_DWORD *)this + 66) )
  {
    v6 = -2147483637;
    v9 = 505;
    goto LABEL_10;
  }
  return 0;
}
