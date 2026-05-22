/*
 * XREFs of ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180006DE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z @ 0x180006F94 (-NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z.c)
 *     ?GetInstance@ControllerNavigationManager@@SAPEAV1@XZ @ 0x18003BFD0 (-GetInstance@ControllerNavigationManager@@SAPEAV1@XZ.c)
 *     ?OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z @ 0x18003C650 (-OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputStateManager::OnTargetWithFocusChanged(
        InputStateManager *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  char *v6; // rdx
  __int64 v7; // rdi
  int v8; // r9d
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // r9
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  ControllerNavigationManager *Instance; // rax
  struct IInputTarget *v19; // rdx
  int v20; // eax
  __int64 v21; // rcx
  _QWORD v23[258]; // [rsp+30h] [rbp-D0h] BYREF

  v23[1] = -2LL;
  v6 = (char *)this + 56;
  v7 = 0LL;
  v8 = *((_DWORD *)this + 1038);
  v9 = 256LL;
  do
  {
    if ( *(_DWORD *)v6 != v8 )
    {
      v23[v7 + 2] = *((_QWORD *)v6 + 1);
      v7 = (unsigned int)(v7 + 1);
    }
    v6 += 16;
    --v9;
  }
  while ( v9 );
  LODWORD(v23[0]) = v7;
  v10 = 0LL;
  if ( !(_DWORD)v7 )
  {
LABEL_18:
    Instance = ControllerNavigationManager::GetInstance();
    v20 = ControllerNavigationManager::OnTargetWithFocusChanged(Instance, v19, a3);
    v16 = v20;
    if ( v20 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v21, &MinInput_Warning_CheckResult, 1, 453, v20);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    InputStateManager::NotifyForegroundChange((InputStateManager *)((char *)this - 16), a2, a3);
    return v16;
  }
  while ( 1 )
  {
    v11 = 0LL;
    v23[0] = 0LL;
    v12 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v23[v10 + 2];
    if ( !v12 )
      goto LABEL_10;
    v13 = (**v12)(v23[v10 + 2], &GUID_18f2e21a_ceea_4596_9fd8_326464016a35, v23);
    v11 = v23[0];
    if ( v13 < 0 )
      goto LABEL_10;
    v14 = (*(__int64 (__fastcall **)(_QWORD, struct IInputTarget *, struct IInputTarget *))(*(_QWORD *)v23[0] + 24LL))(
            v23[0],
            a2,
            a3);
    v16 = v14;
    if ( v14 < 0 )
      break;
    v11 = v23[0];
LABEL_10:
    if ( v11 )
    {
      v23[0] = 0LL;
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 16LL))(v11, v6);
    }
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= (unsigned int)v7 )
      goto LABEL_18;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v15, &MinInput_Warning_CheckResult, 1, 444, v14);
  v17 = v23[0];
  if ( v23[0] )
  {
    v23[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v16;
}
