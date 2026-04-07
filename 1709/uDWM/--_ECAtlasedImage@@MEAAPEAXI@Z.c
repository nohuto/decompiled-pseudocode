/*
 * XREFs of ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x18001FB20
 * Callers:
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180008720 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x180024274 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180020D70 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180024B80 (--_GCResource@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

CAtlasedImage *__fastcall CAtlasedImage::`vector deleting destructor'(CAtlasedImage *this, char a2)
{
  __int64 v3; // rcx
  CResource *v5; // rcx
  unsigned __int32 v6; // edi
  void *(__fastcall *v7)(CResource *__hidden, unsigned int); // rax
  void (__fastcall *v8)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  *(_QWORD *)this = &CAtlasedImage::`vftable';
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v3)(v3, 1LL);
    *((_QWORD *)this + 9) = 0LL;
  }
  v5 = (CResource *)*((_QWORD *)this + 11);
  if ( v5 )
  {
    v6 = _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 2, 0xFFFFFFFF);
    if ( v6 == 1 )
    {
      v7 = **(void *(__fastcall ***)(CResource *__hidden, unsigned int))v5;
      if ( v7 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'(v5, 1u);
      else
        v7(v5, v6);
    }
    *((_QWORD *)this + 11) = 0LL;
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v8 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v8 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v8(WPF::g_pProcessHeap, this);
  }
  return this;
}
