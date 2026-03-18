/*
 * XREFs of ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00B006C
 * Callers:
 *     zzzDestroyCaret @ 0x1C00AFE40 (zzzDestroyCaret.c)
 *     zzzSetCaretPos @ 0x1C00AFE70 (zzzSetCaretPos.c)
 *     zzzHideCaret @ 0x1C020BE4C (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C020BE74 (zzzShowCaret.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall UT_CaretSet(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  __int64 v5; // rax

  v1 = 0;
  v3 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_QWORD *)(v3 + 256)
    && (*(_DWORD *)(v3 + 304) == (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent)
     || (v5 = PtiFromThreadId()) != 0 && *(_QWORD *)(gptiCurrent + 376LL) == *(_QWORD *)(v5 + 376)) )
  {
    if ( a1 )
    {
      LOBYTE(v1) = a1 == *(struct tagWND **)(v3 + 256);
      return v1;
    }
    else
    {
      return 1LL;
    }
  }
  else
  {
    UserSetLastError(5LL);
    return 0LL;
  }
}
