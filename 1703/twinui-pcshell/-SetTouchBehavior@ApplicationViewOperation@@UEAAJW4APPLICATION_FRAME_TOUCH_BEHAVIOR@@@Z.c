/*
 * XREFs of ?SetTouchBehavior@ApplicationViewOperation@@UEAAJW4APPLICATION_FRAME_TOUCH_BEHAVIOR@@@Z @ 0x1800E1F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::SetTouchBehavior(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 152) = a2;
  return 0LL;
}
