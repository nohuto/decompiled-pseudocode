/*
 * XREFs of ??_GCDWMDisplaySet@@QEAAPEAXI@Z @ 0x18000FD2C
 * Callers:
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x18000FDAC (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 * Callees:
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x18000FF28 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

CDWMDisplaySet *__fastcall CDWMDisplaySet::`scalar deleting destructor'(CDWMDisplaySet *this)
{
  int v2; // eax
  __int64 i; // rdi
  CDWMDisplay *v4; // rcx
  __int64 v5; // rcx

  v2 = *((_DWORD *)this + 16) - 1;
  for ( i = v2; i >= 0; --i )
  {
    v4 = *(CDWMDisplay **)(*((_QWORD *)this + 5) + 8 * i);
    if ( v4 )
    {
      CDWMDisplay::Release(v4);
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i) = 0LL;
    }
  }
  v5 = *((_QWORD *)this + 1);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 40);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDWMDisplaySet *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
