/*
 * XREFs of ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x1801E1980
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x1801EC7D4 (-Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD2DContext::CreateD2DEffect(CD2DContext *this, const struct _GUID *a2, struct CD2DEffect **a3)
{
  int v5; // ebx
  unsigned int v6; // eax
  struct ID2D1Effect *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, struct ID2D1Effect **))(**((_QWORD **)this + 22) + 504LL))(
         *((_QWORD *)this + 22),
         a2,
         &v8);
  if ( v5 < 0 )
  {
    v6 = 1989;
    goto LABEL_5;
  }
  v5 = CD2DEffect::Create(*((struct CD2DResourceManager **)this + 18), v8, a3);
  if ( v5 < 0 )
  {
    v6 = 1990;
LABEL_5:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v6);
    *a3 = 0LL;
  }
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v8);
  return (unsigned int)v5;
}
