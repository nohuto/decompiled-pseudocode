/*
 * XREFs of ?put_ShouldRecreateTitleBar@ApplicationViewOperation@@UEAAJH@Z @ 0x18014E880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::put_ShouldRecreateTitleBar(ApplicationViewOperation *this, int a2)
{
  *((_BYTE *)this + 225) = a2 != 0;
  return 0LL;
}
