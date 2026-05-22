/*
 * XREFs of ?GetCursors@DWMCursorBroker@@UEAA?AV?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x18008A8B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace_back@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@$$QEAV234@@Z @ 0x18000C4F8 (--$emplace_back@V-$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIContextua.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursorBroker::GetCursors(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  int v5; // r10d
  __int64 v6; // r9
  __int64 *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v11[3]; // [rsp+28h] [rbp-1C0h] BYREF
  _QWORD v12[50]; // [rsp+40h] [rbp-1A8h] BYREF

  v11[1] = -2LL;
  v11[2] = a2;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v3 = a1 + 40;
  v4 = 0LL;
  v5 = *(_DWORD *)(a1 + 1240);
  v6 = 50LL;
  do
  {
    if ( *(_DWORD *)v3 != v5 )
    {
      v12[v4] = *(_QWORD *)(v3 + 16);
      v4 = (unsigned int)(v4 + 1);
    }
    v3 += 24LL;
    --v6;
  }
  while ( v6 );
  if ( (_DWORD)v4 )
  {
    v7 = v12;
    v8 = (unsigned int)v4;
    do
    {
      v9 = *v7;
      v11[0] = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, v4, v3);
      std::vector<Microsoft::WRL::ComPtr<IContextualProcessor>>::emplace_back<Microsoft::WRL::ComPtr<IContextualProcessor>>(
        (__int64 **)a2,
        v11);
      if ( v11[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11[0] + 16LL))(v11[0]);
      ++v7;
      --v8;
    }
    while ( v8 );
  }
  return a2;
}
