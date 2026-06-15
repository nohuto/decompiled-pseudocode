/*
 * XREFs of ?QueueSessionMuteUnmute@@YAJKK@Z @ 0x18002528C
 * Callers:
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180025300 (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x180026568 (-TsSessionIdConnect@@YAXK@Z.c)
 * Callees:
 *     ??$QueueApplicationManagerWorkItem@U_SESSIONMUTECHANGES@@@@YAJP8CApplicationManager@@EAAJPEAU_SESSIONMUTECHANGES@@@Z0@Z @ 0x180027A44 (--$QueueApplicationManagerWorkItem@U_SESSIONMUTECHANGES@@@@YAJP8CApplicationManager@@EAAJPEAU_SE.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall QueueSessionMuteUnmute(int a1, int a2)
{
  int v4; // edi
  HANDLE ProcessHeap; // rax
  _DWORD *v6; // rax
  __int64 v7; // rcx
  void *v8; // rbx

  v4 = -2147024882;
  ProcessHeap = GetProcessHeap();
  v6 = HeapAlloc(ProcessHeap, 0, 8uLL);
  v8 = v6;
  if ( v6 )
  {
    v6[1] = a1;
    *v6 = a2;
    v4 = QueueApplicationManagerWorkItem<_SESSIONMUTECHANGES>(v7, v6);
    if ( v4 < 0 )
      operator delete(v8, (const struct std::nothrow_t *)8);
  }
  return (unsigned int)v4;
}
