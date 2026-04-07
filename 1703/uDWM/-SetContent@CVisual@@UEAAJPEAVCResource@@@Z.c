/*
 * XREFs of ?SetContent@CVisual@@UEAAJPEAVCResource@@@Z @ 0x180023DD0
 * Callers:
 *     ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x18001F350 (-UpdateRenderData@CRenderDataVisual@@UEAAJXZ.c)
 *     ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x180020760 (--_GCCanvasVisual@@MEAAPEAXI@Z.c)
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180021270 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x18001E980 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetContent(CVisual *this, struct CResource *a2)
{
  unsigned int v3; // esi
  volatile signed __int32 *v4; // rcx
  CResource *(__fastcall *v7)(CResource *, char); // rax
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx

  v3 = 0;
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 12);
  if ( v4 == (volatile signed __int32 *)a2 )
    return 0LL;
  if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
  {
    v7 = **(CResource *(__fastcall ***)(CResource *, char))v4;
    if ( v7 == CResource::`scalar deleting destructor' )
      CResource::`scalar deleting destructor'((CResource *)v4, 1);
    else
      v7((CResource *)v4, 1);
  }
  *((_QWORD *)this + 12) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  v8 = *((_QWORD *)this + 12);
  if ( v8 )
    v3 = *(_DWORD *)(v8 + 24);
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 408LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
         *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
         v3);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x184u);
  return v10;
}
