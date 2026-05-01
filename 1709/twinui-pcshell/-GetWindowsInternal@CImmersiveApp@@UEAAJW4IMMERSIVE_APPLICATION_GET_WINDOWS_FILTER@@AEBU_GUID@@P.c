/*
 * XREFs of ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x180055D00
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180024440 (-CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@PEA_K@Z @ 0x18005C360 (-_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWi.c)
 *     CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_5bb90e6a151c33247b74534399ffbb84___ @ 0x18005DA40 (CImmersiveApp--CImmersiveWindowCollection--ForEach__lambda_5bb90e6a151c33247b74534399ffbb84___.c)
 *     ?CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800675E8 (-CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveApp::GetWindowsInternal(_QWORD *a1, int a2, _QWORD *a3, _QWORD *a4)
{
  struct ITaskWindow *v8; // r14
  __int64 *v9; // rax
  const struct _GUID *v10; // rcx
  int Instance; // ebx
  bool v12; // r12
  __int64 *v13; // rax
  const struct _GUID *v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // rax
  const struct _GUID *v20; // rdx
  __int64 v21; // r14
  __int64 *v22; // rdx
  struct ITaskWindow *v23; // rcx
  struct ITaskWindow *v24; // rcx
  struct ITaskWindow *v25; // rcx
  __int64 v26; // rcx
  __int64 *v28; // [rsp+28h] [rbp-39h] BYREF
  struct ITaskWindow *v29; // [rsp+30h] [rbp-31h] BYREF
  struct ITaskWindow *v30; // [rsp+38h] [rbp-29h] BYREF
  struct ITaskWindow *v31; // [rsp+40h] [rbp-21h] BYREF
  _QWORD v32[2]; // [rsp+48h] [rbp-19h] BYREF
  HWND v33; // [rsp+58h] [rbp-9h] BYREF
  int v34; // [rsp+60h] [rbp-1h] BYREF
  struct ITaskWindow **v35; // [rsp+68h] [rbp+7h]
  struct ITaskWindow **v36; // [rsp+70h] [rbp+Fh]
  _QWORD *v37; // [rsp+78h] [rbp+17h]
  struct ITaskWindow **v38; // [rsp+80h] [rbp+1Fh]
  int *v39; // [rsp+88h] [rbp+27h]
  __int64 v40; // [rsp+90h] [rbp+2Fh]
  int v41; // [rsp+E0h] [rbp+7Fh] BYREF

  v40 = -2LL;
  v8 = 0LL;
  *a4 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( *a3 == *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1
    && a3[1] == *(_QWORD *)GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data4 )
  {
    v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v31);
    Instance = CEnumerableObjectCollection::CreateInstance(v10, (void **)v9);
    v41 = Instance;
    goto LABEL_14;
  }
  if ( *a3 == *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1
    && a3[1] == *(_QWORD *)GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 408LL))(a1) || a2 == 5 )
      goto LABEL_8;
    goto LABEL_61;
  }
  if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1
    && a3[1] == *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 408LL))(a1) )
    {
LABEL_8:
      Instance = 0;
      v41 = 0;
      goto LABEL_15;
    }
LABEL_61:
    Instance = -2147019873;
    v41 = -2147019873;
    goto LABEL_62;
  }
  Instance = -2147467262;
  v41 = -2147467262;
LABEL_14:
  if ( Instance < 0 )
    goto LABEL_62;
LABEL_15:
  v12 = a2 != 3;
  if ( (unsigned int)(a2 - 2) > 1 )
  {
    if ( (unsigned int)(a2 - 4) > 1 )
      goto LABEL_46;
    v12 = 0;
    v32[0] = 0LL;
    Instance = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*a1 + 496LL))(a1, v32);
    v41 = Instance;
    if ( Instance >= 0 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 408LL))(a1)
        || (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 192LL))(a1) )
      {
        v41 = 0;
        Instance = (*(__int64 (__fastcall **)(_QWORD, HWND *))(*(_QWORD *)v32[0] + 24LL))(v32[0], &v33);
        v41 = Instance;
        if ( Instance >= 0 )
        {
          v28 = 0LL;
          v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v28);
          Instance = CImmersiveApplicationWindow_CreateInstance(v33, v14, (void **)v13);
          v41 = Instance;
          if ( Instance < 0 )
          {
            v16 = (__int64)v28;
          }
          else
          {
            v15 = (__int64)v28;
            v16 = 0LL;
            v28 = 0LL;
            if ( v29 )
            {
              (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v29 + 16LL))(v29);
              Instance = v41;
              v16 = (__int64)v28;
            }
            v29 = (struct ITaskWindow *)v15;
            v8 = 0LL;
          }
          if ( v16 )
          {
            v28 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
            Instance = v41;
          }
        }
      }
      else
      {
        Instance = -2147019873;
        v41 = -2147019873;
      }
    }
    if ( a2 == 4 && Instance < 0 )
    {
      Instance = 0;
      v41 = 0;
      a2 = 0;
      v12 = 1;
    }
    v17 = (__int64 *)v32[0];
    if ( !v32[0] )
      goto LABEL_46;
    v32[0] = 0LL;
    v18 = *v17;
    goto LABEL_34;
  }
  v8 = (struct ITaskWindow *)a1[34];
  if ( v8 )
  {
    if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1
      && a3[1] == *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4 )
    {
      v32[0] = a1[34];
      v8 = 0LL;
      v32[1] = 0LL;
      CImmersiveApp::CImmersiveWindowCollection::_GetWindow(
        (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 19),
        (const struct CTaskWindowFinder *)v32,
        &v30,
        (unsigned __int64 *)&v33);
      goto LABEL_48;
    }
    v28 = 0LL;
    v19 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v28);
    Instance = CImmersiveApplicationWindow_CreateInstance((HWND)v8, v20, (void **)v19);
    v41 = Instance;
    v8 = 0LL;
    if ( Instance < 0 )
    {
      v22 = v28;
    }
    else
    {
      v21 = (__int64)v28;
      v22 = 0LL;
      v28 = 0LL;
      if ( v29 )
      {
        (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v29 + 16LL))(v29);
        Instance = v41;
        v22 = v28;
      }
      v29 = (struct ITaskWindow *)v21;
      v8 = 0LL;
      v12 = 0;
    }
    if ( v22 )
    {
      v28 = 0LL;
      v18 = *v22;
LABEL_34:
      (*(void (**)(void))(v18 + 16))();
      Instance = v41;
    }
  }
LABEL_46:
  if ( !v12 )
    goto LABEL_49;
  v34 = a2;
  v35 = &v31;
  v36 = &v29;
  v37 = a3;
  v38 = &v30;
  v39 = &v41;
  CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_5bb90e6a151c33247b74534399ffbb84___(a1 + 19, &v34);
LABEL_48:
  Instance = v41;
LABEL_49:
  if ( Instance < 0 )
    goto LABEL_62;
  if ( *a3 == *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1
    && a3[1] == *(_QWORD *)GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data4 )
  {
    Instance = (**(__int64 (__fastcall ***)(struct ITaskWindow *, _QWORD *, _QWORD *))v31)(v31, a3, a4);
    v41 = Instance;
    goto LABEL_62;
  }
  if ( *a3 == *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1
    && a3[1] == *(_QWORD *)GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data4 )
  {
    v23 = v29;
    goto LABEL_59;
  }
  if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1
    && a3[1] == *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4 )
  {
    v23 = v30;
LABEL_59:
    if ( v23 )
    {
      v41 = (**(__int64 (__fastcall ***)(struct ITaskWindow *, _QWORD *, _QWORD *))v23)(v23, a3, a4);
      Instance = v41;
      goto LABEL_62;
    }
    goto LABEL_61;
  }
LABEL_62:
  v24 = v30;
  if ( v30 )
  {
    v30 = v8;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v25 = v29;
  if ( v29 )
  {
    v29 = v8;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v26 = (__int64)v31;
  if ( v31 )
  {
    v31 = v8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  return (unsigned int)Instance;
}
