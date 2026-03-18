/*
 * XREFs of ?Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAPEAV1@@Z @ 0x1801E6040
 * Callers:
 *     ?CreateLegacyCommandList@CD2DContext@@MEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap@@_K12PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@2PEAPEAVCD2DCommandList@@@Z @ 0x1801E1BF0 (-CreateLegacyCommandList@CD2DContext@@MEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x1800704F0 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAHAEBQEAVCPolygon@@AEBQEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1801E5FA4 (-Add@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCPolygon.c)
 */

__int64 __fastcall CD2DCommandList::Create(
        struct CD2DResourceManager *a1,
        struct ID2D1PrivateCompositorCommandList *a2,
        struct CD2DCommandList **a3)
{
  unsigned int v4; // edi
  CD2DResource *v7; // rax
  struct CD2DCommandList *v8; // rbx
  unsigned int v10; // [rsp+20h] [rbp-28h]
  struct ID2D1PrivateCompositorCommandList *v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  *a3 = 0LL;
  v7 = (CD2DResource *)operator new(0x80uLL);
  v8 = v7;
  if ( v7 )
  {
    CD2DResource::CD2DResource(v7, a1, 0);
    *((_QWORD *)v8 + 2) = &CD2DEffect::`vftable'{for `IDeviceResource'};
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
    (*(void (__fastcall **)(struct CD2DCommandList *))(*(_QWORD *)v8 + 8LL))(v8);
    v11 = a2;
    v12 = 0LL;
    if ( (unsigned int)CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::Add(
                         (__int64)v8 + 104,
                         &v12,
                         &v11) )
    {
      (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)a2 + 8LL))(a2);
      *a3 = v8;
      v8 = 0LL;
      goto LABEL_10;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x21u);
    v10 = 22;
  }
  else
  {
    v10 = 19;
  }
  v4 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v10);
LABEL_10:
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v8);
  return v4;
}
