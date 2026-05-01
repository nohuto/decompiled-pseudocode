/*
 * XREFs of ?RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@K@Z @ 0x180033C00
 * Callers:
 *     RmGameModeSrvRegisterProcess @ 0x180034B20 (RmGameModeSrvRegisterProcess.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800188C0 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     TraceLoggingProviderEnabled @ 0x180020094 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180038940 (-RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUE.c)
 *     ?RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180038CC8 (-RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 */

__int64 __fastcall RmSrvGameModeRegisterProcess(
        struct _RM_SERVICE_GLOBALS *a1,
        void *a2,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a3,
        int a4)
{
  struct _RM_SERVICE_GLOBALS *v4; // rdi
  UCHAR v8; // dl
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  int v12; // eax
  const WCHAR *FileNameW; // rdi
  DWORD ProcessId; // eax
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  DWORD v17; // ebx
  unsigned int v19; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ReturnLength; // [rsp+34h] [rbp-CCh] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v27[4]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v28[80]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v29; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  ULONG *p_ReturnLength; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  int *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  char *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  int *v38; // [rsp+110h] [rbp+10h]
  __int64 v39; // [rsp+118h] [rbp+18h]
  int *v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  int *v42; // [rsp+130h] [rbp+30h]
  __int64 v43; // [rsp+138h] [rbp+38h]
  char *v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]
  int *v46; // [rsp+150h] [rbp+50h]
  __int64 v47; // [rsp+158h] [rbp+58h]
  int *v48; // [rsp+160h] [rbp+60h]
  __int64 v49; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+170h] [rbp+70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+180h] [rbp+80h] BYREF
  _BYTE ProcessInformation[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  LPCWSTR pszPath; // [rsp+1A8h] [rbp+A8h]

  v4 = RmSvcGlobals;
  RmpUtilCheckStartLockTracking(v27, (struct _CEM_LOCK_TRACKER *)v28);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite(v9, &unk_1800562F9, v10, v11, 2u, &pData);
  if ( a4 )
  {
    v19 = -1073741583;
  }
  else if ( RmpGameModeIsResourceRequestValid(v4, a3) )
  {
    v12 = RmpGameModeRegisterProcess((struct _RM_SERVICE_GLOBALS *)((char *)v4 + 1136), a2, a3);
    if ( v12 >= 0 )
      v12 = 0;
    v19 = v12;
  }
  else
  {
    v19 = -1073741584;
  }
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v8, 0LL) )
  {
    ReturnLength = 0;
    FileNameW = 0LL;
    if ( NtQueryInformationProcess(a2, ProcessImageFileNameWin32, ProcessInformation, 0x228u, &ReturnLength) >= 0 )
      FileNameW = PathFindFileNameW(pszPath);
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
    {
      v31 = 4LL;
      v30 = &v19;
      ProcessId = GetProcessId(a2);
      v33 = 4LL;
      ReturnLength = ProcessId;
      v35 = 4LL;
      p_ReturnLength = &ReturnLength;
      v21 = *((_DWORD *)a3 + 1);
      v34 = &v21;
      v36 = (char *)a3 + 8;
      v22 = *((_DWORD *)a3 + 4);
      v38 = &v22;
      v23 = *((_DWORD *)a3 + 5);
      v40 = &v23;
      v24 = *((_DWORD *)a3 + 6);
      v42 = &v24;
      v44 = (char *)a3 + 36;
      v25 = *((_DWORD *)a3 + 8);
      v46 = &v25;
      v26 = *((_DWORD *)a3 + 7);
      v48 = &v26;
      v37 = 8LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 1LL;
      v47 = 4LL;
      v49 = 4LL;
      TlgCreateWsz(&pDesc, FileNameW);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180056D76, v15, v16, 0xDu, &v29);
    }
  }
  if ( v27[0] )
  {
    v17 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v17, 0LL);
    }
  }
  return v19;
}
