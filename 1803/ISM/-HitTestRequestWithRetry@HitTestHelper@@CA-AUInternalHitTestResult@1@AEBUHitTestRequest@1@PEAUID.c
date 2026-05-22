/*
 * XREFs of ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x180083400
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x18007E750 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x18007EFF0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 *     ?HitTestForPoint@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@PEAUHMONITOR__@@@Z @ 0x18007FD30 (-HitTestForPoint@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@PEAUHMONITOR__@@@Z.c)
 *     ?HitTestForPointAndType@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x18007FE30 (-HitTestForPointAndType@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@PEAUHMONITOR__@@K@Z.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAJUViewHitTestInfo@@PEAI@Z @ 0x1800807F4 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAJUViewHitTestInfo@@PEAI@Z.c)
 * Callees:
 *     ??1?$vector@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@U_Iterator_base0@2@@std@@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@U_Iterator_base0@2@@std@@@2@@std@@QEAA@XZ @ 0x180009FA4 (--1-$vector@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@PEAUISystemCont.c)
 *     ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x18000BC98 (-GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@VInputSite@@@.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18000C750 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180019168 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??0?$vector@PEAXV?$allocator@PEAX@std@@@std@@QEAA@_KAEBV?$allocator@PEAX@1@@Z @ 0x180083918 (--0-$vector@PEAXV-$allocator@PEAX@std@@@std@@QEAA@_KAEBV-$allocator@PEAX@1@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HitTestHelper::HitTestRequestWithRetry(
        __int64 a1,
        __int128 *a2,
        __int64 (__fastcall ***a3)(_QWORD, __int128 *))
{
  char v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // r15
  __int128 *v12; // r14
  __int64 v13; // r14
  DWORD LastError; // ebx
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 *InputSiteListFromDITCallbackStruct; // rbx
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // r12
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int128 v24; // xmm3
  __int128 v25; // xmm4
  __int64 v26; // rcx
  char v27; // al
  int v28; // edx
  __int128 v29; // xmm5
  __int128 v30; // xmm6
  __int64 v31; // xmm7_8
  __int64 v32; // rdx
  __int128 v34; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+38h] [rbp-D0h]
  __int64 v36; // [rsp+48h] [rbp-C0h]
  __int64 v37; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v38; // [rsp+58h] [rbp-B0h]
  __int64 v39; // [rsp+68h] [rbp-A0h]
  __int128 v40; // [rsp+70h] [rbp-98h] BYREF
  __int128 v41; // [rsp+80h] [rbp-88h]
  __int128 v42; // [rsp+90h] [rbp-78h]
  __int128 v43; // [rsp+A0h] [rbp-68h]
  __int64 v44; // [rsp+B0h] [rbp-58h]
  char v45; // [rsp+B8h] [rbp-50h]
  int v46; // [rsp+BCh] [rbp-4Ch]
  __int128 v47; // [rsp+C0h] [rbp-48h]
  __int128 v48; // [rsp+D0h] [rbp-38h]
  __int64 v49; // [rsp+E0h] [rbp-28h]
  __int64 (__fastcall ***v50)(_QWORD, __int128 *); // [rsp+E8h] [rbp-20h]
  unsigned __int64 v51[5]; // [rsp+F0h] [rbp-18h] BYREF
  char v52; // [rsp+118h] [rbp+10h] BYREF
  __int128 v53; // [rsp+438h] [rbp+330h] BYREF
  __int128 v54; // [rsp+448h] [rbp+340h]
  __int128 v55; // [rsp+458h] [rbp+350h]
  _BYTE v56[80]; // [rsp+468h] [rbp+360h]
  __int128 v57; // [rsp+4B8h] [rbp+3B0h]
  __int128 v58; // [rsp+4C8h] [rbp+3C0h]
  __int128 v59; // [rsp+4D8h] [rbp+3D0h]
  __int128 v60; // [rsp+4E8h] [rbp+3E0h]
  __int64 v61; // [rsp+4F8h] [rbp+3F0h]

  v51[3] = -2LL;
  v50 = a3;
  LOBYTE(v36) = 0;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  memset_0(&v40, 0, 0x78uLL);
  v53 = *a2;
  v54 = a2[1];
  v55 = a2[2];
  *(_OWORD *)v56 = a2[3];
  *(_OWORD *)&v56[16] = a2[4];
  *(_OWORD *)&v56[32] = a2[5];
  *(_OWORD *)&v56[48] = a2[6];
  *(_OWORD *)&v56[64] = a2[7];
  v57 = a2[8];
  v58 = a2[9];
  v59 = a2[10];
  v60 = a2[11];
  v61 = *((_QWORD *)a2 + 24);
  v34 = 0LL;
  v35 = 0LL;
  *((_QWORD *)&v55 + 1) = &v52;
  *(_DWORD *)v56 = 100;
  v6 = (**a3)(a3, &v53);
  LOBYTE(v36) = v6;
  v7 = v55;
  v39 = v55;
  if ( *(_DWORD *)v56 > 0x64u )
  {
    v8 = std::vector<void *>::vector<void *>(v51, *(unsigned int *)v56);
    v9 = 0LL;
    if ( &v34 == (__int128 *)v8 )
    {
      v11 = *((_QWORD *)&v34 + 1);
      v10 = v34;
    }
    else
    {
      std::vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<ISystemContextObserver *>>,std::_Iterator_base0>>::~vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<ISystemContextObserver *>>,std::_Iterator_base0>>((unsigned __int64 *)&v34);
      v9 = *(_QWORD *)v8;
      v10 = *(_QWORD *)v8;
      *(_QWORD *)&v34 = *(_QWORD *)v8;
      v11 = *(_QWORD *)(v8 + 8);
      *((_QWORD *)&v34 + 1) = v11;
      v35 = *(_QWORD *)(v8 + 16);
      *(_QWORD *)v8 = 0LL;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 16) = 0LL;
    }
    std::vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<ISystemContextObserver *>>,std::_Iterator_base0>>::~vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<ISystemContextObserver *>>,std::_Iterator_base0>>(v51);
    v53 = *a2;
    v54 = a2[1];
    v55 = a2[2];
    *(_OWORD *)v56 = a2[3];
    *(_OWORD *)&v56[16] = a2[4];
    *(_OWORD *)&v56[32] = a2[5];
    *(_OWORD *)&v56[48] = a2[6];
    *(_OWORD *)&v56[64] = a2[7];
    v12 = a2 + 8;
    v57 = *v12;
    v58 = v12[1];
    v59 = v12[2];
    v60 = v12[3];
    v61 = *((_QWORD *)v12 + 8);
    *((_QWORD *)&v55 + 1) = v10;
    *(_DWORD *)v56 = (v11 - v9) >> 3;
    v6 = (**v50)(v50, &v53);
    LOBYTE(v36) = v6;
    v13 = v55;
    if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      NtCloseCompositionInputSink(v7);
      SetLastError(LastError);
    }
    v7 = v13;
    v39 = v13;
  }
  if ( v6 )
  {
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 19) + 8LL) + 88LL))(*((_QWORD *)BamoServerConnection + 19) + 8LL);
    InputSiteListFromDITCallbackStruct = InputSiteManager::GetInputSiteListFromDITCallbackStruct(
                                           v16,
                                           v51,
                                           (__int64)&v53);
    if ( &v37 == InputSiteListFromDITCallbackStruct )
    {
      v21 = *((_QWORD *)&v38 + 1);
      v20 = v38;
      v19 = v37;
    }
    else
    {
      std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)&v37, v17);
      v19 = *InputSiteListFromDITCallbackStruct;
      v20 = InputSiteListFromDITCallbackStruct[1];
      v21 = InputSiteListFromDITCallbackStruct[2];
      *InputSiteListFromDITCallbackStruct = 0LL;
      InputSiteListFromDITCallbackStruct[1] = 0LL;
      InputSiteListFromDITCallbackStruct[2] = 0LL;
      v7 = v39;
      v6 = v36;
    }
    std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v51, v17);
    v22 = *(_OWORD *)&v56[8];
    v40 = *(_OWORD *)&v56[8];
    v23 = *(_OWORD *)&v56[24];
    v41 = *(_OWORD *)&v56[24];
    v24 = *(_OWORD *)&v56[40];
    v42 = *(_OWORD *)&v56[40];
    v25 = *(_OWORD *)&v56[56];
    v43 = *(_OWORD *)&v56[56];
    v26 = *((_QWORD *)&v54 + 1);
    v44 = *((_QWORD *)&v54 + 1);
    v27 = BYTE8(v59) & 1;
    v45 = BYTE8(v59) & 1;
    v28 = *(_DWORD *)&v56[72];
    v46 = *(_DWORD *)&v56[72];
    v29 = v57;
    v47 = v57;
    v30 = v58;
    v48 = v58;
    v31 = v59;
    v49 = v59;
  }
  else
  {
    v31 = v49;
    v30 = v48;
    v29 = v47;
    v28 = v46;
    v27 = v45;
    v26 = v44;
    v25 = v43;
    v24 = v42;
    v23 = v41;
    v22 = v40;
    v21 = *((_QWORD *)&v38 + 1);
    v20 = v38;
    v19 = v37;
  }
  *(_BYTE *)a1 = v6;
  *(_QWORD *)(a1 + 8) = v19;
  *(_QWORD *)(a1 + 16) = v20;
  *(_QWORD *)(a1 + 24) = v21;
  v37 = 0LL;
  v38 = 0LL;
  *(_QWORD *)(a1 + 32) = v7;
  v39 = 0LL;
  *(_OWORD *)(a1 + 40) = v22;
  *(_OWORD *)(a1 + 56) = v23;
  *(_OWORD *)(a1 + 72) = v24;
  *(_OWORD *)(a1 + 88) = v25;
  *(_QWORD *)(a1 + 104) = v26;
  *(_BYTE *)(a1 + 112) = v27;
  *(_DWORD *)(a1 + 116) = v28;
  *(_OWORD *)(a1 + 120) = v29;
  *(_OWORD *)(a1 + 136) = v30;
  *(_QWORD *)(a1 + 152) = v31;
  std::vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<ISystemContextObserver *>>,std::_Iterator_base0>>::~vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<ISystemContextObserver *>>,std::_Iterator_base0>>((unsigned __int64 *)&v34);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)&v37, v32);
  return a1;
}
