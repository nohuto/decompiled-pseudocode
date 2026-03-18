/*
 * XREFs of ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C0159E20
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8F5C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00DC9B0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C010D5A4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0153370 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0153734 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01569C8 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqqq @ 0x1C0042734 (McTemplateK0pqqqq.c)
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C010CA28 (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(
        ADAPTER_RENDER *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v6; // ebp
  _QWORD *v9; // rax
  int v10; // ecx
  ADAPTER_DISPLAY *v11; // rcx
  int v13; // [rsp+20h] [rbp-28h]
  int v14; // [rsp+28h] [rbp-20h]
  unsigned int v15; // [rsp+30h] [rbp-18h]

  v6 = a3;
  if ( (a5 & *((_DWORD *)this + 135)) != 0 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this);
    v9[3] = 275LL;
    v9[4] = 39LL;
    v9[5] = *((_QWORD *)this + 2);
    v10 = *((_DWORD *)this + 135);
    v9[7] = 0LL;
    v9[6] = v10 & a5;
    WdLogEvent5_WdCriticalError(v9);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v15 = a4;
    v14 = v6;
    v13 = a2;
    McTemplateK0pqqqq(
      (__int64)this,
      &FlushPresentReferencesAndDisableOverlays,
      a3,
      *((_QWORD *)this + 2),
      v13,
      v14,
      v15,
      a5);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int))(*(_QWORD *)(*((_QWORD *)this + 65) + 8LL)
                                                                       + 1008LL))(
    *((_QWORD *)this + 66),
    a2,
    v6,
    a4,
    a5);
  *((_DWORD *)this + 135) |= a5;
  if ( a4 )
  {
    v11 = *(ADAPTER_DISPLAY **)(*((_QWORD *)this + 2) + 2456LL);
    if ( v11 )
      ADAPTER_DISPLAY::DisableAllPlanesOnVidPnSourcesImmediate(v11, a4);
  }
  return 0LL;
}
