/*
 * XREFs of ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x180007480
 * Callers:
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18003DE00 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$FindEx@VCClassicWindowFinderByHWND@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByHWND@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800059C0 (--$FindEx@VCClassicWindowFinderByHWND@@@-$CTSimpleFixedArray@V-$ComPtr@UIClassicWindow@@@WRL@Mic.c)
 *     CClassicWindowManager::ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___ @ 0x180005E98 (CClassicWindowManager--ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180007C70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180007CF0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180007CF0.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x18008CC0C (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180119AF0 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ @ 0x18011AE88 (-_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CClassicWindowManager::GetIntersectingMonitors(__int64 a1, volatile int *a2, LPVOID *a3)
{
  CClassicWindowManager *v6; // rbx
  struct _RTL_CRITICAL_SECTION *v7; // r12
  int v8; // r15d
  int v9; // edi
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rax
  int v12; // eax
  __int64 v13; // rcx
  void (*v14)(void); // rax
  __int64 v16; // rbx
  volatile int *v17; // rbx
  char *v18; // rcx
  __int64 *v19; // rdx
  unsigned __int64 v20; // rbx
  __int64 (__fastcall ***v21)(); // [rsp+20h] [rbp-50h]
  _QWORD v22[3]; // [rsp+30h] [rbp-40h] BYREF
  int v23; // [rsp+48h] [rbp-28h]
  LPVOID pv; // [rsp+50h] [rbp-20h] BYREF
  char *v25; // [rsp+58h] [rbp-18h]
  void *v26; // [rsp+60h] [rbp-10h]
  char *v27; // [rsp+68h] [rbp-8h]
  __int64 v28; // [rsp+B0h] [rbp+40h] BYREF
  volatile int *v29; // [rsp+B8h] [rbp+48h] BYREF
  volatile int *v30; // [rsp+C8h] [rbp+58h] BYREF

  v22[1] = -2LL;
  v6 = (CClassicWindowManager *)(a1 - 72);
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 64) & -(__int64)(a1 != 72));
  v22[2] = v7;
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v7, 1LL);
  v23 = v8;
  v28 = 0LL;
  v9 = 0;
  if ( a2 )
  {
    v28 = 0LL;
    v30 = a2;
    v29 = 0LL;
    v9 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByHWND>(
           (_QWORD *)v6 + 24,
           &v30,
           (__int64 *)&v29,
           v22,
           v21);
    if ( v9 >= 0 )
    {
      v10 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)v6 + 24) + 8LL * v22[0]);
      v11 = **v10;
      if ( (char *)v11 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::QueryInterface )
        v12 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::QueryInterface(
                v10,
                &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
                &v28);
      else
        v12 = v11(v10, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v28);
      v9 = v12;
    }
    v8 = v23;
  }
  else
  {
    Microsoft::WRL::ComPtr<IClassicWindow>::operator=(&v28, *(_QWORD *)(a1 + 120));
  }
  pv = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( v9 >= 0 )
  {
    CClassicWindowManager::ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___(
      (__int64)v6,
      v28,
      (__int64)&pv);
    goto LABEL_9;
  }
  if ( v9 == -2147319765 )
  {
    v9 = CClassicWindowManager::_EnsureMonitorManager(v6);
    if ( v9 < 0 )
      goto LABEL_11;
    v30 = 0LL;
    v16 = *(_QWORD *)(a1 + 200);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v30);
    v9 = (*(__int64 (__fastcall **)(__int64, volatile int *, GUID *, GUID *, volatile int **))(*(_QWORD *)v16 + 88LL))(
           v16,
           a2,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &v30);
    if ( v9 < 0 )
      goto LABEL_31;
    v17 = v30;
    v29 = v30;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v29);
    v18 = v25;
    if ( v25 == v27 )
    {
      if ( (int)CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
                  &pv,
                  v25 + 1) < 0 )
      {
LABEL_30:
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v29);
LABEL_31:
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v30);
        goto LABEL_9;
      }
      v18 = v25;
    }
    v25 = v18 + 1;
    v19 = (__int64 *)((char *)pv + 8 * (_QWORD)(v18 + 1) - 8);
    if ( v19 )
    {
      *v19 = 0LL;
      if ( v19 != (__int64 *)&v29 )
      {
        *v19 = (__int64)v17;
        v29 = 0LL;
      }
    }
    goto LABEL_30;
  }
LABEL_9:
  if ( v9 >= 0 )
  {
    *a3 = pv;
    a3[2] = v26;
    a3[1] = v25;
    a3[3] = v27;
    pv = 0LL;
    v26 = 0LL;
    v25 = 0LL;
    v27 = 0LL;
  }
LABEL_11:
  if ( pv )
  {
    v20 = 0LL;
    if ( v25 )
    {
      do
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)pv + v20++);
      while ( v20 < (unsigned __int64)v25 );
    }
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v25 = 0LL;
  v27 = 0LL;
  v13 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    v14 = *(void (**)(void))(*(_QWORD *)v13 + 16LL);
    if ( (char *)v14 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release(v13);
    else
      v14();
  }
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return (unsigned int)v9;
}
