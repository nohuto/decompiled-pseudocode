/*
 * XREFs of ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180008380
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z @ 0x180006D70 (-RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18001129C (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180013184 (-_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z @ 0x180013290 (-_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180013450 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x180013EAC (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180014630 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800149E4 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x180014B94 (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x180014DB4 (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 *     ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x180014E9C (-_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWN.c)
 *     ?_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZBID@@@Z @ 0x180014FE8 (-_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZB.c)
 *     ??$Start@AEA_KAEAPEAUHWND__@@@OnShellHookMessage@IamTraceLogging@@SA?AV01@AEA_KAEAPEAUHWND__@@@Z @ 0x180017BFC (--$Start@AEA_KAEAPEAUHWND__@@@OnShellHookMessage@IamTraceLogging@@SA-AV01@AEA_KAEAPEAUHWND__@@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180017CC8 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::OnShellHookMessage(CApplicationManager *this, unsigned __int64 a2, HWND a3)
{
  CDelayIAMOperations **v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r9
  CDelayIAMOperations *v9; // rcx
  unsigned __int8 (__fastcall *v10)(CDelayIAMOperations *, HWND); // rax
  HWND v11; // rbx
  HWND v12; // r8
  __int64 v13; // rax
  void (__fastcall ***v14)(_QWORD, GUID *, __int64); // rcx
  CDelayIAMOperations *v15; // rbx
  CDelayIAMOperations *v16; // r14
  unsigned __int64 v17; // rsi
  struct CDelayIAMOperations::COperation *v18; // r15
  struct IImmersiveApplication *v19; // rcx
  __int64 v21; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v22; // [rsp+40h] [rbp-C8h] BYREF
  HWND v23; // [rsp+48h] [rbp-C0h]
  int v24; // [rsp+50h] [rbp-B8h]
  char v25; // [rsp+54h] [rbp-B4h]
  char v26; // [rsp+55h] [rbp-B3h]
  int pv; // [rsp+58h] [rbp-B0h]
  char pv_4; // [rsp+5Ch] [rbp-ACh]
  LPVOID pv_8[2]; // [rsp+60h] [rbp-A8h]
  void (__fastcall ***v30)(_QWORD, GUID *, __int64); // [rsp+70h] [rbp-98h] BYREF
  struct IImmersiveApplication *v31; // [rsp+78h] [rbp-90h] BYREF
  _DWORD *v32; // [rsp+80h] [rbp-88h] BYREF
  CDelayIAMOperations *v33; // [rsp+88h] [rbp-80h]
  CDelayIAMOperations *v34; // [rsp+90h] [rbp-78h]
  CDelayIAMOperations *v35; // [rsp+98h] [rbp-70h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+A0h] [rbp-68h] BYREF
  int v37; // [rsp+A8h] [rbp-60h]
  __int64 v38; // [rsp+B0h] [rbp-58h]
  _QWORD v39[40]; // [rsp+B8h] [rbp-50h] BYREF

  v38 = -2LL;
  v6 = (CDelayIAMOperations **)((char *)this - 128);
  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)(((unsigned __int64)this + 200) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 128) >> 64)));
  v22 = a2;
  v23 = a3;
  v24 = 0;
  v26 = 0;
  pv = 0;
  pv_4 = 0;
  *(_OWORD *)pv_8 = 0LL;
  if ( a2 > 0x22 || (v7 = 0x5241E0000LL, v25 = 0, !_bittest64(&v7, a2)) )
    v25 = 1;
  v31 = 0LL;
  IamTraceLogging::OnShellHookMessage::Start<unsigned __int64 &,HWND__ * &>((IamTraceLogging::OnShellHookMessage *)v39);
  if ( a2 - 65534 > 1
    && CApplicationManager::_AnalyzeShellNotification(
         (CApplicationManager *)v6,
         (struct CApplicationManager::HSHELL_DATA *)&v22) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v22 <= 0x19 )
    {
      if ( v22 != 25 )
      {
        if ( v22 == 17 )
        {
          CApplicationManager::_HandleWindowCreation(
            (CApplicationManager *)v6,
            (const struct CApplicationManager::HSHELL_DATA *const)&v22);
          goto LABEL_45;
        }
        if ( v22 != 18 )
        {
          switch ( v22 )
          {
            case 0x13uLL:
LABEL_26:
              CApplicationManager::_HandleActivation(
                (CApplicationManager *)v6,
                (const struct CApplicationManager::HSHELL_DATA *const)&v22);
              break;
            case 0x14uLL:
              CApplicationManager::_HandleMonitorChanged(
                (CApplicationManager *)v6,
                (const struct CApplicationManager::HSHELL_DATA *const)&v22);
              break;
            case 0x15uLL:
              if ( (unsigned int)(v24 - 2) > 1 )
                goto LABEL_21;
              CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange(
                (CApplicationManager *)v6,
                (const struct CApplicationManager::HSHELL_DATA *const)&v22,
                a3);
              break;
            case 0x16uLL:
              v9 = v6[59];
              v10 = *(unsigned __int8 (__fastcall **)(CDelayIAMOperations *, HWND))(*(_QWORD *)v9 + 64LL);
LABEL_18:
              v11 = v23;
              if ( !v10(v9, v23) )
                (*(void (__fastcall **)(CDelayIAMOperations *, HWND))(*(_QWORD *)v6[66] + 32LL))(v6[66], v11);
              break;
            case 0x17uLL:
              goto LABEL_26;
            case 0x18uLL:
LABEL_21:
              v12 = v23;
              if ( pv_8[1] )
                v12 = (HWND)pv_8[1];
              LOBYTE(v8) = v22 == 21;
              CApplicationManager::_HandleMonitorRelatedNotificationForDesktopWindow(v6, v23, v12, v8, pv);
              break;
            default:
              break;
          }
LABEL_45:
          ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          goto LABEL_46;
        }
        v9 = v6[59];
        v10 = *(unsigned __int8 (__fastcall **)(CDelayIAMOperations *, HWND))(*(_QWORD *)v9 + 72LL);
        goto LABEL_18;
      }
LABEL_42:
      CApplicationManager::_HandleWindowBecameOwned(
        (CApplicationManager *)v6,
        a3,
        (const struct CApplicationManager::HSHELL_DATA *const)&v22);
      goto LABEL_45;
    }
    if ( v22 != 26 )
    {
      if ( v22 == 27 )
      {
LABEL_43:
        CApplicationManager::_HandleWindowChangedOwner(
          (CApplicationManager *)v6,
          (const struct CApplicationManager::HSHELL_DATA *const)&v22,
          a3);
        goto LABEL_45;
      }
      if ( v22 == 28 )
        goto LABEL_42;
      if ( v22 != 29 )
      {
        if ( v22 != 30 )
        {
          if ( v22 == 32 )
          {
            v30 = 0LL;
            v32 = v23;
            LODWORD(v33) = 2;
            if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(v6, &v32, &v30, 0LL) >= 0 )
            {
              v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v31);
              (**v30)(v30, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v13);
            }
            v14 = v30;
            if ( v30 )
            {
              v30 = 0LL;
              ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64)))(*v14)[2])(v14);
            }
          }
          else if ( v22 == 34 && v24 == 2 )
          {
            CApplicationManager::_HandleApplicationRequestActivation(
              (CApplicationManager *)v6,
              (const struct CApplicationManager::HSHELL_DATA *const)&v22);
          }
          goto LABEL_45;
        }
        goto LABEL_43;
      }
    }
    CApplicationManager::_HandleWindowBecameUnowned(
      (CApplicationManager *)v6,
      (const struct CApplicationManager::HSHELL_DATA *const)&v22);
    goto LABEL_45;
  }
LABEL_46:
  if ( v22 == 32 )
  {
    CApplicationManager::_HandleCloseRequested(
      (CApplicationManager *)v6,
      (const struct CApplicationManager::HSHELL_DATA *)&v22,
      v31);
  }
  else if ( v22 == 65534 || v22 == 0xFFFF )
  {
    (*(void (__fastcall **)(char *, _QWORD, _QWORD, HWND, __int64 *))(*((_QWORD *)this + 4) + 24LL))(
      (char *)this + 32,
      (unsigned int)(v22 != 0xFFFF) + 1025,
      0LL,
      a3,
      &v21);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v15 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v16 = v6[97];
  if ( v16 )
  {
    v15 = v6[96];
    v32 = v15;
    v34 = v6[98];
    v33 = v16;
    v35 = v6[99];
    v6[96] = 0LL;
    v6[98] = 0LL;
    v6[97] = 0LL;
    v6[99] = 0LL;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v17 = 0LL;
  if ( v16 )
  {
    do
    {
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v18 = CDelayIAMOperations::RemoveOperation(v6[91], *((_DWORD *)v15 + v17));
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      if ( v18 )
      {
        (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v18 + 8LL))(v18);
        (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v18)(v18, 1LL);
      }
      ++v17;
    }
    while ( v17 < (unsigned __int64)v16 );
  }
  if ( v15 )
    CoTaskMemFree(v15);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v39, 0LL);
  v39[0] = &IamTraceLogging::OnShellHookMessage::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v39);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v39);
  v19 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  CoTaskMemFree(pv_8[0]);
  if ( v37 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
