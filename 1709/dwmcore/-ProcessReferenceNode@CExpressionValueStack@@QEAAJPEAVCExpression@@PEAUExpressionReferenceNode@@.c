/*
 * XREFs of ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800A8AE0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180053A70 (-GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x180054D00 (-Release@CVisual@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800A5300 (-GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x1800A7600 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ResolveSourceReference@CExpression@@UEAAJIPEAPEAVCResource@@@Z @ 0x1800A8170 (-ResolveSourceReference@CExpression@@UEAAJIPEAPEAVCResource@@@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x1800A9F20 (-Release@CResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x18011D9E0 (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x180155EF4 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x18015601C (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x180162748 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x18018766C (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ProcessReferenceNode(
        CExpressionValueStack *this,
        struct CExpression *a2,
        struct ExpressionReferenceNode *a3,
        struct CExpressionValue *a4)
{
  __int64 v4; // rax
  _DWORD *v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // r12
  bool v11; // zf
  struct CExpressionValue *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r13
  unsigned int *v16; // r15
  __int64 v17; // rdx
  __int64 (__fastcall *v18)(CExpression *, unsigned int, struct CResource **); // rax
  signed int v19; // eax
  signed int v20; // esi
  __int64 v21; // rdx
  __int64 (__fastcall *v22)(struct CResource *, __int64, struct CExpressionValue *); // rax
  signed int Property; // eax
  void (*v24)(void); // rax
  __int64 v25; // rax
  struct CExpressionValue *v26; // rbx
  __int64 v27; // rsi
  signed int v28; // eax
  unsigned int v29; // r15d
  __int64 result; // rax
  __int64 Elapsed; // rax
  signed int v32; // eax
  __int64 v33; // rax
  signed int v34; // eax
  signed int ValueFromCache; // eax
  CExpressionValueStack *v36; // rcx
  unsigned __int64 v37; // r9
  signed int ObjectPropertyValue; // eax
  signed int v39; // eax
  struct CResource *v40; // [rsp+70h] [rbp+8h] BYREF
  __int64 v41; // [rsp+78h] [rbp+10h] BYREF
  struct CExpressionValue *v42; // [rsp+88h] [rbp+20h] BYREF

  v42 = a4;
  v4 = *((unsigned int *)a3 + 1);
  if ( (unsigned int)v4 >= *((_DWORD *)a2 + 96) )
    v8 = 0LL;
  else
    v8 = (_DWORD *)(*((_QWORD *)a2 + 47) + 24 * v4);
  v9 = *((unsigned int *)this + 4);
  if ( *((_DWORD *)this + 4) == -1 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8000FFFF, 0xBFu);
LABEL_42:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, 0x8000FFFF, 0x13Cu);
    return 2147549183LL;
  }
  if ( *((_DWORD *)this + 12) == (_DWORD)v9 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8000FFFF, 0xCCu);
    goto LABEL_42;
  }
  v10 = 0LL;
  *((_DWORD *)this + 4) = v9 + 1;
  v11 = v8[4] == 1;
  v12 = (struct CExpressionValue *)(*((_QWORD *)this + 3) + 72 * v9);
  v42 = v12;
  if ( v11 )
    v10 = *((_QWORD *)a2 + 23);
  if ( v8[2] == 1 )
  {
    ValueFromCache = CExpression::ReadValueFromCache(a2, v8[3], v12, (bool *)&v42);
    v29 = ValueFromCache;
    if ( ValueFromCache < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, ValueFromCache, 0x183u);
      goto LABEL_65;
    }
    if ( !(_BYTE)v42 )
    {
      ObjectPropertyValue = CExpressionValueStack::QueryObjectPropertyValue(
                              v36,
                              a2,
                              a3,
                              v37,
                              v12,
                              (struct SubchannelMaskInfo *)v10);
      v29 = ObjectPropertyValue;
      if ( ObjectPropertyValue < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, ObjectPropertyValue, 0x18Du);
        goto LABEL_65;
      }
      v39 = CExpression::StoreValueToCache(a2, v8[3], v12);
      v29 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, v39, 0x193u);
        goto LABEL_65;
      }
    }
    return 0LL;
  }
  if ( v8[2] != 2 )
  {
    v29 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, 0x8000FFFF, 0x199u);
    goto LABEL_65;
  }
  v13 = *((unsigned int *)a3 + 1);
  v14 = 0LL;
  v15 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  if ( (unsigned int)v13 >= *((_DWORD *)a2 + 96) )
    v16 = 0LL;
  else
    v16 = (unsigned int *)(*((_QWORD *)a2 + 47) + 24 * v13);
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 33) + 4LL) & 0x40000000) != 0 || CCommonRegistryData::m_fLogExpressionPerfStats )
  {
    v15 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 216LL) + 96LL;
    QpcStopwatch::Start((QpcStopwatch *)&v41);
    v14 = v41;
  }
  v17 = v16[5];
  v18 = *(__int64 (__fastcall **)(CExpression *, unsigned int, struct CResource **))(*(_QWORD *)a2 + 240LL);
  if ( v18 == CExpression::ResolveSourceReference )
    v19 = CExpression::ResolveSourceReference(a2, v17, &v40);
  else
    v19 = v18(a2, v17, &v40);
  v20 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, v19, 0xFCu);
    v12 = v42;
  }
  else
  {
    if ( v14 )
    {
      Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v41);
      ++*(_DWORD *)(v15 + 12);
      *(_QWORD *)(v15 + 48) += Elapsed;
    }
    v21 = *v16;
    v12 = v42;
    v22 = *(__int64 (__fastcall **)(struct CResource *, __int64, struct CExpressionValue *))(*(_QWORD *)v40 + 96LL);
    if ( v22 == CPropertyBagBase::GetProperty )
    {
      Property = CPropertyBagBase::GetProperty(v40, v21, v42);
    }
    else if ( (char *)v22 == (char *)CVisual::GetProperty )
    {
      Property = CVisual::GetProperty(v40, v21, v42);
    }
    else
    {
      Property = v22(v40, v21, v42);
    }
    v20 = Property;
    if ( Property < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, Property, 0x103u);
    }
    else if ( v10
           && *(_BYTE *)(v10 + 4)
           && (v32 = CExpressionValue::ApplyMaskToValue(v12, (struct SubchannelMaskInfo *)v10), v20 = v32, v32 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, v32, 0x113u);
    }
    else
    {
      v20 = 0;
    }
  }
  if ( v40 )
  {
    v24 = *(void (**)(void))(*(_QWORD *)v40 + 16LL);
    if ( (char *)v24 == (char *)CResource::Release )
    {
      CResource::Release(v40);
    }
    else if ( (char *)v24 == (char *)CVisual::Release )
    {
      CVisual::Release(v40);
    }
    else
    {
      v24();
    }
  }
  if ( v20 < 0 )
  {
    v34 = CExpression::ReadValueFromCache(a2, v8[3], v12, (bool *)&v42);
    v29 = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, v34, 0x172u);
      goto LABEL_65;
    }
    if ( !(_BYTE)v42 )
    {
      v29 = v20;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, v20, 0x176u);
      goto LABEL_65;
    }
    return 0LL;
  }
  v25 = *((_QWORD *)a2 + 33);
  v26 = 0LL;
  v27 = 0LL;
  v42 = 0LL;
  if ( (*(_DWORD *)(v25 + 4) & 0x40000000) != 0 )
  {
    v27 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 216LL) + 96LL;
    QpcStopwatch::Start((QpcStopwatch *)&v42);
    v26 = v42;
  }
  v28 = CExpression::StoreValueToCache(a2, v8[3], v12);
  v29 = v28;
  if ( v28 >= 0 )
  {
    if ( v26 )
    {
      v33 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v42);
      ++*(_DWORD *)(v27 + 16);
      *(_QWORD *)(v27 + 56) += v33;
    }
    return 0LL;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, v28, 0x161u);
LABEL_65:
  result = v29;
  if ( v12 )
    --*((_DWORD *)this + 4);
  return result;
}
