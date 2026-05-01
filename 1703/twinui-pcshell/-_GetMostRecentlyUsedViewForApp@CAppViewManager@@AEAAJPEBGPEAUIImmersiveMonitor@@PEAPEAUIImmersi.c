/*
 * XREFs of ?_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1800413FC
 * Callers:
 *     ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18003F5B4 (-_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveM.c)
 * Callees:
 *     WPP_SF_ @ 0x180006A8C (WPP_SF_.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x180042D1C (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ??DIterator@?$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA?AV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@XZ @ 0x18004363C (--DIterator@-$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA-AV-$ComPtr@UIImmersiveMonitor@@@WRL@.c)
 *     ?end@?$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA?AVIterator@1@XZ @ 0x180043668 (-end@-$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA-AVIterator@1@XZ.c)
 *     ?begin@?$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA?AVIterator@1@XZ @ 0x1800436A4 (-begin@-$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA-AVIterator@1@XZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@AEAAXXZ @ 0x180043BA4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CAppViewManager::_GetMostRecentlyUsedViewForApp(
        CAppViewManager *this,
        const unsigned __int16 *a2,
        struct IImmersiveMonitor *a3,
        struct IImmersiveApplicationInternal **a4)
{
  __int64 *v7; // rax
  HRESULT v8; // r14d
  unsigned int v9; // eax
  __int64 *v10; // rbx
  __int64 v11; // rdi
  __int64 *v12; // rax
  struct IImmersiveApplicationInternal *v13; // rbx
  struct IImmersiveApplicationInternal *v14; // rdi
  __int64 *v15; // rsi
  int v16; // eax
  struct IImmersiveApplicationInternal *v17; // r15
  CAppViewManager *v18; // rcx
  bool IsMultiViewOperationAllowed; // si
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // rcx
  void (__fastcall **v28)(struct IImmersiveApplicationInternal *, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **)); // rax
  struct IImmersiveApplicationInternal *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 *v32; // rbx
  __int64 v33; // rdi
  __int64 *v34; // rax
  void *v35; // rcx
  __int64 v36; // rcx
  __int64 *v37; // rcx
  __int64 v38; // rcx
  __int64 *v40; // [rsp+38h] [rbp-69h] BYREF
  __int64 v41; // [rsp+40h] [rbp-61h] BYREF
  __int64 v42; // [rsp+48h] [rbp-59h] BYREF
  __int64 v43; // [rsp+50h] [rbp-51h] BYREF
  void *ppvOut; // [rsp+58h] [rbp-49h] BYREF
  __int64 v45; // [rsp+60h] [rbp-41h] BYREF
  __int64 *v46; // [rsp+68h] [rbp-39h] BYREF
  int v47; // [rsp+70h] [rbp-31h] BYREF
  struct IImmersiveApplicationInternal *v48; // [rsp+78h] [rbp-29h] BYREF
  int v49; // [rsp+80h] [rbp-21h] BYREF
  __int64 v50; // [rsp+88h] [rbp-19h]
  __int64 v51; // [rsp+90h] [rbp-11h]
  struct IImmersiveApplicationInternal *v52; // [rsp+98h] [rbp-9h]
  struct IImmersiveApplicationInternal *v53; // [rsp+A0h] [rbp-1h]
  int v54; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v55; // [rsp+B0h] [rbp+Fh]
  __int64 v56; // [rsp+B8h] [rbp+17h]
  __int64 v57; // [rsp+C0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]
  int v59; // [rsp+108h] [rbp+67h] BYREF
  unsigned int v60; // [rsp+118h] [rbp+77h] BYREF
  int v61; // [rsp+11Ch] [rbp+7Bh]
  __int64 (__fastcall ***v62)(_QWORD, GUID *, struct IImmersiveApplicationInternal **); // [rsp+120h] [rbp+7Fh] BYREF

  v61 = HIDWORD(a3);
  v57 = -2LL;
  *a4 = 0LL;
  v62 = 0LL;
  v40 = 0LL;
  v60 = 0;
  v45 = 0LL;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v45);
  v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 14))(
         *((_QWORD *)this + 14),
         &GUID_a3c23ab7_6be2_4778_8eb0_1adb7977f76a,
         v7);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, __int64 **))(*(_QWORD *)v45 + 40LL))(
           v45,
           a2,
           &v40);
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v40 + 24))(v40, &v60);
      if ( v8 >= 0 )
      {
        v9 = v60;
        if ( v60 == 1 )
        {
          v10 = v40;
          v11 = *v40;
          v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v62);
          v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v11 + 32))(
                 v10,
                 0LL,
                 &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                 v12);
          v9 = v60;
        }
        if ( v8 >= 0 )
        {
          if ( v9 <= 1 )
          {
LABEL_65:
            if ( v8 >= 0 )
              v8 = (**v62)(v62, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, a4);
            goto LABEL_67;
          }
          ppvOut = 0LL;
          v8 = IUnknown_QueryService(
                 *((IUnknown **)this + 14),
                 (const GUID *const)&SID_VirtualDesktopManager,
                 &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
                 &ppvOut);
          if ( v8 < 0 )
          {
LABEL_58:
            if ( !v62 )
            {
              if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, &WPP_99aca6d361263e91c27c68872c80b102_Traceguids);
              v32 = v40;
              v33 = *v40;
              v34 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v62);
              v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v33 + 32))(
                     v32,
                     0LL,
                     &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                     v34);
            }
            v35 = ppvOut;
            if ( ppvOut )
            {
              ppvOut = 0LL;
              (*(void (__fastcall **)(void *))(*(_QWORD *)v35 + 16LL))(v35);
            }
            goto LABEL_65;
          }
          v43 = 0LL;
          v8 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppvOut + 48LL))(ppvOut, &v43);
          if ( v8 < 0 )
          {
LABEL_56:
            v31 = v43;
            if ( v43 )
            {
              v43 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
            }
            goto LABEL_58;
          }
          v13 = 0LL;
          v52 = 0LL;
          v14 = 0LL;
          v53 = 0LL;
          v15 = v40;
          v46 = v40;
          if ( v40 )
            (*(void (__fastcall **)(__int64 *))(*v40 + 8))(v40);
          v47 = 0;
          v16 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v15 + 24))(v15, &v47);
          if ( v16 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xD,
              (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
              (const char *)(unsigned int)v16);
          ObjectArrayAdapter<IImmersiveApplicationInternal>::begin(&v46, &v49);
          ObjectArrayAdapter<IImmersiveApplicationInternal>::end(&v46, &v54);
          while ( v49 != v54 || v51 != v56 )
          {
            ObjectArrayAdapter<IImmersiveMonitor>::Iterator::operator*(&v49, &v48);
            AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
            v17 = v48;
            IsMultiViewOperationAllowed = CAppViewManager::_IsMultiViewOperationAllowed(v18, v48);
            ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
            if ( IsMultiViewOperationAllowed )
            {
              if ( !v13 && v17 )
              {
                (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v17 + 8LL))(v17);
                v13 = v17;
                v52 = v17;
              }
              v42 = 0LL;
              v8 = (**(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))v17)(
                     v17,
                     &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                     &v42);
              if ( v8 >= 0 )
              {
                v41 = 0LL;
                v8 = (*(__int64 (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[12].Ptr
                                                                          + 56LL))(
                       CApplicationManagerUtility::g_pIAMGlobals[12].Ptr,
                       v42,
                       &v41);
                if ( v8 >= 0 )
                {
                  v8 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v43 + 24LL))(v43, v41, &v59);
                  if ( v8 >= 0 )
                  {
                    if ( v59 )
                    {
                      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v17 + 8LL))(v17);
                      v14 = v17;
                      v53 = v17;
                      v22 = v41;
                      if ( v41 )
                      {
                        v41 = 0LL;
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
                      }
                      v23 = v42;
                      if ( v42 )
                      {
                        v42 = 0LL;
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
                      }
                      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v17 + 16LL))(v17);
                      break;
                    }
                  }
                }
                v20 = v41;
                if ( v41 )
                {
                  v41 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
                }
              }
              v21 = v42;
              if ( v42 )
              {
                v42 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
              }
            }
            if ( v17 )
            {
              v48 = 0LL;
              (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v17 + 16LL))(v17);
            }
            ++v49;
            ObjectArrayAdapter<IImmersiveApplicationInternal>::Iterator::GetCurrentObject(&v49);
          }
          v24 = v55;
          if ( v55 )
          {
            v55 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
          v25 = v50;
          if ( v50 )
          {
            v50 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
          }
          v26 = v46;
          if ( v46 )
          {
            v46 = 0LL;
            (*(void (__fastcall **)(__int64 *))(*v26 + 16))(v26);
          }
          if ( v14 )
          {
            v27 = (__int64)v62;
            if ( v62 )
            {
              v62 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
            }
            v28 = *(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **)))v14;
            v29 = v14;
          }
          else
          {
            if ( !v13 )
            {
LABEL_52:
              if ( v14 )
                (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v14 + 16LL))(v14);
              if ( v13 )
                (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v13 + 16LL))(v13);
              goto LABEL_56;
            }
            v30 = (__int64)v62;
            if ( v62 )
            {
              v62 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
            }
            v28 = *(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **)))v13;
            v29 = v13;
          }
          (*v28)(v29, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v62);
          goto LABEL_52;
        }
      }
    }
  }
LABEL_67:
  v36 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  v37 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v37 + 16))(v37);
  }
  v38 = (__int64)v62;
  if ( v62 )
  {
    v62 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
  return (unsigned int)v8;
}
