/*
 * XREFs of ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x18007E750
 * Callers:
 *     ?HitTest@MPCInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x180084D50 (-HitTest@MPCInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?HitTestInternal@MPCInputRouter@@AEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x180084DB4 (-HitTestInternal@MPCInputRouter@@AEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18000C024 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18000C750 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ??1?$vector@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180017550 (--1-$vector@V-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMessageProxy@@@WR.c)
 *     ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x18007EB20 (-GetTargetListFromHitTestResult@DWMInputRouter@@AEAA-AV-$vector@V-$ComPtr@UIInputTarget@@@WRL@Mi.c)
 *     ?OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z @ 0x180080700 (-OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z.c)
 *     ??A?$unordered_map@KUInputContext@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@@std@@QEAAAEAUInputContext@@AEBK@Z @ 0x180080EDC (--A-$unordered_map@KUInputContext@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U-$pair@$$CBKUInp.c)
 *     ?GetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKPEAPEAUDeviceInfo@@@Z @ 0x180081A6C (-GetValueForKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKPEAPEAUDeviceInfo@@@Z.c)
 *     ?BuildRequestForLegacyInputInfo@HitTestHelper@@CA?AUHitTestRequest@1@PEAULegacyInputInfo@@KPEAUHMONITOR__@@@Z @ 0x1800832EC (-BuildRequestForLegacyInputInfo@HitTestHelper@@CA-AUHitTestRequest@1@PEAULegacyInputInfo@@KPEAUH.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x180083400 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800AF5B8 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@P.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DWMInputRouter::HitTest(
        DWMInputRouter *this,
        struct IInputDisplay *a2,
        struct InputInfo *a3,
        unsigned int a4,
        struct IInputTarget *a5,
        struct IInputTarget **a6)
{
  __int64 v6; // rdi
  struct IInputDisplay *v8; // r8
  int ValueForKey; // eax
  int v12; // eax
  __int64 v13; // rdi
  unsigned int ViewInstanceIdFromInputSiteList; // eax
  struct InputContext *v15; // rax
  struct InputContext *v16; // rdi
  __int64 v17; // rcx
  struct IInputDisplay *v18; // rcx
  struct IInputDisplay *v19; // rbx
  _QWORD *v20; // rbx
  _QWORD *v21; // r15
  struct IInputTarget *v22; // rcx
  struct IInputTarget *v23; // rcx
  int (__fastcall ***v24)(_QWORD, GUID *, struct IInputTarget **); // rbx
  struct IInputTarget *v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  struct IInputTarget *v28; // rbx
  struct IInputTarget *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct IInputTarget *v32; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+38h] [rbp-C8h] BYREF
  struct IInputDisplay *v34; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v36[4]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v37[208]; // [rsp+70h] [rbp-90h] BYREF
  char v38[8]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v39[3]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v40; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v36[3] = -2LL;
  v6 = a4;
  v8 = a2;
  v34 = a2;
  if ( a6 )
  {
    if ( !a2 )
    {
      v32 = 0LL;
      ValueForKey = DynamicSizeMap<unsigned long,DeviceInfo *,1>::GetValueForKey(
                      (char *)this + 232,
                      (char *)a3 + 4,
                      &v32);
      if ( ValueForKey < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4EE,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)ValueForKey);
        __debugbreak();
      }
      v12 = (*(__int64 (__fastcall **)(DWMInputRouter *, struct IInputTarget *, struct IInputDisplay **))(*(_QWORD *)this + 80LL))(
              this,
              v32,
              &v34);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4F0,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v12);
        JUMPOUT(0x18007EB1ELL);
      }
      v8 = v34;
    }
    (*(void (__fastcall **)(struct IInputDisplay *, __int64 *))(*(_QWORD *)v8 + 24LL))(v8, &v35);
    HitTestHelper::BuildRequestForLegacyInputInfo(v37, a3, (unsigned int)v6, v35);
    HitTestHelper::HitTestRequestWithRetry(v38, v37, *((_QWORD *)this + 28));
    v13 = 32 * v6;
    if ( (*((_BYTE *)a3 + v13 + 60) & 2) != 0 )
    {
      ViewInstanceIdFromInputSiteList = InputSiteManager::GetViewInstanceIdFromInputSiteList(v39);
      DWMInputRouter::OnPointerInputDown(
        this,
        ViewInstanceIdFromInputSiteList,
        *((unsigned int *)a3 + 1),
        *(unsigned int *)a3,
        v35,
        *(_QWORD *)((char *)a3 + v13 + 64),
        *(_QWORD *)((char *)a3 + v13 + 64));
    }
    v33 = 0LL;
    if ( a5 )
      (**(void (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a5)(
        a5,
        &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
        &v33);
    DWMInputRouter::GetTargetListFromHitTestResult(this, (__int64)&v33);
    v15 = (struct InputContext *)std::unordered_map<unsigned long,InputContext>::operator[](
                                   (char *)this + 624,
                                   (char *)a3 + 4);
    v16 = v15;
    v17 = *(_QWORD *)v15;
    if ( *(_QWORD *)v15 )
    {
      *(_QWORD *)v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v18 = (struct IInputDisplay *)*((_QWORD *)v16 + 1);
    v19 = v34;
    if ( v18 != v34 )
    {
      if ( v34 )
      {
        (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v34 + 8LL))(v34);
        v18 = (struct IInputDisplay *)*((_QWORD *)v16 + 1);
      }
      *((_QWORD *)v16 + 1) = v19;
      if ( v18 )
        (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v20 = (_QWORD *)v36[0];
    v21 = (_QWORD *)v36[1];
    while ( v20 != v21 )
    {
      v32 = 0LL;
      if ( (**(int (__fastcall ***)(_QWORD, GUID *, struct IInputTarget **))*v20)(
             *v20,
             &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
             &v32) >= 0 )
      {
        v23 = *(struct IInputTarget **)v16;
        v24 = (int (__fastcall ***)(_QWORD, GUID *, struct IInputTarget **))*v20;
        if ( *(int (__fastcall ****)(_QWORD, GUID *, struct IInputTarget **))v16 != v24 )
        {
          if ( v24 )
          {
            ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, struct IInputTarget **)))(*v24)[1])(v24);
            v23 = *(struct IInputTarget **)v16;
          }
          *(_QWORD *)v16 = v24;
          if ( v23 )
            (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v23 + 16LL))(v23);
        }
        v25 = v32;
        if ( v32 )
        {
          v32 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v25 + 16LL))(v25);
        }
        break;
      }
      v22 = v32;
      if ( v32 )
      {
        v32 = 0LL;
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v22 + 16LL))(v22);
      }
      ++v20;
    }
    v32 = 0LL;
    v26 = ContextualProcessorManager::OnHitTest(*((ContextualProcessorManager **)this + 32), a3, v16, 0LL, &v32);
    v28 = v32;
    if ( v26 < 0 )
    {
      v29 = *(struct IInputTarget **)v16;
      if ( *(_QWORD *)v16 )
      {
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v29 + 8LL))(v29);
        v29 = *(struct IInputTarget **)v16;
      }
      *a6 = v29;
    }
    else
    {
      if ( v32 )
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v32 + 8LL))(v32);
      *a6 = v28;
    }
    if ( v28 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v28 + 16LL))(v28);
    std::vector<Microsoft::WRL::ComPtr<IMessageProxy>>::~vector<Microsoft::WRL::ComPtr<IMessageProxy>>(
      (__int64)v36,
      v27);
    v31 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    if ( (unsigned __int64)(v40 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      NtCloseCompositionInputSink(v40);
    std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v39, v30);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
