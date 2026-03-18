/*
 * XREFs of ??$emplace_back@AEAPEAVCComputeScribble@@@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEAPEAVCComputeScribble@@@Z @ 0x18021BE40
 * Callers:
 *     ?EnqueueComputeScribbleForCurrentBackbuffer@CHwFullScreenRenderTarget@@UEAAJPEAVCComputeScribble@@@Z @ 0x1801F1EE0 (-EnqueueComputeScribbleForCurrentBackbuffer@CHwFullScreenRenderTarget@@UEAAJPEAVCComputeScribble.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x18021CC10 (-_Change_array@-$vector@V-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V-$all.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::emplace_back<CComputeScribble * &>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 result; // rax
  __int64 *v4; // rdi
  void (__fastcall ***v6)(_QWORD); // rcx
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  void (__fastcall ***v12)(_QWORD); // rcx
  _QWORD *v13; // r15
  __int64 *v14; // r8
  _QWORD *v15; // rdx
  __int64 *i; // rcx
  __int64 v17; // rax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  result = (__int64)a1[2];
  v4 = a1[1];
  if ( (__int64 *)result == v4 )
  {
    v7 = v4 - *a1;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v8 = (result - (__int64)*a1) >> 3;
    v9 = v8 >> 1;
    if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 + 1 )
        v10 = v7 + 1;
    }
    else
    {
      v10 = v7 + 1;
    }
    v11 = std::_Allocate<std::_Default_allocate_traits<1>>(v10, 8uLL);
    v12 = (void (__fastcall ***)(_QWORD))*a2;
    v13 = (_QWORD *)v11;
    *(_QWORD *)(v11 + 8 * v7) = *a2;
    if ( v12 )
      (**v12)(v12);
    v14 = a1[1];
    v15 = v13;
    for ( i = *a1; i != v14; ++i )
    {
      v17 = *i;
      *i = 0LL;
      *v15++ = v17;
    }
    return std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::_Change_array(a1, v13, v7 + 1, v10);
  }
  else
  {
    v6 = (void (__fastcall ***)(_QWORD))*a2;
    *v4 = *a2;
    if ( v6 )
      result = ((__int64 (__fastcall *)(_QWORD))**v6)(v6);
    ++a1[1];
  }
  return result;
}
