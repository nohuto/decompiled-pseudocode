/*
 * XREFs of ?TsSessionIdTerminate@@YAJK@Z @ 0x18001D504
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18001DD00 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AB14 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C8B8 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x18001C99C (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 */

__int64 __fastcall TsSessionIdTerminate(DWORD a1)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  struct TSSession *v4; // rbx
  char *v5; // rcx
  void *v6; // rdx
  struct TSSession *v8; // [rsp+38h] [rbp+10h] BYREF
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v2 = TsSessionFromSessionId(a1, 0, &v9, &v8);
  v3 = v2;
  if ( v2 == 1168 )
  {
    v3 = 0;
  }
  else if ( !v2 )
  {
    v4 = v8;
    v5 = (char *)v8 + 176;
    *((_DWORD *)v8 + 12) = 1;
    ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)v5);
    v6 = v9;
    *((_DWORD *)v4 + 56) = 1065353216;
    *((_DWORD *)v4 + 74) = 0;
    TsSessionUpdateAudioProtocol(v4, v6, 0xFFFF);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  return v3;
}
