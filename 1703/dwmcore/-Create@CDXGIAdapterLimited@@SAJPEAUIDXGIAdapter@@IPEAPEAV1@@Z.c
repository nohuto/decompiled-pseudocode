/*
 * XREFs of ?Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x1800B52F4
 * Callers:
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800460F0 (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B5384 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?Initialize@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800B5828 (-Initialize@CDXGIAdapterLimited@@AEAAJXZ.c)
 *     ??0CDXGIAdapterLimited@@AEAA@IPEAUIDXGIAdapter@@@Z @ 0x1800B5A48 (--0CDXGIAdapterLimited@@AEAA@IPEAUIDXGIAdapter@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDXGIAdapterLimited::Create(
        struct IDXGIAdapter *a1,
        unsigned int a2,
        struct CDXGIAdapterLimited **a3)
{
  CDXGIAdapterLimited *v6; // rax
  CDXGIAdapterLimited *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi

  v6 = (CDXGIAdapterLimited *)operator new(0x190uLL);
  if ( v6 )
    v7 = CDXGIAdapterLimited::CDXGIAdapterLimited(v6, a2, a1);
  else
    v7 = 0LL;
  if ( v7 )
  {
    (**(void (__fastcall ***)(CDXGIAdapterLimited *))v7)(v7);
    v8 = CDXGIAdapterLimited::Initialize(v7);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x5Au);
    }
    else
    {
      *a3 = v7;
      (**(void (__fastcall ***)(CDXGIAdapterLimited *))v7)(v7);
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x56u);
  }
  ReleaseInterfaceNoNULL<CPolygon>(v7);
  return v9;
}
