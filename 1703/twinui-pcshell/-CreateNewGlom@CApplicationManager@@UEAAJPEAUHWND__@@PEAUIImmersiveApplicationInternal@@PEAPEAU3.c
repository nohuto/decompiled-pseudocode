/*
 * XREFs of ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAPEAU3@@Z @ 0x18000DB50
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x18000731C (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180010B58 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x180014108 (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x180014284 (-_RemoveWindowFromGlom@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@PEAUIImmersiveApplicatio.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CApplicationManager::CreateNewGlom(
        CApplicationManager *this,
        struct CActivationBasedAppAndGlomCollection::CGlomCollection *a2,
        __int64 (__fastcall ***a3)(struct IImmersiveApplicationInternal *, GUID *, __int64),
        struct IImmersiveApplicationInternal **a4)
{
  __int64 (__fastcall **v8)(struct IImmersiveApplicationInternal *, GUID *, __int64); // rbx
  __int64 v9; // rax
  int ImmersiveApp; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  struct IImmersiveMonitor *v13; // r12
  unsigned int v14; // esi
  const unsigned __int16 *v15; // rbx
  void **v16; // rax
  struct IImmersiveMonitor *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct IImmersiveApplicationInternal *v20; // rax
  struct IImmersiveApplicationInternal *v21; // rcx
  __int64 v22; // rdx
  struct IImmersiveMonitor *v24; // [rsp+30h] [rbp-50h] BYREF
  __int64 v25; // [rsp+38h] [rbp-48h] BYREF
  __int64 v26; // [rsp+40h] [rbp-40h] BYREF
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v27; // [rsp+48h] [rbp-38h] BYREF
  __int64 v28; // [rsp+50h] [rbp-30h]
  __int64 v29; // [rsp+58h] [rbp-28h]
  LPVOID pv[4]; // [rsp+60h] [rbp-20h] BYREF
  struct IImmersiveApplicationInternal *v31; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v32; // [rsp+D8h] [rbp+58h] BYREF

  v29 = -2LL;
  *a4 = 0LL;
  v31 = 0LL;
  v25 = 0LL;
  v8 = *a3;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v25);
  ImmersiveApp = (*v8)((struct IImmersiveApplicationInternal *)a3, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v9);
  if ( ImmersiveApp < 0 )
    goto LABEL_22;
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  ImmersiveApp = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v25 + 32LL))(v25, pv);
  if ( ImmersiveApp >= 0 )
  {
    v32 = 0LL;
    v27 = a2;
    v28 = 0LL;
    CApplicationManager::_RemoveWindowFromGlom((char *)this - 200, &v27, a3);
    v11 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v26 = 0LL;
    v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v26);
    ImmersiveApp = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64))(**((_QWORD **)this + 39) + 32LL))(
                     *((_QWORD *)this + 39),
                     0LL,
                     &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
                     v12);
    if ( ImmersiveApp < 0 )
      goto LABEL_13;
    v24 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64), struct IImmersiveMonitor **))(*a3)[58])(
      a3,
      &v24);
    v13 = v24;
    v14 = 1;
    if ( (int)CActivationBasedAppAndGlomCollection::_GetGlomCollection(
                (CApplicationManager *)((char *)this + 360),
                (const unsigned __int16 *)pv[0],
                &v27,
                0LL) >= 0 )
    {
      v14 = *((_DWORD *)v27 + 8);
      *((_DWORD *)v27 + 8) = v14 + 1;
    }
    v15 = (const unsigned __int16 *)pv[0];
    v16 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v31);
    ImmersiveApp = CApplicationManager::_CreateImmersiveApp(
                     (CApplicationManager *)((char *)this - 200),
                     v15,
                     v14,
                     v13,
                     (const struct _GUID *)&v32,
                     v16);
    if ( ImmersiveApp >= 0 )
      ImmersiveApp = CApplicationManager::_AddViewToGlom((char *)this - 200, 0LL, v31, 0LL, v32);
    v17 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    if ( ImmersiveApp < 0 )
LABEL_13:
      CApplicationManager::_AddViewToGlom((char *)this - 200, 0LL, a3, 9LL, v32);
    v18 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  if ( ImmersiveApp < 0 )
  {
LABEL_22:
    v21 = v31;
  }
  else
  {
    v20 = v31;
    v21 = 0LL;
    v31 = 0LL;
    *a4 = v20;
  }
  v22 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    v21 = v31;
  }
  if ( v21 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return (unsigned int)ImmersiveApp;
}
