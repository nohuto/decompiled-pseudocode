/*
 * XREFs of ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAX_J@Z @ 0x1800FCF38
 * Callers:
 *     PolicyConfigRemoveDynamicRoutingRule @ 0x1800BFA50 (PolicyConfigRemoveDynamicRoutingRule.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z @ 0x1800FBBCC (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetNode@?$CAtlMap@_JV?$CComPtr@UIUnknown@@@ATL@@V?$CElementTraits@_J@2@V?$CElementTraits@V?$CComPtr@UIUnknown@@@ATL@@@2@@ATL@@AEBAPEAVCNode@12@_JAEAI1AEAPEAV312@@Z @ 0x1800FC364 (-GetNode@-$CAtlMap@_JV-$CComPtr@UIUnknown@@@ATL@@V-$CElementTraits@_J@2@V-$CElementTraits@V-$CCo.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@H@Z @ 0x1800FCBF8 (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@H@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DynamicAudioEndpointManager::RemoveRule(DynamicAudioEndpointManager *this, void *a2, __int64 a3)
{
  struct IUnknown *v6; // rbx
  __int64 Node; // rax
  struct IUnknown *v8; // rdx
  int v9; // edi
  struct IAudioProcess *v11; // [rsp+30h] [rbp-30h] BYREF
  struct IUnknown *v12[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v13; // [rsp+48h] [rbp-18h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-10h] BYREF
  char v15; // [rsp+58h] [rbp-8h]
  int v16; // [rsp+80h] [rbp+20h] BYREF
  unsigned int v17; // [rsp+98h] [rbp+38h] BYREF

  v12[1] = (struct IUnknown *)-2LL;
  v11 = 0LL;
  v6 = 0LL;
  v12[0] = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v15 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  Node = ATL::CAtlMap<__int64,ATL::CComPtr<IUnknown>,ATL::CElementTraits<__int64>,ATL::CElementTraits<ATL::CComPtr<IUnknown>>>::GetNode(
           (__int64)this + 784,
           a3,
           &v17,
           &v16,
           &v13);
  if ( Node && (v8 = *(struct IUnknown **)(Node + 8)) != 0LL && (ATL::AtlComPtrAssign(v12, v8), (v6 = v12[0]) != 0LL) )
  {
    if ( v15 )
      LeaveCriticalSection(lpCriticalSection);
    v9 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, void *, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                  + 32LL))(
           g_PolicyManager,
           a2,
           &v11);
    if ( v9 >= 0 )
      v9 = DynamicAudioEndpointManager::RemoveRule(this, v11, v6, 1);
  }
  else
  {
    v9 = -2147024809;
    if ( v15 )
      LeaveCriticalSection(lpCriticalSection);
  }
  if ( v6 )
    ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
  if ( v11 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)v9;
}
