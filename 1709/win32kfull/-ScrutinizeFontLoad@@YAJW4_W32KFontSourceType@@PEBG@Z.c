/*
 * XREFs of ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C011FBF4
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00B6768 (-bCreateSectionFromHandle@@YAHPEAXPEAGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C024B4D8 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C024B69C (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C024B9FC (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00B0DA8 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C00B84AC (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C024B1D8 (-LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z.c)
 */

NTSTATUS __fastcall ScrutinizeFontLoad(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct UmfdTls *v8; // rax
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  PEPROCESS ThreadProcess; // rax
  NTSTATUS result; // eax
  NTSTATUS v13; // ebx
  const unsigned __int16 *v14; // r8
  const unsigned __int16 *v15; // r8
  int ProcessInformation; // [rsp+60h] [rbp+18h] BYREF
  int v17; // [rsp+64h] [rbp+1Ch]
  HANDLE ProcessHandle; // [rsp+68h] [rbp+20h] BYREF

  v17 = 0;
  v3 = a1;
  ProcessInformation = 9;
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(a1, a2)
    && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
  {
    v8 = UmfdTls::EnsureTls(v5, v4, v6, v7);
    if ( !v8 )
      return -1073741801;
    v9 = *((_QWORD *)v8 + 3);
    if ( !v9 )
      return -1073741801;
    CurrentThread = *(struct _KTHREAD **)(v9 + 16);
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
    v13 = ZwQueryInformationProcess(ProcessHandle, ProcessCookie|ProcessUserModeIOPL, &ProcessInformation, 8u, 0LL);
    if ( v13 >= 0 )
    {
      if ( (v17 & 1) != 0 )
      {
        v14 = &word_1C02D9FB8;
        if ( a2 )
          v14 = (const unsigned __int16 *)a2;
        LogFontLoadAttempt(ProcessHandle, v3, v14);
        v13 = -1073741790;
      }
      else if ( (v17 & 2) != 0 )
      {
        v15 = &word_1C02D9FB8;
        if ( a2 )
          v15 = (const unsigned __int16 *)a2;
        LogFontLoadAttempt(ProcessHandle, v3, v15);
      }
    }
    ZwClose(ProcessHandle);
    return v13;
  }
  return result;
}
