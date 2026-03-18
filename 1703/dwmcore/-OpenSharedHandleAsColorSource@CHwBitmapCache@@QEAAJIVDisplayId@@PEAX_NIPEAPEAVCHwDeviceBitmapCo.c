/*
 * XREFs of ?OpenSharedHandleAsColorSource@CHwBitmapCache@@QEAAJIVDisplayId@@PEAX_NIPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x180043B88
 * Callers:
 *     ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x180042510 (-OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@PEAX_NIPEAPEAV1@@Z @ 0x1800C4B9C (-OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  int v14; // eax
  unsigned int v15; // edi
  int v16; // eax
  __int64 v17; // rcx
  char v19; // [rsp+28h] [rbp-30h]
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v20 = 0LL;
  v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1[18];
  v10 = a7;
  v13 = *v8;
  *a7 = 0LL;
  v14 = (*v13)(v8, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v20);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x4A3u);
  }
  else
  {
    v19 = a5;
    v16 = CHwDeviceBitmapColorSource::OpenShared(a1[17], v20, a2, a3, a4, v19, a6, v10);
    v15 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x4ACu);
    }
    else
    {
      v17 = *v10;
      *(_QWORD *)(v17 + 336) = a1[62];
      a1[62] = v17;
      (**(void (__fastcall ***)(__int64))v17)(v17);
    }
  }
  ReleaseInterfaceNoNULL<ID2D1Ink>(v20);
  return v15;
}
