/*
 * XREFs of EnumPwndDlgChildProc @ 0x1C023D840
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     IsVisible @ 0x1C006D048 (IsVisible.c)
 *     IsHelpParent @ 0x1C023D8F8 (IsHelpParent.c)
 */

__int64 __fastcall EnumPwndDlgChildProc(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r9

  if ( a1 == *a2 || !(unsigned int)IsVisible(a1) || !PtInRect((_DWORD *)(v2 + 128), *(_QWORD *)(v3 + 16)) )
    return 1LL;
  *(_QWORD *)(v5 + 8) = v4;
  return IsHelpParent(v4);
}
