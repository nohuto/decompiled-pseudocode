/*
 * XREFs of ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x1800366B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001ADC0 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x1800273C0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?GetRootOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindow@@@Z @ 0x180036078 (-GetRootOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClass.c)
 *     _lambda_e5644482fbd8f2bfe422e00f476b1ca8_::operator() @ 0x180036994 (_lambda_e5644482fbd8f2bfe422e00f476b1ca8_--operator().c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x180038938 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     ?_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ @ 0x180038FEC (-_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ.c)
 *     CClassicWindowManager::ForEachOwnee__lambda_858344172df6f9bddab2a469aab627e9___ @ 0x180039E20 (CClassicWindowManager--ForEachOwnee__lambda_858344172df6f9bddab2a469aab627e9___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CClassicWindowManager::GetIntersectingMonitors(__int64 a1, HWND a2, LPVOID *a3)
{
  CClassicWindowManager *v6; // rsi
  struct _RTL_CRITICAL_SECTION *v7; // r13
  int ClassicWindow; // edi
  struct IClassicWindow *v9; // rcx
  struct IClassicWindow *v10; // rbx
  char v11; // al
  __int64 v12; // rbx
  __int64 *v13; // rdi
  __int64 v14; // rbx
  __int64 *v15; // rax
  __int64 v16; // rbx
  __int64 *v17; // rdx
  unsigned __int64 i; // rbx
  __int64 v19; // rcx
  struct IClassicWindow *v20; // rcx
  int v22; // [rsp+40h] [rbp-30h]
  LPVOID pv; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-20h]
  void *v25; // [rsp+58h] [rbp-18h]
  void *v26; // [rsp+60h] [rbp-10h]
  struct IClassicWindow *v27; // [rsp+B0h] [rbp+40h] BYREF
  LPVOID *v28; // [rsp+B8h] [rbp+48h] BYREF
  LPVOID *p_pv; // [rsp+C8h] [rbp+58h] BYREF

  v6 = (CClassicWindowManager *)(a1 - 80);
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 64) & -(__int64)(a1 != 80));
  v22 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  v27 = 0LL;
  ClassicWindow = 0;
  if ( a2 )
  {
    ClassicWindow = CClassicWindowManager::_FindClassicWindow(v6, a2, &v27, 0LL);
  }
  else
  {
    v9 = *(struct IClassicWindow **)(a1 + 120);
    v10 = *(struct IClassicWindow **)v9;
    if ( *(_QWORD *)v9 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*(_QWORD *)v9);
      v9 = v27;
      v27 = v10;
      if ( v9 )
        (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  pv = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( ClassicWindow >= 0 )
  {
    p_pv = &pv;
    CClassicWindowManager::GetRootOwner((__int64)v9, &v28, (__int64)v27);
    v11 = lambda_e5644482fbd8f2bfe422e00f476b1ca8_::operator()(&p_pv, &v28);
    v12 = (__int64)v28;
    if ( v11 && (*((unsigned __int8 (__fastcall **)(LPVOID *))*v28 + 16))(v28) )
      CClassicWindowManager::ForEachOwnee__lambda_858344172df6f9bddab2a469aab627e9___(v6, v12, &p_pv);
    if ( !v12 )
      goto LABEL_25;
    goto LABEL_11;
  }
  if ( ClassicWindow == -2147319765 )
  {
    ClassicWindow = CClassicWindowManager::_EnsureMonitorManager(v6);
    if ( ClassicWindow < 0 )
      goto LABEL_27;
    v28 = 0LL;
    v13 = *(__int64 **)(a1 + 200);
    v14 = *v13;
    v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v28);
    ClassicWindow = (*(__int64 (__fastcall **)(__int64 *, HWND, GUID *, GUID *, __int64 *))(v14 + 88))(
                      v13,
                      a2,
                      &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                      &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                      v15);
    if ( ClassicWindow >= 0 )
    {
      v16 = (__int64)v28;
      p_pv = v28;
      if ( v28 )
        (*((void (__fastcall **)(LPVOID *))*v28 + 1))(v28);
      if ( CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
             (__int64)&pv,
             v24 + 1) >= 0 )
      {
        ++v24;
        v17 = (__int64 *)((char *)pv + 8 * v24 - 8);
        if ( v17 )
        {
          *v17 = 0LL;
          if ( v17 != (__int64 *)&p_pv )
          {
            *v17 = v16;
            v16 = 0LL;
          }
        }
      }
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v12 = (__int64)v28;
    if ( v28 )
    {
      v28 = 0LL;
LABEL_11:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
LABEL_25:
  if ( ClassicWindow >= 0 )
  {
    *a3 = pv;
    a3[2] = v25;
    a3[1] = (LPVOID)v24;
    a3[3] = v26;
    pv = 0LL;
    v25 = 0LL;
    v24 = 0LL;
    v26 = 0LL;
  }
LABEL_27:
  if ( pv )
  {
    for ( i = 0LL; i < v24; ++i )
    {
      v19 = *((_QWORD *)pv + i);
      if ( v19 )
      {
        *((_QWORD *)pv + i) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v24 = 0LL;
  v26 = 0LL;
  v20 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( v22 >= 0 )
    LeaveCriticalSection(v7);
  return (unsigned int)ClassicWindow;
}
