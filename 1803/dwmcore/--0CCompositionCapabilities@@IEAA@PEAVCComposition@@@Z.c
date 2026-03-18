/*
 * XREFs of ??0CCompositionCapabilities@@IEAA@PEAVCComposition@@@Z @ 0x1800C6B90
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

CCompositionCapabilities *__fastcall CCompositionCapabilities::CCompositionCapabilities(
        CCompositionCapabilities *this,
        struct CComposition *a2)
{
  char *v2; // r10
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v7; // eax
  CCompositionCapabilities *v8; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)this + 2) = 0;
  v2 = (char *)a2 + 1080;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CCompositionCapabilities::`vftable';
  v4 = *((_DWORD *)a2 + 276);
  v8 = this;
  v5 = v4 + 1;
  if ( v4 + 1 < v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4 + 1 < v4 ? 0x80070216 : 0, 0xB5u);
  }
  else if ( v5 > *((_DWORD *)v2 + 5) )
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8u, 1, &v8);
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)v2 + 8LL * v4) = v8;
    *((_DWORD *)v2 + 6) = v5;
  }
  return this;
}
