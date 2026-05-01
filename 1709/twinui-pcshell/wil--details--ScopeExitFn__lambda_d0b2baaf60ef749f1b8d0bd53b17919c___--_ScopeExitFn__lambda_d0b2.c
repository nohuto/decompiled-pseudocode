/*
 * XREFs of wil::details::ScopeExitFn__lambda_d0b2baaf60ef749f1b8d0bd53b17919c___::_ScopeExitFn__lambda_d0b2baaf60ef749f1b8d0bd53b17919c___ @ 0x180045C6C
 * Callers:
 *     _CAppViewManager::DragEnter_::_1_::dtor$7 @ 0x1801E81EB (_CAppViewManager--DragEnter_--_1_--dtor$7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_d0b2baaf60ef749f1b8d0bd53b17919c___::_ScopeExitFn__lambda_d0b2baaf60ef749f1b8d0bd53b17919c___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[16] )
  {
    a1[16] = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 128LL) + 168LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 128LL),
             **((_QWORD **)a1 + 1));
  }
  return result;
}
