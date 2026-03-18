/*
 * XREFs of MNCheckButtonDownState @ 0x1C0203DFC
 * Callers:
 *     xxxCallHandleMenuMessages @ 0x1C02042C0 (xxxCallHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     _GetKeyState @ 0x1C00B89D4 (_GetKeyState.c)
 *     UnlockMFMWFPWindow @ 0x1C02041F0 (UnlockMFMWFPWindow.c)
 */

__int64 __fastcall MNCheckButtonDownState(__int64 a1)
{
  __int64 result; // rax
  int v3; // edx

  result = ((unsigned int)GetKeyState(*(_DWORD *)(a1 + 76)) >> 12) & 8;
  v3 = result | *(_DWORD *)(a1 + 8) & 0xFFFFFFF7;
  *(_DWORD *)(a1 + 8) = v3;
  if ( (v3 & 8) == 0 )
  {
    *(_DWORD *)(a1 + 8) = v3 & 0xFFFFDF7F;
    return UnlockMFMWFPWindow(a1 + 64);
  }
  return result;
}
