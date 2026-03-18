/*
 * XREFs of ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00D7870
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C007B4BC (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062EA0 (xxxUserSetDisplayConfig.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C00D777C (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     DrvDxgkPollDisplayChildren @ 0x1C00F9BB0 (DrvDxgkPollDisplayChildren.c)
 */

void __fastcall xxxDisplayDiagBlackScreenDetected(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  int v10; // ecx
  LARGE_INTEGER v11; // rbx
  int v12; // r8d
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  LARGE_INTEGER *v17; // rbx
  struct tagTHREADINFO *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  int v23; // ecx
  LARGE_INTEGER v24; // rbx
  int v25; // r8d
  __int64 v26; // r11
  __int64 v27; // r10
  unsigned __int16 v28; // bx
  const GUID *v29; // r9
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *Timeout; // [rsp+28h] [rbp-E0h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+30h] [rbp-D8h]
  __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  int v33; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v34[11]; // [rsp+74h] [rbp-94h] BYREF
  _DWORD v35[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v36[8]; // [rsp+A8h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR v37; // [rsp+E8h] [rbp-20h] BYREF
  char *v38; // [rsp+108h] [rbp+0h]
  __int64 v39; // [rsp+110h] [rbp+8h]
  _DWORD *v40; // [rsp+118h] [rbp+10h]
  __int64 v41; // [rsp+120h] [rbp+18h]
  int *v42; // [rsp+128h] [rbp+20h]
  __int64 v43; // [rsp+130h] [rbp+28h]
  _DWORD *v44; // [rsp+138h] [rbp+30h]
  __int64 v45; // [rsp+140h] [rbp+38h]
  _DWORD *v46; // [rsp+148h] [rbp+40h]
  __int64 v47; // [rsp+150h] [rbp+48h]
  _DWORD *v48; // [rsp+158h] [rbp+50h]
  __int64 v49; // [rsp+160h] [rbp+58h]
  _DWORD *v50; // [rsp+168h] [rbp+60h]
  __int64 v51; // [rsp+170h] [rbp+68h]
  _DWORD *v52; // [rsp+178h] [rbp+70h]
  __int64 v53; // [rsp+180h] [rbp+78h]
  __int64 v54; // [rsp+188h] [rbp+80h]
  _DWORD v55[2]; // [rsp+190h] [rbp+88h] BYREF
  _DWORD *v56; // [rsp+198h] [rbp+90h]
  __int64 v57; // [rsp+1A0h] [rbp+98h]
  _DWORD *v58; // [rsp+1A8h] [rbp+A0h]
  __int64 v59; // [rsp+1B0h] [rbp+A8h]
  __int64 v60; // [rsp+1B8h] [rbp+B0h]
  _DWORD v61[2]; // [rsp+1C0h] [rbp+B8h] BYREF
  int *v62; // [rsp+1C8h] [rbp+C0h]
  __int64 v63; // [rsp+1D0h] [rbp+C8h]
  int v64; // [rsp+228h] [rbp+120h] BYREF

  v64 = a1;
  memset(v36, 0, sizeof(v36));
  EtwActivityIdControl(3u, (LPGUID)&v36[1]);
  v36[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v36[4]) = v64;
  LODWORD(v36[3]) = 15;
  while ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
  {
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit();
    KeWaitForSingleObject(gpevtVideoportCallout, WrUserRequest, 0, 0, 0LL);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2, v1, v3);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v5 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v9 = PsGetCurrentThreadWin32Thread(v7, v6, v8);
    if ( v9 )
    {
      v11 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v9 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v10) = byte_1C0186D98 - 1;
        Template_xqx(
          v10,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v12,
          v11.LowPart,
          0,
          (char)gullUserCritAcquireToken);
      }
      if ( v11.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        Template_xqx(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v12,
          0,
          1000 * v11.QuadPart / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      }
      *(_QWORD *)(v9 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    gptiCurrent = v5;
    gbValidateHandleForIL = 1;
  }
  memset(v34, 0, sizeof(v34));
  LOWORD(v33) = gProtocolType;
  if ( !gProtocolType )
  {
    DisplayDiagRecordActiveTopology((struct USER_DETECTED_BLACK_SCREEN_REPORT *)&v33);
    v34[0] = 1;
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit();
    v35[0] = 0;
    v35[1] = 26;
    v13 = DrvDxgkPollDisplayChildren(v35);
    v34[1] = v13;
    v17 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v15, v14, v16);
    if ( v17 )
      v17[1] = KeQueryPerformanceCounter(0LL);
    v18 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v22 = PsGetCurrentThreadWin32Thread(v20, v19, v21);
    if ( v22 )
    {
      v24 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v22 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v23) = byte_1C0186D98 - 1;
        Template_xqx(
          v23,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v25,
          v24.LowPart,
          0,
          (char)gullUserCritAcquireToken);
      }
      if ( v24.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        Template_xqx(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v25,
          0,
          1000 * v24.QuadPart / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      }
      *(_QWORD *)(v22 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    gptiCurrent = v18;
    gbValidateHandleForIL = 1;
    if ( v13 >= 0 )
    {
      LODWORD(pData) = 128;
      LODWORD(Timeout) = 391;
      v34[2] = xxxUserSetDisplayConfig(
                 0,
                 0LL,
                 0LL,
                 0LL,
                 Timeout,
                 (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)pData,
                 0LL,
                 0,
                 (bool *)&v32,
                 0LL,
                 (__int64)v36);
    }
  }
  v26 = *(_QWORD *)&v34[7];
  v27 = *(_QWORD *)&v34[9];
  if ( *(_QWORD *)&v34[9] )
    v28 = LOWORD(v34[5]) << 6;
  else
    v28 = 0;
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000008uLL) )
  {
    WORD1(v32) = 3;
    v38 = (char *)&v32 + 2;
    v40 = v34;
    v42 = &v33;
    v44 = &v34[3];
    v46 = &v34[1];
    v48 = &v34[2];
    v50 = &v34[4];
    v52 = v55;
    v55[0] = (unsigned __int16)v29;
    v56 = &v34[5];
    v58 = v61;
    v61[0] = v28;
    v62 = &v64;
    v39 = 2LL;
    v41 = 4LL;
    v43 = 2LL;
    v45 = 4LL;
    v47 = 4LL;
    v49 = 4LL;
    v51 = 4LL;
    v53 = 2LL;
    v54 = v26;
    v55[1] = 0;
    v57 = 4LL;
    v59 = 2LL;
    v60 = v27;
    v61[1] = 0;
    v63 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0169E68, 0LL, v29, 0xFu, &v37);
    v27 = *(_QWORD *)&v34[9];
    v26 = *(_QWORD *)&v34[7];
  }
  if ( v26 )
  {
    Win32FreePool(v26);
    v27 = *(_QWORD *)&v34[9];
  }
  if ( v27 )
    Win32FreePool(v27);
}
