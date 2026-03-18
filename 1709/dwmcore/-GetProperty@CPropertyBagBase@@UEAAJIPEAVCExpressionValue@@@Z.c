/*
 * XREFs of ?GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800A5300
 * Callers:
 *     ?TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z @ 0x1800A1D20 (-TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800A1DF0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800A8AE0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetPropertyValue@CPropertyBag@@MEAAJIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEBX@Z @ 0x1800A6810 (-GetPropertyValue@CPropertyBag@@MEAAJIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPropertyBagBase::GetProperty(CPropertyBagBase *this, __int64 a2, struct CExpressionValue *a3)
{
  __int64 (__fastcall *v4)(CPropertyBag *__hidden, unsigned int, enum DCOMPOSITION_EXPRESSION_TYPE *, const void **); // rax
  signed int PropertyValue; // eax
  unsigned int v6; // edi
  __int64 result; // rax
  __int128 *v8; // rax
  __int128 v9; // xmm0
  _QWORD *v10; // rax
  __int64 v11; // xmm1_8
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  _DWORD *v14; // rax
  __int64 *v15; // rax
  __int64 v16; // xmm0_8
  __int128 *v17; // rax
  __int128 v18; // xmm0
  __int128 *v19; // rax
  __int128 v20; // xmm0
  int v21; // [rsp+50h] [rbp+18h] BYREF
  void *v22; // [rsp+58h] [rbp+20h] BYREF

  if ( !a3 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x146u);
    return v6;
  }
  v4 = *(__int64 (__fastcall **)(CPropertyBag *__hidden, unsigned int, enum DCOMPOSITION_EXPRESSION_TYPE *, const void **))(*(_QWORD *)this + 152LL);
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, PropertyValue, 0x150u);
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
      v15 = (__int64 *)v22;
      *((_DWORD *)a3 + 16) = 35;
      v16 = *v15;
      result = v6;
      *(_QWORD *)a3 = v16;
      *((_BYTE *)a3 + 68) = 1;
      break;
    case 52:
      v14 = v22;
      *((_DWORD *)a3 + 16) = 52;
      *(_QWORD *)a3 = *(_QWORD *)v14;
      *((_DWORD *)a3 + 2) = v14[2];
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
      v8 = (__int128 *)v22;
      *((_DWORD *)a3 + 16) = 70;
      v9 = *v8;
      *((_BYTE *)a3 + 68) = 1;
      result = v6;
      *(_OWORD *)a3 = v9;
      break;
    case 71:
      v19 = (__int128 *)v22;
      *((_DWORD *)a3 + 16) = 71;
      v20 = *v19;
      *((_BYTE *)a3 + 68) = 1;
      *(_OWORD *)a3 = v20;
      return v6;
    case 104:
      v10 = v22;
      *((_DWORD *)a3 + 16) = 104;
      *(_OWORD *)a3 = *(_OWORD *)v10;
      v11 = v10[2];
      result = v6;
      *((_QWORD *)a3 + 2) = v11;
      *((_BYTE *)a3 + 68) = 1;
      break;
    case 265:
      v12 = v22;
      *((_DWORD *)a3 + 16) = 265;
      *(_OWORD *)a3 = *v12;
      *((_OWORD *)a3 + 1) = v12[1];
      *((_OWORD *)a3 + 2) = v12[2];
      v13 = v12[3];
      *((_BYTE *)a3 + 68) = 1;
      result = v6;
      *((_OWORD *)a3 + 3) = v13;
      break;
    default:
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x17Eu);
      return v6;
  }
  return result;
}
