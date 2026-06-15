/*
 * XREFs of ?IsCaptureStream@CAudioStream@@UEAA_NXZ @ 0x18002DF10
 * Callers:
 *     ?GetDataFlow@CAudioStream@@UEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@XZ @ 0x18002F6C0 (-GetDataFlow@CAudioStream@@UEAA-AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@XZ.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180047130 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?IsCaptureStream@CAudioStream@@W7EAA_NXZ @ 0x180065A90 (-IsCaptureStream@CAudioStream@@W7EAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAudioStream::IsCaptureStream(CAudioStream *this)
{
  return (unsigned int)(*((_DWORD *)this + 137) - 1) <= 1;
}
