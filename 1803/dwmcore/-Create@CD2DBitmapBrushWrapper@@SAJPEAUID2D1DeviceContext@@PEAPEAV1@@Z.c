/*
 * XREFs of ?Create@CD2DBitmapBrushWrapper@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z @ 0x1800D6074
 * Callers:
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800968C8 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CD2DBitmapBrushWrapper@@AEAA@PEAUID2D1BitmapBrush1@@PEAUID2D1Bitmap1@@@Z @ 0x1800D61B0 (--0CD2DBitmapBrushWrapper@@AEAA@PEAUID2D1BitmapBrush1@@PEAUID2D1Bitmap1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapBrushWrapper::Create(struct ID2D1DeviceContext *a1, struct CD2DBitmapBrushWrapper **a2)
{
  __int64 (__fastcall *v4)(struct ID2D1DeviceContext *, _QWORD, _QWORD, _QWORD, _OWORD *, struct ID2D1Bitmap1 **); // rax
  int v5; // eax
  unsigned int v6; // ebx
  CD2DBitmapBrushWrapper *v7; // rax
  struct CD2DBitmapBrushWrapper *v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-60h]
  __int128 v11; // [rsp+40h] [rbp-40h]
  unsigned __int64 v12; // [rsp+50h] [rbp-30h]
  _OWORD v13[2]; // [rsp+60h] [rbp-20h] BYREF
  struct ID2D1Bitmap1 *v14; // [rsp+A0h] [rbp+20h] BYREF
  struct ID2D1BitmapBrush1 *v15; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v16; // [rsp+B0h] [rbp+30h]

  *a2 = 0LL;
  LODWORD(v12) = 0;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  *(_QWORD *)&v11 = 0x100000057LL;
  *((_QWORD *)&v11 + 1) = 0x42C0000042C00000LL;
  v4 = *(__int64 (__fastcall **)(struct ID2D1DeviceContext *, _QWORD, _QWORD, _QWORD, _OWORD *, struct ID2D1Bitmap1 **))(*(_QWORD *)a1 + 456LL);
  v13[1] = v12;
  v13[0] = v11;
  v5 = v4(a1, 0LL, 0LL, 0LL, v13, &v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    v10 = 38;
    goto LABEL_12;
  }
  v5 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, struct ID2D1Bitmap1 *, _QWORD, _QWORD, struct ID2D1BitmapBrush1 **))(*(_QWORD *)a1 + 528LL))(
         a1,
         v14,
         0LL,
         0LL,
         &v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    v10 = 41;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v10);
    goto LABEL_7;
  }
  v7 = (CD2DBitmapBrushWrapper *)operator new(0x20uLL);
  if ( v7 )
    v8 = CD2DBitmapBrushWrapper::CD2DBitmapBrushWrapper(v7, v15, v14);
  else
    v8 = 0LL;
  *a2 = v8;
  if ( v8 )
  {
    (**(void (__fastcall ***)(struct CD2DBitmapBrushWrapper *))v8)(v8);
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2Du);
  }
LABEL_7:
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v15);
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v14);
  return v6;
}
