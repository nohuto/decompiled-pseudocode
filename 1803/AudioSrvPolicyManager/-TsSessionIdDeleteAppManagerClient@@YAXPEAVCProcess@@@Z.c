/*
 * XREFs of ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x1800264C4
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001D100 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     PbmUnregisterAppManagerNotification @ 0x180022130 (PbmUnregisterAppManagerNotification.c)
 * Callees:
 *     ??1TSSession@@QEAA@XZ @ 0x180024108 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionDeleteAppManagerClient@@YAJPEAVTSSession@@PEAVCProcess@@@Z @ 0x180025BB0 (-TsSessionDeleteAppManagerClient@@YAJPEAVTSSession@@PEAVCProcess@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180025C38 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x1800279EC (-RemoveAt@-$TList@VTSSession@@@@QEAAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall TsSessionIdDeleteAppManagerClient(DWORD *a1)
{
  struct CProcess *v2; // rdx
  struct TSSession *v3; // rbx
  __int64 v4; // rcx
  struct TSSession *v5; // [rsp+30h] [rbp+8h] BYREF
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( !(unsigned int)TsSessionFromSessionId(a1[55], 0, &v6, &v5) )
  {
    v2 = (struct CProcess *)a1;
    v3 = v5;
    if ( (int)TsSessionDeleteAppManagerClient(v5, v2) >= 0
      && *((_DWORD *)v3 + 12)
      && *((_DWORD *)v3 + 1) == 0xFFFF
      && !*((_DWORD *)v3 + 8)
      && !*((_QWORD *)v3 + 9) )
    {
      TList<TSSession>::RemoveAt(v4, v6);
      TSSession::~TSSession(v3);
      operator delete(v3, (const struct std::nothrow_t *)0x138);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
}
