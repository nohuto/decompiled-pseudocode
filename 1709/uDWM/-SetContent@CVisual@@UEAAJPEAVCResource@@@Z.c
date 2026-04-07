/*
 * XREFs of ?SetContent@CVisual@@UEAAJPEAVCResource@@@Z @ 0x180018780
 * Callers:
 *     ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x1800152B0 (-UpdateRenderData@CRenderDataVisual@@UEAAJXZ.c)
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180023880 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180024B80 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetContent(CVisual *this, struct CResource *a2)
{
  unsigned int v3; // esi
  volatile signed __int32 *v4; // rcx
  void *(__fastcall *v7)(CResource *__hidden, unsigned int); // rax
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx

  v3 = 0;
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 12);
  if ( v4 == (volatile signed __int32 *)a2 )
    return 0LL;
  if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
  {
    v7 = **(void *(__fastcall ***)(CResource *__hidden, unsigned int))v4;
    if ( v7 == CResource::`scalar deleting destructor' )
      CResource::`scalar deleting destructor'((CResource *)v4, 1u);
    else
      v7((CResource *)v4, 1u);
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x184u);
  return v10;
}
