/*
 * XREFs of ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x1802CAB60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x18001F2C0 (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1802840BC (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x180284148 (-IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18028C50C (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ??1?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18028C5A0 (--1-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18028C828 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?CloakWindow@TabletModePositioner@@AEAAJPEAUHWND__@@@Z @ 0x1802C502C (-CloakWindow@TabletModePositioner@@AEAAJPEAUHWND__@@@Z.c)
 *     ?StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__@@I@Z @ 0x1802CBAC4 (-StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__.c)
 *     ?Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z @ 0x1802CC1EC (-Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z.c)
 */

void __fastcall TabletModePositioner::ShowWindowAttempted(
        TabletModePositioner *this,
        TabletModePositionerHelpers *a2,
        unsigned int a3,
        unsigned int *a4)
{
  TabletModePositioner *v4; // r12
  unsigned int v9; // edi
  __int64 v10; // rbx
  struct IApplicationView *v11; // rbx
  char v12; // bl
  HWND Window; // r14
  __int64 v14; // rbx
  __int64 (__fastcall ***v15)(CWin32ApplicationView *, struct _GUID *, void **); // rdx
  HWND v16; // [rsp+28h] [rbp-D8h] BYREF
  CWinRTApplicationView *v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v19[40]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = (TabletModePositioner *)((char *)this - 160);
  if ( TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 160)) )
  {
    v9 = 2;
    if ( *((_DWORD *)this + 18) != 2 )
    {
      v18 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 23))(
        *((_QWORD *)this + 23),
        &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
        &v18);
      v16 = 0LL;
      v10 = v18;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v16);
      (*(void (__fastcall **)(__int64, TabletModePositionerHelpers *, HWND *))(*(_QWORD *)v10 + 48LL))(v10, a2, &v16);
      v11 = (struct IApplicationView *)v16;
      wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v19,
        (__int64)"ShowWindowAttempted");
      v19[0] = &TabletModeTraceLogging::ShowWindowAttempted::`vftable';
      TabletModeTraceLogging::ShowWindowAttempted::StartActivity(
        (TabletModeTraceLogging::ShowWindowAttempted *)v19,
        v11,
        (HWND)a2,
        a3);
      if ( !v16 )
      {
        if ( TabletModePositionerHelpers::IsOperableWindow(a2, 0LL) )
        {
          v12 = 1;
          if ( (GetWindowLongPtrW((HWND)a2, -20) & 0x40000) != 0 && (Window = GetWindow((HWND)a2, 4u)) != 0LL )
          {
            while ( 1 )
            {
              v17 = 0LL;
              v14 = *((_QWORD *)this + 22);
              Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
              if ( (*(int (__fastcall **)(__int64, HWND, CWinRTApplicationView **))(*(_QWORD *)v14 + 48LL))(
                     v14,
                     Window,
                     &v17) >= 0 )
              {
                if ( (*(unsigned int (__fastcall **)(_QWORD, CWinRTApplicationView *))(**((_QWORD **)this + 11) + 184LL))(
                       *((_QWORD *)this + 11),
                       v17) )
                {
                  break;
                }
              }
              Window = GetWindow(Window, 4u);
              Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
              if ( !Window )
              {
                v12 = 0;
                goto LABEL_11;
              }
            }
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
            v12 = 0;
          }
          else
          {
LABEL_11:
            TabletModePositioner::CloakWindow(v4, (HWND)a2);
          }
          if ( !v12 || !TabletModePositioner::IsTabletMode(v4) )
            v9 = 0;
LABEL_22:
          *a4 = v9;
          goto LABEL_24;
        }
        if ( !v16 )
        {
          v9 = *a4;
LABEL_24:
          TabletModeTraceLogging::ShowWindowAttempted::Stop((TabletModeTraceLogging::ShowWindowAttempted *)v19, v9);
          v19[0] = &TabletModeTraceLogging::ShowWindowAttempted::`vftable';
          wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v19);
          wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v19);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v16);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
          return;
        }
      }
      if ( !TabletModePositioner::IsTabletMode(v4)
        || !TabletModePositionerHelpers::IsOperableView(v15, (struct IApplicationView *)v15) )
      {
        *a4 = 0;
        v9 = 0;
        goto LABEL_24;
      }
      if ( (*(unsigned int (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 11) + 184LL))(
             *((_QWORD *)this + 11),
             v16) )
      {
        v9 = IsWindowVisible((HWND)a2);
      }
      goto LABEL_22;
    }
  }
}
