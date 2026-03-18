/*
 * XREFs of ProcessDelayedSdc @ 0x1C013B550
 * Callers:
 *     PowerOnGdi @ 0x1C013B470 (PowerOnGdi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessDelayedSdc(__int64 a1)
{
  _DWORD *v1; // rdx
  __int64 result; // rax

  v1 = (_DWORD *)gulDelayedSwitchAction;
  if ( gulDelayedSwitchAction )
  {
    result = gProtocolType;
    if ( !gProtocolType )
    {
      result = xxxUserSetDisplayConfig(0LL, 0LL, 0LL, 0LL, gulDelayedSwitchAction, 0, grpdeskRitInput, 0, 0LL, 0LL, a1);
      v1 = (_DWORD *)gulDelayedSwitchAction;
    }
  }
  *v1 = 0;
  return result;
}
