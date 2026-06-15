/*
 * XREFs of ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180030578
 * Callers:
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x1800313F8 (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 *     ?OpenStoreKey@CAudioSessionStore@@AEAAJXZ @ 0x180031658 (-OpenStoreKey@CAudioSessionStore@@AEAAJXZ.c)
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x1800317E0 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18002FEC0 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x1800306D4 (-SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180030A40 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     WPP_SF_Sq @ 0x1800908E4 (WPP_SF_Sq.c)
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x18009EE60 (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 */

__int64 __fastcall CreateLowRightsRegistryKey(HKEY hKey, const unsigned __int16 *a2, int a3, HKEY *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  REGSAM v10; // eax
  int v11; // eax
  int v12; // eax
  int v14; // eax
  signed int LastError; // eax
  CVolumeStrip *v16; // rcx
  __int64 v17; // rdx
  PSID Sid; // [rsp+50h] [rbp-20h] BYREF
  struct _SECURITY_ATTRIBUTES v19; // [rsp+58h] [rbp-18h] BYREF

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_063b73282fa230620b2f84334c1c051f_Traceguids, a2);
  }
  memset(&v19.nLength + 1, 0, 20);
  v19.nLength = 24;
  v8 = DetermineLowRightsKeySecurityDescriptor(hKey, &v19.lpSecurityDescriptor);
  v9 = v8;
  if ( v8 )
  {
    if ( v8 > 0 )
      v9 = (unsigned __int16)v8 | 0x80070000;
  }
  else
  {
    v10 = a3 | 0xA0000;
    if ( (a3 & 0x20006) == 0 )
      v10 = a3 | 0x20000;
    v11 = SafeRegCreateKeyEx(hKey, a2, 0, 0LL, 0, v10, &v19, a4, 0LL);
    v9 = v11;
    if ( v11 )
    {
      if ( v11 > 0 )
        v9 = (unsigned __int16)v11 | 0x80070000;
      v16 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v17 = 15LL;
        goto LABEL_42;
      }
    }
    else
    {
      Sid = 0LL;
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          11,
          (unsigned int)&WPP_063b73282fa230620b2f84334c1c051f_Traceguids,
          (_DWORD)a2,
          (char)*a4);
      }
      if ( ConvertStringSidToSidW(L"LW", &Sid) )
      {
        v12 = SetRegistryKeyIntegrityLevel(*a4, Sid);
        v9 = v12;
        if ( v12 < 0 )
        {
          if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              12LL,
              &WPP_063b73282fa230620b2f84334c1c051f_Traceguids,
              (unsigned int)v12);
          }
          v14 = SetRegistryHandleIntegrityLevel(*a4, Sid);
          v9 = v14;
          if ( v14 < 0
            && WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              13LL,
              &WPP_063b73282fa230620b2f84334c1c051f_Traceguids,
              (unsigned int)v14);
          }
        }
        if ( Sid )
          LocalFree(Sid);
        goto LABEL_17;
      }
      LastError = GetLastError();
      v9 = LastError;
      if ( LastError > 0 )
        v9 = (unsigned __int16)LastError | 0x80070000;
      v16 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v17 = 14LL;
LABEL_42:
        WPP_SF_d(*((_QWORD *)v16 + 2), v17, &WPP_063b73282fa230620b2f84334c1c051f_Traceguids, v9);
      }
    }
  }
LABEL_17:
  operator delete(v19.lpSecurityDescriptor);
  v19.lpSecurityDescriptor = 0LL;
  if ( (v9 & 0x80000000) != 0 )
  {
    if ( *a4 )
    {
      RegCloseKey(*a4);
      *a4 = 0LL;
    }
    AudSrvTraceLoggingErrorHelper("CreateLowRightsRegistryKey", 0x416u, v9);
  }
  return v9;
}
