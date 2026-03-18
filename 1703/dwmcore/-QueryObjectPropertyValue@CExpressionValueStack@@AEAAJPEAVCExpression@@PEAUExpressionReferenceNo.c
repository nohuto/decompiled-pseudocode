/*
 * XREFs of ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x180135348
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800339C0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x180020C3C (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ShouldLogPerfStats@CBaseExpression@@IEAA_NXZ @ 0x18012C3A4 (-ShouldLogPerfStats@CBaseExpression@@IEAA_NXZ.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x18015FDF0 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x18015FEC0 (-Start@QpcStopwatch@@QEAAXXZ.c)
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
  unsigned int *v10; // r14
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // edi
  __int64 Elapsed; // rax
  int v15; // eax
  int v16; // eax
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF
  __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  v18 = 0LL;
  v6 = 0LL;
  v19 = 0LL;
  v7 = 0LL;
  v8 = *((unsigned int *)a3 + 1);
  if ( (unsigned int)v8 < *((_DWORD *)a2 + 100) )
    v10 = (unsigned int *)(*((_QWORD *)a2 + 47) + 24 * v8);
  else
    v10 = 0LL;
  if ( (unsigned __int8)CBaseExpression::ShouldLogPerfStats(a2) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 240LL) + 96LL;
    QpcStopwatch::Start((QpcStopwatch *)&v19);
    v6 = v19;
  }
  v12 = (*(__int64 (__fastcall **)(struct CExpression *, _QWORD, __int64 *))(*(_QWORD *)a2 + 200LL))(a2, v10[5], &v18);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, v12, 0xFCu);
  }
  else
  {
    if ( v6 )
    {
      Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v19);
      ++*(_DWORD *)(v7 + 12);
      *(_QWORD *)(v7 + 48) += Elapsed;
    }
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct CExpressionValue *))(*(_QWORD *)v18 + 88LL))(v18, *v10, a5);
    v13 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, v15, 0x103u);
    }
    else if ( a6 && *((_BYTE *)a6 + 4) && (v16 = CExpressionValue::ApplyMaskToValue(a5, a6), v13 = v16, v16 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, v16, 0x113u);
    }
    else
    {
      v13 = 0;
    }
  }
  ReleaseInterface<IBitmapLock>(&v18);
  return v13;
}
