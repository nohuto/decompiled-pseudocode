/*
 * XREFs of ?SetChromeOptions@ApplicationViewOperation@@UEAAJW4APPLICATION_FRAME_CHROME_OPTIONS@@0@Z @ 0x1801075D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::SetChromeOptions(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 100) = a2;
  result = 0LL;
  *(_DWORD *)(a1 + 104) = a3;
  return result;
}
