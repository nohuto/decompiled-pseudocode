/*
 * XREFs of ?Initialize@DWMCursor@@QEAAJ_N@Z @ 0x18008AE5C
 * Callers:
 *     ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x18008A2A0 (-CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RegisterForTestCommandMessage@TestCommandHost@@SAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestCommandMessageDataHeader@@@ZAEAVCommandRegistrationToken@1@@Z @ 0x180009950 (-RegisterForTestCommandMessage@TestCommandHost@@SAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestC.c)
 *     ?DuplicateHandleAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x18008A160 (-DuplicateHandleAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursor::Initialize(DWMCursor *this, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3 *v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r15
  char *v10; // rbp
  DWORD LastError; // ebx
  _DWORD *v12; // rbp
  int v13; // r11d
  unsigned int v14; // ecx
  _DWORD *v15; // rax
  unsigned int v16; // r10d
  char v17; // cl
  int v18; // ebx
  __int64 v19; // rax
  _DWORD *v20; // r8
  __int64 v21; // rcx
  unsigned int v22; // ebx
  _QWORD *v23; // rsi
  __int64 v24; // rcx
  _QWORD v26[2]; // [rsp+28h] [rbp-40h] BYREF
  __int128 v27; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v26[1] = -2LL;
  v26[0] = 0LL;
  v5 = retaddr;
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      a4);
    JUMPOUT(0x18008B0CBLL);
  }
  if ( *(_BYTE *)ISMTestMode::s_instance )
    goto LABEL_10;
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 8))(
         *((_QWORD *)this + 8),
         &GUID_e5416f03_7e37_415e_aacb_83cb988a6bb4,
         v26) >= 0 )
  {
    v6 = v26[0];
    v7 = (_QWORD *)((char *)this + 72);
    v8 = *((_QWORD *)this + 9);
    if ( v8 )
    {
      *v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( (*(int (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v6 + 216LL))(
           v6,
           &GUID_16cdff07_c503_419c_83f2_0965c7af1fa6,
           (char *)this + 72) >= 0 )
    {
      v9 = v26[0];
      v10 = (char *)*((_QWORD *)this + 10);
      if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        LastError = GetLastError();
        CloseHandle(v10);
        SetLastError(LastError);
      }
      *((_QWORD *)this + 10) = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v9 + 224LL))(v9, *v7, (char *)this + 80) >= 0 )
      {
LABEL_10:
        TestCommandHost::RegisterForTestCommandMessage(
          (__int64)v5,
          (__int64)this,
          (__int64)lambda_11806f6ea1ea80dc87cf8ad0dd8eb00d_::_lambda_invoker_cdecl_,
          (__int64)this + 128);
        v12 = (_DWORD *)*((_QWORD *)this + 4);
        (*(void (__fastcall **)(DWMCursor *, __int128 *))(*(_QWORD *)this + 40LL))(this, &v27);
        v13 = v12[310];
        if ( (_DWORD)v27 == v13 )
        {
LABEL_14:
          v16 = 0;
          v17 = 0;
          if ( (_DWORD)v27 != v13 )
          {
            v19 = 0LL;
            v20 = v12 + 10;
            do
            {
              if ( *v20 == (_DWORD)v27 )
              {
                v21 = 3 * v19;
                goto LABEL_30;
              }
              if ( !v17 && *v20 == v13 )
              {
                v16 = v19;
                v17 = 1;
              }
              v19 = (unsigned int)(v19 + 1);
              v20 += 6;
            }
            while ( (unsigned int)v19 < 0x32 );
            if ( !v17 )
            {
              v18 = -2147467259;
              goto LABEL_17;
            }
            v21 = 3LL * v16;
            *(_OWORD *)&v12[6 * v16 + 10] = v27;
LABEL_30:
            *(_QWORD *)&v12[2 * v21 + 14] = this;
            v22 = 0;
            v23 = v12 + 330;
            do
            {
              if ( *v23 )
                DWMCursorBroker::DuplicateHandleAndVerifySend((DWMCursorBroker *)v12, this, v22);
              ++v22;
              v23 += 2;
            }
            while ( v22 < 0xA );
            v18 = 0;
            goto LABEL_35;
          }
          v18 = -2147024809;
        }
        else
        {
          v14 = 0;
          v15 = v12 + 10;
          while ( *v15 != (_DWORD)v27 )
          {
            ++v14;
            v15 += 6;
            if ( v14 >= 0x32 )
              goto LABEL_14;
          }
          v18 = -2147418113;
        }
LABEL_17:
        if ( IsDebuggerPresent() )
          __debugbreak();
        RaiseFailFastException(0LL, 0LL, 0);
LABEL_35:
        *((_BYTE *)this + 57) = v18 >= 0;
      }
    }
  }
  v24 = v26[0];
  if ( v26[0] )
  {
    v26[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  return 0LL;
}
