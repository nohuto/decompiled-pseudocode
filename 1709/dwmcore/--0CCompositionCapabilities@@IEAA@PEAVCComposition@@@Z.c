/*
 * XREFs of ??0CCompositionCapabilities@@IEAA@PEAVCComposition@@@Z @ 0x1800BFBF0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

CCompositionCapabilities *__fastcall CCompositionCapabilities::CCompositionCapabilities(
        CCompositionCapabilities *this,
        struct CComposition *a2)
{
  char *v2; // r10
  __int64 v4; // rcx
  unsigned int v5; // edx
  unsigned int v6; // eax
  signed int v8; // eax
  CCompositionCapabilities *v9; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)this + 2) = 0;
  v2 = (char *)a2 + 1056;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CCompositionCapabilities::`vftable';
  v9 = this;
  v4 = *((unsigned int *)a2 + 270);
  v5 = (unsigned int)v9;
  v6 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
    v5 = v4 + 1;
  if ( v6 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6 < (unsigned int)v4 ? 0x80070216 : 0, 0xB5u);
  }
  else if ( v5 > *((_DWORD *)v2 + 5) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8u, 1, &v9);
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)v2 + 8 * v4) = v9;
    *((_DWORD *)v2 + 6) = v5;
  }
  return this;
}
