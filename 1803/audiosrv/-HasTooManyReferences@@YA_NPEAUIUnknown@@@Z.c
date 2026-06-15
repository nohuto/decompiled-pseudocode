/*
 * XREFs of ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x18006346C
 * Callers:
 *     ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180003F80 (-get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z.c)
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x180008FB0 (-GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 *     ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180018BB0 (-GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManag.c)
 *     ?GetProcessSubmixById@CProcessSubmixManager@@UEAAJPEAVCAppSubmixClient@@_JPEAPEAUIProcessSubmixProxy@@@Z @ 0x1800D6D80 (-GetProcessSubmixById@CProcessSubmixManager@@UEAAJPEAVCAppSubmixClient@@_JPEAPEAUIProcessSubmixP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall HasTooManyReferences(struct IUnknown *a1)
{
  unsigned int v2; // ebx

  v2 = ((__int64 (__fastcall *)(struct IUnknown *))a1->lpVtbl->AddRef)(a1);
  ((void (__fastcall *)(struct IUnknown *))a1->lpVtbl->Release)(a1);
  return v2 >= 0x3FFFFFFF;
}
