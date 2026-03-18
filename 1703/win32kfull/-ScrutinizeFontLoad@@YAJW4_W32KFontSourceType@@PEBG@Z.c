/*
 * XREFs of ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C0114238
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C0027EF0 (-bCreateSectionFromHandle@@YAHPEAXPEAGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C0249B10 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C0249CE0 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C024A094 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00227D8 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C009BE0C (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C0249810 (-LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z.c)
 */

NTSTATUS __fastcall ScrutinizeFontLoad(__int64 a1, const unsigned __int16 *a2)
{
  unsigned int v3; // esi
  struct UmfdTls *v4; // rax
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  PEPROCESS ThreadProcess; // rax
  NTSTATUS result; // eax
  NTSTATUS v9; // ebx
  const unsigned __int16 *v10; // r8
  const unsigned __int16 *v11; // r8
  int ProcessInformation; // [rsp+60h] [rbp+18h] BYREF
  int v13; // [rsp+64h] [rbp+1Ch]
  HANDLE ProcessHandle; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0;
  v3 = a1;
  ProcessInformation = 9;
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(a1)
    && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
  {
    v4 = UmfdTls::EnsureTls();
    if ( !v4 )
      return -1073741801;
    v5 = *((_QWORD *)v4 + 3);
    if ( !v5 )
      return -1073741801;
    CurrentThread = *(struct _KTHREAD **)(v5 + 16);
    if ( !CurrentThread )
      return -1073741801;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
  }
  ThreadProcess = PsGetThreadProcess(CurrentThread);
  result = ObOpenObjectByPointer(ThreadProcess, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 0, &ProcessHandle);
  if ( result >= 0 )
  {
    v9 = ZwQueryInformationProcess(ProcessHandle, ProcessCookie|ProcessUserModeIOPL, &ProcessInformation, 8u, 0LL);
    if ( v9 >= 0 )
    {
      if ( (v13 & 1) != 0 )
      {
        v10 = &word_1C02E2588;
        if ( a2 )
          v10 = a2;
        LogFontLoadAttempt(ProcessHandle, v3, v10);
        v9 = -1073741790;
      }
      else if ( (v13 & 2) != 0 )
      {
        v11 = &word_1C02E2588;
        if ( a2 )
          v11 = a2;
        LogFontLoadAttempt(ProcessHandle, v3, v11);
      }
    }
    ZwClose(ProcessHandle);
    return v9;
  }
  return result;
}
