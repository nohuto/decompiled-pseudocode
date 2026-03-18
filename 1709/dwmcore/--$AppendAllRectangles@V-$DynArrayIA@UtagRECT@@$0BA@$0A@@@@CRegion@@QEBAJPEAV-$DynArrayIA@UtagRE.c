/*
 * XREFs of ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@Z @ 0x180088D38
 * Callers:
 *     ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x18008695C (-Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z.c)
 *     ?AddDirtyRegion@CSectionBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x1800880B0 (-AddDirtyRegion@CSectionBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009BC90 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x18009D64C (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z @ 0x18009DA90 (-GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z.c)
 *     ?PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x1801B2310 (-PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800308F0 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180030950 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x1800685D8 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180089398 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 */

__int64 __fastcall CRegion::AppendAllRectangles<DynArrayIA<tagRECT,16,0>>(FastRegion::CRegion *a1, __int64 a2)
{
  int RectangleCount; // eax
  unsigned int v5; // esi
  int v6; // r10d
  FastRegion::Internal::CRgnData *v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-48h]
  _BYTE v10[8]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]
  _DWORD *v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+48h] [rbp-20h]
  int v14; // [rsp+50h] [rbp-18h]

  RectangleCount = FastRegion::CRegion::GetRectangleCount(a1);
  v5 = *(_DWORD *)(a2 + 24);
  v6 = DynArrayImpl<0>::AddMultiple(a2, 16, RectangleCount, 0LL);
  if ( v6 >= 0 )
  {
    FastRegion::Internal::CRgnData::BeginIterator(
      *(FastRegion::Internal::CRgnData **)a1,
      (struct FastRegion::CRegion::Iterator *)v10);
    while ( (unsigned __int64)v12 < v11 )
    {
      DWORD1(v9) = *v12;
      HIDWORD(v9) = v12[2];
      LODWORD(v9) = *(_DWORD *)(v13 + 8LL * v14);
      DWORD2(v9) = *(_DWORD *)(v13 + 4LL * (2 * v14 + 1));
      v7 = (FastRegion::Internal::CRgnData *)(2LL * v5);
      *(_OWORD *)(*(_QWORD *)a2 + 8LL * (_QWORD)v7) = v9;
      FastRegion::Internal::CRgnData::StepIterator(v7, (struct FastRegion::CRegion::Iterator *)v10);
      ++v5;
    }
  }
  return (unsigned int)v6;
}
