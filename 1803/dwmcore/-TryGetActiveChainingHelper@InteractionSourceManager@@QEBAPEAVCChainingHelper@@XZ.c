/*
 * XREFs of ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x1801CA9F0
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18003A130 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x180051B80 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x180193DA8 (-CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCReso.c)
 *     ?StartInertia@CScrollAnimation@@AEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x1801BE6E4 (-StartInertia@CScrollAnimation@@AEAAJMPEAVCExpressionValueStack@@_K_N@Z.c)
 *     ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z @ 0x1801BE8F8 (-UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1801BE9A0 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x1801BF670 (-StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ.c)
 *     ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x1801BFC60 (-StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ.c)
 *     ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x1801C9AE8 (-GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x1800C1BB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ??D?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEBAAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1801C97C8 (--D-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipulation@@Uer.c)
 */

struct CChainingHelper *__fastcall InteractionSourceManager::TryGetActiveChainingHelper(__int64 **this)
{
  __int64 v1; // r11
  int v3; // r11d
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 *v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // r9
  __int64 *i; // rax
  __int64 *v11; // rcx
  __int64 *v13[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( this[4] && this[14] )
  {
    v13[2] = this[13];
    v13[0] = this[10];
    v13[1] = 0LL;
    v4 = *(_QWORD *)std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>::operator*(v13);
    v14 = v4;
    v5 = std::_Hash_bytes((const unsigned __int8 *)&v14, (unsigned int)(v3 + 8));
    v6 = this[5];
    v7 = (unsigned __int64)this[8] & v5;
    v8 = 2 * v7;
    v9 = (__int64 *)v6[2 * v7];
    for ( i = v9; ; i = (__int64 *)*i )
    {
      v11 = v9 == this[3] ? this[3] : *(__int64 **)v6[v8 + 1];
      if ( i == v11 )
        break;
      if ( i[2] == v4 )
        goto LABEL_11;
    }
    i = this[3];
LABEL_11:
    if ( i != this[3] )
      return (struct CChainingHelper *)i[3];
  }
  return (struct CChainingHelper *)v1;
}
