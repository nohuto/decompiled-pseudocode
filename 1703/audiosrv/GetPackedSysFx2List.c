/*
 * XREFs of GetPackedSysFx2List @ 0x18003931C
 * Callers:
 *     VerifyCriticalProcessing @ 0x180039234 (VerifyCriticalProcessing.c)
 * Callees:
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180032E24 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     PackSysFx2List @ 0x1800393D0 (PackSysFx2List.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetPackedSysFx2List(CEndpointCharacteristics *a1, struct _GUID *a2, _DWORD *a3)
{
  int ModeEffect; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-48h]
  struct _GUID v9; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v11; // [rsp+78h] [rbp+10h]
  struct IAudioSystemEffects2 *v12; // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0;
  v9 = *a2;
  v12 = 0LL;
  ModeEffect = CEndpointCharacteristics::GetModeEffect(a1, &v9, 1, 0, 0LL, 0LL, &v12);
  v5 = ModeEffect;
  if ( ModeEffect < 0 )
  {
    v7 = 161LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)ModeEffect,
      v8);
    goto LABEL_4;
  }
  ModeEffect = PackSysFx2List((CCompositeSystemEffect *)v12);
  v5 = ModeEffect;
  if ( ModeEffect < 0 )
  {
    v7 = 164LL;
    goto LABEL_7;
  }
  *a3 |= v11;
  v5 = 0;
LABEL_4:
  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v12);
  return v5;
}
