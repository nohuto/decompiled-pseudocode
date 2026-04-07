/*
 * XREFs of ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18000C1A0
 * Callers:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x180009148 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x18000B084 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x18000BE40 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x18000C720 (-ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x18000ED48 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18000F83C (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x18006C508 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18007728C (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008B394 (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x18009C0A0 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800250B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ResourceHelper::CreateRectangleGeometry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct CResource **a5)
{
  struct CResource **v5; // rsi
  struct CResource **v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  int v10; // eax

  v5 = a5;
  a5 = (struct CResource **)*a5;
  v6 = a5;
  if ( !a5 )
  {
    v10 = CResource::Create(26LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &a5);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x44u);
      v6 = a5;
      goto LABEL_4;
    }
    v6 = a5;
  }
  v7 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD))(*(_QWORD *)v6[2] + 688LL))(
         v6[2],
         *((unsigned int *)v6 + 6));
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x55u);
  }
  else
  {
    *v5 = (struct CResource *)v6;
    v6 = 0LL;
  }
LABEL_4:
  if ( v6 )
    CBaseObject::Release((CBaseObject *)v6);
  return v8;
}
