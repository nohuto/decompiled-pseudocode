/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180044C48
 * Callers:
 *     _lambda_0d63f0eebaff590cd6794bb27eb1a224_::operator() @ 0x18003AF20 (_lambda_0d63f0eebaff590cd6794bb27eb1a224_--operator().c)
 *     ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x18003B8D8 (-AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z.c)
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N@Z @ 0x18003BA6C (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N@Z.c)
 *     _lambda_118dc2bc630108594922f76d93a95b91_::operator() @ 0x18003C4A4 (_lambda_118dc2bc630108594922f76d93a95b91_--operator().c)
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18003CF7C (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18003E6BC (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x18003F220 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x18003FCC8 (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 *     ?Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800457C0 (-Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_301fd7a8fc024bbcef569520ec2ad4e1_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180047320 (--$_Callback_once@V-$tuple@$$QEAV_lambda_301fd7a8fc024bbcef569520ec2ad4e1_@@AEAVexception_ptr@st.c)
 *     ?ProcessPoints@MPCClickerProcessor@@IEAAXPEAUInputInfo@@@Z @ 0x1800485B0 (-ProcessPoints@MPCClickerProcessor@@IEAAXPEAUInputInfo@@@Z.c)
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_5a74ae54013b7a0b63e4e3845ba7868b_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1800495E0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_5a74ae54013b7a0b63e4e3845ba7868b_@@AEAVexception_ptr@st.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180093F00 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180094A18 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180094CB0 (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x180095378 (-AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ.c)
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x180095B50 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_172571034a44f8156ea06ee89e7e6c96_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180096120 (--$_Callback_once@V-$tuple@$$QEAV_lambda_172571034a44f8156ea06ee89e7e6c96_@@AEAVexception_ptr@st.c)
 *     _lambda_0fe84b0df1de98c8718b27672fc0a862_::operator() @ 0x180096EC0 (_lambda_0fe84b0df1de98c8718b27672fc0a862_--operator().c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180097404 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180098034 (-ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800985D0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_66f57f934f28d61049862f64df852ff0__char_const_____ptr64_ @ 0x180044B1C (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_for__lambda_66.c)
 */

_QWORD *__fastcall std::string::string(_QWORD *a1, _BYTE *a2, __int64 a3)
{
  size_t v4; // rdi
  void *v5; // rsi

  a1[2] = 0LL;
  a1[3] = 15LL;
  v4 = -1LL;
  *(_BYTE *)a1 = 0;
  do
    ++v4;
  while ( a2[v4] );
  if ( v4 > a1[3] )
  {
    std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_66f57f934f28d61049862f64df852ff0__char_const_____ptr64_(
      (__int64)a1,
      v4,
      a3,
      a2);
  }
  else
  {
    v5 = a1;
    if ( a1[3] >= 0x10uLL )
      v5 = (void *)*a1;
    a1[2] = v4;
    memmove(v5, a2, v4);
    *((_BYTE *)v5 + v4) = 0;
  }
  return a1;
}
