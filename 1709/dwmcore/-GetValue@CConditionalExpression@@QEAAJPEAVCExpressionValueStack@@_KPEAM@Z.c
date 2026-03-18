/*
 * XREFs of ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x18015E950
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x18016D2E4 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?ProcessConditionalExpression@CScrollAnimation@@SAJPEAVCConditionalExpression@@PEAVCExpressionValueStack@@_KW4ScrollAxis@@PEA_NPEAM@Z @ 0x180189098 (-ProcessConditionalExpression@CScrollAnimation@@SAJPEAVCConditionalExpression@@PEAVCExpressionVa.c)
 *     ?Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z @ 0x180192B30 (-Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001EA4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBGPEBX@Z @ 0x180157080 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMa.c)
 *     ?GetDebugInfo@CBaseExpression@@QEBAPEBGXZ @ 0x180158420 (-GetDebugInfo@CBaseExpression@@QEBAPEBGXZ.c)
 *     ?GetDebugTargetInfo@CConditionalExpression@@AEBA?AUDebugTargetInfo@1@XZ @ 0x18015E84C (-GetDebugTargetInfo@CConditionalExpression@@AEBA-AUDebugTargetInfo@1@XZ.c)
 *     ?GetModifierTypeString@DebugTargetInfo@CConditionalExpression@@QEAAPEBGXZ @ 0x18015E8A4 (-GetModifierTypeString@DebugTargetInfo@CConditionalExpression@@QEAAPEBGXZ.c)
 */

__int64 __fastcall CConditionalExpression::GetValue(
        int **this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float *a4)
{
  signed int v8; // eax
  unsigned int v9; // ebx
  int v10; // edx
  const unsigned __int16 *DebugInfo; // rax
  __int64 v12; // r10
  unsigned int v14; // [rsp+20h] [rbp-858h]
  _BYTE v15[8]; // [rsp+50h] [rbp-828h] BYREF
  unsigned int v16; // [rsp+58h] [rbp-820h] BYREF
  int v17; // [rsp+5Ch] [rbp-81Ch]
  unsigned __int16 v18[1000]; // [rsp+70h] [rbp-808h] BYREF

  *a4 = 0.0;
  v8 = (*((__int64 (__fastcall **)(int **, struct CExpressionValueStack *, __int64, _BYTE *))*this + 26))(
         this,
         a2,
         a3,
         v15);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x1DAu);
  }
  else
  {
    v10 = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v10 - 1;
    *a4 = *(float *)(*((_QWORD *)a2 + 3) + 72LL * (unsigned int)(2 * v10 - 2));
    if ( (this[33][1] & 0x2000000) != 0 )
    {
      CConditionalExpression::GetDebugTargetInfo((__int64)this, (__int64)&v16);
      CConditionalExpression::DebugTargetInfo::GetModifierTypeString((CConditionalExpression::DebugTargetInfo *)&v16);
      DebugInfo = CBaseExpression::GetDebugInfo((CBaseExpression *)this);
      v14 = *((_DWORD *)this + 81);
      StringCchPrintfW(v18, 0x3E8uLL, (size_t *)L"%ws, {SelectedIndex: %u}, {ModifierType: %ws}", DebugInfo, v14, v12);
      CAnimationLoggingManager::LogDebugPropertyUpdate(
        *((CAnimationLoggingManager **)this[6] + 7),
        a3,
        77,
        v16,
        v17,
        this[23],
        0x12u,
        v18,
        (unsigned __int8 *)a4);
    }
  }
  return v9;
}
