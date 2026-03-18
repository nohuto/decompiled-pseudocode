/*
 * XREFs of zzzSetCaretPos @ 0x1C0084540
 * Callers:
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C02104F8 (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C007DB30 (-UT_InvertCaret@@YAXXZ.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00844C0 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C008473C (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00861CC (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     GreTransformPoints @ 0x1C00F5EFC (GreTransformPoints.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall zzzSetCaretPos(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned int v7; // eax
  HDC DC; // rbx
  int v10; // [rsp+38h] [rbp-30h]
  int v11; // [rsp+3Ch] [rbp-2Ch]

  if ( (unsigned int)UT_CaretSet(0LL) )
  {
    v5 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( *(_DWORD *)(v5 + 308) != a1 || *(_DWORD *)(v5 + 312) != a2 )
    {
      v6 = *(_QWORD *)(v5 + 288);
      if ( v6 && (*(_DWORD *)(*(_QWORD *)(v6 + 168) + 100LL) & 0x20) != 0 )
      {
        v10 = a1 + *(_DWORD *)(v5 + 320);
        v11 = a2 + *(_DWORD *)(v5 + 316);
        DC = (HDC)_GetDC();
        GreTransformPoints(DC, 1);
        _ReleaseDC(DC);
        *(_DWORD *)(v5 + 348) = a1;
        *(_DWORD *)(v5 + 356) = v10 - a1;
        *(_DWORD *)(v5 + 352) = a2;
        *(_DWORD *)(v5 + 360) = v11 - a2;
      }
      if ( (*(_DWORD *)(v5 + 296) & 1) != 0 )
        UT_InvertCaret();
      *(_DWORD *)(v5 + 308) = a1;
      *(_DWORD *)(v5 + 312) = a2;
      if ( *(_QWORD *)(v5 + 336) )
      {
        RemoveCaretTimer(*(struct tagWND **)(v5 + 288), (struct tagQ *)v5);
        CreateCaretTimer(*(struct tagWND **)(v5 + 288), (struct tagQ *)v5);
      }
      v7 = *(_DWORD *)(v5 + 296) & 0xFFFFFFFC | 2;
      *(_DWORD *)(v5 + 296) = v7;
      if ( !*(_DWORD *)(v5 + 300) )
      {
        *(_DWORD *)(v5 + 296) = v7 | 1;
        UT_InvertCaret();
      }
      xxxWindowEvent(0x800Bu, *(volatile signed __int32 **)(v5 + 288), 4294967288LL, 0LL, gdwDeferWinEvent != 0 ? 2 : 0);
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(5LL, v4);
    return 0LL;
  }
}
