/*
 * XREFs of _ViewManagerBridge::InitializeAndRunCoreUiMessageLoop_::_1_::catch$3 @ 0x1801EF107
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180004258 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18008CE68 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewManagerBridge::InitializeAndRunCoreUiMessageLoop_::_1_::catch_3(
        wil *a1,
        __int64 a2,
        unsigned int a3)
{
  int v4; // eax
  __int64 v5; // rcx
  const char *v6; // r9

  v4 = wil::ResultFromCaughtException(a1, (void *)a2, a3);
  v5 = *(_QWORD *)(a2 + 96);
  *(_DWORD *)(v5 + 156) = v4;
  if ( !SetEvent(*(HANDLE *)(v5 + 136)) )
    wil::details::in1diag3::_FailFast_GetLastError(
      *(wil::details::in1diag3 **)(a2 + 88),
      (void *)0x86E,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v6);
  return &loc_180137415;
}
