/*
 * XREFs of W32kEtwEnableCallback @ 0x1C0074FA0
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0076430 (McGenControlCallbackV2.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     OpenCacheKeyEx @ 0x1C0044A10 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00D9284 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01535C0 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 */

void __fastcall W32kEtwEnableCallback(struct _GUID *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v5; // ebp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  LARGE_INTEGER v13; // rsi
  int v14; // r8d
  void *v15; // rbx
  unsigned int v16; // esi
  void *v17; // rbx
  unsigned int v18; // edi
  __int64 v19; // r8
  LONGLONG v20; // rcx
  int v21; // ecx
  LARGE_INTEGER *v22; // rbx
  struct tagTHREADINFO *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdi
  LARGE_INTEGER v28; // rbx
  int v29; // r8d
  int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  LARGE_INTEGER *v34; // rbx
  struct tagTHREADINFO *v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdi
  LARGE_INTEGER v40; // rbx
  int v41; // r8d
  int v42; // ecx
  int v43; // [rsp+30h] [rbp-98h] BYREF
  int v44[3]; // [rsp+34h] [rbp-94h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-88h] BYREF
  ULONG v46; // [rsp+44h] [rbp-84h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-80h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-70h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+68h] [rbp-60h] BYREF
  unsigned int v50; // [rsp+74h] [rbp-54h]
  _BYTE v51[12]; // [rsp+80h] [rbp-48h] BYREF
  unsigned int v52; // [rsp+8Ch] [rbp-3Ch]

  v5 = a2;
  if ( (unsigned int)a2 <= 1 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v8 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v12 = PsGetCurrentThreadWin32Thread(v10, v9, v11);
    if ( v12 )
    {
      v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v12 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
      {
        v21 = (unsigned __int8)byte_1C0186D98;
        if ( (unsigned __int8)(byte_1C0186D98 - 1) > 2u
          && (qword_1C0186D80 & 0x200000010000000LL) != 0
          && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          LOBYTE(v21) = byte_1C0186D98 - 1;
          Template_xqx(
            v21,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v14,
            v13.LowPart,
            0,
            (char)gullUserCritAcquireToken);
        }
      }
      if ( v13.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        Template_xqx(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v14,
          0,
          1000 * v13.QuadPart / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      }
      *(_QWORD *)(v12 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    v43 = gdwPolicyFlags;
    gptiCurrent = v8;
    gbValidateHandleForIL = 1;
    v15 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v43);
    if ( v15 )
    {
      v16 = 200;
      while ( 1 )
      {
        RtlInitUnicodeString(&DestinationString, L"ThreadUnresponsiveLogTimeout");
        if ( ZwQueryValueKey(
               v15,
               &DestinationString,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength) >= 0 )
          break;
        if ( !v43 )
          goto LABEL_12;
        ZwClose(v15);
        v15 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v43);
        if ( !v15 )
          goto LABEL_29;
      }
      v16 = v50;
LABEL_12:
      ZwClose(v15);
    }
    else
    {
LABEL_29:
      v16 = 200;
    }
    v44[0] = gdwPolicyFlags;
    v44[1] = v16;
    v17 = OpenCacheKeyEx(0LL, 2u, 0x20019u, v44);
    if ( v17 )
    {
      v18 = 200;
      while ( 1 )
      {
        RtlInitUnicodeString(&ValueName, L"UserCritAcquireDelayLogTimeout");
        if ( ZwQueryValueKey(v17, &ValueName, KeyValuePartialInformation, v51, 0x14u, &v46) >= 0 )
          break;
        if ( !v44[0] )
          goto LABEL_17;
        ZwClose(v17);
        v17 = OpenCacheKeyEx(0LL, 2u, 0x20019u, v44);
        if ( !v17 )
          goto LABEL_31;
      }
      v18 = v52;
LABEL_17:
      ZwClose(v17);
    }
    else
    {
LABEL_31:
      v18 = 200;
    }
    v44[2] = v18;
    UserSessionSwitchLeaveCrit();
    if ( v16 > 0xC8 )
    {
      W32kEtwMessageCheckDelayTimeoutMs = v16;
      W32kEtwInputProcessDelayTimeoutMs = v16;
    }
    if ( v18 > 0xC8 )
      W32kEtwUserCritAcquireDelayTimeoutMs = v18;
    else
      v18 = W32kEtwUserCritAcquireDelayTimeoutMs;
    v20 = gliQpcFreq.QuadPart * v18;
    *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = a4;
    WPP_MAIN_CB.Dpc.SystemArgument2 = (PVOID)(v20 / 1000);
    if ( ((a4 & 0x8000000000040000uLL) == 0
       || (unsigned __int8)(byte_1C0186D98 - 1) <= 2u
       || (qword_1C0186D80 & 0x8000000000040000uLL) == 0
       || (qword_1C0186D88 & 0x8000000000040000uLL) != qword_1C0186D88)
      && W32kEtwWaitCursorActiveType )
    {
      v22 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v20, 0x8000000000040000uLL, v19);
      if ( v22 )
        v22[1] = KeQueryPerformanceCounter(0LL);
      v23 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v27 = PsGetCurrentThreadWin32Thread(v25, v24, v26);
      if ( v27 )
      {
        v28 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v27 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
        {
          v30 = (unsigned __int8)byte_1C0186D98;
          if ( (unsigned __int8)(byte_1C0186D98 - 1) > 2u
            && (qword_1C0186D80 & 0x200000010000000LL) != 0
            && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            LOBYTE(v30) = byte_1C0186D98 - 1;
            Template_xqx(
              v30,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v29,
              v28.LowPart,
              0,
              (char)gullUserCritAcquireToken);
          }
        }
        if ( v28.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
          && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
        {
          Template_xqx(
            (_DWORD)gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v29,
            0,
            1000 * v28.QuadPart / gliQpcFreq.QuadPart,
            (char)gullUserCritAcquireToken);
        }
        *(_QWORD *)(v27 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
      }
      gptiCurrent = v23;
      gbValidateHandleForIL = 1;
      W32kEtwWaitCursorActiveType = 0;
      UserSessionSwitchLeaveCrit();
    }
  }
  if ( v5 == 2 )
  {
    EtwCaptureStateCallback();
    v34 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v32, v31, v33);
    if ( v34 )
      v34[1] = KeQueryPerformanceCounter(0LL);
    v35 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v39 = PsGetCurrentThreadWin32Thread(v37, v36, v38);
    if ( v39 )
    {
      v40 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v39 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
      {
        v42 = (unsigned __int8)byte_1C0186D98;
        if ( (unsigned __int8)(byte_1C0186D98 - 1) > 2u
          && (qword_1C0186D80 & 0x200000010000000LL) != 0
          && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          LOBYTE(v42) = byte_1C0186D98 - 1;
          Template_xqx(
            v42,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v41,
            v40.LowPart,
            0,
            (char)gullUserCritAcquireToken);
        }
      }
      if ( v40.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        Template_xqx(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v41,
          0,
          1000 * v40.QuadPart / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      }
      *(_QWORD *)(v39 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    gptiCurrent = v35;
    gbValidateHandleForIL = 1;
    CitEtwEnableCallback(a1, 2u, a4);
    UserSessionSwitchLeaveCrit();
  }
}
