/*
 * XREFs of ?GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180031300
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D960 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z @ 0x18002F0B8 (-TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180030084 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800339C0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?GetPropertyValue@CPropertyBag@@MEAAJIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEBX@Z @ 0x180032100 (-GetPropertyValue@CPropertyBag@@MEAAJIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPropertyBagBase::GetProperty(CPropertyBagBase *this, __int64 a2, struct CExpressionValue *a3)
{
  __int64 (__fastcall *v4)(CPropertyBag *__hidden, unsigned int, enum DCOMPOSITION_EXPRESSION_TYPE *, const void **); // rax
  int PropertyValue; // eax
  unsigned int v6; // edi
  __int64 result; // rax
  _QWORD *v8; // rax
  __int64 v9; // xmm1_8
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int128 *v12; // rax
  __int128 v13; // xmm0
  __int64 *v14; // rax
  __int64 v15; // xmm0_8
  _DWORD *v16; // rax
  __int128 *v17; // rax
  __int128 v18; // xmm0
  __int128 *v19; // rax
  __int128 v20; // xmm0
  int v21; // [rsp+50h] [rbp+18h] BYREF
  void *v22; // [rsp+58h] [rbp+20h] BYREF

  if ( !a3 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x146u);
    return v6;
  }
  v4 = *(__int64 (__fastcall **)(CPropertyBag *__hidden, unsigned int, enum DCOMPOSITION_EXPRESSION_TYPE *, const void **))(*(_QWORD *)this + 136LL);
  if ( v4 == CPropertyBag::GetPropertyValue )
    PropertyValue = CPropertyBag::GetPropertyValue(
                      this,
                      a2,
                      (enum DCOMPOSITION_EXPRESSION_TYPE *)&v21,
                      (const void **)&v22);
  else
    PropertyValue = v4(this, a2, (enum DCOMPOSITION_EXPRESSION_TYPE *)&v21, (const void **)&v22);
  v6 = PropertyValue;
  if ( PropertyValue < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PropertyValue, 0x150u);
    return v6;
  }
  if ( v21 == 18 )
  {
    *(_DWORD *)a3 = *(_DWORD *)v22;
    *((_DWORD *)a3 + 16) = 18;
    *((_BYTE *)a3 + 68) = 1;
    return v6;
  }
  switch ( v21 )
  {
    case 17:
      *(_BYTE *)a3 = *(_BYTE *)v22;
      *((_DWORD *)a3 + 16) = 17;
      *((_BYTE *)a3 + 68) = 1;
      return v6;
    case 35:
      v14 = (__int64 *)v22;
      *((_DWORD *)a3 + 16) = 35;
      v15 = *v14;
      result = v6;
      *(_QWORD *)a3 = v15;
      *((_BYTE *)a3 + 68) = 1;
      break;
    case 52:
      v16 = v22;
      *((_DWORD *)a3 + 16) = 52;
      *(_QWORD *)a3 = *(_QWORD *)v16;
      *((_DWORD *)a3 + 2) = v16[2];
      result = v6;
      *((_BYTE *)a3 + 68) = 1;
      break;
    case 69:
      v17 = (__int128 *)v22;
      *((_DWORD *)a3 + 16) = 69;
      v18 = *v17;
      *((_BYTE *)a3 + 68) = 1;
      *(_OWORD *)a3 = v18;
      return v6;
    case 70:
      v12 = (__int128 *)v22;
      *((_DWORD *)a3 + 16) = 70;
      v13 = *v12;
      *((_BYTE *)a3 + 68) = 1;
      result = v6;
      *(_OWORD *)a3 = v13;
      break;
    case 71:
      v19 = (__int128 *)v22;
      *((_DWORD *)a3 + 16) = 71;
      v20 = *v19;
      *((_BYTE *)a3 + 68) = 1;
      *(_OWORD *)a3 = v20;
      return v6;
    case 104:
      v8 = v22;
      *((_DWORD *)a3 + 16) = 104;
      *(_OWORD *)a3 = *(_OWORD *)v8;
      v9 = v8[2];
      result = v6;
      *((_QWORD *)a3 + 2) = v9;
      *((_BYTE *)a3 + 68) = 1;
      break;
    case 265:
      v10 = v22;
      *((_DWORD *)a3 + 16) = 265;
      *(_OWORD *)a3 = *v10;
      *((_OWORD *)a3 + 1) = v10[1];
      *((_OWORD *)a3 + 2) = v10[2];
      v11 = v10[3];
      *((_BYTE *)a3 + 68) = 1;
      result = v6;
      *((_OWORD *)a3 + 3) = v11;
      break;
    default:
      v6 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x17Eu);
      return v6;
  }
  return result;
}
