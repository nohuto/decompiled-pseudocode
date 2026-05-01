/*
 * XREFs of ?RmSrvGameModeRegisterPairedAuxiliaryProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1K@Z @ 0x1800507C0
 * Callers:
 *     RmGameModeRSrvRegisterPairedAuxiliaryProcess @ 0x180052070 (RmGameModeRSrvRegisterPairedAuxiliaryProcess.c)
 *     RmGameModeSrvRegisterPairedAuxiliaryProcess @ 0x180052200 (RmGameModeSrvRegisterPairedAuxiliaryProcess.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180024DE4 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     TraceLoggingProviderEnabled @ 0x1800289BC (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180057A0C (-RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUE.c)
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x180057E90 (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 */

__int64 __fastcall RmSrvGameModeRegisterPairedAuxiliaryProcess(
        struct _RM_SERVICE_GLOBALS *a1,
        void *a2,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a3,
        void *a4,
        unsigned int a5)
{
  struct _RM_SERVICE_GLOBALS *v5; // rdi
  UCHAR v9; // dl
  const struct _TlgProvider_t *v10; // rcx
  int v11; // r10d
  unsigned int v12; // r10d
  const WCHAR *FileNameW; // r15
  const WCHAR *v14; // rdi
  DWORD ProcessId; // eax
  DWORD v16; // eax
  DWORD v17; // ebx
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ReturnLength; // [rsp+34h] [rbp-CCh] BYREF
  DWORD v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v24[3]; // [rsp+44h] [rbp-BCh] BYREF
  char v25[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v26; // [rsp+E0h] [rbp-20h] BYREF
  int *v27; // [rsp+100h] [rbp+0h]
  int v28; // [rsp+108h] [rbp+8h]
  int v29; // [rsp+10Ch] [rbp+Ch]
  ULONG *p_ReturnLength; // [rsp+110h] [rbp+10h]
  int v31; // [rsp+118h] [rbp+18h]
  int v32; // [rsp+11Ch] [rbp+1Ch]
  DWORD *v33; // [rsp+120h] [rbp+20h]
  int v34; // [rsp+128h] [rbp+28h]
  int v35; // [rsp+12Ch] [rbp+2Ch]
  char *v36; // [rsp+130h] [rbp+30h]
  int v37; // [rsp+138h] [rbp+38h]
  int v38; // [rsp+13Ch] [rbp+3Ch]
  int *v39; // [rsp+140h] [rbp+40h]
  int v40; // [rsp+148h] [rbp+48h]
  int v41; // [rsp+14Ch] [rbp+4Ch]
  int *v42; // [rsp+150h] [rbp+50h]
  int v43; // [rsp+158h] [rbp+58h]
  int v44; // [rsp+15Ch] [rbp+5Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+170h] [rbp+70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+180h] [rbp+80h] BYREF
  char ProcessInformation[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  LPCWSTR pszPath; // [rsp+1A8h] [rbp+A8h]
  char v50[8]; // [rsp+3D0h] [rbp+2D0h] BYREF
  LPCWSTR v51; // [rsp+3D8h] [rbp+2D8h]

  v5 = RmSvcGlobals;
  RmpUtilCheckStartLockTracking(v24, (struct _CEM_LOCK_TRACKER *)v25);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite(v10, &unk_18007D38E, 0LL, 0LL, 2u, &pData);
  if ( a5 )
  {
    v11 = -1073741583;
  }
  else if ( RmpGameModeIsResourceRequestValid(v5, a3) && (*((_DWORD *)a3 + 8) & 5) == 1 )
  {
    v19 = RmpGameModeRegisterPairedProcess((struct _RM_SERVICE_GLOBALS *)((char *)v5 + 1160), a2, a3, a4);
    if ( v19 < 0 )
      goto LABEL_12;
    v11 = 0;
  }
  else
  {
    v11 = -1073741584;
  }
  v19 = v11;
LABEL_12:
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v9, 0LL) )
  {
    FileNameW = 0LL;
    ReturnLength = 0;
    if ( NtQueryInformationProcess(a2, ProcessImageFileNameWin32, ProcessInformation, 0x228u, &ReturnLength) >= 0 )
      FileNameW = PathFindFileNameW(pszPath);
    v14 = 0LL;
    ReturnLength = 0;
    if ( NtQueryInformationProcess(a4, ProcessImageFileNameWin32, v50, 0x228u, &ReturnLength) >= 0 )
      v14 = PathFindFileNameW(v51);
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
    {
      v29 = 0;
      v27 = &v19;
      v28 = 4;
      ProcessId = GetProcessId(a2);
      v32 = 0;
      ReturnLength = ProcessId;
      v31 = 4;
      p_ReturnLength = &ReturnLength;
      v16 = GetProcessId(a4);
      v35 = 0;
      v38 = 0;
      v41 = 0;
      v44 = 0;
      v21 = v16;
      v33 = &v21;
      v36 = (char *)a3 + 36;
      v22 = *((_DWORD *)a3 + 8);
      v39 = &v22;
      v23 = *((_DWORD *)a3 + 7);
      v42 = &v23;
      v34 = 4;
      v37 = 1;
      v40 = 4;
      v43 = 4;
      TlgCreateWsz(&pDesc, FileNameW);
      TlgCreateWsz(&v46, v14);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007CCE9, 0LL, 0LL, 0xAu, &v26);
    }
    v12 = v19;
  }
  if ( v24[0] )
  {
    v17 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v17, 0LL);
      return (unsigned int)v19;
    }
  }
  return v12;
}
