/*
 * XREFs of ?put_ShouldReconnectTitleBar@ApplicationViewOperation@@UEAAJH@Z @ 0x18014E870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::put_ShouldReconnectTitleBar(ApplicationViewOperation *this, int a2)
{
  *((_BYTE *)this + 224) = a2 != 0;
  return 0LL;
}
