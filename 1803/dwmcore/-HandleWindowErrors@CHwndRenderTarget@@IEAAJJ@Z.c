/*
 * XREFs of ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18005FF50
 * Callers:
 *     ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x180060A80 (-GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z.c)
 *     ?InternalPresent@CHwndRenderTarget@@QEAAJ_NAEBURenderTargetPresentParameters@@@Z @ 0x180061C44 (-InternalPresent@CHwndRenderTarget@@QEAAJ_NAEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z @ 0x180062F50 (-UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z.c)
 *     ?ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z @ 0x1800C53F0 (-ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800D7A60 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x1801C8460 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
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
        v2 = 0;
        goto LABEL_18;
      }
      if ( a2 == -2003304307 )
      {
        v2 = -2003304307;
        goto LABEL_18;
      }
      if ( a2 != -2003304306 )
      {
LABEL_18:
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)((char *)this + 64));
        *((_BYTE *)this + 161) = 1;
        return v2;
      }
      if ( byte_1802DA4D8 )
      {
        v6 = byte_1802DA4D9;
      }
      else
      {
        IsOptedIn = WinSqmIsOptedIn();
        byte_1802DA4D8 = 1;
        v6 = IsOptedIn != 0;
        byte_1802DA4D9 = v6;
      }
      if ( v6 )
        CDwmCoreWinSqm::RecordDisplayDriverName();
    }
    v2 = -2003304442;
    goto LABEL_18;
  }
  switch ( a2 )
  {
    case 142213121:
      *((_BYTE *)this + 851) = 1;
      return v2;
    case 142213129:
      *((_BYTE *)this + 851) = 0;
      *((_BYTE *)this + 161) = 1;
      CHwndRenderTarget::UpdateMPOCaps(this, 1);
      return 0;
    case 142213130:
    case 142213167:
      ScheduleCompositionPass(0LL, 0x2000LL);
      *((_BYTE *)this + 849) = 1;
      return 0;
  }
  return v2;
}
