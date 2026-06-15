/*
 * XREFs of ?TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18001CAD8
 * Callers:
 *     TS_RegisterAudioProtocolNotification @ 0x18001E280 (TS_RegisterAudioProtocolNotification.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C8B8 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall TsSessionIdAddNotify(DWORD a1, int a2, struct AUDIOPROTOCOLNOTIFY **a3)
{
  HANDLE ProcessHeap; // rax
  struct AUDIOPROTOCOLNOTIFY *v7; // rax
  struct AUDIOPROTOCOLNOTIFY *v8; // rdi
  unsigned int v9; // ebx
  struct TSSession *v10; // rbx
  HANDLE v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  struct TSSession *v17; // [rsp+48h] [rbp+20h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  ProcessHeap = GetProcessHeap();
  v7 = (struct AUDIOPROTOCOLNOTIFY *)HeapAlloc(ProcessHeap, 0, 4uLL);
  v8 = v7;
  if ( !v7 )
    goto LABEL_11;
  *(_DWORD *)v7 = a2;
  v9 = TsSessionFromSessionId(a1, 1, 0LL, &v17);
  if ( v9 )
    goto LABEL_12;
  v10 = v17;
  v11 = GetProcessHeap();
  v12 = HeapAlloc(v11, 0, 0x18uLL);
  v13 = v12;
  if ( v12 )
  {
    *v12 = 0LL;
    v12[1] = 0LL;
    v12[2] = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
  {
LABEL_11:
    v9 = 14;
    goto LABEL_12;
  }
  v13[2] = v8;
  v14 = *((_QWORD *)v10 + 2);
  v13[1] = 0LL;
  *v13 = v14;
  v15 = *((_QWORD *)v10 + 2);
  if ( v15 )
    *(_QWORD *)(v15 + 8) = v13;
  else
    *((_QWORD *)v10 + 3) = v13;
  ++*((_DWORD *)v10 + 8);
  *a3 = v8;
  v8 = 0LL;
  *((_QWORD *)v10 + 2) = v13;
  v9 = 0;
LABEL_12:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  operator delete(v8, (const struct std::nothrow_t *)4);
  return v9;
}
