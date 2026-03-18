/*
 * XREFs of ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x18007DCB0
 * Callers:
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x18007DF74 (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x1801A5460 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 *     ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x1801A5870 (-OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x18007DDA0 (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x18007E80C (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?RemoveResourceNotifier@CHwBitmapColorSource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180085540 (-RemoveResourceNotifier@CHwBitmapColorSource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CHwBitmapColorSource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180085570 (-AddResourceNotifier@CHwBitmapColorSource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?Construct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x180086C90 (-Construct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 *     ?Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ @ 0x180086CEC (-Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::SetDeviceBitmapColorSource(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  char v8; // r14
  CHwBitmapColorSource *v9; // rdi
  signed int v10; // eax
  int v11; // esi
  __int64 v12; // rcx
  CBitmapOfDeviceBitmaps::DeviceBitmapInfo *v13; // rdi
  signed int v14; // eax
  __int64 v16; // rcx
  CHwBitmapColorSource *v17; // [rsp+30h] [rbp-48h]
  CBitmapOfDeviceBitmaps::DeviceBitmapInfo *v18; // [rsp+80h] [rbp+8h] BYREF
  __int64 v19; // [rsp+98h] [rbp+20h]

  v19 = a4;
  v8 = 0;
  CBitmapOfDeviceBitmaps::CleanupInvalidSources((CBitmapOfDeviceBitmaps *)a1);
  v9 = (CHwBitmapColorSource *)(a4 + 112);
  v17 = v9;
  v10 = CHwBitmapColorSource::AddResourceNotifier(
          v9,
          (struct IDeviceResourceNotify *)((a1 + 280) & -(__int64)(a1 != 0)));
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x26Eu);
    goto LABEL_10;
  }
  LODWORD(v12) = *(_DWORD *)(a1 + 336);
  v8 = 1;
  while ( (_DWORD)v12 )
  {
    v12 = (unsigned int)(v12 - 1);
    v13 = (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)(*(_QWORD *)(a1 + 312) + 96 * v12);
    if ( *(_DWORD *)v13 == a2 )
      goto LABEL_5;
  }
  v13 = 0LL;
LABEL_5:
  v18 = v13;
  if ( v13 )
  {
    v16 = *((_QWORD *)v13 + 2);
    if ( v16 )
      CHwBitmapColorSource::RemoveResourceNotifier(
        (CHwBitmapColorSource *)(v16 + 112),
        (const struct IDeviceResourceNotify *)(a1 + 280));
    CBitmapOfDeviceBitmaps::DeviceBitmapInfo::Destruct(v13);
  }
  else
  {
    v14 = DynArrayImpl<1>::AddMultiple(a1 + 312, 96LL, 1LL, &v18);
    v11 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x27Fu);
      goto LABEL_9;
    }
    v13 = v18;
  }
  CBitmapOfDeviceBitmaps::DeviceBitmapInfo::Construct(v13, a2, a3, v19);
LABEL_9:
  v9 = v17;
LABEL_10:
  if ( v11 < 0 && v8 )
    CHwBitmapColorSource::RemoveResourceNotifier(
      v9,
      (const struct IDeviceResourceNotify *)((a1 + 280) & -(__int64)(a1 != 0)));
  return (unsigned int)v11;
}
