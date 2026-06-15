/*
 * XREFs of ?LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800BB780
 * Callers:
 *     _lambda_d9b0be7eda368bff9c92e9d9b278ea98_::operator() @ 0x1800B07F0 (_lambda_d9b0be7eda368bff9c92e9d9b278ea98_--operator().c)
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800B21B4 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ??$LogAecEffectPolicy@$07@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800BB454 (--$LogAecEffectPolicy@$07@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengi.c)
 *     ??$LogAecEffectPolicy@$0EAAAAAAAAAAI@@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800BB5E8 (--$LogAecEffectPolicy@$0EAAAAAAAAAAI@@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_i.c)
 */

void __fastcall LogAecEffectPolicyInsertion(
        const struct _AEC_POLICY_RESULTS *a1,
        const unsigned __int16 *a2,
        struct _GUID *a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4)
{
  if ( *((_DWORD *)a1 + 15) == 4 )
    LogAecEffectPolicy<8>((__int64)a1, a2);
  else
    LogAecEffectPolicy<70368744177672>((__int64)a1, a2);
}
