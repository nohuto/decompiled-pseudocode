/*
 * XREFs of ?ValidateVisualPostSubgraph@CVisual@@UEAAJXZ @ 0x180018570
 * Callers:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180018160 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ @ 0x180069E90 (-ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ValidateVisualPostSubgraph(CVisual *this)
{
  int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( (*((_DWORD *)this + 20) & 0x100) != 0 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 488LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           *((_DWORD *)this + 22) != 0);
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x567u);
    if ( v1 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0xE4u);
    else
      *((_DWORD *)this + 20) &= ~0x100u;
  }
  return (unsigned int)v1;
}
