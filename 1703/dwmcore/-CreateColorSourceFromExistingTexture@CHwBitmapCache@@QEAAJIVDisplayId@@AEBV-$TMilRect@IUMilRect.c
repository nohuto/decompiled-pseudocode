/*
 * XREFs of ?CreateColorSourceFromExistingTexture@CHwBitmapCache@@QEAAJIVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x180043C70
 * Callers:
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800B25D8 (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x1800C4C9C (-CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSourc.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwBitmapCache::CreateColorSourceFromExistingTexture(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 *v6; // r14
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = 0LL;
  v6 = (__int64 *)a6;
  v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 144);
  *(_QWORD *)a6 = 0LL;
  v10 = (**v8)(v8, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v15);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x4D4u);
  }
  else
  {
    v12 = CHwDeviceBitmapColorSource::CreateFromExistingTexture(
            *(struct CD3DDeviceLevel1 **)(a1 + 136),
            a4,
            a5,
            (__int64)v6);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x4DCu);
    }
    else
    {
      v13 = *v6;
      *(_QWORD *)(v13 + 336) = *(_QWORD *)(a1 + 496);
      *(_QWORD *)(a1 + 496) = v13;
      (**(void (__fastcall ***)(__int64))v13)(v13);
    }
  }
  ReleaseInterfaceNoNULL<ID2D1Ink>(v15);
  return v11;
}
