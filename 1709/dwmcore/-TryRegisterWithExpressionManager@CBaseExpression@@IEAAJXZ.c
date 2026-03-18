/*
 * XREFs of ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x1800A2348
 * Callers:
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x1800A23EC (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800A3410 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x1800A83FC (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x1800A1058 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ?IsReadyForEvaluation@CKeyframeAnimation@@UEBA_NXZ @ 0x1800A4890 (-IsReadyForEvaluation@CKeyframeAnimation@@UEBA_NXZ.c)
 *     ?IsReadyForEvaluation@CExpression@@MEBA_NXZ @ 0x1800A7E00 (-IsReadyForEvaluation@CExpression@@MEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseExpression::TryRegisterWithExpressionManager(CBaseExpression *this)
{
  bool (__fastcall *v2)(CKeyframeAnimation *__hidden); // rax
  bool IsReadyForEvaluation; // al
  signed int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rax

  if ( (*((_BYTE *)this + 192) & 4) == 0 )
  {
    v2 = *(bool (__fastcall **)(CKeyframeAnimation *__hidden))(*(_QWORD *)this + 216LL);
    if ( v2 == CExpression::IsReadyForEvaluation )
      IsReadyForEvaluation = CExpression::IsReadyForEvaluation(this);
    else
      IsReadyForEvaluation = v2 == CKeyframeAnimation::IsReadyForEvaluation
                           ? CKeyframeAnimation::IsReadyForEvaluation(this)
                           : v2(this);
    if ( IsReadyForEvaluation )
    {
      v4 = CExpressionManager::RegisterExpression(*(CExpressionManager **)(*((_QWORD *)this + 2) + 216LL), this);
      v5 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0xF3u);
        return v5;
      }
      v6 = *(_QWORD *)this;
      *((_BYTE *)this + 192) |= 4u;
      if ( (*(unsigned __int8 (__fastcall **)(CBaseExpression *))(v6 + 264))(this) )
        *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 216LL) + 376LL) |= 4u;
    }
  }
  return 0;
}
