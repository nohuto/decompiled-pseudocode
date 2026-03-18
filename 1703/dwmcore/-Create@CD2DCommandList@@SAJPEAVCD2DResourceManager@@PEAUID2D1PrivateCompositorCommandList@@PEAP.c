/*
 * XREFs of ?Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAPEAV1@@Z @ 0x1800C2DA0
 * Callers:
 *     ?CreateLegacyCommandList@CD2DContext@@MEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap@@_K12PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@2PEAPEAVCD2DCommandList@@@Z @ 0x1800AD0A0 (-CreateLegacyCommandList@CD2DContext@@MEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap.c)
 * Callees:
 *     ?AddRef@CHolographicClient@@UEAAKXZ @ 0x1800471A0 (-AddRef@CHolographicClient@@UEAAKXZ.c)
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x18004BDD4 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Add@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAHAEBQEAVCPolygon@@AEBQEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1800C46A0 (-Add@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCPolygon.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DCommandList::Create(
        struct CD2DResourceManager *a1,
        struct ID2D1PrivateCompositorCommandList *a2,
        struct CD2DCommandList **a3)
{
  unsigned int v4; // edi
  CD2DResource *v7; // rax
  CBitmapOfDeviceBitmaps *v8; // rbx
  __int64 (__fastcall *v9)(CBitmapOfDeviceBitmaps *); // rax
  struct ID2D1PrivateCompositorCommandList *v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  *a3 = 0LL;
  v7 = (CD2DResource *)operator new(0x80uLL);
  v8 = v7;
  if ( v7 )
  {
    CD2DResource::CD2DResource(v7, a1, 0);
    *((_QWORD *)v8 + 2) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResource'};
    *(_QWORD *)v8 = &CD2DCommandList::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v8 + 13) = 0LL;
    *((_QWORD *)v8 + 14) = 0LL;
    *((_DWORD *)v8 + 30) = 0;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v9 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v8 + 8LL);
    if ( v9 == CHolographicClient::AddRef )
      CHolographicClient::AddRef(v8);
    else
      v9(v8);
    v11 = a2;
    v12 = 0LL;
    if ( (unsigned int)CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::Add(
                         (char *)v8 + 104,
                         &v12,
                         &v11) )
    {
      (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)a2 + 8LL))(a2);
      *a3 = v8;
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x21u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x16u);
      (*(void (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x13u);
  }
  return v4;
}
