/*
 * XREFs of ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C008473C
 * Callers:
 *     zzzDestroyCaret @ 0x1C0084510 (zzzDestroyCaret.c)
 *     zzzSetCaretPos @ 0x1C0084540 (zzzSetCaretPos.c)
 *     zzzHideCaret @ 0x1C020DDBC (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C020DDE4 (zzzShowCaret.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall UT_CaretSet(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  unsigned int ThreadId; // eax
  __int64 v6; // rcx
  __int64 v8; // rax

  v2 = 0;
  v4 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( *(_QWORD *)(v4 + 288)
    && ((ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent),
         v6 = *(unsigned int *)(v4 + 344),
         (_DWORD)v6 == ThreadId)
     || (v8 = PtiFromThreadId(v6)) != 0 && *(_QWORD *)(gptiCurrent + 400LL) == *(_QWORD *)(v8 + 400)) )
  {
    if ( a1 )
    {
      LOBYTE(v2) = a1 == *(struct tagWND **)(v4 + 288);
      return v2;
    }
    else
    {
      return 1LL;
    }
  }
  else
  {
    UserSetLastError(5LL, a2);
    return 0LL;
  }
}
