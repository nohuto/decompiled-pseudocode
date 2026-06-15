/*
 * XREFs of ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z @ 0x1800FBBCC
 * Callers:
 *     PolicyConfigAddDynamicRoutingRule @ 0x1800BF680 (PolicyConfigAddDynamicRoutingRule.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180030CF0 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Release@PersistedEndpointPolicyRule@@UEAAKXZ @ 0x180059F00 (-Release@PersistedEndpointPolicyRule@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AddTail@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAUIPolicyRule@@@Z @ 0x1800FC164 (-AddTail@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY06H@Z @ 0x1800FC970 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY06H@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@H@Z @ 0x1800FCBF8 (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@H@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAX_J@Z @ 0x1800FCF38 (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAX_J@Z.c)
 *     ?SetAt@?$CAtlMap@_JV?$CComPtr@UIUnknown@@@ATL@@V?$CElementTraits@_J@2@V?$CElementTraits@V?$CComPtr@UIUnknown@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@_JAEBV?$CComPtr@UIUnknown@@@2@@Z @ 0x1800FD07C (-SetAt@-$CAtlMap@_JV-$CComPtr@UIUnknown@@@ATL@@V-$CElementTraits@_J@2@V-$CElementTraits@V-$CComP.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall DynamicAudioEndpointManager::AddRule(
        DynamicAudioEndpointManager *this,
        void *a2,
        struct _DynamicRoutingRule *a3,
        __int64 *a4)
{
  __int64 *v4; // r13
  void *v6; // r12
  DynamicAudioEndpointManager *v7; // r14
  HRESULT refreshed; // edi
  void (*v9)(void); // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r12
  ATL::CAtlException *v17; // rbx
  struct IUnknown *v18; // [rsp+30h] [rbp-E8h] BYREF
  PersistedEndpointPolicyRule *v19; // [rsp+38h] [rbp-E0h] BYREF
  struct IAudioProcess *v20; // [rsp+40h] [rbp-D8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-D0h] BYREF
  char v22; // [rsp+50h] [rbp-C8h]
  LPVOID ppv; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-B8h] BYREF
  void *v25; // [rsp+68h] [rbp-B0h]
  DynamicAudioEndpointManager *v26; // [rsp+70h] [rbp-A8h]
  void *v27; // [rsp+78h] [rbp-A0h]
  __int64 *v28; // [rsp+80h] [rbp-98h]
  _QWORD *v29; // [rsp+88h] [rbp-90h]
  __int64 v30; // [rsp+90h] [rbp-88h]
  ATL::CAtlException *v31; // [rsp+98h] [rbp-80h] BYREF
  int v32[7]; // [rsp+A0h] [rbp-78h] BYREF

  v30 = -2LL;
  v4 = a4;
  v6 = a2;
  v25 = a2;
  v27 = a2;
  v28 = a4;
  v7 = g_DynamicAudioEndpointManager;
  v26 = g_DynamicAudioEndpointManager;
  memset_0(v32, 0, 0x38uLL);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v7 + 24);
  v22 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v20 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  ppv = 0LL;
  v24 = 0LL;
  if ( *((_DWORD *)a3 + 1) > 1u || *(_DWORD *)a3 > 6u && *(_DWORD *)a3 != 0x7FFF )
  {
    refreshed = -2147024809;
LABEL_3:
    if ( v22 )
      LeaveCriticalSection(lpCriticalSection);
    return (unsigned int)refreshed;
  }
  refreshed = CoCreateInstance(
                &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                0LL,
                0x17u,
                &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                &ppv);
  if ( refreshed < 0 )
  {
    if ( !v24 )
    {
LABEL_11:
      if ( ppv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
      if ( v18 )
        ((void (__fastcall *)(struct IUnknown *))v18->lpVtbl->Release)(v18);
      if ( v19 )
      {
        if ( *(unsigned int (__fastcall **)(PersistedEndpointPolicyRule *))(*(_QWORD *)v19 + 16LL) == PersistedEndpointPolicyRule::Release )
          PersistedEndpointPolicyRule::Release(v19);
        else
          (*(void (__fastcall **)(PersistedEndpointPolicyRule *))(*(_QWORD *)v19 + 16LL))(v19);
      }
      if ( v20 )
        (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v20 + 16LL))(v20);
      goto LABEL_3;
    }
    v9 = *(void (**)(void))(*(_QWORD *)v24 + 16LL);
LABEL_10:
    v9();
    goto LABEL_11;
  }
  if ( (*(int (__fastcall **)(LPVOID, char *, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, (char *)a3 + 12, &v24) < 0 )
  {
    refreshed = -2147024809;
LABEL_23:
    if ( !v24 )
      goto LABEL_11;
    v9 = *(void (**)(void))(*(_QWORD *)v24 + 16LL);
    goto LABEL_10;
  }
  refreshed = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, void *, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager + 32LL))(
                g_PolicyManager,
                v6,
                &v20);
  if ( refreshed < 0 )
    goto LABEL_23;
  if ( *((_DWORD *)a3 + 2) != 1 )
  {
    refreshed = -2147467263;
    goto LABEL_23;
  }
  v10 = operator new(0x28uLL);
  v11 = v10;
  v29 = v10;
  if ( v10 )
  {
    *((_DWORD *)v10 + 4) = 1;
    v10[3] = 0LL;
    *v10 = &AvoidEndpointPolicyRule::`vftable'{for `IPolicyRule'};
    v10[1] = &AvoidEndpointPolicyRule::`vftable'{for `CUnknown'};
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
      v10 + 4,
      (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  }
  else
  {
    v11 = 0LL;
  }
  v29 = v11;
  if ( !v11 )
  {
    refreshed = -2147024882;
    goto LABEL_23;
  }
  refreshed = (*(__int64 (__fastcall **)(_QWORD *, struct IAudioProcess *, char *))(*v11 + 72LL))(
                v11,
                v20,
                (char *)a3 + 12);
  if ( refreshed < 0
    || (refreshed = (*(__int64 (__fastcall **)(_QWORD *, GUID *, PersistedEndpointPolicyRule **))*v11)(
                      v11,
                      &GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3,
                      &v19),
        refreshed < 0) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(v11[1] + 24LL))(v11 + 1, 1LL);
    goto LABEL_23;
  }
  (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
  refreshed = (**(__int64 (__fastcall ***)(PersistedEndpointPolicyRule *, GUID *, struct IUnknown **))v19)(
                v19,
                &GUID_00000000_0000_0000_c000_000000000046,
                &v18);
  if ( refreshed < 0 )
    goto LABEL_23;
  refreshed = (*(__int64 (__fastcall **)(struct IAudioProcess *, DynamicAudioEndpointManager *, struct IUnknown *))(*(_QWORD *)v20 + 392LL))(
                v20,
                v7,
                v18);
  if ( refreshed < 0 )
    goto LABEL_23;
  v12 = 7LL * *((int *)a3 + 1);
  if ( *(_DWORD *)a3 == 0x7FFF )
  {
    v13 = 0LL;
    v14 = 0LL;
    v15 = 7LL;
    do
    {
      ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::AddTail(
        (char *)v7 + 48 * v12 + 48 * v14 + 64,
        v19);
      v12 = 7LL * *((int *)a3 + 1);
      v32[v12 + v13] = 1;
      ++v14;
      ++v13;
      --v15;
    }
    while ( v15 );
    v6 = v25;
  }
  else
  {
    ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::AddTail(
      (char *)v7 + 48 * v12 + 48 * *(int *)a3 + 64,
      v19);
    v32[7 * *((int *)a3 + 1) + *(int *)a3] = 1;
  }
  try
  {
    ATL::CAtlMap<__int64,ATL::CComPtr<IUnknown>,ATL::CElementTraits<__int64>,ATL::CElementTraits<ATL::CComPtr<IUnknown>>>::SetAt(
      (char *)v7 + 784,
      *((_QWORD *)v7 + 107),
      &v18);
  }
  catch ( ATL::CAtlException *v31 )
  {
    v17 = v31;
    if ( *(_DWORD *)v31 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v25) = *(_DWORD *)v17;
    refreshed = (int)v25;
    if ( (int)v25 < 0 )
    {
      DynamicAudioEndpointManager::RemoveRule(v26, v20, v18, 1);
      goto LABEL_23;
    }
    v7 = v26;
    v6 = v27;
    v4 = v28;
  }
  *v4 = (*((_QWORD *)v7 + 107))++;
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( v18 )
    ((void (__fastcall *)(struct IUnknown *))v18->lpVtbl->Release)(v18);
  if ( v19 )
  {
    if ( *(unsigned int (__fastcall **)(PersistedEndpointPolicyRule *))(*(_QWORD *)v19 + 16LL) == PersistedEndpointPolicyRule::Release )
      PersistedEndpointPolicyRule::Release(v19);
    else
      (*(void (__fastcall **)(PersistedEndpointPolicyRule *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( v20 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v22 )
    LeaveCriticalSection(lpCriticalSection);
  refreshed = DynamicAudioEndpointManager::RefreshPublishedDefaults(v7, (int (*const)[7])v32);
  if ( refreshed < 0 )
    DynamicAudioEndpointManager::RemoveRule(v7, v6, *v4);
  return (unsigned int)refreshed;
}
