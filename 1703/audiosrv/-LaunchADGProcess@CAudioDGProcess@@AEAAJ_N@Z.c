/*
 * XREFs of ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x180017938
 * Callers:
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x18001738C (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180025614 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     ?StringCbCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x18002DE88 (-StringCbCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002EE7C (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memset @ 0x180049B8A (memset.c)
 *     WPP_SF_Sd @ 0x180084A58 (WPP_SF_Sd.c)
 *     WPP_SF_SDq @ 0x1800CDA54 (WPP_SF_SDq.c)
 */

__int64 __fastcall CAudioDGProcess::LaunchADGProcess(CAudioDGProcess *this, char a2)
{
  unsigned __int64 v4; // rdx
  const unsigned __int16 *v5; // r8
  int v6; // edx
  int v7; // r8d
  __int64 result; // rax
  signed int LastError; // eax
  CVolumeStrip *v10; // rcx
  char *v11; // rcx
  signed int v12; // eax
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  unsigned int dwCreationFlags; // [rsp+30h] [rbp-D8h]
  __int64 v16; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v17; // [rsp+60h] [rbp-A8h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+68h] [rbp-A0h] BYREF
  struct _SECURITY_ATTRIBUTES ProcessAttributes; // [rsp+80h] [rbp-88h] BYREF
  wchar_t *v20; // [rsp+98h] [rbp-70h] BYREF
  struct _STARTUPINFOW StartupInfo; // [rsp+A8h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+118h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+138h] [rbp+30h] BYREF
  unsigned __int64 *v24; // [rsp+148h] [rbp+40h]
  int v25; // [rsp+150h] [rbp+48h]
  int v26; // [rsp+154h] [rbp+4Ch]
  __int64 *v27; // [rsp+158h] [rbp+50h]
  int v28; // [rsp+160h] [rbp+58h]
  int v29; // [rsp+164h] [rbp+5Ch]
  WCHAR Buffer[264]; // [rsp+178h] [rbp+70h] BYREF

  StartupInfo.cb = 0;
  memset(&ProcessInformation, 0, sizeof(ProcessInformation));
  memset(&StartupInfo.lpReserved, 0, 0x60uLL);
  memset(Buffer, 0, 0x208uLL);
  memset(&ProcessAttributes, 0, sizeof(ProcessAttributes));
  if ( !GetSystemDirectoryW(Buffer, 0x104u) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    LODWORD(v16) = LastError;
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_22;
    }
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids,
      (unsigned int)LastError);
    goto LABEL_21;
  }
  LODWORD(v16) = StringCbCatExW(Buffer, v4, v5, &v20, &v17, dwCreationFlags);
  if ( (int)v16 < 0
    || (LODWORD(v16) = StringCbPrintfW(v20, v17, L" 0x%Ix", *((_QWORD *)this + 13)), (int)v16 < 0)
    || (ProcessAttributes.bInheritHandle = 0,
        StartupInfo.cb = 104,
        ProcessAttributes.nLength = 24,
        LODWORD(v16) = CAudioDGProcess::GetADGProcessSD(&ProcessAttributes.lpSecurityDescriptor),
        (int)v16 < 0) )
  {
LABEL_21:
    v10 = WPP_GLOBAL_Control;
    goto LABEL_22;
  }
  if ( CreateProcessW(
         0LL,
         Buffer,
         &ProcessAttributes,
         0LL,
         1,
         a2 != 0 ? 0x40000 : 0,
         0LL,
         0LL,
         &StartupInfo,
         &ProcessInformation) )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SDq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        v6,
        v7,
        (unsigned int)Buffer,
        ProcessInformation.dwProcessId,
        (char)ProcessInformation.hProcess);
    }
    *((_QWORD *)this + 11) = ProcessInformation.hProcess;
    goto LABEL_11;
  }
  v12 = GetLastError();
  if ( v12 > 0 )
    v12 = (unsigned __int16)v12 | 0x80070000;
  LODWORD(v16) = v12;
  v10 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      15,
      (unsigned int)&WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids,
      (unsigned int)Buffer,
      v12);
    goto LABEL_21;
  }
LABEL_22:
  if ( *((_QWORD *)this + 11) )
  {
    if ( v10 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_BYTE *)v10 + 28) & 4) != 0 && *((_BYTE *)v10 + 25) >= 4u )
      WPP_SF_d(
        *((_QWORD *)v10 + 2),
        18LL,
        &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids,
        ProcessInformation.dwProcessId);
    WaitForSingleObjectEx(*((HANDLE *)this + 11), 0xFFFFFFFF, 0);
    v11 = (char *)*((_QWORD *)this + 11);
    if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      CloseHandle(v11);
      *((_QWORD *)this + 11) = 0LL;
    }
  }
LABEL_11:
  operator delete(ProcessAttributes.lpSecurityDescriptor);
  ProcessAttributes.lpSecurityDescriptor = 0LL;
  if ( (unsigned __int64)ProcessInformation.hThread - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(ProcessInformation.hThread);
    ProcessInformation.hThread = 0LL;
  }
  result = (unsigned int)v16;
  if ( (int)v16 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        17LL,
        &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids,
        (unsigned int)v16);
      result = (unsigned int)v16;
    }
    if ( (unsigned int)dword_18012A2A0 > 2 )
    {
      TlgCreateSz(&pDesc, "CAudioDGProcess::LaunchADGProcess");
      v26 = 0;
      v29 = 0;
      v24 = &v17;
      v27 = &v16;
      LODWORD(v17) = 300;
      v25 = 4;
      v28 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_18012A2A0, &unk_1800FBB26, v13, v14, 5u, &pData);
      return (unsigned int)v16;
    }
  }
  return result;
}
