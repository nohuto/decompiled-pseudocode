/*
 * XREFs of ?CreatePencilStroke@CD2DContext@@UEAAJPEBUD2D1_PENCIL_POINT@@PEAPEAVCD2DPencil@@@Z @ 0x180198120
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DPencil@@SAJPEAVCD2DResourceManager@@PEAUID2D1PencilStroke@@PEAPEAV1@@Z @ 0x18019E8D0 (-Create@CD2DPencil@@SAJPEAVCD2DResourceManager@@PEAUID2D1PencilStroke@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD2DContext::CreatePencilStroke(
        CD2DContext *this,
        const struct D2D1_PENCIL_POINT *a2,
        struct CD2DPencil **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  struct ID2D1PencilStroke *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, const struct D2D1_PENCIL_POINT *, struct ID2D1PencilStroke **))(**((_QWORD **)this + 24) + 24LL))(
         *((_QWORD *)this + 24),
         a2,
         &v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x237u);
  }
  else
  {
    v7 = CD2DPencil::Create(*((struct CD2DResourceManager **)this + 18), v9, a3);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x238u);
  }
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v9);
  return v6;
}
