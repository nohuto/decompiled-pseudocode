/*
 * XREFs of ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x1400302F8
 * Callers:
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@@Z @ 0x1400304DC (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 *     ?AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x140042BD8 (-AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 *     ?RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x140042F14 (-RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComPtrBase<IAudioProcessingObject>::CopyTo(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rcx

  if ( !a2 )
    return 2147500035LL;
  *a2 = *a1;
  v3 = *a1;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return 0LL;
}
