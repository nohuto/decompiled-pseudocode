/*
 * XREFs of ?RequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJIQEBUIMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION@@PEAUIImmersiveWindowMessageNotification@@PEAK@Z @ 0x1800CFEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x1800CF1CC (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall PrivilegedHotkeyOperations::RequestPrivilegedHotkeys(
        PrivilegedHotkeyOperations *this,
        unsigned int a2,
        const struct IMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION *a3,
        struct IImmersiveWindowMessageNotification *a4,
        unsigned int *a5)
{
  unsigned int *v9; // r14
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 *v15; // rax
  int v16; // eax
  int v17; // eax
  RTL_SRWLOCK *v18; // rbx
  unsigned int *v19; // rcx
  _QWORD *v20; // rcx
  __int64 (__fastcall ***v21)(_QWORD, GUID *, _QWORD **); // rcx
  __int64 (__fastcall ***v23)(_QWORD, GUID *, _QWORD **); // [rsp+30h] [rbp-20h] BYREF
  RTL_SRWLOCK *v24[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  _QWORD *v26; // [rsp+80h] [rbp+30h] BYREF

  v24[1] = (RTL_SRWLOCK *)-2LL;
  v9 = a5;
  *a5 = 0;
  v23 = 0LL;
  v10 = *((_QWORD *)this + 6);
  if ( v10
    && ((*(void (__fastcall **)(__int64, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD **)))(*(_QWORD *)v10 + 24LL))(
          v10,
          &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
          &v23),
        v23) )
  {
    v26 = 0LL;
    v11 = (**v23)(v23, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &v26);
    v12 = v11;
    if ( v11 >= 0 )
    {
      a5 = 0LL;
      v13 = v26;
      v14 = *v26;
      v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&a5);
      v16 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, GUID *, __int64 *))(v14 + 24))(
              v13,
              &IID_IImmersiveWindowMessageService,
              &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
              v15);
      v12 = v16;
      if ( v16 >= 0 )
      {
        IamAccess::TakeIamAccess(*((_QWORD *)this + 5), v24);
        v17 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD, const struct IMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION *, struct IImmersiveWindowMessageNotification *, unsigned int *))(*(_QWORD *)a5 + 56LL))(
                a5,
                a2,
                a3,
                a4,
                v9);
        v12 = v17;
        if ( v17 >= 0 )
          v12 = 0;
        else
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x1FB,
            (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
            (const char *)(unsigned int)v17);
        v18 = v24[0];
        EnableIAMAccess(v24[0][4].Ptr, 0LL);
        ReleaseSRWLockExclusive(v18 + 5);
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v18);
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x1F4,
          (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
          (const char *)(unsigned int)v16);
      }
      v19 = a5;
      if ( a5 )
      {
        a5 = 0LL;
        (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1F1,
        (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)v11);
    }
    v20 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
    }
  }
  else
  {
    v12 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EF,
      (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)0x80070490LL);
  }
  v21 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **)))(*v21)[2])(v21);
  }
  return v12;
}
