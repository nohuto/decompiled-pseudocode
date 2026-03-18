/*
 * XREFs of ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x1801404D8
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x180051B80 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ShouldLogPerfStats@CBaseExpression@@IEAA_NXZ @ 0x18013CF60 (-ShouldLogPerfStats@CBaseExpression@@IEAA_NXZ.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x18017EEF4 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x18017EFBC (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x180193DA8 (-CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCReso.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801AE054 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::QueryObjectPropertyValue(
        CExpressionValueStack *this,
        struct CExpression *a2,
        struct ExpressionReferenceNode *a3,
        __int64 a4,
        struct CExpressionValue *a5,
        struct SubchannelMaskInfo *a6)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
  struct ExpressionReferenceInfo *v10; // r15
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // edi
  __int64 Elapsed; // rax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  struct CResource *v18; // rdx
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF
  struct CResource *v21; // [rsp+68h] [rbp+20h] BYREF

  v21 = 0LL;
  v6 = 0LL;
  v20 = 0LL;
  v7 = 0LL;
  v8 = *((unsigned int *)a3 + 1);
  if ( (unsigned int)v8 < *((_DWORD *)a2 + 100) )
    v10 = (struct ExpressionReferenceInfo *)(*((_QWORD *)a2 + 49) + 24 * v8);
  else
    v10 = 0LL;
  if ( CBaseExpression::ShouldLogPerfStats(a2) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 240LL) + 96LL;
    QpcStopwatch::Start((QpcStopwatch *)&v20);
    v6 = v20;
  }
  v12 = (*(__int64 (__fastcall **)(struct CExpression *, _QWORD, struct CResource **))(*(_QWORD *)a2 + 240LL))(
          a2,
          *((unsigned int *)v10 + 5),
          &v21);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180239D30, 1u, v12, 0x125u);
  }
  else
  {
    if ( v6 )
    {
      Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v20);
      ++*(_DWORD *)(v7 + 12);
      *(_QWORD *)(v7 + 48) += Elapsed;
    }
    v15 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, struct CExpressionValue *))(*(_QWORD *)v21 + 96LL))(
            v21,
            *(unsigned int *)v10,
            a5);
    v13 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180239D30, 1u, v15, 0x12Cu);
    }
    else if ( a6 && *((_BYTE *)a6 + 4) && (v16 = CExpressionValue::ApplyMaskToValue(a5, a6), v13 = v16, v16 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180239D30, 1u, v16, 0x13Cu);
    }
    else
    {
      v17 = *((_QWORD *)a2 + 22);
      if ( v17 )
        v18 = *(struct CResource **)(v17 + 8);
      else
        v18 = 0LL;
      CInteractionTracker::CheckTargetsForInteractionSource(v10, v18, v21);
      v13 = 0;
    }
  }
  ReleaseInterface<IBitmapLock>((__int64 *)&v21);
  return v13;
}
