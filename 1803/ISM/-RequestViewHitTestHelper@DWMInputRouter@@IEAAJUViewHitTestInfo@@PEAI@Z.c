/*
 * XREFs of ?RequestViewHitTestHelper@DWMInputRouter@@IEAAJUViewHitTestInfo@@PEAI@Z @ 0x1800807F4
 * Callers:
 *     ?RequestViewHitTestSync@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAI@Z @ 0x180080930 (-RequestViewHitTestSync@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAI@Z.c)
 *     ?RequestViewHitTest@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAUIRemoteViewHitTestRequestClient@@@Z @ 0x180080970 (-RequestViewHitTest@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAUIRemoteViewHitTestRequestClient@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18000C024 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18000C750 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x180083400 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::RequestViewHitTestHelper(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // r15
  int v6; // eax
  unsigned int v7; // edi
  int v8; // ebx
  __int64 v9; // rdx
  int v11[2]; // [rsp+28h] [rbp-E0h]
  _QWORD v12[26]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v13[8]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v14[3]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v15; // [rsp+128h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  *(_QWORD *)v11 = *(_QWORD *)(a2 + 12);
  v5 = *(unsigned int *)(a2 + 8);
  v6 = *(_DWORD *)(a2 + 24);
  v7 = 0;
  if ( v6 )
  {
    if ( (v6 & 8) != 0 )
    {
      v8 = 2;
    }
    else if ( (v6 & 0x20) != 0 )
    {
      v8 = 5;
    }
    else
    {
      v8 = 3;
      if ( (v6 & 0x10) == 0 )
        v8 = (v6 & 2) != 0 ? 4 : 1;
    }
  }
  else
  {
    v8 = 0;
  }
  memset_0(v12, 0, 0xC8uLL);
  v12[2] = *(_QWORD *)v11;
  v12[1] = v5;
  LODWORD(v12[0]) = v8;
  HitTestHelper::HitTestRequestWithRetry(v13, v12, *(_QWORD *)(a1 + 224));
  if ( v13[0] )
  {
    *a3 = InputSiteManager::GetViewInstanceIdFromInputSiteList(v14);
  }
  else
  {
    v7 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x8000FFFFLL);
  }
  v9 = v15 - 1;
  if ( (unsigned __int64)(v15 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v15);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v14, v9);
  return v7;
}
