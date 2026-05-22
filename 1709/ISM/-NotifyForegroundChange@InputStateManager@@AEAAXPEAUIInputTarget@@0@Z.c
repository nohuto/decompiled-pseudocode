/*
 * XREFs of ?NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z @ 0x180006F94
 * Callers:
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180006DE0 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x180030C4C (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetServerWindowForViewId@ViewHelper@@SAJPEAUIViewHierarchy@@KPEAPEAUIServerWindow@Server@Navigation@@@Z @ 0x180035210 (-GetServerWindowForViewId@ViewHelper@@SAJPEAUIViewHierarchy@@KPEAPEAUIServerWindow@Server@Naviga.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall InputStateManager::NotifyForegroundChange(
        InputStateManager *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  struct IInputTarget *v4; // r9
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // r9d
  struct IViewHierarchy *ViewHierarchy; // rax
  int ServerWindowForViewId; // eax
  struct Navigation::Server::IServerWindow *v17; // rbx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // r9d
  int v21; // [rsp+30h] [rbp-30h] BYREF
  __int64 v22; // [rsp+38h] [rbp-28h] BYREF
  struct Navigation::Server::IServerWindow *v23; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v24[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v25; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v26; // [rsp+98h] [rbp+38h] BYREF
  unsigned int v27; // [rsp+A8h] [rbp+48h] BYREF

  v24[1] = -2LL;
  v4 = a2;
  v27 = 0;
  v26 = 0;
  v6 = 0LL;
  *((_DWORD *)this + 2077) = -1;
  if ( a2 )
  {
    v25 = 0LL;
    v7 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
           a2,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v25);
    if ( v7 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_6;
      v9 = 594;
      goto LABEL_5;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v25 + 32LL))(v25, &v27);
    if ( v7 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_6:
        v10 = v25;
        if ( v25 )
        {
          v25 = 0LL;
LABEL_39:
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          goto LABEL_40;
        }
        goto LABEL_40;
      }
      v9 = 595;
LABEL_5:
      McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 1, v9, v7);
      goto LABEL_6;
    }
    v11 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  if ( !a3 )
    goto LABEL_40;
  LODWORD(v25) = 0;
  v22 = 0LL;
  v12 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *, struct IInputTarget *))a3)(
          a3,
          &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
          &v22,
          v4);
  if ( v12 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_37;
    v14 = 607;
    goto LABEL_17;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 32LL))(v22, &v26);
  if ( v12 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v14 = 609;
LABEL_17:
      McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 1, v14, v12);
      goto LABEL_37;
    }
    goto LABEL_37;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 48LL))(v22, &v25);
  if ( v12 >= 0 )
  {
    if ( !(_DWORD)v25 )
      goto LABEL_37;
    v23 = 0LL;
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    ServerWindowForViewId = ViewHelper::GetServerWindowForViewId(ViewHierarchy, v25, &v23);
    v17 = v23;
    if ( ServerWindowForViewId >= 0 )
    {
      v18 = (*(__int64 (__fastcall **)(struct Navigation::Server::IServerWindow *, _QWORD *))(*(_QWORD *)v23 + 96LL))(
              v23,
              v24);
      if ( v18 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        {
LABEL_36:
          (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v17 + 16LL))(v17);
          goto LABEL_37;
        }
        v20 = 631;
LABEL_29:
        McTemplateU0qqq(v19, &MinInput_Warning_CheckResult, 1, v20, v18);
        goto LABEL_36;
      }
      v6 = v24[0];
      v18 = (*(__int64 (__fastcall **)(struct Navigation::Server::IServerWindow *, int *))(*(_QWORD *)v17 + 120LL))(
              v17,
              &v21);
      if ( v18 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_36;
        v20 = 635;
        goto LABEL_29;
      }
      *((_DWORD *)this + 2077) = v21;
    }
    if ( !v17 )
      goto LABEL_37;
    goto LABEL_36;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v14 = 610;
    goto LABEL_17;
  }
LABEL_37:
  v10 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    goto LABEL_39;
  }
LABEL_40:
  CompositorNotifyForegroundChanged(v27, v26, v6);
}
