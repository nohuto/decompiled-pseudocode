/*
 * XREFs of GetPackedSysFx2List @ 0x1800EF318
 * Callers:
 *     VerifyCriticalProcessing @ 0x1800EF998 (VerifyCriticalProcessing.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18009586C (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     PackSysFx2List @ 0x1800EF4D4 (PackSysFx2List.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetPackedSysFx2List(CEndpointCharacteristics *a1, struct _GUID *a2, _DWORD *a3)
{
  int ModeEffect; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  struct _GUID v8; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v10; // [rsp+78h] [rbp+10h] BYREF
  struct IAudioSystemEffects2 *v11; // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0;
  v8 = *a2;
  v11 = 0LL;
  ModeEffect = CEndpointCharacteristics::GetModeEffect(a1, &v8, 1, 0, 0LL, 0LL, &v11);
  v5 = ModeEffect;
  if ( ModeEffect >= 0 )
  {
    ModeEffect = PackSysFx2List(v11, &v10);
    v5 = ModeEffect;
    if ( ModeEffect >= 0 )
    {
      *a3 |= v10;
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 166LL;
  }
  else
  {
    v6 = 163LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
    (const char *)(unsigned int)ModeEffect);
LABEL_7:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v11);
  return v5;
}
