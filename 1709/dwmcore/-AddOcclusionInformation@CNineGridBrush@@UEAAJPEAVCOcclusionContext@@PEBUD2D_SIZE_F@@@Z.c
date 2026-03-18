/*
 * XREFs of ?AddOcclusionInformation@CNineGridBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1800708F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::AddOcclusionInformation(
        CNineGridBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  unsigned int v3; // ebx
  int v8; // eax

  v3 = 0;
  if ( !*((_BYTE *)this + 120) && !(*(unsigned __int8 (__fastcall **)(CNineGridBrush *))(*(_QWORD *)this + 192LL))(this) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, struct COcclusionContext *, const struct D2D_SIZE_F *))(**((_QWORD **)this + 10)
                                                                                                  + 152LL))(
           *((_QWORD *)this + 10),
           a2,
           a3);
    v3 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x3Eu);
  }
  return v3;
}
