/*
 * XREFs of ??0CCompositionCapabilities@@IEAA@PEAVCComposition@@@Z @ 0x1801761B0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

CCompositionCapabilities *__fastcall CCompositionCapabilities::CCompositionCapabilities(
        CCompositionCapabilities *this,
        struct CComposition *a2)
{
  char *v2; // r10
  __int64 v4; // rcx
  unsigned int v5; // edx
  unsigned int v6; // eax
  int v7; // eax
  CCompositionCapabilities *v9; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)this + 2) = 0;
  v2 = (char *)a2 + 1120;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CCompositionCapabilities::`vftable';
  v9 = this;
  v4 = *((unsigned int *)a2 + 286);
  v5 = (unsigned int)v9;
  v6 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
    v5 = v4 + 1;
  if ( v6 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6 < (unsigned int)v4 ? 0x80070216 : 0, 0xB5u);
  }
  else if ( v5 > *((_DWORD *)v2 + 5) )
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8u, 1, &v9);
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)v2 + 8 * v4) = v9;
    *((_DWORD *)v2 + 6) = v5;
  }
  return this;
}
