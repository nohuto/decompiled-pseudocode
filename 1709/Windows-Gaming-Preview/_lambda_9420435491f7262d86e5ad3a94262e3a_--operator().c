/*
 * XREFs of _lambda_9420435491f7262d86e5ad3a94262e3a_::operator() @ 0x180039288
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_9420435491f7262d86e5ad3a94262e3a____Windows::Internal::CNoResult_::Run @ 0x180039AC0 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_9420435491f7262.c)
 * Callees:
 *     _TlgWrite @ 0x180001078 (_TlgWrite.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010A78 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SerializeRelatedProcessArray@@YAJPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@AEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180014D4C (-SerializeRelatedProcessArray@@YAJPEAU-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@.c)
 *     __security_check_cookie @ 0x180040F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_9420435491f7262d86e5ad3a94262e3a_::operator()(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  __int64 (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  GUID *v5; // rdx
  const GUID *StringRawBuffer; // r8
  const GUID *v7; // r9
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v9; // r15
  int v10; // eax
  int v11; // esi
  HSTRING v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // rcx
  HSTRING v14; // rdi
  PCWSTR v15; // rax
  int v16; // eax
  __int64 (__fastcall ***v17)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp-49h] BYREF
  UINT32 v20; // [rsp+40h] [rbp-41h] BYREF
  UINT32 length; // [rsp+44h] [rbp-3Dh] BYREF
  HSTRING string; // [rsp+48h] [rbp-39h] BYREF
  HSTRING v23[5]; // [rsp+50h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-9h] BYREF
  UINT32 *v25; // [rsp+98h] [rbp+17h]
  int v26; // [rsp+A0h] [rbp+1Fh]
  int v27; // [rsp+A4h] [rbp+23h]
  const GUID *v28; // [rsp+A8h] [rbp+27h]
  int v29; // [rsp+B0h] [rbp+2Fh]
  int v30; // [rsp+B4h] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v23[1] = (HSTRING)-2LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)a1 + 72LL);
  EnterCriticalSection(v2);
  v23[2] = (HSTRING)v2;
  v3 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*(_QWORD *)a1 + 112LL);
  if ( !v3 )
    goto LABEL_22;
  string = 0LL;
  v4 = SerializeRelatedProcessArray(v3, &string);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
      (const char *)(unsigned int)v4);
  length = 0;
  StringRawBuffer = (const GUID *)WindowsGetStringRawBuffer(string, &length);
  if ( (unsigned int)dword_18005B000 > 5
    && (qword_18005B010 & 0x800000000000LL) != 0
    && (qword_18005B018 & 0x800000000000LL) == qword_18005B018 )
  {
    LOWORD(v20) = length;
    v25 = &v20;
    v26 = 2;
    v27 = 0;
    v28 = StringRawBuffer;
    v29 = 2 * (unsigned __int16)length;
    v30 = 0;
    TlgWrite((TraceLoggingHProvider)&v20, &unk_180051F46, StringRawBuffer, v7, 4u, &pData);
  }
  v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*(_QWORD *)a1 + 112LL);
  v19 = v8;
  if ( v8 )
  {
    ((__int64 (__fastcall **)(_QWORD, GUID *, const GUID *))*v8)[1](v8, v5, StringRawBuffer);
    v8 = v19;
  }
  v23[3] = (HSTRING)&v19;
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 120LL);
  v23[0] = 0LL;
  v10 = SerializeRelatedProcessArray(v8, v23);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v14 = v23[0];
    v15 = WindowsGetStringRawBuffer(v23[0], &v20);
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, PCWSTR, _QWORD))(*(_QWORD *)v9 + 88LL))(v9, 5LL, v15, 2 * v20);
    v11 = v16;
    if ( v16 >= 0 )
    {
      WindowsDeleteString(v14);
      v17 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v17)[2])(v17);
      }
      v11 = 0;
      goto LABEL_19;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x242,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v16);
    v12 = v14;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x23A,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v10);
    v12 = v23[0];
  }
  WindowsDeleteString(v12);
  v13 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v13)[2])(v13);
  }
LABEL_19:
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
      (const char *)(unsigned int)v11);
    WindowsDeleteString(string);
    goto LABEL_23;
  }
  WindowsDeleteString(string);
LABEL_22:
  v11 = 0;
LABEL_23:
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v11;
}
