/*
 * XREFs of ?Initialize@DWMCursor@@QEAAJ_N@Z @ 0x18002678C
 * Callers:
 *     ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x1800269BC (-Create@DWMCursor@@KAJPEAVDWMCursorBroker@@V-$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@UCurs.c)
 *     ?Initialize@DWMHardwareCursor@@IEAAJXZ @ 0x1800277FC (-Initialize@DWMHardwareCursor@@IEAAJXZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RegisterForTestCommandMessage@TestCommandHost@@SAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestCommandMessageDataHeader@@@ZAEAVCommandRegistrationToken@1@@Z @ 0x180009C1C (-RegisterForTestCommandMessage@TestCommandHost@@SAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestC.c)
 *     ?RegisterWithCursorBroker@DWMCursor@@IEAAJXZ @ 0x180026B1C (-RegisterWithCursorBroker@DWMCursor@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursor::Initialize(DWMCursor *this, char a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3 *v6; // rcx
  int v7; // eax
  int v8; // r9d
  __int64 v9; // rbx
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r15
  char *v13; // rbp
  DWORD LastError; // ebx
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF

  v18 = 0LL;
  v6 = retaddr;
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      a4);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 9))(
           *((_QWORD *)this + 9),
           &GUID_e5416f03_7e37_415e_aacb_83cb988a6bb4,
           &v18);
    if ( v7 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_22;
      v8 = 57;
      goto LABEL_21;
    }
    v9 = v18;
    v10 = (_QWORD *)((char *)this + 80);
    v11 = *((_QWORD *)this + 10);
    if ( v11 )
    {
      *v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v9 + 216LL))(
           v9,
           &GUID_16cdff07_c503_419c_83f2_0965c7af1fa6,
           (char *)this + 80);
    if ( v7 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_22;
      v8 = 59;
      goto LABEL_21;
    }
    v12 = v18;
    v13 = (char *)*((_QWORD *)this + 11);
    if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      CloseHandle(v13);
      SetLastError(LastError);
    }
    *((_QWORD *)this + 11) = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v12 + 224LL))(v12, *v10, (char *)this + 88);
    if ( v7 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_22;
      v8 = 61;
      goto LABEL_21;
    }
  }
  TestCommandHost::RegisterForTestCommandMessage(
    (__int64)v6,
    (__int64)this,
    (__int64)lambda_11806f6ea1ea80dc87cf8ad0dd8eb00d_::_lambda_invoker_cdecl_,
    (__int64)this + 136);
  if ( !a2 )
  {
    v7 = DWMCursor::RegisterWithCursorBroker(this);
    if ( v7 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 78;
LABEL_21:
      McTemplateU0qqq((__int64)v6, &MinInput_Warning_CheckResult, 0, v8, v7);
    }
  }
LABEL_22:
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return 0LL;
}
