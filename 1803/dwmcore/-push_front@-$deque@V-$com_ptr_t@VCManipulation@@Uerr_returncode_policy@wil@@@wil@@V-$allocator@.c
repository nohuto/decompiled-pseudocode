/*
 * XREFs of ?push_front@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801CB37C
 * Callers:
 *     ?AddActiveManipulation@InteractionSourceManager@@AEAAXPEAVCManipulation@@@Z @ 0x1801C982C (-AddActiveManipulation@InteractionSourceManager@@AEAAXPEAVCManipulation@@@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Growmap@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@IEAAX_K@Z @ 0x1801CAD28 (-_Growmap@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 */

__int64 __fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::push_front(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 result; // rax

  v4 = a1[3];
  if ( (v4 & 1) == 0 && a1[2] <= (unsigned __int64)(a1[4] + 2LL) >> 1 )
  {
    std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Growmap(a1);
    v4 = a1[3];
  }
  v5 = v4 & (2LL * a1[2] - 1);
  a1[3] = v5;
  v6 = a1[2];
  if ( !v5 )
    v5 = 2 * v6;
  v7 = a1[1];
  v8 = v5 - 1;
  v9 = (v8 >> 1) & (v6 - 1);
  if ( !*(_QWORD *)(v7 + 8 * v9) )
  {
    *(_QWORD *)(a1[1] + 8 * v9) = std::_Allocate<std::_Default_allocate_traits<1>>(2uLL, 8uLL);
    v7 = a1[1];
  }
  v10 = *(_QWORD *)(v7 + 8 * v9);
  result = *a2;
  *a2 = 0LL;
  *(_QWORD *)(v10 + 8 * (v8 & 1)) = result;
  a1[3] = v8;
  ++a1[4];
  return result;
}
