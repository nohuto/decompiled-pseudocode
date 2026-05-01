/*
 * XREFs of ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x180034F40
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001A030 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     ?_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180025750 (-_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 *     ?GetRootOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindow@@@Z @ 0x180034928 (-GetRootOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClass.c)
 *     _lambda_e5644482fbd8f2bfe422e00f476b1ca8_::operator() @ 0x18003526C (_lambda_e5644482fbd8f2bfe422e00f476b1ca8_--operator().c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x1800371F8 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     CClassicWindowManager::ForEachOwnee__lambda_858344172df6f9bddab2a469aab627e9___ @ 0x180038784 (CClassicWindowManager--ForEachOwnee__lambda_858344172df6f9bddab2a469aab627e9___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CClassicWindowManager::GetIntersectingMonitors(__int64 a1, HWND a2, LPVOID *a3)
{
  __int64 *v6; // rsi
  struct IClassicWindow *v7; // rcx
  HRESULT ClassicWindow; // edi
  struct IClassicWindow **v9; // rax
  struct IClassicWindow *v10; // rbx
  char v11; // al
  __int64 v12; // rbx
  IUnknown *v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rdi
  __int64 v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rbx
  __int64 *v20; // rdx
  unsigned __int64 i; // rbx
  __int64 v22; // rcx
  struct IClassicWindow *v23; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-38h] BYREF
  int v26; // [rsp+40h] [rbp-30h]
  LPVOID pv; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v28; // [rsp+50h] [rbp-20h]
  void *v29; // [rsp+58h] [rbp-18h]
  void *v30; // [rsp+60h] [rbp-10h]
  struct IClassicWindow *v31; // [rsp+B0h] [rbp+40h] BYREF
  LPVOID *v32; // [rsp+B8h] [rbp+48h] BYREF
  LPVOID *p_pv; // [rsp+C8h] [rbp+58h] BYREF

  v6 = (__int64 *)(a1 - 56);
  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)((a1 + 64) & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 56) >> 64)));
  v31 = 0LL;
  ClassicWindow = 0;
  if ( a2 )
  {
    ClassicWindow = CClassicWindowManager::_FindClassicWindow((CClassicWindowManager *)v6, a2, &v31, 0LL);
  }
  else
  {
    v9 = *(struct IClassicWindow ***)(a1 + 120);
    v10 = *v9;
    if ( *v9 )
    {
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v10 + 8LL))(*v9);
      v7 = v31;
      v31 = v10;
      if ( v7 )
        (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  pv = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( ClassicWindow >= 0 )
  {
    p_pv = &pv;
    CClassicWindowManager::GetRootOwner((__int64)v7, &v32, (__int64)v31);
    v11 = lambda_e5644482fbd8f2bfe422e00f476b1ca8_::operator()(&p_pv, &v32);
    v12 = (__int64)v32;
    if ( v11 && (*((unsigned __int8 (__fastcall **)(LPVOID *))*v32 + 16))(v32) )
      CClassicWindowManager::ForEachOwnee__lambda_858344172df6f9bddab2a469aab627e9___(v6, v12, &p_pv);
    if ( !v12 )
      goto LABEL_30;
    goto LABEL_29;
  }
  if ( ClassicWindow != -2147319765 )
    goto LABEL_30;
  ClassicWindow = 0;
  if ( !v6[32] )
  {
    v13 = (IUnknown *)*CWRLObjectWithGITSite::_GetGITSitePtr((__int64)(v6 + 3), &v32);
    v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v6 + 32);
    ClassicWindow = IUnknown_QueryService(
                      v13,
                      (const GUID *const)&SID_IImmersiveMonitorService,
                      &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                      (void **)v14);
    v15 = (__int64)v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  if ( ClassicWindow >= 0 )
  {
    v32 = 0LL;
    v16 = *(__int64 **)(a1 + 200);
    v17 = *v16;
    v18 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v32);
    ClassicWindow = (*(__int64 (__fastcall **)(__int64 *, HWND, GUID *, GUID *, __int64 *))(v17 + 88))(
                      v16,
                      a2,
                      &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                      &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                      v18);
    if ( ClassicWindow >= 0 )
    {
      v19 = (__int64)v32;
      p_pv = v32;
      if ( v32 )
        (*((void (__fastcall **)(LPVOID *))*v32 + 1))(v32);
      if ( (void *)v28 != v30
        || CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
             (__int64)&pv,
             v28 + 1) >= 0 )
      {
        ++v28;
        v20 = (__int64 *)((char *)pv + 8 * v28 - 8);
        if ( v20 )
        {
          *v20 = 0LL;
          if ( v20 != (__int64 *)&p_pv )
          {
            *v20 = v19;
            v19 = 0LL;
          }
        }
      }
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v12 = (__int64)v32;
    if ( !v32 )
      goto LABEL_30;
    v32 = 0LL;
LABEL_29:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_30:
    if ( ClassicWindow >= 0 )
    {
      *a3 = pv;
      a3[2] = v29;
      a3[1] = (LPVOID)v28;
      a3[3] = v30;
      pv = 0LL;
      v29 = 0LL;
      v28 = 0LL;
      v30 = 0LL;
    }
  }
  if ( pv )
  {
    for ( i = 0LL; i < v28; ++i )
    {
      v22 = *((_QWORD *)pv + i);
      if ( v22 )
      {
        *((_QWORD *)pv + i) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v28 = 0LL;
  v30 = 0LL;
  v23 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( v26 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)ClassicWindow;
}
