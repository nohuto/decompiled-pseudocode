/*
 * XREFs of ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x18000FE90
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x180001E98 (-Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::CreateD2DEffect(CD2DContext *this, const struct _GUID *a2, struct CD2DEffect **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  struct ID2D1Effect *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, struct ID2D1Effect **))(**((_QWORD **)this + 22) + 504LL))(
         *((_QWORD *)this + 22),
         a2,
         &v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x9C5u);
    goto LABEL_6;
  }
  v7 = CD2DEffect::Create(*((struct CD2DResourceManager **)this + 18), v9, a3);
  v6 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x9C6u);
LABEL_6:
    *a3 = 0LL;
  }
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v9);
  return v6;
}
