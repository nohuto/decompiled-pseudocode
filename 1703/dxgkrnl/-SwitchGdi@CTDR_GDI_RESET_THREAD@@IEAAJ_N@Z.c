/*
 * XREFs of ?SwitchGdi@CTDR_GDI_RESET_THREAD@@IEAAJ_N@Z @ 0x1C0191714
 * Callers:
 *     ?Worker@CTDR_GDI_RESET_THREAD@@MEAAXXZ @ 0x1C0193290 (-Worker@CTDR_GDI_RESET_THREAD@@MEAAXXZ.c)
 * Callees:
 *     ?GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C019148C (-GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 */

__int64 __fastcall CTDR_GDI_RESET_THREAD::SwitchGdi(CTDR_GDI_RESET_THREAD *this, unsigned __int8 a2)
{
  _VIDEO_WIN32K_CALLBACKS_PARAMS v3; // [rsp+20h] [rbp-28h] BYREF

  v3.PhysDisp = 0LL;
  v3.Param = a2;
  *(_DWORD *)&v3.LockUserSession = 0;
  v3.CalloutType = VideoDxgkFindAdapterTdrCallout;
  v3.Status = -1073741816;
  return CTDR_GDI_RESET_THREAD::GdiCalloutLoop(this, &v3);
}
