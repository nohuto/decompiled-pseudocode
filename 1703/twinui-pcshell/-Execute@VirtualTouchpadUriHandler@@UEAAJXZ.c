/*
 * XREFs of ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x180146FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CMarshaledInterface@@QEAA@XZ @ 0x1800056F0 (--0CMarshaledInterface@@QEAA@XZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$unique_ptr@EU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180077120 (--1-$unique_ptr@EU-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ.c)
 *     ?close_reset@?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@SAXPEAG@Z @ 0x180077138 (-close_reset@-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constant@_K$0A@.c)
 *     ?GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z @ 0x180147434 (-GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?GetLaunchLocationForMonitor@VirtualTouchpadUriHandler@@CAJPEAUHMONITOR__@@PEAUtagPOINT@@@Z @ 0x1801475AC (-GetLaunchLocationForMonitor@VirtualTouchpadUriHandler@@CAJPEAUHMONITOR__@@PEAUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     swscanf_s @ 0x180194F3C (swscanf_s.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualTouchpadUriHandler::Execute(VirtualTouchpadUriHandler *this)
{
  __int64 v1; // rcx
  int v2; // ebx
  HMONITOR v3; // rcx
  __int64 v4; // rbx
  int v5; // eax
  __int64 *ppv; // rax
  HRESULT Instance; // eax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 *v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  HSTRING_HEADER *v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  HMONITOR v18; // rcx
  HMONITOR v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  unsigned int v24; // edi
  int LaunchLocationForMonitor; // eax
  __int64 (__fastcall *v26)(__int64, _QWORD, const WCHAR **); // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  HMONITOR v30; // [rsp+38h] [rbp-29h] BYREF
  _QWORD *v31; // [rsp+40h] [rbp-21h] BYREF
  __int64 v32; // [rsp+48h] [rbp-19h] BYREF
  wchar_t *Buffer; // [rsp+50h] [rbp-11h] BYREF
  struct tagPOINT v34; // [rsp+58h] [rbp-9h] BYREF
  __int64 v35; // [rsp+60h] [rbp-1h] BYREF
  __int64 v36; // [rsp+68h] [rbp+7h] BYREF
  const WCHAR *v37; // [rsp+78h] [rbp+17h] BYREF
  float x; // [rsp+80h] [rbp+1Fh]
  float y; // [rsp+84h] [rbp+23h]
  HSTRING_HEADER v40; // [rsp+88h] [rbp+27h] BYREF
  __int64 v41; // [rsp+A0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v1 = *((_QWORD *)this + 13);
  v36 = 0LL;
  v2 = -2147024809;
  if ( v1 )
  {
    v30 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, HMONITOR *))(*(_QWORD *)v1 + 64LL))(v1, 0LL, &v30);
    if ( v2 >= 0 )
      v2 = (**(__int64 (__fastcall ***)(HMONITOR, GUID *, __int64 *))v30)(
             v30,
             &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93,
             &v36);
    v3 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(HMONITOR))(*(_QWORD *)v3 + 16LL))(v3);
    }
    if ( v2 >= 0 )
    {
      CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)&Buffer);
      v4 = v36;
      if ( Buffer )
        wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>::close_reset(Buffer);
      Buffer = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64, __int64, wchar_t **))(*(_QWORD *)v4 + 40LL))(v4, 2147909632LL, &Buffer);
      v2 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x1F,
          (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
          (const char *)(unsigned int)v5);
LABEL_48:
        wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&Buffer);
        goto LABEL_50;
      }
      if ( (unsigned int)_o__wcsnicmp(Buffer, L"ms-virtualtouchpad", 18LL) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x20,
          (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
          (const char *)0x80070057LL);
        v2 = -2147024809;
        goto LABEL_48;
      }
      v35 = 0LL;
      v37 = L"Windows.Internal.ShellExperience.VirtualTouchpad";
      v31 = 0LL;
      ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v31);
      Instance = CoCreateInstance(
                   &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
                   0LL,
                   0x404u,
                   &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
                   (LPVOID *)ppv);
      v2 = Instance;
      if ( Instance >= 0 )
      {
        v9 = v31;
        v32 = 0LL;
        v10 = *v31;
        v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v32);
        v12 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, GUID *, __int64 *))(v10 + 24))(
                v9,
                &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
                &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
                v11);
        v2 = v12;
        if ( v12 >= 0 )
        {
          v14 = v32;
          v30 = 0LL;
          v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v40, &v37);
          v16 = (*(__int64 (__fastcall **)(__int64, PVOID, HMONITOR *))(*(_QWORD *)v14 + 48LL))(
                  v14,
                  v15[1].Reserved.Reserved1,
                  &v30);
          v41 = 0LL;
          v2 = v16;
          if ( v16 >= 0 )
          {
            v16 = (**(__int64 (__fastcall ***)(HMONITOR, GUID *, __int64 *))v30)(
                    v30,
                    &GUID_17c4ec91_62df_486d_aa0d_6a11c725e414,
                    &v35);
            v2 = v16;
            if ( v16 >= 0 )
            {
              v19 = v30;
              if ( v30 )
              {
                v30 = 0LL;
                (*(void (__fastcall **)(HMONITOR))(*(_QWORD *)v19 + 16LL))(v19);
              }
              v20 = v32;
              if ( v32 )
              {
                v32 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
              }
              v21 = (__int64)v31;
              if ( v31 )
              {
                v31 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
              }
              v2 = 0;
LABEL_34:
              if ( v2 < 0 )
              {
                v22 = (unsigned int)v2;
                v23 = 35LL;
LABEL_44:
                wil::details::in1diag3::Return_Hr_NoOriginate(
                  retaddr,
                  (void *)v23,
                  (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
                  (const char *)v22);
                goto LABEL_46;
              }
              v24 = 0;
              if ( swscanf_s(Buffer, L"ms-virtualtouchpad:?x=%d&y=%d", &v34, &v34.y) != 2 )
              {
                v30 = 0LL;
                v24 = 1;
                if ( VirtualTouchpadUriHandler::GetPrimaryTouchEnabledMonitorIfAny(&v30) < 0 || !v30 )
                  goto LABEL_45;
                LaunchLocationForMonitor = VirtualTouchpadUriHandler::GetLaunchLocationForMonitor(v30, &v34);
                v2 = LaunchLocationForMonitor;
                if ( LaunchLocationForMonitor < 0 )
                {
                  v23 = 47LL;
LABEL_43:
                  v22 = (unsigned int)LaunchLocationForMonitor;
                  goto LABEL_44;
                }
              }
              v26 = *(__int64 (__fastcall **)(__int64, _QWORD, const WCHAR **))(*(_QWORD *)v35 + 48LL);
              *((float *)&v37 + 1) = (float)v34.y;
              *(float *)&v37 = (float)v34.x;
              x = (float)v34.x;
              y = (float)v34.y;
              LaunchLocationForMonitor = v26(v35, v24, &v37);
              v2 = LaunchLocationForMonitor;
              if ( LaunchLocationForMonitor < 0 )
              {
                v23 = 50LL;
                goto LABEL_43;
              }
LABEL_45:
              v2 = 0;
LABEL_46:
              v27 = v35;
              if ( v35 )
              {
                v35 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
              }
              goto LABEL_48;
            }
            v17 = 100LL;
          }
          else
          {
            v17 = 99LL;
          }
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v17,
            (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
            (const char *)(unsigned int)v16);
          v18 = v30;
          if ( v30 )
          {
            v30 = 0LL;
            (*(void (__fastcall **)(HMONITOR))(*(_QWORD *)v18 + 16LL))(v18);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x60,
            (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
            (const char *)(unsigned int)v12);
        }
        v13 = v32;
        if ( v32 )
        {
          v32 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x5D,
          (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
          (const char *)(unsigned int)Instance);
      }
      v8 = (__int64)v31;
      if ( v31 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      goto LABEL_34;
    }
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x1C,
    (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
    (const char *)(unsigned int)v2);
LABEL_50:
  v28 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  return (unsigned int)v2;
}
