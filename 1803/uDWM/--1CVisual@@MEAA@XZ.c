/*
 * XREFs of ??1CVisual@@MEAA@XZ @ 0x180025E30
 * Callers:
 *     ??_GCClientArea@@MEAAPEAXI@Z @ 0x180010B50 (--_GCClientArea@@MEAAPEAXI@Z.c)
 *     ??1CRenderDataVisual@@MEAA@XZ @ 0x180017CE4 (--1CRenderDataVisual@@MEAA@XZ.c)
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x18001F50C (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x180024788 (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     ??_ECVisual@@MEAAPEAXI@Z @ 0x1800266C0 (--_ECVisual@@MEAAPEAXI@Z.c)
 *     ??1CRippleEffect@@MEAA@XZ @ 0x180087D84 (--1CRippleEffect@@MEAA@XZ.c)
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x1800A3358 (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000F9A0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180014180 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::~CVisual(CVisual *this)
{
  volatile signed __int32 *v2; // rcx
  CResource *(__fastcall *v3)(CResource *, char); // rax
  __int64 v4; // rax
  int v5; // eax
  volatile signed __int32 *v6; // rcx
  CResource *(__fastcall *v7)(CResource *, char); // rax
  CBaseObject *v8; // rcx

  *(_QWORD *)this = &CVisual::`vftable';
  VisualCollection::RemoveAll((CVisual *)((char *)this + 32));
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      v3 = **(CResource *(__fastcall ***)(CResource *, char))v2;
      if ( v3 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v2, 1);
      else
        v3((CResource *)v2, 1);
    }
    v4 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 12) = 0LL;
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v4 + 16) + 424LL))(
           *(_QWORD *)(v4 + 16),
           *(unsigned int *)(v4 + 24),
           0LL);
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x13Au);
  }
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      v7 = **(CResource *(__fastcall ***)(CResource *, char))v6;
      if ( v7 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v6, 1);
      else
        v7((CResource *)v6, 1);
    }
    *((_QWORD *)this + 2) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 13);
  if ( v8 )
  {
    CBaseObject::Release(v8);
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
