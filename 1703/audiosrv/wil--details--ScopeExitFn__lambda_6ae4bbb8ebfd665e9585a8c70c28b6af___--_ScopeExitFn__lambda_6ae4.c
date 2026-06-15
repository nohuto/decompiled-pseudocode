/*
 * XREFs of wil::details::ScopeExitFn__lambda_6ae4bbb8ebfd665e9585a8c70c28b6af___::_ScopeExitFn__lambda_6ae4bbb8ebfd665e9585a8c70c28b6af___ @ 0x180095868
 * Callers:
 *     _CAudioStream::RemoteDisconnect_::_1_::dtor$0 @ 0x1800966EA (_CAudioStream--RemoteDisconnect_--_1_--dtor$0.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18007C6A4 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_6ae4bbb8ebfd665e9585a8c70c28b6af___::_ScopeExitFn__lambda_6ae4bbb8ebfd665e9585a8c70c28b6af___(
        _BYTE *a1)
{
  if ( a1[8] )
  {
    a1[8] = 0;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)(*(_QWORD *)a1 + 72LL),
      0LL);
  }
}
