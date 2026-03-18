/*
 * XREFs of ?GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180042480
 * Callers:
 *     ?IsSurfaceSizeValid@CDrawingContext@@AEAA_NII@Z @ 0x18000DD5C (-IsSurfaceSizeValid@CDrawingContext@@AEAA_NII@Z.c)
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1800270B0 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 *     ?AdvanceFrame@COffScreenRenderTarget@@UEAAX_K_N@Z @ 0x180027400 (-AdvanceFrame@COffScreenRenderTarget@@UEAAX_K_N@Z.c)
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJAEBU_GUID@@@Z @ 0x180045F1C (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJAEBU_GUID@@@Z.c)
 *     ?Construct@AdapterInfo@CSurfaceManager@@QEAAJAEBU_GUID@@PEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z @ 0x1800B6444 (-Construct@AdapterInfo@CSurfaceManager@@QEAAJAEBU_GUID@@PEAVCDXGIAdapterLimited@@PEAVCD3DDeviceM.c)
 * Callees:
 *     ?GetAvailableDevice@CD3DDeviceManager@@AEBA?AW4DeviceStatus@1@AEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180042BF8 (-GetAvailableDevice@CD3DDeviceManager@@AEBA-AW4DeviceStatus@1@AEBU_GUID@@U_LUID@@PEAPEAVCD3DDevi.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CD3DDeviceManager::GetExistingDevice(
        CD3DDeviceManager *this,
        const struct _GUID *a2,
        struct _LUID a3,
        struct CD3DDeviceLevel1 **a4)
{
  unsigned int v5; // edi
  __int64 v9; // rax
  char *v11; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  *a4 = 0LL;
  v11 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)((char *)this + 244);
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)((char *)this + 244) )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)((char *)this + 252);
  if ( v9 )
  {
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CD3DDeviceManager::GetAvailableDevice)(
                         this,
                         a2,
                         a3,
                         a4) != 1 )
      v5 = -2003304307;
  }
  else
  {
    v5 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, -2003304307, 0x48Cu);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v5;
}
