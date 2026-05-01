/*
 * XREFs of ?GetTouchBehavior@ApplicationViewOperation@@UEAAJPEAW4APPLICATION_FRAME_TOUCH_BEHAVIOR@@@Z @ 0x180106DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::GetTouchBehavior(
        ApplicationViewOperation *this,
        enum APPLICATION_FRAME_TOUCH_BEHAVIOR *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 42);
  return 0LL;
}
