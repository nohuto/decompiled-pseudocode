/*
 * XREFs of ??_E?$_Func_base@_NPEAX_KPEAX_KIU_Nil@wistd@@U12@@wistd@@UEAAPEAXI@Z @ 0x180080210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wistd::_Func_base<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::_Func_base<void,unsigned long const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
