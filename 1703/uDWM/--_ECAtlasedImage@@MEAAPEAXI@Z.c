/*
 * XREFs of ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x18002B6B0
 * Callers:
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x18001D7E0 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x180021C78 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x1800293B0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x18001E980 (--_GCResource@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

CAtlasedImage *__fastcall CAtlasedImage::`vector deleting destructor'(CAtlasedImage *this, char a2)
{
  __int64 v3; // rcx
  CResource *v5; // rcx
  unsigned __int32 v6; // edi
  CResource *(__fastcall *v7)(CResource *, char); // rax
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
      v7 = **(CResource *(__fastcall ***)(CResource *, char))v5;
      if ( v7 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'(v5, 1);
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
      HeapFree(g_hProcessHeap, 0, this);
    else
      v8(WPF::g_pProcessHeap, this);
  }
  return this;
}
