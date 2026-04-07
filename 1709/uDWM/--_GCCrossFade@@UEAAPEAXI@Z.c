/*
 * XREFs of ??_GCCrossFade@@UEAAPEAXI@Z @ 0x180001270
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020A08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

CCrossFade *__fastcall CCrossFade::`scalar deleting destructor'(CCrossFade *this, char a2)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 88);
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCrossFade *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
