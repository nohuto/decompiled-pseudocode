/*
 * XREFs of ?SetCursorOrientation@DWMHardwareCursor@@UEAAJW4ORIENTATION_MESSAGE@@@Z @ 0x180028110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMHardwareCursor::SetCursorOrientation(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 396) = a2;
  result = 0LL;
  *(_BYTE *)(a1 + 392) = 1;
  return result;
}
