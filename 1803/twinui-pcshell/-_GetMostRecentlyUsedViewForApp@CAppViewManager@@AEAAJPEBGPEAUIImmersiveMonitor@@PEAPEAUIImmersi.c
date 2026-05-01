/*
 * XREFs of ?_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1801261D8
 * Callers:
 *     ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180126678 (-_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveM.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x180009888 (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006D604 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180112178 (WPP_SF_.c)
 *     ??0Iterator@?$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA@QEAV1@I@Z @ 0x18011D71C (--0Iterator@-$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA@QEAV1@I@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@AEAAXXZ @ 0x1801207E0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@AEAAXXZ.c)
 *     ??0?$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA@PEAUIObjectArray@@@Z @ 0x1801AC368 (--0-$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA@PEAUIObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CAppViewManager::_GetMostRecentlyUsedViewForApp(
        CAppViewManager *this,
        const unsigned __int16 *a2,
        struct IImmersiveMonitor *a3,
        struct IImmersiveApplicationInternal **a4)
{
  int v7; // r14d
  __int64 v8; // rbx
  unsigned int v9; // eax
  void *v10; // rbx
  void *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rsi
  struct IImmersiveApplicationInternal *v14; // rbx
  CAppViewManager *v15; // rcx
  PVOID Ptr; // rbx
  __int64 *v17; // rcx
  void *v18; // rbx
  void *v20; // [rsp+38h] [rbp-59h] BYREF
  struct IImmersiveApplicationInternal *v21; // [rsp+40h] [rbp-51h] BYREF
  CWinRTApplicationView *v22; // [rsp+48h] [rbp-49h] BYREF
  __int64 v23; // [rsp+50h] [rbp-41h] BYREF
  __int64 v24; // [rsp+58h] [rbp-39h] BYREF
  __int64 v25; // [rsp+60h] [rbp-31h] BYREF
  __int64 v26; // [rsp+68h] [rbp-29h] BYREF
  void *ppvOut; // [rsp+70h] [rbp-21h] BYREF
  __int64 v28; // [rsp+78h] [rbp-19h] BYREF
  __int64 v29; // [rsp+80h] [rbp-11h] BYREF
  struct IImmersiveApplicationInternal *v30[2]; // [rsp+88h] [rbp-9h] BYREF
  void *v31; // [rsp+98h] [rbp+7h] BYREF
  int v32; // [rsp+A0h] [rbp+Fh]
  int v33; // [rsp+A8h] [rbp+17h] BYREF
  __int64 v34[7]; // [rsp+B0h] [rbp+1Fh] BYREF
  int v35; // [rsp+F8h] [rbp+67h] BYREF
  unsigned int v36; // [rsp+108h] [rbp+77h] BYREF
  int v37; // [rsp+10Ch] [rbp+7Bh]
  __int64 (__fastcall ***v38)(_QWORD, GUID *, struct IImmersiveApplicationInternal **); // [rsp+110h] [rbp+7Fh] BYREF

  v37 = HIDWORD(a3);
  v34[2] = -2LL;
  *a4 = 0LL;
  v38 = 0LL;
  v20 = 0LL;
  v36 = 0;
  v28 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 15))(
         *((_QWORD *)this + 15),
         &GUID_a3c23ab7_6be2_4778_8eb0_1adb7977f76a,
         &v28);
  if ( v7 >= 0 )
  {
    v8 = v28;
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v20);
    v7 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, void **))(*(_QWORD *)v8 + 40LL))(v8, a2, &v20);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v20 + 24LL))(v20, &v36);
      if ( v7 >= 0 )
      {
        v9 = v36;
        if ( v36 == 1 )
        {
          v10 = v20;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
          v7 = (*(__int64 (__fastcall **)(void *, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **)))(*(_QWORD *)v10 + 32LL))(
                 v10,
                 0LL,
                 &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                 &v38);
          v9 = v36;
        }
        if ( v7 >= 0 )
        {
          if ( v9 <= 1 )
          {
LABEL_37:
            if ( v7 >= 0 )
              v7 = (**v38)(v38, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, a4);
            goto LABEL_39;
          }
          ppvOut = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
          v7 = IUnknown_QueryService(
                 *((IUnknown **)this + 15),
                 (const GUID *const)&SID_VirtualDesktopManager,
                 &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
                 &ppvOut);
          if ( v7 < 0 )
          {
LABEL_31:
            if ( !v38 )
            {
              if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, &WPP_30bd9181394d37182917d8f42fc22ff1_Traceguids);
              v18 = v20;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
              v7 = (*(__int64 (__fastcall **)(void *, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **)))(*(_QWORD *)v18 + 32LL))(
                     v18,
                     0LL,
                     &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                     &v38);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
            goto LABEL_37;
          }
          v26 = 0LL;
          v11 = ppvOut;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
          v7 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v11 + 48LL))(v11, &v26);
          if ( v7 < 0 )
          {
LABEL_30:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
            goto LABEL_31;
          }
          v12 = 0LL;
          v25 = 0LL;
          v13 = 0LL;
          v24 = 0LL;
          ObjectArrayAdapter<IImmersiveApplicationInternal>::ObjectArrayAdapter<IImmersiveApplicationInternal>(
            &v31,
            v20);
          ObjectArrayAdapter<IImmersiveApplicationInternal>::Iterator::Iterator((__int64)&v29, (__int64)&v31, 0);
          ObjectArrayAdapter<IImmersiveApplicationInternal>::Iterator::Iterator((__int64)&v33, (__int64)&v31, v32);
          while ( (_DWORD)v29 != v33 || v30[1] != (struct IImmersiveApplicationInternal *)v34[1] )
          {
            v14 = v30[0];
            v21 = v30[0];
            Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v21);
            AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
            LOBYTE(v14) = CAppViewManager::_IsMultiViewOperationAllowed(v15, v14);
            ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
            if ( (_BYTE)v14 )
            {
              if ( !v12 )
              {
                Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(&v25, (__int64 *)&v21);
                v12 = v25;
              }
              v23 = 0LL;
              v7 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v21, &v23);
              if ( v7 >= 0 )
              {
                v22 = 0LL;
                Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
                Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v22);
                v7 = (*(__int64 (__fastcall **)(PVOID, __int64, CWinRTApplicationView **))(*(_QWORD *)Ptr + 56LL))(
                       Ptr,
                       v23,
                       &v22);
                if ( v7 >= 0 )
                {
                  v7 = (*(__int64 (__fastcall **)(__int64, CWinRTApplicationView *, int *))(*(_QWORD *)v26 + 24LL))(
                         v26,
                         v22,
                         &v35);
                  if ( v7 >= 0 )
                  {
                    if ( v35 )
                    {
                      Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(&v24, (__int64 *)&v21);
                      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v22);
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
                      v13 = v24;
                      break;
                    }
                  }
                }
                Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v22);
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
            LODWORD(v29) = v29 + 1;
            ObjectArrayAdapter<IImmersiveApplicationInternal>::Iterator::GetCurrentObject(&v29);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v34);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v30);
          Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v31);
          if ( v13 )
          {
            v17 = &v24;
          }
          else
          {
            if ( !v12 )
            {
LABEL_29:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
              goto LABEL_30;
            }
            v17 = &v25;
          }
          Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(v17, (__int64 *)&v38);
          goto LABEL_29;
        }
      }
    }
  }
LABEL_39:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
  return (unsigned int)v7;
}
