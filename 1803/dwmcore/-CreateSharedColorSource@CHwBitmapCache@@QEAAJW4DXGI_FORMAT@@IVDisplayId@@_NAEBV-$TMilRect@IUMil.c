/*
 * XREFs of ?CreateSharedColorSource@CHwBitmapCache@@QEAAJW4DXGI_FORMAT@@IVDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x1801E7D20
 * Callers:
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x1801DDF80 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z @ 0x18001DE20 (--$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FORMAT@@VDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAV1@@Z @ 0x1801F450C (-CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FO.c)
 */

__int64 __fastcall CHwBitmapCache::CreateSharedColorSource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8)
{
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  __int64 *v10; // r15
  __int64 *v11; // r14
  __int64 (__fastcall **v12)(_QWORD, GUID *, __int64 *); // rax
  int v14; // eax
  unsigned int v15; // edi
  int Shared; // eax
  __int64 v17; // rcx
  __int64 v19; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20; // [rsp+90h] [rbp+8h] BYREF

  v20 = 0LL;
  v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 136);
  v10 = a7;
  v11 = (__int64 *)a8;
  v19 = 0LL;
  v12 = *v9;
  *a7 = 0LL;
  *v11 = 0LL;
  v14 = (*v12)(v9, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v20);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x46Bu);
  }
  else
  {
    Shared = CHwDeviceBitmapColorSource::CreateShared(
               *(struct CD3DDeviceLevel1 **)(a1 + 128),
               a4,
               a5,
               a6,
               (__int64)&v19,
               (__int64)v11);
    v15 = Shared;
    if ( Shared < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Shared, 0x475u);
    }
    else
    {
      v17 = *v11;
      *(_QWORD *)(v17 + 344) = *(_QWORD *)(a1 + 488);
      *(_QWORD *)(a1 + 488) = v17;
      (**(void (__fastcall ***)(__int64))v17)(v17);
      *v10 = v19;
    }
  }
  ReleaseInterfaceNoNULL<IBitmapSource>(v20);
  return v15;
}
