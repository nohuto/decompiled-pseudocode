/*
 * XREFs of ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180008450
 * Callers:
 *     <none>
 * Callees:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800119C0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180013B18 (-_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z @ 0x180013CD8 (-_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180013F2C (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x180014958 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180015214 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180015584 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x180015758 (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x18001597C (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 *     ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x180015A64 (-_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWN.c)
 *     ?_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZBID@@@Z @ 0x180015BB0 (-_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZB.c)
 *     ?_ExecuteShellHookDelayedOperations@CApplicationManager@@AEAAXXZ @ 0x180016828 (-_ExecuteShellHookDelayedOperations@CApplicationManager@@AEAAXXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180018F0C (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?StartActivity@OnShellHookMessage@IamTraceLogging@@QEAAX_KPEAUHWND__@@@Z @ 0x18001D92C (-StartActivity@OnShellHookMessage@IamTraceLogging@@QEAAX_KPEAUHWND__@@@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x1800273C0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::OnShellHookMessage(CApplicationManager *this, unsigned __int64 a2, HWND a3)
{
  CApplicationManager *v6; // rdi
  struct _RTL_CRITICAL_SECTION *v7; // r15
  int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int8 (__fastcall *v12)(__int64, HWND); // rax
  HWND v13; // rbx
  HWND v14; // r8
  __int64 v15; // rax
  void (__fastcall ***v16)(_QWORD, GUID *, __int64); // rcx
  struct IImmersiveApplication *v17; // rcx
  __int64 v19; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-C8h] BYREF
  HWND v21; // [rsp+48h] [rbp-C0h]
  int v22; // [rsp+50h] [rbp-B8h]
  char v23; // [rsp+54h] [rbp-B4h]
  char v24; // [rsp+55h] [rbp-B3h]
  int pv; // [rsp+58h] [rbp-B0h]
  char pv_4; // [rsp+5Ch] [rbp-ACh]
  LPVOID pv_8[2]; // [rsp+60h] [rbp-A8h]
  void (__fastcall ***v28)(_QWORD, GUID *, __int64); // [rsp+70h] [rbp-98h] BYREF
  struct IImmersiveApplication *v29; // [rsp+78h] [rbp-90h] BYREF
  HWND v30; // [rsp+80h] [rbp-88h] BYREF
  int v31; // [rsp+88h] [rbp-80h]
  __int64 v32; // [rsp+90h] [rbp-78h]
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+98h] [rbp-70h]
  int v34; // [rsp+A0h] [rbp-68h]
  _QWORD v35[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v36; // [rsp+C8h] [rbp-40h]
  int *v37; // [rsp+D0h] [rbp-38h]
  int *v38; // [rsp+D8h] [rbp-30h]
  int v39; // [rsp+E0h] [rbp-28h] BYREF
  char v40; // [rsp+E4h] [rbp-24h]
  int v41; // [rsp+108h] [rbp+0h] BYREF
  const char *v42; // [rsp+110h] [rbp+8h]
  __int64 v43; // [rsp+118h] [rbp+10h]
  char v44; // [rsp+120h] [rbp+18h]
  __int64 v45; // [rsp+128h] [rbp+20h]
  _BYTE v46[144]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v47; // [rsp+1C0h] [rbp+B8h]
  __int64 v48; // [rsp+1C8h] [rbp+C0h]
  __int64 v49; // [rsp+1D0h] [rbp+C8h]
  __int64 v50; // [rsp+1D8h] [rbp+D0h]

  v32 = -2LL;
  v6 = (CApplicationManager *)((char *)this - 168);
  v7 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 232) & -(__int64)(this != (CApplicationManager *)168));
  v33 = v7;
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v7, 1LL);
  v34 = v8;
  v20 = a2;
  v21 = a3;
  v22 = 0;
  v24 = 0;
  pv = 0;
  pv_4 = 0;
  *(_OWORD *)pv_8 = 0LL;
  if ( a2 > 0x22 || (v9 = 0x5241E0000LL, v23 = 0, !_bittest64(&v9, a2)) )
    v23 = 1;
  v29 = 0LL;
  v35[1] = 0LL;
  v35[2] = v35;
  v35[3] = 0LL;
  v36 = 0;
  v37 = &v41;
  v38 = &v39;
  v39 = 0;
  v40 = 0;
  v44 = 0;
  v41 = 0;
  v42 = "OnShellHookMessage";
  v43 = 0LL;
  v45 = 1LL;
  v47 = 0LL;
  v48 = 0LL;
  memset(v46, 0, sizeof(v46));
  v49 = 0LL;
  v50 = 0LL;
  v35[0] = &IamTraceLogging::OnShellHookMessage::`vftable';
  IamTraceLogging::OnShellHookMessage::StartActivity((IamTraceLogging::OnShellHookMessage *)v35, a2, a3);
  if ( a2 - 65534 > 1
    && CApplicationManager::_AnalyzeShellNotification(v6, (struct CApplicationManager::HSHELL_DATA *)&v20) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v20 <= 0x19 )
    {
      if ( v20 != 25 )
      {
        if ( v20 == 17 )
        {
          CApplicationManager::_HandleWindowCreation(v6, (const struct CApplicationManager::HSHELL_DATA *const)&v20);
          goto LABEL_45;
        }
        if ( v20 != 18 )
        {
          switch ( v20 )
          {
            case 0x13uLL:
LABEL_26:
              CApplicationManager::_HandleActivation(v6, (const struct CApplicationManager::HSHELL_DATA *const)&v20);
              break;
            case 0x14uLL:
              CApplicationManager::_HandleMonitorChanged(v6, (const struct CApplicationManager::HSHELL_DATA *const)&v20);
              break;
            case 0x15uLL:
              if ( (unsigned int)(v22 - 2) > 1 )
                goto LABEL_21;
              CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange(
                v6,
                (const struct CApplicationManager::HSHELL_DATA *const)&v20,
                a3);
              break;
            case 0x16uLL:
              v11 = *((_QWORD *)v6 + 68);
              v12 = *(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v11 + 64LL);
LABEL_18:
              v13 = v21;
              if ( !v12(v11, v21) )
                (*(void (__fastcall **)(_QWORD, HWND))(**((_QWORD **)v6 + 75) + 32LL))(*((_QWORD *)v6 + 75), v13);
              break;
            case 0x17uLL:
              goto LABEL_26;
            case 0x18uLL:
LABEL_21:
              v14 = v21;
              if ( pv_8[1] )
                v14 = (HWND)pv_8[1];
              LOBYTE(v10) = v20 == 21;
              CApplicationManager::_HandleMonitorRelatedNotificationForDesktopWindow(v6, v21, v14, v10, pv);
              break;
            default:
              break;
          }
LABEL_45:
          ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          goto LABEL_46;
        }
        v11 = *((_QWORD *)v6 + 68);
        v12 = *(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v11 + 72LL);
        goto LABEL_18;
      }
LABEL_42:
      CApplicationManager::_HandleWindowBecameOwned(v6, a3, (const struct CApplicationManager::HSHELL_DATA *const)&v20);
      goto LABEL_45;
    }
    if ( v20 != 26 )
    {
      if ( v20 == 27 )
      {
LABEL_43:
        CApplicationManager::_HandleWindowChangedOwner(
          v6,
          (const struct CApplicationManager::HSHELL_DATA *const)&v20,
          a3);
        goto LABEL_45;
      }
      if ( v20 == 28 )
        goto LABEL_42;
      if ( v20 != 29 )
      {
        if ( v20 != 30 )
        {
          if ( v20 == 32 )
          {
            v28 = 0LL;
            v30 = v21;
            v31 = 2;
            if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(v6, &v30, &v28, 0LL) >= 0 )
            {
              v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v29);
              (**v28)(v28, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v15);
            }
            v16 = v28;
            if ( v28 )
            {
              v28 = 0LL;
              ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64)))(*v16)[2])(v16);
            }
          }
          else if ( v20 == 34 && v22 == 2 )
          {
            CApplicationManager::_HandleApplicationRequestActivation(
              v6,
              (const struct CApplicationManager::HSHELL_DATA *const)&v20);
          }
          goto LABEL_45;
        }
        goto LABEL_43;
      }
    }
    CApplicationManager::_HandleWindowBecameUnowned(v6, (const struct CApplicationManager::HSHELL_DATA *const)&v20);
    goto LABEL_45;
  }
LABEL_46:
  if ( v20 == 32 )
  {
    CApplicationManager::_HandleCloseRequested(v6, (const struct CApplicationManager::HSHELL_DATA *)&v20, v29);
  }
  else if ( v20 == 65534 || v20 == 0xFFFF )
  {
    (*(void (__fastcall **)(char *, _QWORD, _QWORD, HWND, __int64 *))(*((_QWORD *)this + 4) + 24LL))(
      (char *)this + 32,
      (unsigned int)(v20 != 0xFFFF) + 1025,
      0LL,
      a3,
      &v19);
  }
  CApplicationManager::_ExecuteShellHookDelayedOperations(v6);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v35, 0LL);
  v35[0] = &IamTraceLogging::OnShellHookMessage::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v35);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v35);
  v17 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  CoTaskMemFree(pv_8[0]);
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return 0LL;
}
