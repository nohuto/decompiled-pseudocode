/*
 * XREFs of ??$emplace_back@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180182BA8
 * Callers:
 *     ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x180182D58 (-AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x180156B28 (-_Change_array@-$vector@V-$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v2; // rax
  __int64 *v4; // rbx
  __int64 result; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // r8
  __int64 *v14; // r9
  __int64 *i; // rdx
  __int64 v16; // rcx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[2];
  v4 = a1[1];
  if ( v2 == v4 )
  {
    v7 = v4 - *a1;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v8 = v2 - *a1;
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
    v12 = *a2;
    v13 = (_QWORD *)v11;
    *a2 = 0LL;
    *(_QWORD *)(v11 + 8 * v7) = v12;
    v14 = a1[1];
    for ( i = *a1; i != v14; ++i )
    {
      v16 = *i;
      *i = 0LL;
      *v13++ = v16;
    }
    return std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::_Change_array(
             (__int64)a1,
             v11,
             v7 + 1,
             v10);
  }
  else
  {
    result = *a2;
    *a2 = 0LL;
    *v4 = result;
    ++a1[1];
  }
  return result;
}
