/*
 * XREFs of ?GetPropertyValue@CPropertyBag@@MEAAJIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEBX@Z @ 0x1800A6810
 * Callers:
 *     ?GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800A5300 (-GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyBag::GetPropertyValue(
        CPropertyBag *this,
        int a2,
        enum DCOMPOSITION_EXPRESSION_TYPE *a3,
        const void **a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // r10
  _DWORD *v9; // rax
  __int64 result; // rax
  int Buffer; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h]

  Buffer = a2;
  v12 = 0LL;
  v7 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 64), &Buffer);
  v8 = v7;
  if ( v7 )
  {
    v9 = (_DWORD *)v7[1];
    if ( a2 == v9[2] )
    {
      if ( *v9 != 18 )
      {
        switch ( *v9 )
        {
          case 0x11:
          case 0x23:
          case 0x34:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x68:
          case 0x109:
            break;
          default:
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0xA8u);
            return 2147942487LL;
        }
      }
      *a4 = v9 + 3;
      result = 0LL;
      *(_DWORD *)a3 = *(_DWORD *)v8[1];
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x6Cu);
      return 2147942487LL;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070490, 0x67u);
    return 2147943568LL;
  }
  return result;
}
