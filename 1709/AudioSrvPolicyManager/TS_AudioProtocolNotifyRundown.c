/*
 * XREFs of TS_AudioProtocolNotifyRundown @ 0x18001E340
 * Callers:
 *     <none>
 * Callees:
 *     ??1TSSession@@QEAA@XZ @ 0x18001AF04 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18001C798 (-TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x18001E670 (-RemoveAt@-$TList@VTSSession@@@@QEAAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall TS_AudioProtocolNotifyRundown(struct AUDIOPROTOCOLNOTIFY *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rcx

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v2 = qword_18003AE48;
  while ( 1 )
  {
    v3 = v2;
    if ( !v2 )
      break;
    v4 = v2[2];
    v2 = (_QWORD *)*v2;
    if ( !(unsigned int)TsSessionDeleteNotify((struct TSSession *)v4, a1) )
    {
      if ( v4 && *(_DWORD *)(v4 + 48) && *(_DWORD *)(v4 + 4) == 0xFFFF && !*(_DWORD *)(v4 + 32) && !*(_QWORD *)(v4 + 72) )
      {
        TList<TSSession>::RemoveAt(v5, v3);
        TSSession::~TSSession((TSSession *)v4);
        operator delete((void *)v4, (const struct std::nothrow_t *)0x138);
      }
      break;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
}
