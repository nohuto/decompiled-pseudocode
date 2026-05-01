/*
 * XREFs of ?_GetMostRecentlyUsedViewForAppInstance@CAppViewManager@@AEAAJ_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180009DA8
 * Callers:
 *     ?_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18000A694 (-_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImme.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x180009888 (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180044950 (-GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006D604 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetAt@CEnumerableObjectCollection@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1800810B0 (-GetAt@CEnumerableObjectCollection@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180112178 (WPP_SF_.c)
 *     ??0Iterator@?$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA@QEAV1@I@Z @ 0x18011D71C (--0Iterator@-$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA@QEAV1@I@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@AEAAXXZ @ 0x1801207E0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@AEAAXXZ.c)
 *     ??0?$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA@PEAUIObjectArray@@@Z @ 0x1801AC368 (--0-$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA@PEAUIObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CAppViewManager::_GetMostRecentlyUsedViewForAppInstance(
        CAppViewManager *this,
        unsigned __int64 a2,
        struct IImmersiveMonitor *a3,
        struct IImmersiveApplicationInternal **a4)
{
  HRESULT v7; // r14d
  CApplicationManager *v8; // rbx
  int (*v9)(CApplicationManager *__hidden, unsigned __int64, struct IObjectArray **); // rax
  int v10; // eax
  CEnumerableObjectCollection *v11; // rbx
  __int64 (__fastcall *v12)(CEnumerableObjectCollection *__hidden, unsigned int, const struct _GUID *, void **); // rax
  HRESULT v13; // eax
  void *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rsi
  struct IImmersiveApplicationInternal *v18; // rbx
  CAppViewManager *v19; // rcx
  PVOID Ptr; // rbx
  __int64 *v21; // rcx
  struct IObjectArray *v22; // rbx
  struct IObjectArray *v23; // [rsp+38h] [rbp-59h] BYREF
  struct IImmersiveApplicationInternal *v24; // [rsp+40h] [rbp-51h] BYREF
  __int64 v25; // [rsp+48h] [rbp-49h] BYREF
  __int64 v26; // [rsp+50h] [rbp-41h] BYREF
  __int64 v27; // [rsp+58h] [rbp-39h] BYREF
  __int64 v28; // [rsp+60h] [rbp-31h] BYREF
  __int64 v29; // [rsp+68h] [rbp-29h] BYREF
  void *ppvOut; // [rsp+70h] [rbp-21h] BYREF
  CApplicationManager *v31; // [rsp+78h] [rbp-19h] BYREF
  int v32; // [rsp+80h] [rbp-11h] BYREF
  struct IImmersiveApplicationInternal *v33[2]; // [rsp+88h] [rbp-9h] BYREF
  _BYTE v34[8]; // [rsp+98h] [rbp+7h] BYREF
  unsigned int v35; // [rsp+A0h] [rbp+Fh]
  int v36; // [rsp+A8h] [rbp+17h] BYREF
  __int64 v37[7]; // [rsp+B0h] [rbp+1Fh] BYREF
  int v38; // [rsp+F8h] [rbp+67h] BYREF
  unsigned int v39; // [rsp+108h] [rbp+77h] BYREF
  int v40; // [rsp+10Ch] [rbp+7Bh]
  void *v41; // [rsp+110h] [rbp+7Fh] BYREF

  v40 = HIDWORD(a3);
  v37[2] = -2LL;
  *a4 = 0LL;
  v41 = 0LL;
  v23 = 0LL;
  v39 = 0;
  v31 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
  v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, CApplicationManager **))this + 15))(
         *((_QWORD *)this + 15),
         &GUID_6ab2f0e6_cf78_4445_80dd_201879cf4c70,
         &v31);
  if ( v7 >= 0 )
  {
    v8 = v31;
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v23);
    v9 = *(int (**)(CApplicationManager *__hidden, unsigned __int64, struct IObjectArray **))(*(_QWORD *)v8 + 24LL);
    v10 = v9 == CApplicationManager::GetAllApplicationsByHostId
        ? CApplicationManager::GetAllApplicationsByHostId(v8, a2, &v23)
        : ((__int64 (__fastcall *)(CApplicationManager *, unsigned __int64, struct IObjectArray **))v9)(v8, a2, &v23);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v7 = ((__int64 (__fastcall *)(struct IObjectArray *, unsigned int *))v23->lpVtbl->GetCount)(v23, &v39);
      if ( v7 >= 0 )
      {
        if ( v39 == 1 )
        {
          v11 = (CEnumerableObjectCollection *)v23;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v41);
          v12 = *(__int64 (__fastcall **)(CEnumerableObjectCollection *__hidden, unsigned int, const struct _GUID *, void **))(*(_QWORD *)v11 + 32LL);
          if ( v12 == CEnumerableObjectCollection::GetAt )
            v13 = CEnumerableObjectCollection::GetAt(v11, 0, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v41);
          else
            v13 = v12(v11, 0, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v41);
          v7 = v13;
        }
        if ( v7 >= 0 )
        {
          if ( v39 <= 1 )
          {
LABEL_12:
            if ( v7 >= 0 )
              v7 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IImmersiveApplicationInternal **))v41)(
                     v41,
                     &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                     a4);
            goto LABEL_14;
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
LABEL_40:
            if ( !v41 )
            {
              if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_30bd9181394d37182917d8f42fc22ff1_Traceguids);
              v22 = v23;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v41);
              v7 = ((__int64 (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, void **))v22->lpVtbl->GetAt)(
                     v22,
                     0LL,
                     &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                     &v41);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
            goto LABEL_12;
          }
          v29 = 0LL;
          v15 = ppvOut;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
          v7 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v15 + 48LL))(v15, &v29);
          if ( v7 < 0 )
          {
LABEL_39:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
            goto LABEL_40;
          }
          v16 = 0LL;
          v28 = 0LL;
          v17 = 0LL;
          v27 = 0LL;
          ObjectArrayAdapter<IImmersiveApplicationInternal>::ObjectArrayAdapter<IImmersiveApplicationInternal>(v34, v23);
          ObjectArrayAdapter<IImmersiveApplicationInternal>::Iterator::Iterator(&v32, v34, 0LL);
          ObjectArrayAdapter<IImmersiveApplicationInternal>::Iterator::Iterator(&v36, v34, v35);
          while ( v32 != v36 || v33[1] != (struct IImmersiveApplicationInternal *)v37[1] )
          {
            v18 = v33[0];
            v24 = v33[0];
            Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v24);
            AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
            LOBYTE(v18) = CAppViewManager::_IsMultiViewOperationAllowed(v19, v18);
            ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
            if ( (_BYTE)v18 )
            {
              if ( !v16 )
              {
                Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(&v28, &v24);
                v16 = v28;
              }
              v26 = 0LL;
              v7 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v24, &v26);
              if ( v7 >= 0 )
              {
                v25 = 0LL;
                Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
                Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v25);
                v7 = (*(__int64 (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)Ptr + 56LL))(Ptr, v26, &v25);
                if ( v7 >= 0 )
                {
                  v7 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v29 + 24LL))(v29, v25, &v38);
                  if ( v7 >= 0 )
                  {
                    if ( v38 )
                    {
                      Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(&v27, &v24);
                      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v25);
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
                      v17 = v27;
                      break;
                    }
                  }
                }
                Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v25);
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
            ++v32;
            ObjectArrayAdapter<IImmersiveApplicationInternal>::Iterator::GetCurrentObject(&v32);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v37);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v33);
          Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(v34);
          if ( v17 )
          {
            v21 = &v27;
          }
          else
          {
            if ( !v16 )
            {
LABEL_38:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
              goto LABEL_39;
            }
            v21 = &v28;
          }
          Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(v21, &v41);
          goto LABEL_38;
        }
      }
    }
  }
LABEL_14:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v41);
  return (unsigned int)v7;
}
