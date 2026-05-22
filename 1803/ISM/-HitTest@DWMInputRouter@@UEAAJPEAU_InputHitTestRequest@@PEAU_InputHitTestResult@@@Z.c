/*
 * XREFs of ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x18007EFF0
 * Callers:
 *     ?HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x180084DA0 (-HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 *     ?HitTestInternal@MPCInputRouter@@AEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x180084E84 (-HitTestInternal@MPCInputRouter@@AEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 * Callees:
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18000C024 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18000C750 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?GetSpatialInputActivationPolicyFromInputSites@DWMInputRouter@@AEAA?AW4SPATIAL_INPUT_ACTIVATION_POLICY@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18007F198 (-GetSpatialInputActivationPolicyFromInputSites@DWMInputRouter@@AEAA-AW4SPATIAL_INPUT_ACTIVATION_.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x180083400 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::HitTest(
        DWMInputRouter *this,
        struct _InputHitTestRequest *a2,
        struct _InputHitTestResult *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rax
  unsigned int ViewInstanceIdFromInputSiteList; // eax
  __int64 v9; // rdx
  _DWORD v11[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+48h] [rbp-C0h]
  _OWORD v13[7]; // [rsp+70h] [rbp-98h]
  int v14; // [rsp+E4h] [rbp-24h]
  int v15; // [rsp+F0h] [rbp-18h]
  __int64 v16; // [rsp+F4h] [rbp-14h]
  _BYTE v17[8]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v18[3]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v19; // [rsp+128h] [rbp+20h]
  __int128 v20; // [rsp+130h] [rbp+28h]
  __int128 v21; // [rsp+140h] [rbp+38h]
  __int128 v22; // [rsp+150h] [rbp+48h]
  __int128 v23; // [rsp+160h] [rbp+58h]
  __int64 v24; // [rsp+170h] [rbp+68h]
  char v25; // [rsp+178h] [rbp+70h]
  int v26; // [rsp+17Ch] [rbp+74h]
  __int128 v27; // [rsp+180h] [rbp+78h]
  __int128 v28; // [rsp+190h] [rbp+88h]
  __int64 v29; // [rsp+1A0h] [rbp+98h]

  v6 = 0;
  memset_0(v11, 0, 0xC8uLL);
  v11[0] = *(_DWORD *)a2;
  v12 = *((_QWORD *)a2 + 2);
  v14 = *((_DWORD *)a2 + 23);
  v15 = *((_DWORD *)a2 + 24);
  v16 = *(_QWORD *)((char *)a2 + 100);
  v13[0] = *(_OWORD *)((char *)a2 + 28);
  v13[1] = *(_OWORD *)((char *)a2 + 44);
  v13[2] = *(_OWORD *)((char *)a2 + 60);
  v13[3] = *(_OWORD *)((char *)a2 + 76);
  HitTestHelper::HitTestRequestWithRetry(v17, v11, *((_QWORD *)this + 28));
  if ( v17[0] )
  {
    *(_QWORD *)a3 = *((_QWORD *)a2 + 2);
    *((_QWORD *)a3 + 1) = v24;
    v7 = v19;
    v19 = 0LL;
    *((_QWORD *)a3 + 2) = v7;
    *(_OWORD *)((char *)a3 + 24) = v20;
    *(_OWORD *)((char *)a3 + 40) = v21;
    *(_OWORD *)((char *)a3 + 56) = v22;
    *(_OWORD *)((char *)a3 + 72) = v23;
    *((_DWORD *)a3 + 22) = v26;
    *((_OWORD *)a3 + 6) = v27;
    *((_OWORD *)a3 + 7) = v28;
    *((_QWORD *)a3 + 16) = v29;
    *((_DWORD *)a3 + 34) &= ~1u;
    *((_DWORD *)a3 + 34) |= v25 & 1;
    ViewInstanceIdFromInputSiteList = InputSiteManager::GetViewInstanceIdFromInputSiteList(v18);
    *((_QWORD *)a3 + 18) = ViewInstanceIdFromInputSiteList;
    *((_DWORD *)a3 + 38) = DWMInputRouter::GetSpatialInputActivationPolicyFromInputSites(
                             ViewInstanceIdFromInputSiteList,
                             v18);
  }
  else
  {
    v6 = -2147467259;
  }
  v9 = v19 - 1;
  if ( (unsigned __int64)(v19 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v19);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v18, v9);
  return v6;
}
