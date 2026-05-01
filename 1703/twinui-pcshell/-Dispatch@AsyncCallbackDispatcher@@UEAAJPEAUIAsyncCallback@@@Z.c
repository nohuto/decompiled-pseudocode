/*
 * XREFs of ?Dispatch@AsyncCallbackDispatcher@@UEAAJPEAUIAsyncCallback@@@Z @ 0x1800D6BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AsyncCallbackDispatcher::Dispatch(AsyncCallbackDispatcher *this, struct IAsyncCallback *a2)
{
  return (*(__int64 (__fastcall **)(struct IAsyncCallback *, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, 0LL);
}
