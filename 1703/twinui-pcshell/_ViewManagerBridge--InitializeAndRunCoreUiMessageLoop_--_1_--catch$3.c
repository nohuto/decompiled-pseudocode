/*
 * XREFs of _ViewManagerBridge::InitializeAndRunCoreUiMessageLoop_::_1_::catch$3 @ 0x18019EFBE
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800040A4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180082BB0 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewManagerBridge::InitializeAndRunCoreUiMessageLoop_::_1_::catch_3(
        wil *a1,
        __int64 a2,
        unsigned int a3)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  const char *v7; // r9

  v4 = wil::ResultFromCaughtException(a1, (void *)a2, a3);
  v5 = *(_QWORD *)(a2 + 96);
  *(_DWORD *)(v5 + 140) = v4;
  if ( !SetEvent(*(HANDLE *)(v5 + 120)) )
    wil::details::in1diag3::_FailFast_GetLastError(*(wil::details::in1diag3 **)(a2 + 88), (void *)0x86F, v6, v7);
  return &loc_18010C381;
}
