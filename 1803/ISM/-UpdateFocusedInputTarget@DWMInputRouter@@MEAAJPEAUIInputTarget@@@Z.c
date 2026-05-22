/*
 * XREFs of ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x1800802D0
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180084FD0 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z @ 0x1800857B8 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCInputTarget@@@Z @ 0x180086834 (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCInputTarget@@@Z.c)
 * Callees:
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x1800190B8 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetServerWindowForViewId@ViewHelper@@SAJPEAUIViewHierarchy@@KPEAPEAUIServerWindow@Server@Navigation@@@Z @ 0x1800192C4 (-GetServerWindowForViewId@ViewHelper@@SAJPEAUIViewHierarchy@@KPEAPEAUIServerWindow@Server@Naviga.c)
 *     ?OnTargetWithFocusChanged@InputDeliveryServer@@QEAAXPEAUIInputTarget@@@Z @ 0x1800239AC (-OnTargetWithFocusChanged@InputDeliveryServer@@QEAAXPEAUIInputTarget@@@Z.c)
 *     ?OnFocusChanged@InputRouter@InputETW@@SAXPEAUIInputTarget@@@Z @ 0x18007B118 (-OnFocusChanged@InputRouter@InputETW@@SAXPEAUIInputTarget@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DWMInputRouter::UpdateFocusedInputTarget(DWMInputRouter *this, struct IInputTarget *a2)
{
  int ServerWindowForViewId; // esi
  struct Navigation::Server::IServerWindow *v5; // rbx
  struct IInputTarget *v6; // rcx
  char v7; // cl
  __int64 v8; // r13
  struct IViewHierarchy *ViewHierarchy; // rax
  struct Navigation::Server::IServerWindow *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v17; // [rsp+28h] [rbp-69h] BYREF
  __int64 v18; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-59h] BYREF
  __int64 v20; // [rsp+40h] [rbp-51h] BYREF
  struct Navigation::Server::IServerWindow *v21[3]; // [rsp+48h] [rbp-49h] BYREF
  _OWORD v22[2]; // [rsp+60h] [rbp-31h] BYREF
  __int64 v23; // [rsp+80h] [rbp-11h]
  _BYTE v24[40]; // [rsp+88h] [rbp-9h] BYREF

  v21[1] = (struct Navigation::Server::IServerWindow *)-2LL;
  ServerWindowForViewId = 0;
  v5 = (struct Navigation::Server::IServerWindow *)*((_QWORD *)this + 34);
  v21[2] = v5;
  if ( v5 )
    (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = (struct IInputTarget *)*((_QWORD *)this + 34);
  if ( v6 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
      v6 = (struct IInputTarget *)*((_QWORD *)this + 34);
    }
    *((_QWORD *)this + 34) = a2;
    if ( v6 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = gdwDeviceFamily;
  if ( ((1LL << gdwDeviceFamily) & 0xDDB5) != 0 )
  {
    v8 = 0LL;
    memset_0(v22, 0, 0x28uLL);
    if ( a2 )
    {
      v20 = 0LL;
      ServerWindowForViewId = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
                                a2,
                                &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
                                &v20);
      if ( ServerWindowForViewId >= 0 )
      {
        v18 = 0LL;
        if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
               a2,
               &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
               &v18) < 0 )
        {
          if ( IsDebuggerPresent() )
            __debugbreak();
          RaiseFailFastException(0LL, 0LL, 0);
        }
        v17 = 0;
        if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 48LL))(v18, &v17) < 0 )
        {
          if ( IsDebuggerPresent() )
            __debugbreak();
          RaiseFailFastException(0LL, 0LL, 0);
        }
        if ( v17 )
        {
          v21[0] = 0LL;
          ViewHierarchy = ISMStatics::GetViewHierarchy();
          ServerWindowForViewId = ViewHelper::GetServerWindowForViewId(ViewHierarchy, v17, v21);
          v10 = v21[0];
          if ( ServerWindowForViewId >= 0 )
          {
            if ( (*(int (__fastcall **)(struct Navigation::Server::IServerWindow *, unsigned int *))(*(_QWORD *)v21[0] + 24LL))(
                   v21[0],
                   &v19) < 0 )
            {
              if ( IsDebuggerPresent() )
                __debugbreak();
              RaiseFailFastException(0LL, 0LL, 0);
            }
            v8 = (int)v19;
            v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v20 + 72LL))(v20, v24);
            v22[0] = *(_OWORD *)v11;
            v22[1] = *(_OWORD *)(v11 + 16);
            v23 = *(_QWORD *)(v11 + 32);
          }
          else
          {
            ServerWindowForViewId = 0;
          }
          if ( v10 )
            (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v10 + 16LL))(v10);
        }
        v12 = v18;
        if ( v18 )
        {
          v18 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
      else
      {
        ServerWindowForViewId = 0;
      }
      v13 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
    MITSetForegroundRoutingInfo(v8, v22);
    v7 = gdwDeviceFamily;
  }
  if ( ((1LL << v7) & 0xA) != 0 )
  {
    v19 = 0;
    v17 = 0;
    if ( a2 )
    {
      v18 = 0LL;
      if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
             a2,
             &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
             &v18) < 0 )
      {
        if ( IsDebuggerPresent() )
          __debugbreak();
        RaiseFailFastException(0LL, 0LL, 0);
      }
      if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 72LL))(v18, &v19) < 0 )
      {
        if ( IsDebuggerPresent() )
          __debugbreak();
        RaiseFailFastException(0LL, 0LL, 0);
      }
      if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 80LL))(v18, &v17) < 0 )
      {
        if ( IsDebuggerPresent() )
          __debugbreak();
        RaiseFailFastException(0LL, 0LL, 0);
      }
      v14 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
    MITSetInputDelegationMode(v19, v17);
  }
  InputETW::InputRouter::OnFocusChanged(a2);
  v15 = *((_QWORD *)this + 35);
  if ( !v15
    || (ServerWindowForViewId = (*(__int64 (__fastcall **)(__int64, struct Navigation::Server::IServerWindow *, struct IInputTarget *))(*(_QWORD *)v15 + 24LL))(
                                  v15,
                                  v5,
                                  a2),
        ServerWindowForViewId >= 0) )
  {
    InputDeliveryServer::OnTargetWithFocusChanged(*((InputDeliveryServer **)this + 43), a2);
  }
  if ( v5 )
    (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)ServerWindowForViewId;
}
