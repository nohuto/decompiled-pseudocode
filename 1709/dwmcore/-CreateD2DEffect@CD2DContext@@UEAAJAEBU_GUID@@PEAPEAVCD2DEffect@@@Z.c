/*
 * XREFs of ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x1801A95E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x1801B4140 (-Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD2DContext::CreateD2DEffect(CD2DContext *this, const struct _GUID *a2, struct CD2DEffect **a3)
{
  signed int v5; // eax
  unsigned int v6; // ebx
  signed int v7; // eax
  struct ID2D1Effect *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, struct ID2D1Effect **))(**((_QWORD **)this + 22) + 504LL))(
         *((_QWORD *)this + 22),
         a2,
         &v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x779u);
    goto LABEL_5;
  }
  v7 = CD2DEffect::Create(*((struct CD2DResourceManager **)this + 18), v9, a3);
  v6 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x77Au);
LABEL_5:
    *a3 = 0LL;
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v9);
  return v6;
}
