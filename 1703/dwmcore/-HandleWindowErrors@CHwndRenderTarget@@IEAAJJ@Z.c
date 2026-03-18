/*
 * XREFs of ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18006C4C0
 * Callers:
 *     ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x18006CC20 (-GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z.c)
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x18006CE40 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJPEA_N@Z @ 0x180072344 (-UpdateMPOCaps@COverlayContext@@QEAAJPEA_N@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800CD870 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x1800CE274 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800CE6DC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x180187E68 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::HandleWindowErrors(COverlayContext **this, int a2)
{
  unsigned int v2; // ebx
  DwmCoreAsimov::CDwmEventManager *Manager; // rax
  int IsOptedIn; // eax
  char v7; // al
  COverlayContext *v8; // rcx

  v2 = a2;
  if ( a2 < 0 )
  {
    Manager = DwmCoreAsimov::CDwmEventManager::GetManager((const struct _TlgProvider_t *)this);
    DwmCoreAsimov::CDwmEventManager::ReportCompositionError(Manager, L"WindowErrors", L"HandleWindowErrors.", v2);
    if ( v2 != -2003304442 )
    {
      if ( v2 == -2003304316 || v2 == -2003304309 )
      {
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(this + 8));
        v2 = 0;
        goto LABEL_18;
      }
      if ( v2 == -2003304307 )
      {
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(this + 8));
        v2 = -2003304307;
        goto LABEL_18;
      }
      if ( v2 != -2003304306 )
      {
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(this + 8));
LABEL_18:
        *((_BYTE *)this + 787) = 1;
        return v2;
      }
      if ( byte_180241C59 )
      {
        v7 = byte_180241C58;
      }
      else
      {
        IsOptedIn = WinSqmIsOptedIn();
        byte_180241C59 = 1;
        v7 = IsOptedIn != 0;
        byte_180241C58 = v7;
      }
      if ( v7 )
        CDwmCoreWinSqm::RecordDisplayDriverName();
    }
    CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(this + 8));
    v2 = -2003304442;
    goto LABEL_18;
  }
  if ( a2 == 142213121 )
  {
    *((_BYTE *)this + 792) = 1;
  }
  else if ( a2 == 142213129 )
  {
    v8 = this[97];
    *((_BYTE *)this + 792) = 0;
    *((_BYTE *)this + 787) = 1;
    if ( v8 )
    {
      COverlayContext::UpdateMPOCaps(v8, 0LL);
      *((_BYTE *)this[97] + 1093) = 1;
    }
    return 0;
  }
  return v2;
}
