/*
 * XREFs of ?SetTouchBehavior@ApplicationViewOperation@@UEAAJW4APPLICATION_FRAME_TOUCH_BEHAVIOR@@@Z @ 0x1800894A0
 * Callers:
 *     ConfigureChromeForOperation @ 0x180089368 (ConfigureChromeForOperation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::SetTouchBehavior(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 184) = a2;
  return 0LL;
}
