/*
 * XREFs of wil::details::ScopeExitFn__lambda_cdb63dc96648996f625aaea13fbf12c3___::_ScopeExitFn__lambda_cdb63dc96648996f625aaea13fbf12c3___ @ 0x1800FB128
 * Callers:
 *     __lambda_166d3a698f4a828bb68fc489a415f587_::operator()_::_1_::dtor$0 @ 0x18019E5B5 (__lambda_166d3a698f4a828bb68fc489a415f587_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_cdb63dc96648996f625aaea13fbf12c3___::_ScopeExitFn__lambda_cdb63dc96648996f625aaea13fbf12c3___(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 296LL) + 8LL * **(_QWORD **)(a1 + 8));
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 760LL))(v1, 0LL);
  }
  return result;
}
