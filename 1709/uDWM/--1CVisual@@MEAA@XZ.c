/*
 * XREFs of ??1CVisual@@MEAA@XZ @ 0x1800183B0
 * Callers:
 *     ??1CRenderDataVisual@@MEAA@XZ @ 0x180014FF4 (--1CRenderDataVisual@@MEAA@XZ.c)
 *     ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x180016790 (--_GCCanvasVisual@@MEAAPEAXI@Z.c)
 *     ??_ECVisual@@MEAAPEAXI@Z @ 0x1800191C0 (--_ECVisual@@MEAAPEAXI@Z.c)
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x18001F1BC (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x1800243D8 (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     ??_GCClientArea@@MEAAPEAXI@Z @ 0x18002C460 (--_GCClientArea@@MEAAPEAXI@Z.c)
 *     ??1CRippleEffect@@MEAA@XZ @ 0x18007EC84 (--1CRippleEffect@@MEAA@XZ.c)
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x18009AF50 (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180012E90 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180024B80 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::~CVisual(CVisual *this)
{
  volatile signed __int32 *v2; // rcx
  void *(__fastcall *v3)(CResource *__hidden, unsigned int); // rax
  __int64 v4; // rax
  int v5; // eax
  CResource *v6; // rcx
  unsigned __int32 v7; // edi
  void *(__fastcall *v8)(CResource *__hidden, unsigned int); // rax
  CBaseObject *v9; // rcx

  *(_QWORD *)this = &CVisual::`vftable';
  VisualCollection::RemoveAll((CVisual *)((char *)this + 32));
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      v3 = **(void *(__fastcall ***)(CResource *__hidden, unsigned int))v2;
      if ( v3 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v2, 1u);
      else
        v3((CResource *)v2, 1u);
    }
    v4 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 12) = 0LL;
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v4 + 16) + 408LL))(
           *(_QWORD *)(v4 + 16),
           *(unsigned int *)(v4 + 24),
           0LL);
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x184u);
  }
  v6 = (CResource *)*((_QWORD *)this + 2);
  if ( v6 )
  {
    v7 = _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 2, 0xFFFFFFFF);
    if ( v7 == 1 )
    {
      v8 = **(void *(__fastcall ***)(CResource *__hidden, unsigned int))v6;
      if ( v8 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'(v6, 1u);
      else
        v8(v6, v7);
    }
    *((_QWORD *)this + 2) = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 13);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_QWORD *)this + 4) = &VisualCollection::`vftable';
  if ( *((_QWORD *)this + 6) != *((_QWORD *)this + 7) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 6) = 0LL;
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
}
