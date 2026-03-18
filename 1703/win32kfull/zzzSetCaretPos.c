/*
 * XREFs of zzzSetCaretPos @ 0x1C00AFE70
 * Callers:
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C020ED14 (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 * Callees:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0028A5C (-UT_InvertCaret@@YAXXZ.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00AFDFC (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00B006C (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00B218C (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     GreTransformPoints @ 0x1C00E53AC (GreTransformPoints.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall zzzSetCaretPos(int a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // eax
  HDC DC; // rbx
  int v9; // [rsp+38h] [rbp-30h]
  int v10; // [rsp+3Ch] [rbp-2Ch]

  if ( (unsigned int)UT_CaretSet(0LL) )
  {
    v4 = *(_QWORD *)(gptiCurrent + 384LL);
    if ( *(_DWORD *)(v4 + 272) != a1 || *(_DWORD *)(v4 + 276) != a2 )
    {
      v5 = *(_QWORD *)(v4 + 256);
      if ( v5 && (*(_DWORD *)(*(_QWORD *)(v5 + 168) + 92LL) & 0x20) != 0 )
      {
        v9 = a1 + *(_DWORD *)(v4 + 284);
        v10 = a2 + *(_DWORD *)(v4 + 280);
        DC = (HDC)_GetDC();
        GreTransformPoints(DC, 1);
        _ReleaseDC(DC);
        *(_DWORD *)(v4 + 308) = a1;
        *(_DWORD *)(v4 + 316) = v9 - a1;
        *(_DWORD *)(v4 + 312) = a2;
        *(_DWORD *)(v4 + 320) = v10 - a2;
      }
      if ( (*(_DWORD *)(v4 + 264) & 1) != 0 )
        UT_InvertCaret();
      *(_DWORD *)(v4 + 272) = a1;
      *(_DWORD *)(v4 + 276) = a2;
      if ( *(_QWORD *)(v4 + 296) )
      {
        RemoveCaretTimer(*(struct tagWND **)(v4 + 256), (struct tagQ *)v4);
        CreateCaretTimer(*(struct tagWND **)(v4 + 256), (struct tagQ *)v4);
      }
      v6 = *(_DWORD *)(v4 + 264) & 0xFFFFFFFC | 2;
      *(_DWORD *)(v4 + 264) = v6;
      if ( !*(_DWORD *)(v4 + 268) )
      {
        *(_DWORD *)(v4 + 264) = v6 | 1;
        UT_InvertCaret();
      }
      xxxWindowEvent(0x800Bu, *(__int64 **)(v4 + 256), -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(5LL);
    return 0LL;
  }
}
