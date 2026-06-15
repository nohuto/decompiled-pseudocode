/*
 * XREFs of ?PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x1800A1DD4
 * Callers:
 *     ServiceCtrl @ 0x1800ABE90 (ServiceCtrl.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     ??_GSESSION_EVENT@@UEAAPEAXI@Z @ 0x1800A1CD0 (--_GSESSION_EVENT@@UEAAPEAXI@Z.c)
 *     ?Initialize@SESSION_EVENT@@QEAAJKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x1800A1D04 (-Initialize@SESSION_EVENT@@QEAAJKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 */

void __fastcall PostSessionEvent(int a1, struct tagWTSSESSION_NOTIFICATION *a2)
{
  void **v4; // rbx

  v4 = (void **)operator new(0x18uLL);
  if ( v4 )
  {
    *v4 = &SESSION_EVENT::`vftable';
    v4[2] = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4
    && ((int)SESSION_EVENT::Initialize((SESSION_EVENT *)v4, a1, a2) < 0
     || !PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v4, 0LL)) )
  {
    SESSION_EVENT::`scalar deleting destructor'(v4, 1);
  }
}
