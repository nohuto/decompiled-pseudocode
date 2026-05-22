/*
 * XREFs of ?AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x180089E80
 * Callers:
 *     <none>
 * Callees:
 *     ?DuplicateHandleAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x18008A160 (-DuplicateHandleAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::AddEndpoint(__int64 a1, _DWORD *a2)
{
  DWMCursorBroker *v2; // rbp
  _QWORD *v4; // rbx
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rbx
  int v11; // r9d
  __int64 v12; // r8
  __int64 v13; // rdi
  _BYTE v15[40]; // [rsp+28h] [rbp-1E0h] BYREF
  struct DWMCursor *v16[50]; // [rsp+50h] [rbp-1B8h]

  v2 = (DWMCursorBroker *)(a1 - 8);
  v4 = (_QWORD *)(a1 - 8 + 1320);
  v6 = 0;
  while ( *v4 )
  {
    if ( (*(int (__fastcall **)(_QWORD *, _QWORD, _BYTE *))(**((_QWORD **)v2 + 160) + 112LL))(
           *((_QWORD **)v2 + 160),
           *v4,
           v15) >= 0 )
    {
      v7 = *v4;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD))(**((_QWORD **)v2 + 160) + 144LL))(*((_QWORD **)v2 + 160), *v4);
      *v4 = 0LL;
      v7 = 0LL;
    }
    if ( !v7 )
      break;
    ++v6;
    v4 += 2;
    if ( v6 >= 0xA )
      return 0LL;
  }
  v8 = 16LL * v6;
  if ( (*(int (__fastcall **)(_QWORD, _DWORD *, __int64))(**(_QWORD **)(a1 + 1272) + 96LL))(
         *(_QWORD *)(a1 + 1272),
         a2,
         v8 + a1 + 1312) >= 0 )
  {
    v9 = a1 + 32;
    *(_DWORD *)(v8 + a1 + 1304) = *a2;
    v10 = 0LL;
    v11 = *(_DWORD *)(a1 + 1232);
    v12 = 50LL;
    do
    {
      if ( *(_DWORD *)v9 != v11 )
      {
        v16[v10] = *(struct DWMCursor **)(v9 + 16);
        v10 = (unsigned int)(v10 + 1);
      }
      v9 += 24LL;
      --v12;
    }
    while ( v12 );
    v13 = 0LL;
    if ( (_DWORD)v10 )
    {
      while ( (int)DWMCursorBroker::DuplicateHandleAndVerifySend(v2, v16[v13], v6) >= 0 )
      {
        v13 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v13 >= (unsigned int)v10 )
          return 0LL;
      }
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
    }
  }
  return 0LL;
}
