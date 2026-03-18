/*
 * XREFs of ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180187AE4
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x18019552C (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?ProcessConditionalExpression@CScrollAnimation@@SAJPEAVCConditionalExpression@@PEAVCExpressionValueStack@@_KW4ScrollAxis@@PEA_NPEAM@Z @ 0x1801BE4D8 (-ProcessConditionalExpression@CScrollAnimation@@SAJPEAVCConditionalExpression@@PEAVCExpressionVa.c)
 *     ?Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z @ 0x1801CB8E0 (-Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800D1A30 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x18013CF48 (-GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBGPEBX@Z @ 0x18018003C (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMa.c)
 *     ?GetDebugInfo@CBaseExpression@@QEBAPEBGXZ @ 0x1801814F4 (-GetDebugInfo@CBaseExpression@@QEBAPEBGXZ.c)
 *     ?GetDebugTargetInfo@CConditionalExpression@@AEBA?AUDebugTargetInfo@1@XZ @ 0x1801879E0 (-GetDebugTargetInfo@CConditionalExpression@@AEBA-AUDebugTargetInfo@1@XZ.c)
 *     ?GetModifierTypeString@DebugTargetInfo@CConditionalExpression@@QEAAPEBGXZ @ 0x180187A38 (-GetModifierTypeString@DebugTargetInfo@CConditionalExpression@@QEAAPEBGXZ.c)
 */

__int64 __fastcall CConditionalExpression::GetValue(
        VectorSubchannelMaskInfo **this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // edx
  const unsigned __int16 *DebugInfo; // rax
  __int64 v12; // r10
  LPCWSTR *AnimationLoggingManagerNoRef; // rax
  unsigned int v15; // [rsp+20h] [rbp-858h]
  _BYTE v16[8]; // [rsp+50h] [rbp-828h] BYREF
  unsigned int v17; // [rsp+58h] [rbp-820h] BYREF
  int v18; // [rsp+5Ch] [rbp-81Ch]
  unsigned __int16 v19[1000]; // [rsp+70h] [rbp-808h] BYREF

  *a4 = 0.0;
  v8 = (*((__int64 (__fastcall **)(VectorSubchannelMaskInfo **, struct CExpressionValueStack *, __int64, _BYTE *))*this
        + 26))(
         this,
         a2,
         a3,
         v16);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1DAu);
  }
  else
  {
    v10 = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v10 - 1;
    *a4 = *(float *)(*((_QWORD *)a2 + 3) + 80LL * (unsigned int)(2 * v10 - 2));
    if ( (*((_DWORD *)this[35] + 1) & 0x2000000) != 0 )
    {
      CConditionalExpression::GetDebugTargetInfo((__int64)this, (__int64)&v17);
      CConditionalExpression::DebugTargetInfo::GetModifierTypeString((CConditionalExpression::DebugTargetInfo *)&v17);
      DebugInfo = CBaseExpression::GetDebugInfo((CBaseExpression *)this);
      v15 = *((_DWORD *)this + 85);
      StringCchPrintfW(v19, 0x3E8uLL, (size_t *)L"%ws, {SelectedIndex: %u}, {ModifierType: %ws}", DebugInfo, v15, v12);
      AnimationLoggingManagerNoRef = (LPCWSTR *)CBaseExpression::GetAnimationLoggingManagerNoRef((CBaseExpression *)this);
      CAnimationLoggingManager::LogDebugPropertyUpdate(
        AnimationLoggingManagerNoRef,
        a3,
        83,
        v17,
        v18,
        this[24],
        0x12u,
        v19,
        (unsigned __int8 *)a4);
    }
  }
  return v9;
}
