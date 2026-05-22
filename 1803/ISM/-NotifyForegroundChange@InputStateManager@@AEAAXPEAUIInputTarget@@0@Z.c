/*
 * XREFs of ?NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z @ 0x180007014
 * Callers:
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180006D40 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x1800190B8 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetServerWindowForViewId@ViewHelper@@SAJPEAUIViewHierarchy@@KPEAPEAUIServerWindow@Server@Navigation@@@Z @ 0x1800192C4 (-GetServerWindowForViewId@ViewHelper@@SAJPEAUIViewHierarchy@@KPEAPEAUIServerWindow@Server@Naviga.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall InputStateManager::NotifyForegroundChange(
        InputStateManager *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  struct IInputTarget *v4; // r9
  __int64 v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  struct IViewHierarchy *ViewHierarchy; // rax
  int ServerWindowForViewId; // eax
  struct Navigation::Server::IServerWindow *v11; // rbx
  int v12; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+28h] [rbp-28h] BYREF
  struct Navigation::Server::IServerWindow *v14; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v17; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v18; // [rsp+98h] [rbp+48h] BYREF

  v15[1] = -2LL;
  v4 = a2;
  v18 = 0;
  v17 = 0;
  v6 = 0LL;
  *((_DWORD *)this + 2077) = -1;
  if ( a2 )
  {
    v16 = 0LL;
    if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
           a2,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v16) < 0 )
    {
      v7 = v16;
      goto LABEL_4;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v16 + 32LL))(v16, &v18);
    v7 = v16;
    if ( v8 < 0 )
    {
LABEL_4:
      if ( v7 )
      {
        v16 = 0LL;
LABEL_23:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        goto LABEL_24;
      }
      goto LABEL_24;
    }
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  if ( !a3 )
    goto LABEL_24;
  LODWORD(v16) = 0;
  v13 = 0LL;
  if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *, struct IInputTarget *))a3)(
         a3,
         &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
         &v13,
         v4) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 32LL))(v13, &v17) >= 0
    && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 48LL))(v13, &v16) >= 0
    && (_DWORD)v16 )
  {
    v14 = 0LL;
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    ServerWindowForViewId = ViewHelper::GetServerWindowForViewId(ViewHierarchy, v16, &v14);
    v11 = v14;
    if ( ServerWindowForViewId >= 0 )
    {
      if ( (*(int (__fastcall **)(struct Navigation::Server::IServerWindow *, _QWORD *))(*(_QWORD *)v14 + 96LL))(
             v14,
             v15) < 0
        || (v6 = v15[0],
            (*(int (__fastcall **)(struct Navigation::Server::IServerWindow *, int *))(*(_QWORD *)v11 + 120LL))(
              v11,
              &v12) < 0) )
      {
LABEL_20:
        (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v11 + 16LL))(v11);
        goto LABEL_21;
      }
      *((_DWORD *)this + 2077) = v12;
    }
    if ( !v11 )
      goto LABEL_21;
    goto LABEL_20;
  }
LABEL_21:
  v7 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    goto LABEL_23;
  }
LABEL_24:
  CompositorNotifyForegroundChanged(v18, v17, v6);
}
