/*
 * XREFs of ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180025F68
 * Callers:
 *     TS_UnregisterAudioProtocolNotification @ 0x180027650 (TS_UnregisterAudioProtocolNotification.c)
 * Callees:
 *     ??1TSSession@@QEAA@XZ @ 0x180024108 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180025B1C (-TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180025C38 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x1800279EC (-RemoveAt@-$TList@VTSSession@@@@QEAAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall TsSessionIdDeleteNotify(DWORD a1, struct AUDIOPROTOCOLNOTIFY *a2)
{
  unsigned int v4; // edi
  struct TSSession *v5; // rbx
  __int64 v6; // rcx
  struct TSSession *v8; // [rsp+40h] [rbp+18h] BYREF
  void *v9; // [rsp+48h] [rbp+20h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v4 = TsSessionFromSessionId(a1, 0, &v9, &v8);
  if ( !v4 )
  {
    v5 = v8;
    v4 = TsSessionDeleteNotify(v8, a2);
    if ( !v4 && *((_DWORD *)v5 + 12) && *((_DWORD *)v5 + 1) == 0xFFFF && !*((_DWORD *)v5 + 8) && !*((_QWORD *)v5 + 9) )
    {
      TList<TSSession>::RemoveAt(v6, v9);
      TSSession::~TSSession(v5);
      operator delete(v5, (const struct std::nothrow_t *)0x138);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  return v4;
}
