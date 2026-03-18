/*
 * XREFs of ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18002F1F8
 * Callers:
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18002F284 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18002F7D8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x180032390 (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@.c)
 * Callees:
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x18002D588 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ?IsReadyForEvaluation@CKeyframeAnimation@@UEBA_NXZ @ 0x180030AF0 (-IsReadyForEvaluation@CKeyframeAnimation@@UEBA_NXZ.c)
 *     ?IsReadyForEvaluation@CExpression@@MEBA_NXZ @ 0x180033380 (-IsReadyForEvaluation@CExpression@@MEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseExpression::TryRegisterWithExpressionManager(CBaseExpression *this)
{
  bool (__fastcall *v2)(CKeyframeAnimation *__hidden); // rax
  bool IsReadyForEvaluation; // al
  unsigned int v4; // edi
  int v6; // eax

  if ( (*((_BYTE *)this + 208) & 4) == 0 )
  {
    v2 = *(bool (__fastcall **)(CKeyframeAnimation *__hidden))(*(_QWORD *)this + 176LL);
    if ( v2 == CExpression::IsReadyForEvaluation )
      IsReadyForEvaluation = CExpression::IsReadyForEvaluation(this);
    else
      IsReadyForEvaluation = v2 == CKeyframeAnimation::IsReadyForEvaluation
                           ? CKeyframeAnimation::IsReadyForEvaluation(this)
                           : v2(this);
    if ( IsReadyForEvaluation )
    {
      v6 = CExpressionManager::RegisterExpression(*(CExpressionManager **)(*((_QWORD *)this + 2) + 240LL), this);
      v4 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xE1u);
        return v4;
      }
      *((_BYTE *)this + 208) |= 4u;
    }
  }
  return 0;
}
