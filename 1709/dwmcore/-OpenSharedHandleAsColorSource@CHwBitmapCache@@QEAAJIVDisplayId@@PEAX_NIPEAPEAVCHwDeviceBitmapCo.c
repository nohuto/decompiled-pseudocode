/*
 * XREFs of ?OpenSharedHandleAsColorSource@CHwBitmapCache@@QEAAJIVDisplayId@@PEAX_NIPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x1801AF30C
 * Callers:
 *     ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x1801A5870 (-OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@PEAX_NIPEAPEAV1@@Z @ 0x1801B70CC (-OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@.c)
 */

__int64 __fastcall CHwBitmapCache::OpenSharedHandleAsColorSource(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        int a6,
        __int64 *a7)
{
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  __int64 *v10; // r14
  __int64 (__fastcall **v13)(_QWORD, GUID *, __int64 *); // rax
  signed int v14; // eax
  unsigned int v15; // edi
  signed int v16; // eax
  __int64 v17; // rcx
  char v19; // [rsp+28h] [rbp-30h]
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v20 = 0LL;
  v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1[17];
  v10 = a7;
  v13 = *v8;
  *a7 = 0LL;
  v14 = (*v13)(v8, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v20);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x4A3u);
  }
  else
  {
    v19 = a5;
    v16 = CHwDeviceBitmapColorSource::OpenShared(a1[16], v20, a2, a3, a4, v19, a6, v10);
    v15 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x4ACu);
    }
    else
    {
      v17 = *v10;
      *(_QWORD *)(v17 + 344) = a1[61];
      a1[61] = v17;
      (**(void (__fastcall ***)(__int64))v17)(v17);
    }
  }
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>(v20);
  return v15;
}
