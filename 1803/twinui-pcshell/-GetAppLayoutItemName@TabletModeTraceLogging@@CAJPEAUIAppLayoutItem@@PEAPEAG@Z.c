/*
 * XREFs of ?GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z @ 0x1802C6788
 * Callers:
 *     ?GetAppLayoutItemData@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAUAppLayoutItemData@1@@Z @ 0x1802C6708 (-GetAppLayoutItemData@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAUAppLayoutItemData@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18001D2D4 (--1-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x1800F7BFC (-CopyTo@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z.c)
 *     ?GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1802C74C4 (-GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 */

__int64 __fastcall TabletModeTraceLogging::GetAppLayoutItemName(struct IAppLayoutItem *a1, unsigned __int16 **a2)
{
  int ViewName; // eax
  unsigned __int16 **v5; // r8
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rbx
  _WORD *v9; // rax
  _WORD *v10; // rcx
  char *v11; // rax
  __int64 v12; // rdx
  __int16 v13; // r8
  _WORD *v14; // rax
  int v15; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  int v19[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+28h] [rbp-20h]
  __int64 v21; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  ApplicationViewTraceLoggingHelpers *v23; // [rsp+50h] [rbp+8h] BYREF

  if ( (*(unsigned int (__fastcall **)(struct IAppLayoutItem *))(*(_QWORD *)a1 + 24LL))(a1) != 1 )
  {
    v8 = 7LL;
    *(_QWORD *)v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    if ( is_mul_ok(7uLL, 2uLL) )
    {
      v9 = CoTaskMemAlloc(0xEuLL);
      v10 = v9;
      if ( v9 )
      {
        *(_QWORD *)v19 = v9;
        *v9 = 0;
        v11 = (char *)((char *)L"Buffer" - (char *)v9);
        v21 = 7LL;
        do
        {
          v12 = v8 - 1;
          if ( v8 == 1 )
            break;
          v13 = *(_WORD *)((char *)v10 + (_QWORD)v11);
          if ( !v13 )
            break;
          *v10 = v13;
          --v8;
          ++v10;
        }
        while ( v12 );
        v14 = v10 - 1;
        v20 = 6LL;
        if ( v8 )
          v14 = v10;
        *v14 = 0;
        v15 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo(
                (__int64 *)v19,
                a2);
        v6 = v15;
        if ( v15 >= 0 )
        {
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)v19);
          return 0LL;
        }
        v16 = (unsigned int)v15;
        v17 = 493LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
          (const char *)v16);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)v19);
        return v6;
      }
      v6 = -2147024882;
    }
    else
    {
      v6 = -2147024362;
    }
    v16 = v6;
    v17 = 492LL;
    goto LABEL_23;
  }
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23);
  ViewName = (*(__int64 (__fastcall **)(struct IAppLayoutItem *, GUID *, ApplicationViewTraceLoggingHelpers **))(*(_QWORD *)a1 + 48LL))(
               a1,
               &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
               &v23);
  v6 = ViewName;
  if ( ViewName >= 0 )
  {
    ViewName = ApplicationViewTraceLoggingHelpers::GetViewName(v23, (struct IApplicationView *)a2, v5);
    v6 = ViewName;
    if ( ViewName < 0 )
    {
      v7 = 485LL;
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23);
    return 0LL;
  }
  v7 = 484LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
    (const char *)(unsigned int)ViewName);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23);
  return v6;
}
