/*
 * XREFs of ?PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x180025AF4
 * Callers:
 *     ServiceCtrl @ 0x180025A80 (ServiceCtrl.c)
 * Callees:
 *     ??_GSESSION_EVENT@@UEAAPEAXI@Z @ 0x180025BF0 (--_GSESSION_EVENT@@UEAAPEAXI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025D60 (--2@YAPEAX_K@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 */

void __fastcall PostSessionEvent(int a1, struct tagWTSSESSION_NOTIFICATION *a2)
{
  _QWORD *v4; // rbx
  void *v5; // rax

  v4 = operator new(0x18uLL);
  if ( v4 )
  {
    *v4 = &SESSION_EVENT::`vftable';
    v4[2] = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = a1;
    if ( a2 )
    {
      v5 = malloc(a2->cbSize);
      v4[2] = v5;
      if ( !v5 )
      {
        AudSrvTraceLoggingErrorHelper("SESSION_EVENT::Initialize", 0x3Eu, -2147024882);
        goto LABEL_11;
      }
      memcpy_0(v5, a2, a2->cbSize);
    }
    if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v4, 0LL) )
      return;
LABEL_11:
    SESSION_EVENT::`scalar deleting destructor'((SESSION_EVENT *)v4, 1u);
  }
}
