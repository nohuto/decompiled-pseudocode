/*
 * XREFs of ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800B22E0
 * Callers:
 *     ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x180042510 (-OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@.c)
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800B25D8 (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x1801355F0 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 * Callees:
 *     ?RemoveResourceNotifier@CHwBitmapColorSource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180044A50 (-RemoveResourceNotifier@CHwBitmapColorSource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CHwBitmapColorSource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180044CD0 (-AddResourceNotifier@CHwBitmapColorSource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ @ 0x180056A68 (-Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ.c)
 *     ?Construct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x180056CCC (-Construct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x1800B2458 (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800B33A8 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::SetDeviceBitmapColorSource(__int64 a1, int a2, int a3, __int64 a4)
{
  char v8; // r14
  CHwBitmapColorSource *v9; // rdi
  int v10; // eax
  int v11; // esi
  __int64 v12; // rcx
  CBitmapOfDeviceBitmaps::DeviceBitmapInfo *v13; // rdi
  int v14; // eax
  __int64 v16; // rcx
  CHwBitmapColorSource *v17; // [rsp+30h] [rbp-48h]
  CBitmapOfDeviceBitmaps::DeviceBitmapInfo *v18; // [rsp+80h] [rbp+8h] BYREF
  __int64 v19; // [rsp+98h] [rbp+20h]

  v19 = a4;
  v8 = 0;
  CBitmapOfDeviceBitmaps::CleanupInvalidSources((CBitmapOfDeviceBitmaps *)a1);
  v9 = (CHwBitmapColorSource *)(a4 + 104);
  v17 = v9;
  v10 = CHwBitmapColorSource::AddResourceNotifier(
          v9,
          (struct IDeviceResourceNotify *)((a1 + 232) & -(__int64)(a1 != 0)));
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2B1u);
    goto LABEL_10;
  }
  LODWORD(v12) = *(_DWORD *)(a1 + 288);
  v8 = 1;
  while ( (_DWORD)v12 )
  {
    v12 = (unsigned int)(v12 - 1);
    v13 = (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)(*(_QWORD *)(a1 + 264) + 96 * v12);
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
        (CHwBitmapColorSource *)(v16 + 104),
        (const struct IDeviceResourceNotify *)(a1 + 232));
    CBitmapOfDeviceBitmaps::DeviceBitmapInfo::Destruct(v13);
  }
  else
  {
    v14 = DynArrayImpl<1>::AddMultiple(a1 + 264, 96LL, 1LL, &v18);
    v11 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x2C2u);
      goto LABEL_9;
    }
    v13 = v18;
  }
  CBitmapOfDeviceBitmaps::DeviceBitmapInfo::Construct((__int64)v13, a2, a3, v19);
LABEL_9:
  v9 = v17;
LABEL_10:
  if ( v11 < 0 && v8 )
    CHwBitmapColorSource::RemoveResourceNotifier(
      v9,
      (const struct IDeviceResourceNotify *)((a1 + 232) & -(__int64)(a1 != 0)));
  return (unsigned int)v11;
}
