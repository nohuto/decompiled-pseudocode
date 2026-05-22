/*
 * XREFs of ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x18000BC98
 * Callers:
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x180083400 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 * Callees:
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18000BB40 (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     ??$emplace_back@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@$$QEAV234@@Z @ 0x18000C4F8 (--$emplace_back@V-$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIContextua.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall InputSiteManager::GetInputSiteListFromDITCallbackStruct(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 *InputSiteFromInputSinkHandle; // rax
  int v12; // ebx
  __int64 v13; // [rsp+0h] [rbp-88h] BYREF
  int v14; // [rsp+20h] [rbp-68h]
  __int64 v15; // [rsp+28h] [rbp-60h]
  __int64 v16; // [rsp+30h] [rbp-58h]
  wil::ResultException *v17; // [rsp+38h] [rbp-50h] BYREF
  __int64 v18; // [rsp+40h] [rbp-48h]
  __int64 v19; // [rsp+48h] [rbp-40h]
  __int64 v20; // [rsp+90h] [rbp+8h]
  __int64 v22; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+20h]

  v20 = a1;
  v16 = -2LL;
  v3 = a2;
  v4 = a1;
  v14 = 0;
  v5 = *(unsigned int *)(a3 + 48);
  v6 = *(_QWORD *)(a3 + 40);
  v18 = v5;
  v19 = v6;
  if ( !v6 && v5 )
  {
    _o_terminate(a1);
    __debugbreak();
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v14 = 1;
  v7 = 0LL;
  v8 = v5;
  v15 = v5;
  v9 = v5;
  while ( 1 )
  {
    v23 = v7;
    if ( v7 == v8 )
      break;
    if ( v7 < 0 || v7 >= v9 )
    {
      _o_terminate(a1);
      __debugbreak();
    }
    try
    {
      InputSiteFromInputSinkHandle = InputSiteManager::GetInputSiteFromInputSinkHandle(
                                       v4,
                                       &v22,
                                       *(void **)(v6 + 8 * v7));
      std::vector<Microsoft::WRL::ComPtr<IContextualProcessor>>::emplace_back<Microsoft::WRL::ComPtr<IContextualProcessor>>(
        v3,
        InputSiteFromInputSinkHandle);
      a1 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
      }
    }
    catch ( wil::ResultException *v17 )
    {
      v12 = *((_DWORD *)v17 + 7);
      if ( v12 != (unsigned int)wil::details::NtStatusToHr((wil::details *)0xC0000008LL, (int)&v13) )
        throw;
      v4 = v20;
      v3 = a2;
      v6 = v19;
      v5 = v18;
      v8 = v15;
      v7 = v23;
    }
    v9 = v5;
    if ( v7 >= v5 )
    {
      _o_terminate(a1);
      __debugbreak();
    }
    ++v7;
  }
  return v3;
}
