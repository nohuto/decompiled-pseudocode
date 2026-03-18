/*
 * XREFs of ??$ChangePropertyValue@_N@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEA_N@Z @ 0x1801826E4
 * Callers:
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A64A0 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$UpdatePropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector4@@@Z @ 0x180182850 (--$UpdatePropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetPropertyStorageForWrite@CPropertyBag@@AEAAJIPEAPEAUPropertyBagValue@@@Z @ 0x1800A6450 (-GetPropertyStorageForWrite@CPropertyBag@@AEAAJIPEAPEAUPropertyBagValue@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CPropertyBag::ChangePropertyValue<bool>(CResource *this, int a2, int a3, __int64 a4)
{
  signed int v8; // eax
  unsigned int v9; // esi
  struct PropertyBagValue *v10; // r8
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  struct PropertyBagValue *v20; // [rsp+30h] [rbp-18h] BYREF

  v20 = 0LL;
  v8 = CPropertyBag::GetPropertyStorageForWrite(this, a2, &v20);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x1DFu);
    return v9;
  }
  v10 = v20;
  if ( a2 != *((_DWORD *)v20 + 2) || a3 != *(_DWORD *)v20 )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x1E9u);
    return v9;
  }
  v11 = a3 - 17;
  if ( !v11 )
  {
    *((_BYTE *)v20 + 12) = *(_BYTE *)a4;
    goto LABEL_21;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    *((_DWORD *)v20 + 3) = *(_DWORD *)a4;
    goto LABEL_21;
  }
  v13 = v12 - 17;
  if ( !v13 )
  {
    *(_QWORD *)((char *)v20 + 12) = *(_QWORD *)a4;
    goto LABEL_21;
  }
  v14 = v13 - 17;
  if ( !v14 )
  {
    *(_QWORD *)((char *)v20 + 12) = *(_QWORD *)a4;
    *((_DWORD *)v10 + 5) = *(_DWORD *)(a4 + 8);
    goto LABEL_21;
  }
  v15 = v14 - 17;
  if ( !v15 || (v16 = v15 - 1) == 0 || (v17 = v16 - 1) == 0 )
  {
    *(_OWORD *)((char *)v20 + 12) = *(_OWORD *)a4;
    goto LABEL_21;
  }
  v18 = v17 - 33;
  if ( !v18 )
  {
    *(_OWORD *)((char *)v20 + 12) = *(_OWORD *)a4;
    *(_QWORD *)((char *)v10 + 28) = *(_QWORD *)(a4 + 16);
    goto LABEL_21;
  }
  if ( v18 == 161 )
  {
    *(_OWORD *)((char *)v20 + 12) = *(_OWORD *)a4;
    *(_OWORD *)((char *)v10 + 28) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)((char *)v10 + 44) = *(_OWORD *)(a4 + 32);
    *(_OWORD *)((char *)v10 + 60) = *(_OWORD *)(a4 + 48);
LABEL_21:
    CResource::InvalidateAnimationSources(this);
    return v9;
  }
  v9 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x233u);
  return v9;
}
