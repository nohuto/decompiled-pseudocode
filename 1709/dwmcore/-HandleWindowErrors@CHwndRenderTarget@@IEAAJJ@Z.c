/*
 * XREFs of ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x1800179B4
 * Callers:
 *     ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x1800182C0 (-GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z.c)
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x1800185B0 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ?UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z @ 0x180017388 (-UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1801362D0 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x1801914C8 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::HandleWindowErrors(CHwndRenderTarget *this, int a2)
{
  unsigned int v2; // ebx
  int IsOptedIn; // eax
  char v6; // al

  v2 = a2;
  if ( a2 < 0 )
  {
    if ( a2 != -2003304442 )
    {
      if ( a2 == -2003304309 )
      {
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)((char *)this + 64));
        v2 = 0;
        goto LABEL_18;
      }
      if ( a2 == -2003304307 )
      {
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)((char *)this + 64));
        v2 = -2003304307;
        goto LABEL_18;
      }
      if ( a2 != -2003304306 )
      {
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)((char *)this + 64));
LABEL_18:
        *((_BYTE *)this + 802) = 1;
        return v2;
      }
      if ( byte_180272F71 )
      {
        v6 = byte_180272F70;
      }
      else
      {
        IsOptedIn = WinSqmIsOptedIn();
        byte_180272F71 = 1;
        v6 = IsOptedIn != 0;
        byte_180272F70 = v6;
      }
      if ( v6 )
        CDwmCoreWinSqm::RecordDisplayDriverName();
    }
    CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)((char *)this + 64));
    v2 = -2003304442;
    goto LABEL_18;
  }
  if ( a2 == 142213121 )
  {
    *((_BYTE *)this + 805) = 1;
  }
  else if ( a2 == 142213129 )
  {
    *((_BYTE *)this + 805) = 0;
    *((_BYTE *)this + 802) = 1;
    CHwndRenderTarget::UpdateMPOCaps(this, 1);
    return 0;
  }
  return v2;
}
