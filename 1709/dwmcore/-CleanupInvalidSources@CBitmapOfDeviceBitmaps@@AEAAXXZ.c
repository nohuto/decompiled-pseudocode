/*
 * XREFs of ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x18007DDA0
 * Callers:
 *     ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x18007DCB0 (-SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 *     ?EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AC0C8 (-EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@Re.c)
 *     ?GetValidContentStateForTargetedDisplay@CBitmapOfDeviceBitmaps@@QEAA?AW4Enum@ValidContentState@1@VDisplayId@@@Z @ 0x1801AC680 (-GetValidContentStateForTargetedDisplay@CBitmapOfDeviceBitmaps@@QEAA-AW4Enum@ValidContentState@1.c)
 *     ?HasContributorFromDifferentAdapter@CBitmapOfDeviceBitmaps@@QEAA_NU_LUID@@@Z @ 0x1801AC718 (-HasContributorFromDifferentAdapter@CBitmapOfDeviceBitmaps@@QEAA_NU_LUID@@@Z.c)
 *     ?NotifyInvalidResource@CBitmapOfDeviceBitmaps@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801ACA30 (-NotifyInvalidResource@CBitmapOfDeviceBitmaps@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CHwBitmapColorSource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180085540 (-RemoveResourceNotifier@CHwBitmapColorSource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ @ 0x180086CEC (-Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ.c)
 *     ?IsValid@CHwBitmapColorSource@@QEBA_NXZ @ 0x1801B5BA4 (-IsValid@CHwBitmapColorSource@@QEBA_NXZ.c)
 */

void __fastcall CBitmapOfDeviceBitmaps::CleanupInvalidSources(CBitmapOfDeviceBitmaps *this)
{
  __int64 v1; // rbx
  int v3; // ebp
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rax

  v1 = *((unsigned int *)this + 84);
  v3 = v1;
  if ( (_DWORD)v1 )
  {
    v4 = 96 * v1;
    do
    {
      v4 -= 96LL;
      v5 = v4 + *((_QWORD *)this + 39);
      --v3;
      if ( !CHwBitmapColorSource::IsValid(*(CHwBitmapColorSource **)(v5 + 16)) )
      {
        CHwBitmapColorSource::RemoveResourceNotifier(
          (CHwBitmapColorSource *)(v6 + 112),
          (CBitmapOfDeviceBitmaps *)((char *)this + 280));
        CBitmapOfDeviceBitmaps::DeviceBitmapInfo::Destruct((CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)v5);
        v1 = (unsigned int)(v1 - 1);
        if ( v3 != (_DWORD)v1 )
        {
          v7 = *((_QWORD *)this + 39);
          *(_OWORD *)v5 = *(_OWORD *)(96 * v1 + v7);
          *(_OWORD *)(v5 + 16) = *(_OWORD *)(96 * v1 + v7 + 16);
          *(_OWORD *)(v5 + 32) = *(_OWORD *)(96 * v1 + v7 + 32);
          *(_OWORD *)(v5 + 48) = *(_OWORD *)(96 * v1 + v7 + 48);
          *(_OWORD *)(v5 + 64) = *(_OWORD *)(96 * v1 + v7 + 64);
          *(_OWORD *)(v5 + 80) = *(_OWORD *)(96 * v1 + v7 + 80);
        }
      }
    }
    while ( v3 );
  }
  *((_DWORD *)this + 84) = v1;
}
