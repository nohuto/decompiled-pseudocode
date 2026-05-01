/*
 * XREFs of ?BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA?AVShowJumpViewActivity@JumpViewProvider@@PEAUIJumpViewParams@JumpView@Shell@Internal@Windows@@@Z @ 0x1800BF06C
 * Callers:
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1800BD570 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@JumpView@Shell@Internal@Windows@@W4JumpViewInvocationMethod@4567@@Z @ 0x1800BC608 (-StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CJumpViewExperienceManager::BeginTelemetryActivity(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  const WCHAR *StringRawBuffer; // rsi
  const WCHAR *v10; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  HSTRING string; // [rsp+80h] [rbp+40h] BYREF
  __int64 v14; // [rsp+88h] [rbp+48h] BYREF
  HSTRING v15; // [rsp+90h] [rbp+50h] BYREF

  v14 = a2;
  v15 = 0LL;
  WindowsDeleteString(0LL);
  v15 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a3 + 64LL))(a3, &v15);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x322,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a3 + 96LL))(a3, &string);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x325,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 288LL))(a3, &v14);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x328,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v10 = WindowsGetStringRawBuffer(v15, 0LL);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = a2;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_DWORD *)(a2 + 32) = 0;
  *(_QWORD *)(a2 + 40) = a2 + 96;
  *(_QWORD *)(a2 + 48) = a2 + 56;
  *(_DWORD *)(a2 + 56) = 0;
  *(_BYTE *)(a2 + 60) = 0;
  *(_BYTE *)(a2 + 120) = 0;
  *(_DWORD *)(a2 + 96) = 0;
  *(_QWORD *)(a2 + 104) = "ShowJumpViewActivity";
  *(_QWORD *)(a2 + 112) = 0LL;
  *(_QWORD *)(a2 + 128) = 1LL;
  *(_QWORD *)(a2 + 280) = 0LL;
  *(_QWORD *)(a2 + 288) = 0LL;
  memset((void *)(a2 + 136), 0, 0x90uLL);
  *(_QWORD *)(a2 + 296) = 0LL;
  *(_QWORD *)(a2 + 304) = 0LL;
  *(_QWORD *)a2 = &JumpViewProvider::ShowJumpViewActivity::`vftable';
  JumpViewProvider::ShowJumpViewActivity::StartActivity(a2, v10, StringRawBuffer, *(_DWORD *)(a1 + 468), v14);
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v15);
  return a2;
}
