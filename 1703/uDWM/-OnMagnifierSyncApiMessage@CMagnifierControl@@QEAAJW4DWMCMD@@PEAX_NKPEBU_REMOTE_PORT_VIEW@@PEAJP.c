/*
 * XREFs of ?OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18007E12C
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032100 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnCaptureRTBitsWorker@CMagnifier@@AEAAJ_KKHPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY@@@Z @ 0x18007D188 (-OnCaptureRTBitsWorker@CMagnifier@@AEAAJ_KKHPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTU.c)
 *     ?LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z @ 0x18007DB78 (-LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z.c)
 */

__int64 __fastcall CMagnifierControl::OnMagnifierSyncApiMessage(
        CMagnifierControl *a1,
        int a2,
        __int64 a3,
        char a4,
        __int64 a5,
        CMagnifier *a6,
        int *a7,
        _DWORD *a8)
{
  unsigned int v8; // ebx
  int v13; // esi
  int v14; // eax
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0;
  v13 = -2147023728;
  if ( (dword_1800C4700 & 1) == 0 )
  {
    dword_1800C460C = -2147023728;
    dword_1800C4700 |= 1u;
  }
  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( a2 == 1073741924 && a4 )
  {
    a6 = 0LL;
    *a8 = 44;
    v14 = CMagnifierControl::LookupAndValidateMagnifier(a1, *(_QWORD *)(a3 + 48), &a6);
    v8 = v14;
    if ( v14 < 0 )
    {
      if ( v14 != -2147023728 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1800C460C, 1LL, v14, 0x16Cu);
        goto LABEL_13;
      }
      v8 = 0;
    }
    else
    {
      v13 = CMagnifier::OnCaptureRTBitsWorker(
              a6,
              *(_QWORD *)(a3 + 64),
              *(_DWORD *)(a3 + 4),
              *(_DWORD *)(a3 + 72),
              (const struct MAGN_UPDATE_TEXTURES_PARAM *)(a3 + 8),
              (struct MILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY *)a3);
    }
    if ( a7 )
      *a7 = v13;
    *(_DWORD *)a3 = 1073741925;
    *(_DWORD *)(a3 + 4) = v13;
  }
LABEL_13:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v8;
}
