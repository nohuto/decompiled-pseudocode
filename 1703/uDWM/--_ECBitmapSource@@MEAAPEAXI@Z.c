/*
 * XREFs of ??_ECBitmapSource@@MEAAPEAXI@Z @ 0x18001E610
 * Callers:
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x18001C690 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 * Callees:
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x18001E980 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002C830 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

CBitmapSource *__fastcall CBitmapSource::`vector deleting destructor'(CBitmapSource *this, char a2)
{
  volatile signed __int32 *v4; // rcx
  __int64 v5; // rcx
  void (__fastcall *v6)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  void *(__fastcall *v8)(CResource *__hidden, unsigned int); // rax

  *(_QWORD *)this = &CBitmapSource::`vftable';
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      v8 = **(void *(__fastcall ***)(CResource *__hidden, unsigned int))v4;
      if ( v8 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v4, 1u);
      else
        v8((CResource *)v4, 1u);
    }
    *((_QWORD *)this + 2) = 0LL;
  }
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 12) = 0LL;
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v6 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v6 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v6(WPF::g_pProcessHeap, this);
  }
  return this;
}
