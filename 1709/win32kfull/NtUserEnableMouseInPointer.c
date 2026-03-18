/*
 * XREFs of NtUserEnableMouseInPointer @ 0x1C00FFAC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C00FFBC0 (GetAppCompatFlags2QuadWord.c)
 */

__int64 __fastcall NtUserEnableMouseInPointer(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  unsigned int v4; // ecx
  __int64 v5; // rcx
  __int64 v7; // rcx

  EnterCrit(0LL, 1LL);
  v3 = 0LL;
  if ( (a1 != 0) != a1 )
  {
    v7 = 87LL;
    goto LABEL_9;
  }
  if ( a1 && (GetAppCompatFlags2QuadWord(gptiCurrent) & 0x80000000000LL) != 0
    || (v2 = *(_QWORD *)(gptiCurrent + 400LL), v4 = *(_DWORD *)(v2 + 776), a1 != ((v4 >> 2) & 1)) && (v4 & 8) != 0 )
  {
    v7 = 5LL;
LABEL_9:
    UserSetLastError(v7, v2);
    goto LABEL_6;
  }
  v5 = v4 & 0xFFFFFFFB;
  v3 = 1LL;
  *(_DWORD *)(v2 + 776) = v5 | (4 * (a1 & 1 | 2));
LABEL_6:
  UserSessionSwitchLeaveCrit(v5, v2);
  return v3;
}
