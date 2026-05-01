/*
 * XREFs of ?s_RunDirectorThread@LockScreenDirectorServiceProviderImpl@@CAKPEAX@Z @ 0x1800E2250
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180048D24 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall LockScreenDirectorServiceProviderImpl::s_RunDirectorThread(CMarshaledInterface *Parameter)
{
  int v2; // edi
  HANDLE v3; // rcx
  char *v4; // rsi
  char *v5; // rcx
  __int64 v6; // rcx
  char v7; // di
  DWORD v8; // eax
  DWORD v9; // eax
  LPVOID v10; // rcx
  MSG Msg; // [rsp+38h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  HANDLE pHandles; // [rsp+90h] [rbp+20h] BYREF
  LPVOID v15; // [rsp+98h] [rbp+28h] BYREF
  CMarshaledInterface *v16; // [rsp+A0h] [rbp+30h]

  v16 = Parameter;
  v15 = 0LL;
  v2 = CoCreateInstance(
         &GUID_637118f4_0e4e_4c90_bc39_161165f55b6e,
         0LL,
         0x17u,
         &GUID_6119bcc6_cac2_4d37_9bbf_76a34697e7fb,
         &v15);
  if ( v2 >= 0 )
  {
    pHandles = 0LL;
    v2 = CMarshaledInterface::_Unmarshal(Parameter, &GUID_c853771a_f336_4cf8_9a27_1570293ab52d, &pHandles, 0);
    if ( v2 >= 0 )
      v2 = (*(__int64 (__fastcall **)(HANDLE, LPVOID))(*(_QWORD *)pHandles + 24LL))(pHandles, v15);
    v3 = pHandles;
    if ( pHandles )
    {
      pHandles = 0LL;
      (*(void (__fastcall **)(HANDLE))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  v4 = (char *)*((_QWORD *)Parameter + 1);
  *((_QWORD *)Parameter + 1) = 0LL;
  if ( Parameter )
  {
    v5 = (char *)*((_QWORD *)Parameter + 1);
    if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v5);
    v6 = *(_QWORD *)Parameter;
    if ( *(_QWORD *)Parameter )
    {
      *(_QWORD *)Parameter = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    operator delete(Parameter);
    v16 = 0LL;
  }
  if ( v2 >= 0 )
  {
    pHandles = v4;
    v7 = 1;
    do
    {
      v8 = MsgWaitForMultipleObjectsEx(1u, &pHandles, 0xFFFFFFFF, 0x1CFFu, 6u);
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 != 191 )
            break;
        }
        else
        {
          while ( PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
          {
            TranslateMessage(&Msg);
            DispatchMessageW(&Msg);
          }
        }
      }
      else
      {
        v7 = 0;
      }
    }
    while ( v7 );
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDA,
      (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)v2);
  }
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  v10 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
