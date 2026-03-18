/*
 * XREFs of ?UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z @ 0x180036CE4
 * Callers:
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18007A120 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ??0CDxHandleBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x18007A3B0 (--0CDxHandleBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_IN.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1801B6554 (--0CDxHandleYUVBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 *     ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1801B7320 (-UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDisplayId@CDxHandleBitmapRealization@@UEAA_NVDisplayId@@@Z @ 0x18007A1F0 (-SetDisplayId@CDxHandleBitmapRealization@@UEAA_NVDisplayId@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B7154 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x18013329C (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 */

__int64 __fastcall CBitmapRealization::UpdateDisplayRestriction(CBitmapRealization *this, int a2, HMONITOR a3)
{
  unsigned int v4; // ebx
  __int64 (__fastcall *v6)(CBitmapRealization *, _QWORD); // rax
  int CurrentDisplaySet; // eax
  int DisplayIdFromMonitor; // eax
  CDisplaySet *v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v4 = DisplayId::Invalid;
  v11 = DisplayId::Invalid;
  if ( a2 && a3 )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v10);
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0xE3u);
    }
    else
    {
      DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(v10, a3, (struct DisplayId *)&v11);
      if ( DisplayIdFromMonitor < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayIdFromMonitor, 0xE6u);
      v4 = v11;
    }
  }
  else
  {
    v4 = DisplayId::None;
  }
  ReleaseInterface<CDisplaySet const>(&v10);
  v6 = *(__int64 (__fastcall **)(CBitmapRealization *, _QWORD))(*(_QWORD *)this + 48LL);
  if ( (char *)v6 == (char *)CDxHandleBitmapRealization::SetDisplayId )
    return CDxHandleBitmapRealization::SetDisplayId(this, v4);
  else
    return v6(this, v4);
}
