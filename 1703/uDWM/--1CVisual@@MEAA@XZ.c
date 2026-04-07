/*
 * XREFs of ??1CVisual@@MEAA@XZ @ 0x180023950
 * Callers:
 *     ??_GCClientArea@@MEAAPEAXI@Z @ 0x180019F40 (--_GCClientArea@@MEAAPEAXI@Z.c)
 *     ??1CRenderDataVisual@@MEAA@XZ @ 0x18001F090 (--1CRenderDataVisual@@MEAA@XZ.c)
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x180021E48 (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     ??_ECVisual@@MEAAPEAXI@Z @ 0x180023640 (--_ECVisual@@MEAAPEAXI@Z.c)
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x18002AD8C (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ??1CRippleEffect@@MEAA@XZ @ 0x180087864 (--1CRippleEffect@@MEAA@XZ.c)
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x18009CDDC (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180019770 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x18001E980 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::~CVisual(CVisual *this)
{
  volatile signed __int32 *v2; // rcx
  CResource *v3; // rcx
  unsigned __int32 v4; // edi
  CResource *(__fastcall *v5)(CResource *, char); // rax
  CBaseObject *v6; // rcx
  CResource *(__fastcall *v7)(CResource *, char); // rax
  __int64 v8; // rax
  int v9; // eax

  *(_QWORD *)this = &CVisual::`vftable';
  VisualCollection::RemoveAll((CVisual *)((char *)this + 32));
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      v7 = **(CResource *(__fastcall ***)(CResource *, char))v2;
      if ( v7 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v2, 1);
      else
        v7((CResource *)v2, 1);
    }
    v8 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 12) = 0LL;
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v8 + 16) + 408LL))(
           *(_QWORD *)(v8 + 16),
           *(unsigned int *)(v8 + 24),
           0LL);
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x184u);
  }
  v3 = (CResource *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    v4 = _InterlockedExchangeAdd((volatile signed __int32 *)v3 + 2, 0xFFFFFFFF);
    if ( v4 == 1 )
    {
      v5 = **(CResource *(__fastcall ***)(CResource *, char))v3;
      if ( v5 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'(v3, 1);
      else
        v5(v3, v4);
    }
    *((_QWORD *)this + 2) = 0LL;
  }
  v6 = (CBaseObject *)*((_QWORD *)this + 13);
  if ( v6 )
  {
    CBaseObject::Release(v6);
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
