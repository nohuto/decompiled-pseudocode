/*
 * XREFs of ?AddOcclusionInformation@CNineGridBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1800BFDA0
 * Callers:
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800877F0 (-CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::AddOcclusionInformation(
        CNineGridBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  unsigned int v3; // ebx
  int v8; // eax

  v3 = 0;
  if ( !*((_BYTE *)this + 120) && !(*(unsigned __int8 (__fastcall **)(CNineGridBrush *))(*(_QWORD *)this + 176LL))(this) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, struct COcclusionContext *, const struct D2D_SIZE_F *))(**((_QWORD **)this + 10)
                                                                                                  + 136LL))(
           *((_QWORD *)this + 10),
           a2,
           a3);
    v3 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x3Eu);
  }
  return v3;
}
