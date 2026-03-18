/*
 * XREFs of NtUserEnableMouseInPointer @ 0x1C00F2940
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C00F2A40 (GetAppCompatFlags2QuadWord.c)
 */

__int64 __fastcall NtUserEnableMouseInPointer(int a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 v7; // rcx
  __int64 v9; // rcx

  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  if ( (a1 != 0) != a1 )
  {
    v9 = 87LL;
    goto LABEL_9;
  }
  if ( a1 && (GetAppCompatFlags2QuadWord(gptiCurrent) & 0x80000000000LL) != 0
    || (v5 = *(_QWORD *)(gptiCurrent + 376LL), v6 = *(_DWORD *)(v5 + 768), a1 != ((v6 >> 2) & 1)) && (v6 & 8) != 0 )
  {
    v9 = 5LL;
LABEL_9:
    UserSetLastError(v9);
    goto LABEL_6;
  }
  v7 = v6 & 0xFFFFFFFB;
  v4 = 1LL;
  *(_DWORD *)(v5 + 768) = v7 | (4 * (a1 & 1 | 2));
LABEL_6:
  UserSessionSwitchLeaveCrit(v7, v5, v2, v3);
  return v4;
}
