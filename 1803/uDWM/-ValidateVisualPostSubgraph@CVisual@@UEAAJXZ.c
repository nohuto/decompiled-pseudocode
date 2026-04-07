/*
 * XREFs of ?ValidateVisualPostSubgraph@CVisual@@UEAAJXZ @ 0x1800260A0
 * Callers:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ @ 0x180070BB0 (-ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ValidateVisualPostSubgraph(CVisual *this)
{
  int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( (*((_DWORD *)this + 20) & 0x100) != 0 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 504LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           *((_DWORD *)this + 22) != 0);
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x3E5u);
    if ( v1 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0xAFu);
    else
      *((_DWORD *)this + 20) &= ~0x100u;
  }
  return (unsigned int)v1;
}
