/*
 * XREFs of ?LauncherOpened@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z @ 0x180079F1C
 * Callers:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1800782F0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x1800796C4 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

int __fastcall CommonStartTelemetry::LauncherInvokeActivity::LauncherOpened(__int64 a1, int a2, int a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // r10
  const GUID *v8; // r8
  REGHANDLE v9; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-39h] BYREF
  int v12; // [rsp+3Ch] [rbp-35h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-19h] BYREF
  void *v16; // [rsp+68h] [rbp-9h]
  int v17; // [rsp+70h] [rbp-1h]
  int v18; // [rsp+74h] [rbp+3h]
  int *v19; // [rsp+78h] [rbp+7h]
  int v20; // [rsp+80h] [rbp+Fh]
  int v21; // [rsp+84h] [rbp+13h]
  int *v22; // [rsp+88h] [rbp+17h]
  int v23; // [rsp+90h] [rbp+1Fh]
  int v24; // [rsp+94h] [rbp+23h]
  int *v25; // [rsp+98h] [rbp+27h]
  int v26; // [rsp+A0h] [rbp+2Fh]
  int v27; // [rsp+A4h] [rbp+33h]
  int v28; // [rsp+E0h] [rbp+6Fh] BYREF
  int v29; // [rsp+E8h] [rbp+77h] BYREF

  v29 = a3;
  v28 = a2;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CommonStartTelemetryLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_1804389D0;
    qword_1804389D0[0] = &LockScreenServiceLogging::`vftable';
    qword_1804389E8 = (struct _TlgProvider_t *)&`CommonStartTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_d4015babfde9ac14d130539030d425b5_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804389D0, qword_1804389E8);
    InitOnceComplete(&`CommonStartTelemetryLogging::Instance'::`2'::wrapper, 0, qword_1804389D0);
  }
  LODWORD(v6) = (_DWORD)Context;
  v7 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 5u && (*(_QWORD *)(v7 + 16) & 0x400000000000LL) != 0 )
  {
    v6 = *(_QWORD *)(v7 + 24) & 0x400000000000LL;
    if ( v6 == *(_QWORD *)(v7 + 24) )
    {
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v19 = &v28;
      v22 = &v29;
      v25 = &v12;
      v20 = 4;
      v23 = 4;
      v12 = a4;
      v26 = 4;
      v8 = (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL);
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = *(_QWORD *)(v7 + 8);
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180398E0A - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v9 = *(_QWORD *)(v7 + 32);
      EventDescriptor.Keyword = 0x400000000000LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v16 = &unk_180398E15;
      UserData.Reserved = 2;
      v17 = 39;
      v18 = 1;
      LODWORD(v6) = EventWriteTransfer(v9, &EventDescriptor, v8, 0LL, 5u, &UserData);
    }
  }
  return v6;
}
