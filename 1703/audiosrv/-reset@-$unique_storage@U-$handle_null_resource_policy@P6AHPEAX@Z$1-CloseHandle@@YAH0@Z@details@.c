/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18007C6A4
 * Callers:
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18007C6FC (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-C.c)
 *     wil::details::ScopeExitFn__lambda_6ae4bbb8ebfd665e9585a8c70c28b6af___::_ScopeExitFn__lambda_6ae4bbb8ebfd665e9585a8c70c28b6af___ @ 0x180095868 (wil--details--ScopeExitFn__lambda_6ae4bbb8ebfd665e9585a8c70c28b6af___--_ScopeExitFn__lambda_6ae4.c)
 *     ?RemoteDisconnect@CAudioStream@@QEAAJXZ @ 0x18009657C (-RemoteDisconnect@CAudioStream@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rbp
  DWORD LastError; // ebx

  v2 = *a1;
  if ( (char *)*a1 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    LastError = GetLastError();
    CloseHandle(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
