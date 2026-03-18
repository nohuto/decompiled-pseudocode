/*
 * XREFs of ?CheckDeviceState@CHwndRenderTarget@@UEAAJXZ @ 0x18006CA20
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 * Callees:
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18003A580 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJPEA_N@Z @ 0x180072344 (-UpdateMPOCaps@COverlayContext@@QEAAJPEA_N@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800CD870 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x1800CE274 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800CE6DC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x180187E68 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::CheckDeviceState(CHwndRenderTarget *this)
{
  int v1; // ebx
  CHwndRenderTarget *v2; // rdi
  __int64 (*v3)(void); // rax
  int v4; // eax
  DwmCoreAsimov::CDwmEventManager *Manager; // rax
  COverlayContext *v7; // rcx
  int v8; // eax
  int IsOptedIn; // eax
  char v10; // al

  v1 = 0;
  v2 = this;
  if ( *((_BYTE *)this + 725) )
  {
    v1 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, -2003304307, 0x7E8u);
  }
  else
  {
    if ( !*((_QWORD *)this + 7) )
    {
      v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 288LL))((char *)this - 64);
      v1 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v8, 0x7C3u);
    }
    if ( (*((_BYTE *)v2 + 328) & 0x10) != 0 )
    {
      this = (CHwndRenderTarget *)*((_QWORD *)v2 + 7);
      if ( this )
      {
        v3 = *(__int64 (**)(void))(*(_QWORD *)this + 208LL);
        if ( (char *)v3 == (char *)CHwDisplayRenderTarget::CheckDeviceState )
          v4 = CHwDisplayRenderTarget::CheckDeviceState(this);
        else
          v4 = v3();
        v1 = v4;
        if ( v4 < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v4, 0x7D2u);
        if ( *((_BYTE *)v2 + 728) )
        {
          if ( v1 < 0 )
            goto LABEL_15;
          if ( v1 != 142213121 )
            v1 = 142213129;
        }
      }
    }
  }
  if ( v1 >= 0 )
  {
    if ( v1 == 142213121 )
    {
      *((_BYTE *)v2 + 728) = 1;
    }
    else if ( v1 == 142213129 )
    {
      v7 = (COverlayContext *)*((_QWORD *)v2 + 89);
      *((_BYTE *)v2 + 728) = 0;
      *((_BYTE *)v2 + 723) = 1;
      if ( v7 )
      {
        COverlayContext::UpdateMPOCaps(v7, 0LL);
        *(_BYTE *)(*((_QWORD *)v2 + 89) + 1093LL) = 1;
      }
    }
    return (unsigned int)v1;
  }
LABEL_15:
  Manager = DwmCoreAsimov::CDwmEventManager::GetManager(this);
  DwmCoreAsimov::CDwmEventManager::ReportCompositionError(Manager, L"WindowErrors", L"HandleWindowErrors.", v1);
  if ( v1 == -2003304306 )
  {
    if ( byte_180241C59 )
    {
      v10 = byte_180241C58;
    }
    else
    {
      IsOptedIn = WinSqmIsOptedIn();
      byte_180241C59 = 1;
      v10 = IsOptedIn != 0;
      byte_180241C58 = v10;
    }
    if ( v10 )
      CDwmCoreWinSqm::RecordDisplayDriverName();
  }
  CHwndRenderTarget::ReleaseResourcesForDisplayChange(v2);
  *((_BYTE *)v2 + 723) = 1;
  return (unsigned int)v1;
}
