/*
 * XREFs of ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18001B510
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x1800A91E0 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z @ 0x1800A98D8 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCInputTarget@@@Z @ 0x1800AA68C (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCInputTarget@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x180030C4C (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetServerWindowForViewId@ViewHelper@@SAJPEAUIViewHierarchy@@KPEAPEAUIServerWindow@Server@Navigation@@@Z @ 0x180035210 (-GetServerWindowForViewId@ViewHelper@@SAJPEAUIViewHierarchy@@KPEAPEAUIServerWindow@Server@Naviga.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DWMInputRouter::UpdateFocusedInputTarget(DWMInputRouter *this, struct IInputTarget *a2)
{
  struct Navigation::Server::IServerWindow *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct IViewHierarchy *ViewHierarchy; // rax
  int ServerWindowForViewId; // eax
  struct Navigation::Server::IServerWindow *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // esi
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v26; // [rsp+38h] [rbp-69h] BYREF
  __int64 v27; // [rsp+40h] [rbp-61h] BYREF
  __int64 v28; // [rsp+48h] [rbp-59h] BYREF
  __int64 v29; // [rsp+50h] [rbp-51h] BYREF
  int v30; // [rsp+58h] [rbp-49h] BYREF
  struct Navigation::Server::IServerWindow *v31[3]; // [rsp+60h] [rbp-41h] BYREF
  _BYTE v32[40]; // [rsp+78h] [rbp-29h] BYREF
  _BYTE v33[40]; // [rsp+A0h] [rbp-1h] BYREF

  v31[1] = (struct Navigation::Server::IServerWindow *)-2LL;
  v4 = (struct Navigation::Server::IServerWindow *)*((_QWORD *)this + 30);
  v31[2] = v4;
  if ( v4 )
    (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v4 + 8LL))(v4);
  if ( *((struct IInputTarget **)this + 30) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *((_QWORD *)this + 30);
    *((_QWORD *)this + 30) = a2;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (gdwMitConfig & 1) != 0 && ((1LL << gdwDeviceFamily) & 0x5DB5) != 0 )
  {
    v6 = 0LL;
    memset(v32, 0, sizeof(v32));
    v7 = 0LL;
    if ( a2 )
    {
      v27 = 0LL;
      if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
             a2,
             &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
             &v27) >= 0 )
      {
        v28 = 0LL;
        if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
               a2,
               &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
               &v28) < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, 1867, 5);
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        v26 = 0;
        if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v28 + 48LL))(v28, &v26) < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 0, 1870, 5);
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        if ( v26 )
        {
          v31[0] = 0LL;
          ViewHierarchy = ISMStatics::GetViewHierarchy();
          ServerWindowForViewId = ViewHelper::GetServerWindowForViewId(ViewHierarchy, v26, v31);
          v12 = v31[0];
          if ( ServerWindowForViewId >= 0 )
          {
            if ( (*(int (__fastcall **)(struct Navigation::Server::IServerWindow *, int *))(*(_QWORD *)v31[0] + 24LL))(
                   v31[0],
                   &v30) < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, 1891, 5);
              if ( IsDebuggerPresent() )
                __debugbreak();
              __fastfail(7u);
            }
            v6 = v30;
            v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v27 + 96LL))(v27, v33);
            *(_OWORD *)v32 = *(_OWORD *)v14;
            *(_OWORD *)&v32[16] = *(_OWORD *)(v14 + 16);
            *(_QWORD *)&v32[32] = *(_QWORD *)(v14 + 32);
            v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 72LL))(v27);
          }
          if ( v12 )
            (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v12 + 16LL))(v12);
        }
        v15 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
      v16 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
    MITSetForegroundRoutingInfo(v6, v32, v7);
  }
  v17 = *((_QWORD *)this + 31);
  if ( v17
    && (v18 = (*(__int64 (__fastcall **)(__int64, struct Navigation::Server::IServerWindow *, struct IInputTarget *))(*(_QWORD *)v17 + 24LL))(
                v17,
                v4,
                a2),
        v20 = v18,
        v18 < 0) )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v19, &MinInput_Warning_CheckResult, 0, 1911, v18);
  }
  else
  {
    v29 = 0LL;
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 55))(
           *((_QWORD *)this + 55),
           &GUID_18f2e21a_ceea_4596_9fd8_326464016a35,
           &v29) < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v21, &MinInput_Warning_CheckResult, 0, 1915, 5);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v22 = (*(__int64 (__fastcall **)(__int64, struct Navigation::Server::IServerWindow *, struct IInputTarget *))(*(_QWORD *)v29 + 24LL))(
            v29,
            v4,
            a2);
    v20 = v22;
    if ( v22 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v23, &MinInput_Warning_CheckResult, 0, 1918, v22);
    v24 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
  }
  if ( v4 )
    (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v4 + 16LL))(v4);
  return v20;
}
