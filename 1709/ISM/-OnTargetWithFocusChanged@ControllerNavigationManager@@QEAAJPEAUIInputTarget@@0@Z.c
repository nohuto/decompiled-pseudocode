/*
 * XREFs of ?OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z @ 0x18003C650
 * Callers:
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180006DE0 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetDeferralForProcessId@NavigationEnableDeferrals@@QEAA?AUDeferral@1@K@Z @ 0x18003BCEC (-GetDeferralForProcessId@NavigationEnableDeferrals@@QEAA-AUDeferral@1@K@Z.c)
 *     ?NavigationEnable@ControllerNavigationManager@@UEAAJUtagMsgRoutingInfo@@IUControllerNavigationRect@@UControllerNavigationPoint@@@Z @ 0x18003C8A0 (-NavigationEnable@ControllerNavigationManager@@UEAAJUtagMsgRoutingInfo@@IUControllerNavigationRe.c)
 *     ?NavigationDisable@ControllerNavigationManager@@UEAAJXZ @ 0x18003CB50 (-NavigationDisable@ControllerNavigationManager@@UEAAJXZ.c)
 *     ?SetControllerVirtualKeyMappingFor@ControllerProcessor@@SAJW4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x18003E134 (-SetControllerVirtualKeyMappingFor@ControllerProcessor@@SAJW4GamepadButtons@Input@Gaming@Windows.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerNavigationManager::OnTargetWithFocusChanged(
        ControllerNavigationManager *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  ControllerNavigationManager *v3; // rdi
  unsigned int v4; // ebx
  int *v5; // rsi
  char v6; // r14
  int v7; // eax
  __int64 v8; // rcx
  int v9; // r9d
  char v10; // al
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  char v14; // r14
  int v15; // eax
  __int64 v16; // rcx
  __int128 v18; // [rsp+48h] [rbp-49h] BYREF
  _OWORD v19[2]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v20; // [rsp+78h] [rbp-19h]
  unsigned int v21; // [rsp+80h] [rbp-11h]
  __int128 v22; // [rsp+84h] [rbp-Dh]
  __int64 v23; // [rsp+94h] [rbp+3h]
  _OWORD v24[2]; // [rsp+A8h] [rbp+17h] BYREF
  __int64 v25; // [rsp+C8h] [rbp+37h]
  ControllerNavigationManager *v26; // [rsp+F8h] [rbp+67h] BYREF
  int v27; // [rsp+100h] [rbp+6Fh] BYREF
  int v28; // [rsp+104h] [rbp+73h]

  v28 = HIDWORD(a2);
  v3 = this;
  v4 = 0;
  v5 = (int *)((char *)this + 152);
  *((_DWORD *)this + 38) = 0;
  v27 = 0;
  v6 = *((_BYTE *)this + 156);
  if ( a3 )
  {
    v26 = 0LL;
    if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, ControllerNavigationManager **))a3)(
           a3,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v26) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(ControllerNavigationManager *, int *))(*(_QWORD *)v26 + 32LL))(v26, v5);
      if ( v7 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_7;
        v9 = 285;
        goto LABEL_6;
      }
      v7 = (*(__int64 (__fastcall **)(ControllerNavigationManager *, int *))(*(_QWORD *)v26 + 48LL))(v26, &v27);
      v4 = v7;
      if ( v7 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        {
LABEL_7:
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        v9 = 287;
LABEL_6:
        McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, v9, v7);
        goto LABEL_7;
      }
      *((_BYTE *)v3 + 156) = v27 != 0;
    }
    this = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(ControllerNavigationManager *))(*(_QWORD *)this + 16LL))(this);
    }
  }
  v10 = *((_BYTE *)v3 + 156);
  if ( v10 != v6 )
  {
    v11 = 196LL;
    if ( !v10 )
      v11 = 27LL;
    v12 = ControllerProcessor::SetControllerVirtualKeyMappingFor(this, v11);
    v4 = v12;
    if ( v12 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, 295, v12);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
  v14 = 1;
  if ( *v5 )
  {
    NavigationEnableDeferrals::GetDeferralForProcessId((__int64)v3 + 160, v19, *v5);
    if ( LODWORD(v19[0]) == *v5 )
    {
      v18 = v22;
      v24[0] = v19[0];
      v24[1] = v19[1];
      v25 = v20;
      ControllerNavigationManager::NavigationEnable((char *)v3 + 16, v24, v21, &v18, v23);
      v14 = 0;
    }
  }
  if ( *((_BYTE *)v3 + 88) )
  {
    if ( v14 )
    {
      v15 = ControllerNavigationManager::NavigationDisable((ControllerNavigationManager *)((char *)v3 + 16));
      v4 = v15;
      if ( v15 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v16, &MinInput_Warning_CheckResult, 0, 323, v15);
    }
  }
  return v4;
}
