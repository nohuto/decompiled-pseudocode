/*
 * XREFs of ?AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x1800253E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?DuplicateHandleAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x180025784 (-DuplicateHandleAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::AddEndpoint(__int64 a1, _DWORD *a2)
{
  DWMCursorBroker *v2; // rbp
  _QWORD *v4; // rbx
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  int v13; // r9d
  __int64 v14; // r8
  __int64 i; // rdi
  int v16; // eax
  __int64 v17; // rcx
  _BYTE v19[40]; // [rsp+38h] [rbp-1E0h] BYREF
  struct DWMCursor *v20[50]; // [rsp+60h] [rbp-1B8h]

  v2 = (DWMCursorBroker *)(a1 - 16);
  v4 = (_QWORD *)(a1 - 16 + 1328);
  v6 = 0;
  while ( *v4 )
  {
    if ( (*(int (__fastcall **)(_QWORD *, _QWORD, _BYTE *))(**((_QWORD **)v2 + 161) + 112LL))(
           *((_QWORD **)v2 + 161),
           *v4,
           v19) < 0 )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD))(**((_QWORD **)v2 + 161) + 144LL))(*((_QWORD **)v2 + 161), *v4);
      *v4 = 0LL;
    }
    if ( !*v4 )
      break;
    ++v6;
    v4 += 2;
    if ( v6 >= 0xA )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 207, 5);
      return 0LL;
    }
  }
  v8 = 16LL * v6;
  v9 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64))(**(_QWORD **)(a1 + 1272) + 96LL))(
         *(_QWORD *)(a1 + 1272),
         a2,
         v8 + a1 + 1312);
  if ( v9 >= 0 )
  {
    v11 = a1 + 32;
    *(_DWORD *)(v8 + a1 + 1304) = *a2;
    v12 = 0LL;
    v13 = *(_DWORD *)(a1 + 1232);
    v14 = 50LL;
    do
    {
      if ( *(_DWORD *)v11 != v13 )
      {
        v20[v12] = *(struct DWMCursor **)(v11 + 16);
        v12 = (unsigned int)(v12 + 1);
      }
      v11 += 24LL;
      --v14;
    }
    while ( v14 );
    for ( i = 0LL; (unsigned int)i < (unsigned int)v12; i = (unsigned int)(i + 1) )
    {
      v16 = DWMCursorBroker::DuplicateHandleAndVerifySend(v2, v20[i], v6);
      if ( v16 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v17, &MinInput_Warning_CheckResult, 0, 219, v16);
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 211, v9);
  }
  return 0LL;
}
