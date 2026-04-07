/*
 * XREFs of ??_ECBitmapSource@@MEAAPEAXI@Z @ 0x180025180
 * Callers:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x1800254C0 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180020D70 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180024B80 (--_GCResource@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

CBitmapSource *__fastcall CBitmapSource::`vector deleting destructor'(CBitmapSource *this, char a2)
{
  volatile signed __int32 *v4; // rcx
  __int64 v5; // rcx
  void (__fastcall *v6)(WPF::ProcessHeapImpl *, void *); // rax
  CResource *(__fastcall *v8)(CResource *, char); // rax

  *(_QWORD *)this = &CBitmapSource::`vftable';
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      v8 = **(CResource *(__fastcall ***)(CResource *, char))v4;
      if ( v8 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v4, 1);
      else
        v8((CResource *)v4, 1);
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
    v6 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v6 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v6(WPF::g_pProcessHeap, this);
  }
  return this;
}
