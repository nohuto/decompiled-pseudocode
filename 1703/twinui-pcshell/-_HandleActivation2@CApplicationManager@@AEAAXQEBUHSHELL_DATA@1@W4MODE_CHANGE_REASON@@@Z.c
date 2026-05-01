/*
 * XREFs of ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18001350C
 * Callers:
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180013450 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800149E4 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x180014B94 (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x180014DB4 (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?_ShouldKeepImmersiveRealmStatusQuo@CApplicationManager@@AEBA_NPEAUHWND__@@@Z @ 0x180010D6C (-_ShouldKeepImmersiveRealmStatusQuo@CApplicationManager@@AEBA_NPEAUHWND__@@@Z.c)
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180010DD4 (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@PEA_N@Z @ 0x180010E44 (-_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV-$CCoSimpleArray@V-$ComPtr@UIImmersiveMoni.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x1800111C8 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180016F3C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?InsertAt@?$CTSimpleArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@_K@Z @ 0x180016FB4 (-InsertAt@-$CTSimpleArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTaskMe.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180017CC8 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001A030 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_9bfcdedc9431ed62816a8472b97e3b70___ @ 0x18001B694 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_9bfcdedc9431ed62816a8472b97e3b70___.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
void __fastcall CApplicationManager::_HandleActivation2(unsigned __int64 a1, __int64 a2, int a3)
{
  HWND v6; // r12
  bool v7; // r14
  struct ISyncIAMEventHandler *v8; // rdi
  char v9; // bl
  __int64 v10; // r8
  struct IImmersiveMonitor *v11; // rcx
  IUnknown *v12; // rbx
  void **v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r9
  IUnknown *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  int v24; // r14d
  bool v25; // r13
  __int64 *v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rax
  struct ISyncIAMEventHandler *v29; // rbx
  unsigned __int64 v30; // rcx
  struct ISyncIAMEventHandler **v31; // rdx
  struct ISyncIAMEventHandler *v32; // rcx
  __int64 v33; // rax
  struct ISyncIAMEventHandler *v34; // rbx
  unsigned __int64 v35; // rdx
  struct ISyncIAMEventHandler **v36; // r8
  struct IObjectArray *v37; // rcx
  unsigned __int64 i; // rbx
  __int64 v39; // rcx
  __int64 v40; // rbx
  HWND v41; // r14
  HWND v42; // rcx
  PSRWLOCK v43; // rdi
  PVOID Ptr; // rbx
  unsigned int v45; // edi
  struct ISyncIAMEventHandler *v46; // rcx
  int GlobalSyncEventHandler; // eax
  struct ISyncIAMEventHandler *v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // rax
  HWND v51; // rcx
  struct IObjectArray *v52; // rcx
  IUnknown *v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // [rsp+20h] [rbp-A9h]
  __int64 v56; // [rsp+28h] [rbp-A1h]
  struct ISyncIAMEventHandler *v57; // [rsp+40h] [rbp-89h] BYREF
  __int64 v58; // [rsp+48h] [rbp-81h] BYREF
  HWND v59; // [rsp+50h] [rbp-79h] BYREF
  struct IObjectArray *v60; // [rsp+58h] [rbp-71h] BYREF
  HWND v61; // [rsp+60h] [rbp-69h] BYREF
  __int64 v62; // [rsp+68h] [rbp-61h]
  LPVOID pv; // [rsp+70h] [rbp-59h] BYREF
  unsigned __int64 v64; // [rsp+78h] [rbp-51h]
  __int64 v65; // [rsp+80h] [rbp-49h]
  __int64 v66; // [rsp+88h] [rbp-41h]
  PVOID v67; // [rsp+90h] [rbp-39h] BYREF
  HWND v68; // [rsp+98h] [rbp-31h]
  __int64 v69; // [rsp+A0h] [rbp-29h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+A8h] [rbp-21h] BYREF
  int v71; // [rsp+B0h] [rbp-19h]
  __int64 v72; // [rsp+B8h] [rbp-11h]
  HWND *v73; // [rsp+C0h] [rbp-9h]
  PVOID v74; // [rsp+C8h] [rbp-1h]
  HWND v75; // [rsp+D0h] [rbp+7h]
  __int64 v76; // [rsp+D8h] [rbp+Fh]
  struct ISyncIAMEventHandler *v77; // [rsp+130h] [rbp+67h] BYREF
  struct IImmersiveMonitor *v78; // [rsp+138h] [rbp+6Fh] BYREF
  int v79; // [rsp+140h] [rbp+77h]
  IUnknown *punk; // [rsp+148h] [rbp+7Fh] BYREF

  v79 = a3;
  v72 = -2LL;
  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)((a1 + 328) & ((unsigned __int128)-(__int128)a1 >> 64)));
  v6 = *(HWND *)(a2 + 8);
  v7 = 1;
  v8 = 0LL;
  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    v78 = 0LL;
    if ( *(_BYTE *)(a2 + 20) || *(_BYTE *)(a2 + 21) )
    {
      v9 = 0;
    }
    else
    {
      v9 = 1;
      CApplicationManager::_MonitorFromWindow((CApplicationManager *)a1, v6, &v78);
    }
    if ( v6 != (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 688) + 24LL))(*(_QWORD *)(a1 + 688))
      && v6 != (HWND)1 )
    {
      LOBYTE(v10) = v9;
      if ( (*(int (__fastcall **)(_QWORD, HWND, __int64))(**(_QWORD **)(a1 + 472) + 56LL))(
             *(_QWORD *)(a1 + 472),
             v6,
             v10) >= 0
        && (!v78
         || (*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 472) + 32LL))(
              *(_QWORD *)(a1 + 472),
              v6)) )
      {
        (*(void (__fastcall **)(_QWORD, struct ISyncIAMEventHandler **))(**(_QWORD **)(a1 + 496) + 32LL))(
          *(_QWORD *)(a1 + 496),
          &v77);
        if ( (unsigned int)v77 > 1 && *(_DWORD *)(a2 + 24) == 1 )
          v7 = CApplicationManager::_ShouldKeepImmersiveRealmStatusQuo((CApplicationManager *)a1, v6) == 0;
      }
    }
    v11 = v78;
    if ( v78 )
    {
      v78 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  v58 = 0LL;
  punk = 0LL;
  v77 = 0LL;
  if ( *(_DWORD *)(a2 + 16) == 2 )
  {
    v61 = v6;
    LODWORD(v62) = 2;
    if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(a1, &v61, &punk, &v77) < 0 )
    {
      v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v58);
      (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, __int64))(**(_QWORD **)(a1 + 512) + 32LL))(
        *(_QWORD *)(a1 + 512),
        0LL,
        &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
        v14);
    }
    else
    {
      v12 = punk;
      v13 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v58);
      IUnknown_GetSite(v12, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, v13);
    }
    v8 = v77;
  }
  v15 = *(__int64 **)(a1 + 528);
  v16 = *v15;
  if ( *(_DWORD *)(a2 + 16) == 3 )
    (*(void (__fastcall **)(__int64 *, _QWORD))(v16 + 40))(v15, *(_QWORD *)(a2 + 8));
  else
    (*(void (**)(void))(v16 + 48))();
  *(_QWORD *)(a1 + 424) = v6;
  *(_DWORD *)(a1 + 440) = a3;
  v18 = punk;
  if ( punk && *(IUnknown **)(a1 + 448) != punk )
  {
    ((void (__fastcall *)(IUnknown *))punk->lpVtbl->AddRef)(punk);
    v19 = *(_QWORD *)(a1 + 448);
    *(_QWORD *)(a1 + 448) = v18;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    v18 = punk;
  }
  if ( *(_DWORD *)(a2 + 16) != 2 || v18 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 464) + 40LL))(
      *(_QWORD *)(a1 + 464),
      *(unsigned int *)(a2 + 24));
    LOBYTE(v20) = v7;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 464) + 88LL))(
      *(_QWORD *)(a1 + 464),
      *(unsigned int *)(a2 + 24),
      v20);
  }
  LOBYTE(v17) = *(_BYTE *)(a2 + 28);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 456) + 24LL))(
    *(_QWORD *)(a1 + 456),
    *(unsigned int *)(a2 + 24),
    *(unsigned int *)(a2 + 16),
    v17);
  v21 = v58;
  if ( v58 && punk )
  {
    if ( (*(int (__fastcall **)(__int64, IUnknown *, HWND, _QWORD, int, _QWORD))(*(_QWORD *)v58 + 48LL))(
           v58,
           punk,
           v6,
           0LL,
           2,
           0LL) >= 0
      && v8 )
    {
      CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
        a1 + 568,
        v8);
      CTSimpleArray<Microsoft::WRL::ComPtr<ITaskWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::InsertAt(
        a1 + 568,
        &punk,
        0LL);
    }
    v21 = v58;
  }
  if ( *(_DWORD *)(a2 + 16) == 2 )
  {
    if ( punk )
      goto LABEL_46;
    v23 = 0LL;
  }
  else
  {
    v22 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v58);
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, __int64))(**(_QWORD **)(a1 + 512) + 32LL))(
           *(_QWORD *)(a1 + 512),
           0LL,
           &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
           v22) < 0 )
      goto LABEL_46;
    v23 = 0LL;
    if ( v7 )
      v23 = *(unsigned int *)(a2 + 24);
    v21 = v58;
  }
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v21 + 40LL))(v21, 4LL, v23);
LABEL_46:
  v60 = 0LL;
  v59 = 0LL;
  v24 = 0xFFFF;
  LODWORD(v78) = 0xFFFF;
  v25 = 1;
  if ( CApplicationManager::_ShouldKeepImmersiveRealmStatusQuo((CApplicationManager *)a1, v6) )
  {
    v25 = v6 != (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 688) + 24LL))(*(_QWORD *)(a1 + 688));
    goto LABEL_95;
  }
  pv = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  if ( punk )
  {
    v33 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v59);
    ((void (__fastcall *)(IUnknown *, GUID *, __int64))punk->lpVtbl->QueryInterface)(
      punk,
      &GUID_8b14e88b_5663_4caf_b196_c31479262831,
      v33);
    v57 = 0LL;
    ((void (__fastcall *)(IUnknown *, struct ISyncIAMEventHandler **))punk->lpVtbl[19].AddRef)(punk, &v57);
    v32 = v57;
    v34 = v57;
    v77 = v57;
    if ( v57 )
    {
      (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v57 + 8LL))(v57);
      v32 = v57;
    }
    v35 = v64;
    if ( v64 == v66 )
    {
      if ( (int)CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
                  &pv,
                  v64 + 1) < 0 )
        goto LABEL_75;
      v35 = v64;
      v32 = v57;
    }
    v64 = v35 + 1;
    v36 = (struct ISyncIAMEventHandler **)((char *)pv + 8 * v35);
    if ( !v36 )
      goto LABEL_76;
    *v36 = 0LL;
    if ( v36 != &v77 )
    {
      *v36 = v34;
      v34 = 0LL;
    }
LABEL_75:
    v32 = v57;
LABEL_76:
    if ( v34 )
    {
      (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v34 + 16LL))(v34);
      v32 = v57;
    }
    goto LABEL_78;
  }
  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    (*(void (__fastcall **)(_QWORD, HWND, LPVOID *))(**(_QWORD **)(a1 + 472) + 48LL))(*(_QWORD *)(a1 + 472), v6, &pv);
    goto LABEL_80;
  }
  if ( *(_DWORD *)(a2 + 16) == 2 )
    goto LABEL_86;
  if ( *(_DWORD *)(a2 + 24) != 1 && *(_DWORD *)(a2 + 24) != 8 )
  {
    v57 = 0LL;
    v26 = *(__int64 **)(a1 + 496);
    v27 = *v26;
    v28 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v57);
    if ( (*(int (__fastcall **)(__int64 *, HWND, GUID *, GUID *, __int64))(v27 + 88))(
           v26,
           v6,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           v28) < 0 )
    {
LABEL_63:
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 504) + 64LL))(*(_QWORD *)(a1 + 504), v6) )
        v24 = 65534;
      LODWORD(v78) = v24;
      v32 = v57;
LABEL_78:
      if ( v32 )
      {
        v57 = 0LL;
        (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v32 + 16LL))(v32);
      }
      goto LABEL_80;
    }
    v29 = v57;
    v77 = v57;
    if ( v57 )
      (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v57 + 8LL))(v57);
    v30 = v64;
    if ( v64 == v66 )
    {
      if ( (int)CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
                  &pv,
                  v64 + 1) < 0 )
      {
LABEL_61:
        if ( v29 )
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v29 + 16LL))(v29);
        goto LABEL_63;
      }
      v30 = v64;
    }
    v64 = v30 + 1;
    v31 = (struct ISyncIAMEventHandler **)((char *)pv + 8 * v30);
    if ( v31 )
    {
      *v31 = 0LL;
      if ( v31 != &v77 )
      {
        *v31 = v29;
        v29 = 0LL;
      }
    }
    goto LABEL_61;
  }
LABEL_80:
  v37 = v60;
  if ( v60 )
  {
    v60 = 0LL;
    ((void (__fastcall *)(struct IObjectArray *))v37->lpVtbl->Release)(v37);
  }
  if ( (int)CApplicationManager::_GetMonitorObjectArray((CApplicationManager *)a1, &pv, &v60, &v77) >= 0 )
  {
    if ( (_BYTE)v77 && punk )
      v79 = 8;
    goto LABEL_87;
  }
LABEL_86:
  v25 = 0;
LABEL_87:
  if ( pv )
  {
    for ( i = 0LL; i < v64; ++i )
    {
      v39 = *((_QWORD *)pv + i);
      if ( v39 )
      {
        *((_QWORD *)pv + i) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
      }
    }
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v64 = 0LL;
  v66 = 0LL;
LABEL_95:
  v40 = (__int64)v6;
  v41 = v59;
  if ( !v59 && v6 )
  {
    v40 = (*(__int64 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 472) + 112LL))(*(_QWORD *)(a1 + 472), v6);
    v41 = v59;
  }
  v75 = v41;
  if ( v41 )
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v41 + 8LL))(v41);
  v76 = v40;
  v42 = v41;
  v61 = v41;
  if ( v41 )
  {
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v41 + 8LL))(v41);
    v42 = v61;
  }
  v62 = v40;
  v73 = &v61;
  v43 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
  v74 = Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v67 = Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v68 = v61;
    if ( v61 )
      (*(void (__fastcall **)(HWND))(*(_QWORD *)v61 + 8LL))(v61);
    v69 = v62;
    v45 = (unsigned int)v43[13].Ptr;
    HIDWORD(v56) = 0;
    v55 = *(_QWORD *)Windows::Internal::ComTaskPool::WrapWithTask__lambda_9bfcdedc9431ed62816a8472b97e3b70___(
                       &v77,
                       &v67);
    Windows::Internal::ComTaskPool::RunTask(3LL, 2LL, v45, 0LL);
    v46 = v77;
    if ( v77 )
    {
      v77 = 0LL;
      (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v46 + 16LL))(v46);
    }
    if ( v68 )
      (*(void (__fastcall **)(HWND))(*(_QWORD *)v68 + 16LL))(v68);
    if ( v67 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v67 + 16LL))(v67);
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    v42 = v61;
  }
  if ( v42 )
  {
    v61 = 0LL;
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v42 + 16LL))(v42);
  }
  if ( v25 )
  {
    v77 = 0LL;
    GlobalSyncEventHandler = CApplicationManager::_GetGlobalSyncEventHandler((CApplicationManager *)a1, &v77);
    v48 = v77;
    if ( GlobalSyncEventHandler >= 0 )
    {
      LODWORD(v56) = v79;
      LODWORD(v55) = *(_DWORD *)(a2 + 24);
      (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, unsigned __int64, HWND, __int64, __int64, _DWORD))(*(_QWORD *)v77 + 24LL))(
        v77,
        v60,
        a1 + 208,
        v59,
        v55,
        v56,
        (_DWORD)v78);
    }
    if ( v48 )
      (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v48 + 16LL))(v48);
  }
  if ( *(_BYTE *)(a1 + 416) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 488) + 48LL))(*(_QWORD *)(a1 + 488));
  v49 = *(_QWORD *)(a1 + 448);
  if ( v49 )
  {
    *(_QWORD *)(a1 + 448) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  }
  *(_DWORD *)(a1 + 440) = 0;
  v50 = *(_QWORD *)(a1 + 424);
  if ( v50 != 1 )
    *(_QWORD *)(a1 + 432) = v50;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_BYTE *)(a1 + 416) = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 464) + 48LL))(
    *(_QWORD *)(a1 + 464),
    *(unsigned int *)(a2 + 24));
  *(_QWORD *)(a1 + 704) = v6;
  if ( v41 )
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v41 + 16LL))(v41);
  v51 = v59;
  if ( v59 )
  {
    v59 = 0LL;
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v51 + 16LL))(v51);
  }
  v52 = v60;
  if ( v60 )
  {
    v60 = 0LL;
    ((void (__fastcall *)(struct IObjectArray *))v52->lpVtbl->Release)(v52);
  }
  v53 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v53->lpVtbl->Release)(v53);
  }
  v54 = v58;
  if ( v58 )
  {
    v58 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  }
  if ( v71 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
}
