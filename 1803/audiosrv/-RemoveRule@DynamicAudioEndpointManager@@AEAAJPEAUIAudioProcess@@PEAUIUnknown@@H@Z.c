/*
 * XREFs of ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@H@Z @ 0x1800FCBF8
 * Callers:
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z @ 0x1800FBBCC (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z @ 0x1800FC6B8 (-OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z.c)
 *     ?OnProcessTerminated@DynamicAudioEndpointManager@@UEAAXPEAUIAudioProcess@@PEAUIUnknown@@@Z @ 0x1800FC8A0 (-OnProcessTerminated@DynamicAudioEndpointManager@@UEAAXPEAUIAudioProcess@@PEAUIUnknown@@@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAX_J@Z @ 0x1800FCF38 (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAX_J@Z.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800184EC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@PersistedEndpointPolicyRule@@UEAAKXZ @ 0x180059F00 (-Release@PersistedEndpointPolicyRule@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?FreeNode@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800FC1FC (-FreeNode@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY06H@Z @ 0x1800FC970 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY06H@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@_JV?$CComPtr@UIUnknown@@@ATL@@V?$CElementTraits@_J@2@V?$CElementTraits@V?$CComPtr@UIUnknown@@@ATL@@@2@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18011BDE8 (-RemoveAtPos@-$CAtlMap@_JV-$CComPtr@UIUnknown@@@ATL@@V-$CElementTraits@_J@2@V-$CElementTraits@V-.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DynamicAudioEndpointManager::RemoveRule(
        DynamicAudioEndpointManager *this,
        struct IAudioProcess *a2,
        struct IUnknown *a3,
        int a4)
{
  unsigned int v7; // ebx
  struct IUnknown *v9; // rbx
  int *v10; // r14
  _QWORD *v11; // rsi
  __int64 v12; // r13
  __int64 v13; // r12
  _QWORD *v14; // rdi
  struct IUnknown *v15; // r15
  ULONG (__stdcall *Release)(IUnknown *); // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  DynamicAudioEndpointManager *v19; // rsi
  _QWORD *v20; // r9
  unsigned int v21; // edx
  unsigned int v22; // r10d
  __int64 v23; // rcx
  __int64 v24; // r11
  __int64 v25; // rdi
  __int64 v26; // r8
  __int64 v27; // rdx
  ULONG (__stdcall *v28)(IUnknown *); // rax
  struct IUnknown *v29; // [rsp+28h] [rbp-59h] BYREF
  int v30; // [rsp+30h] [rbp-51h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-49h] BYREF
  char v32; // [rsp+40h] [rbp-41h]
  int v33; // [rsp+48h] [rbp-39h]
  DynamicAudioEndpointManager *v34; // [rsp+50h] [rbp-31h]
  struct IUnknown *v35; // [rsp+58h] [rbp-29h]
  __int64 v36; // [rsp+60h] [rbp-21h]
  int v37[7]; // [rsp+68h] [rbp-19h] BYREF

  v36 = -2LL;
  v33 = a4;
  v35 = a3;
  v34 = this;
  memset_0(v37, 0, 0x38uLL);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v32 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v29 = 0LL;
  v30 = (*(__int64 (__fastcall **)(struct IAudioProcess *, DynamicAudioEndpointManager *, struct IUnknown *))(*(_QWORD *)a2 + 400LL))(
          a2,
          this,
          a3);
  if ( v30 < 0 )
  {
    if ( v32 )
      LeaveCriticalSection(lpCriticalSection);
    return (unsigned int)v30;
  }
  v9 = v29;
  if ( v29 != a3 )
  {
    ATL::AtlComQIPtrAssign(&v29, a3, &GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3);
    v9 = v29;
  }
  if ( v9 )
  {
    v10 = v37;
    v11 = (_QWORD *)((char *)this + 64);
    v12 = 2LL;
    do
    {
      v13 = 7LL;
      do
      {
        v14 = (_QWORD *)*v11;
        if ( *v11 )
        {
          while ( 1 )
          {
            if ( v9 )
              ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->AddRef)(v9);
            v15 = (struct IUnknown *)v14[2];
            if ( v9 )
            {
              Release = v9->lpVtbl->Release;
              if ( (char *)Release == (char *)PersistedEndpointPolicyRule::Release )
                PersistedEndpointPolicyRule::Release((PersistedEndpointPolicyRule *)v9);
              else
                ((void (__fastcall *)(struct IUnknown *))Release)(v9);
            }
            if ( v15 == v9 )
              break;
            v14 = (_QWORD *)*v14;
            if ( !v14 )
            {
              v9 = v29;
              goto LABEL_23;
            }
          }
          v9 = v29;
        }
        else
        {
LABEL_23:
          v14 = 0LL;
        }
        if ( v14 )
        {
          *v10 = 1;
          v17 = (_QWORD *)*v14;
          if ( v14 == (_QWORD *)*v11 )
            *v11 = v17;
          else
            *(_QWORD *)v14[1] = v17;
          v18 = v14[1];
          if ( v14 == (_QWORD *)v11[1] )
            v11[1] = v18;
          else
            *(_QWORD *)(*v14 + 8LL) = v18;
          ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::FreeNode(
            v11,
            v14);
          v9 = v29;
        }
        ++v10;
        v11 += 6;
        --v13;
      }
      while ( v13 );
      --v12;
    }
    while ( v12 );
    v19 = v34;
    v20 = (_QWORD *)((char *)v34 + 784);
    if ( *((_QWORD *)v34 + 99) )
    {
      v21 = 0;
      v22 = *((_DWORD *)v34 + 200);
      if ( v22 )
      {
        while ( 1 )
        {
          v23 = *(_QWORD *)(*v20 + 8LL * v21);
          if ( v23 )
            break;
          if ( ++v21 >= v22 )
            goto LABEL_50;
        }
        while ( 1 )
        {
          v24 = v23;
          v25 = v23;
          v26 = *(_QWORD *)(v23 + 16);
          if ( !v26 )
          {
            v26 = 0LL;
            v27 = *(_DWORD *)(v23 + 24) % v22 + 1;
            do
            {
              if ( (unsigned int)v27 >= v22 )
                break;
              if ( *(_QWORD *)(*v20 + 8 * v27) )
                v26 = *(_QWORD *)(*v20 + 8 * v27);
              v27 = (unsigned int)(v27 + 1);
            }
            while ( !v26 );
          }
          v23 = v26;
          if ( v35 == *(struct IUnknown **)(v25 + 8) )
            break;
          if ( !v26 )
            goto LABEL_50;
        }
        ATL::CAtlMap<__int64,ATL::CComPtr<IUnknown>,ATL::CElementTraits<__int64>,ATL::CElementTraits<ATL::CComPtr<IUnknown>>>::RemoveAtPos(
          (char *)v34 + 784,
          v24);
        v9 = v29;
      }
    }
LABEL_50:
    if ( v9 )
    {
      v28 = v9->lpVtbl->Release;
      if ( (char *)v28 == (char *)PersistedEndpointPolicyRule::Release )
        PersistedEndpointPolicyRule::Release((PersistedEndpointPolicyRule *)v9);
      else
        ((void (__fastcall *)(struct IUnknown *))v28)(v9);
    }
    if ( v32 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v33 )
      return (unsigned int)DynamicAudioEndpointManager::RefreshPublishedDefaults(v19, (int (*const)[7])v37);
    return (unsigned int)v30;
  }
  v7 = -2147467261;
  if ( v32 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
