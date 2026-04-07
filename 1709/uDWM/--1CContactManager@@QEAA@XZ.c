/*
 * XREFs of ??1CContactManager@@QEAA@XZ @ 0x180080270
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x18006D8B4 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020A08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Reset@CContactManager@@QEAAJXZ @ 0x1800366D4 (-Reset@CContactManager@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CContactManager::~CContactManager(CContactManager *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  CContactManager::Reset(this);
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  if ( *((_QWORD *)this + 1) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  if ( *((_QWORD *)this + 2) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  if ( *((_QWORD *)this + 3) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  if ( *((_QWORD *)this + 4) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  if ( *((_QWORD *)this + 5) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v2);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 280);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 248);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 216);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 184);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 152);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 120);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 88);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 56);
}
