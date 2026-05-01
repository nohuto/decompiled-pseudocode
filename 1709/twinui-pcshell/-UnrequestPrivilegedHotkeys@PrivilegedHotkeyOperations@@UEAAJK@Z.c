/*
 * XREFs of ?UnrequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJK@Z @ 0x1800F31A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PrivilegedHotkeyOperations::UnrequestPrivilegedHotkeys(
        PrivilegedHotkeyOperations *this,
        unsigned int a2)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 *v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD **); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v16; // [rsp+60h] [rbp+20h] BYREF
  _QWORD *v17; // [rsp+70h] [rbp+30h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, _QWORD **); // [rsp+78h] [rbp+38h] BYREF

  v18 = 0LL;
  v3 = *((_QWORD *)this + 8);
  if ( !v3
    || ((*(void (__fastcall **)(__int64, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD **)))(*(_QWORD *)v3 + 24LL))(
          v3,
          &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
          &v18),
        !v18) )
  {
    v5 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EC,
      (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)0x80070490LL);
    goto LABEL_16;
  }
  v17 = 0LL;
  v4 = (**v18)(v18, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &v17);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v16 = 0LL;
    v6 = v17;
    v7 = *v17;
    v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v16);
    v9 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, GUID *, __int64 *))(v7 + 24))(
           v6,
           &IID_IImmersiveWindowMessageService,
           &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
           v8);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 64LL))(v16, a2);
      v5 = v9;
      if ( v9 >= 0 )
      {
        v5 = 0;
LABEL_11:
        v11 = v16;
        if ( v16 )
        {
          v16 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        goto LABEL_13;
      }
      v10 = 500LL;
    }
    else
    {
      v10 = 497LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x1EE,
    (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
    (const char *)(unsigned int)v4);
LABEL_13:
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
  }
LABEL_16:
  v13 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **)))(*v13)[2])(v13);
  }
  return v5;
}
