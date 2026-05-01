/*
 * XREFs of ?BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA?AVShowJumpViewActivity@JumpViewProvider@@PEAUIJumpViewParams@JumpView@Shell@Internal@Windows@@@Z @ 0x1801760A0
 * Callers:
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180178080 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801756CC (--0-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I_ea_1801756CC.c)
 *     ?StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@JumpView@Shell@Internal@Windows@@W4JumpViewInvocationMethod@4567@@Z @ 0x1801784EC (-StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@.c)
 */

// Hidden C++ exception states: #wind=2
struct wil::details::IFailureCallback *__fastcall CJumpViewExperienceManager::BeginTelemetryActivity(
        __int64 a1,
        struct wil::details::IFailureCallback *a2,
        __int64 a3)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  PCWSTR StringRawBuffer; // rdi
  PCWSTR v10; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  HSTRING string; // [rsp+70h] [rbp+30h] BYREF
  struct wil::details::IFailureCallback *v14; // [rsp+78h] [rbp+38h] BYREF
  HSTRING v15; // [rsp+80h] [rbp+40h] BYREF

  v14 = a2;
  v15 = 0LL;
  WindowsDeleteString(0LL);
  v15 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a3 + 64LL))(a3, &v15);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      795LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a3 + 96LL))(a3, &string);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      798LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  v8 = (*(__int64 (__fastcall **)(__int64, struct wil::details::IFailureCallback **))(*(_QWORD *)a3 + 288LL))(a3, &v14);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      801LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v10 = WindowsGetStringRawBuffer(v15, 0LL);
  wil::ActivityBase<JumpViewProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<JumpViewProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(a2);
  *(_QWORD *)a2 = &JumpViewProvider::ShowJumpViewActivity::`vftable';
  JumpViewProvider::ShowJumpViewActivity::StartActivity(
    a2,
    v10,
    StringRawBuffer,
    *(unsigned int *)(a1 + 468),
    (_DWORD)v14);
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v15);
  return a2;
}
