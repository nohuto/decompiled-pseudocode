/*
 * XREFs of ??4?$ActivityData@VCommonPeopleTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV012@$$QEAV012@@Z @ 0x180207A24
 * Callers:
 *     ??4?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18011DBC4 (--4-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param_ea_18011DBC4.c)
 *     ??4?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18016AD68 (--4-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ??4?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180175C6C (--4-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??4?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801809A4 (--4-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflect.c)
 *     ??4?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180207974 (--4-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??4?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802479F4 (--4-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18008AAB0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ??4StoredCallContextInfo@details@wil@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800F5FA0 (--4StoredCallContextInfo@details@wil@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 __fastcall wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CommonPeopleTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>::operator=(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_BYTE *)(a1 + 4) = *(_BYTE *)(a2 + 4);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_DWORD *)a2 = 0;
  *(_BYTE *)(a2 + 4) = 0;
  wil::details::StoredCallContextInfo::operator=(a1 + 40, a2 + 40);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 76);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
  *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 144);
  *(_OWORD *)(a1 + 160) = *(_OWORD *)(a2 + 160);
  *(_OWORD *)(a1 + 176) = *(_OWORD *)(a2 + 176);
  *(_OWORD *)(a1 + 192) = *(_OWORD *)(a2 + 192);
  *(_OWORD *)(a1 + 208) = *(_OWORD *)(a2 + 208);
  wil::details::shared_buffer::reset((LPVOID *)(a1 + 224));
  *(_QWORD *)(a1 + 224) = *(_QWORD *)(a2 + 224);
  *(_QWORD *)(a1 + 232) = *(_QWORD *)(a2 + 232);
  *(_QWORD *)(a2 + 224) = 0LL;
  *(_QWORD *)(a2 + 232) = 0LL;
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  return a1;
}
