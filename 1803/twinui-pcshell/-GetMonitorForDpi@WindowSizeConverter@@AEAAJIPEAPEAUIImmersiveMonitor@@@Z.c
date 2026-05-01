/*
 * XREFs of ?GetMonitorForDpi@WindowSizeConverter@@AEAAJIPEAPEAUIImmersiveMonitor@@@Z @ 0x1802B6B30
 * Callers:
 *     ?ConvertForDpiAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@IHHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x1802B6350 (-ConvertForDpiAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@IHHPEAUIApplicationView.c)
 *     ?ConvertForDpiAndView@WindowSizeConverter@@UEAAJUtagSIZE@@IPEAUIApplicationView@@PEAU2@@Z @ 0x1802B6440 (-ConvertForDpiAndView@WindowSizeConverter@@UEAAJUtagSIZE@@IPEAUIApplicationView@@PEAU2@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowSizeConverter::GetMonitorForDpi(
        WindowSizeConverter *this,
        int a2,
        struct IImmersiveMonitor **a3)
{
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  unsigned int i; // edi
  void *v13; // rbx
  int v14; // eax
  struct IImmersiveMonitor *v16; // [rsp+30h] [rbp-20h] BYREF
  void *v17[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v19; // [rsp+80h] [rbp+30h] BYREF
  int v20; // [rsp+90h] [rbp+40h] BYREF
  char v21; // [rsp+98h] [rbp+48h] BYREF

  v17[1] = (void *)-2LL;
  *a3 = 0LL;
  v17[0] = 0LL;
  v6 = *((_QWORD *)this + 14);
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(v17);
  v7 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v6 + 112LL))(v6, v17);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 14) + 24LL))(
            *((_QWORD *)this + 14),
            &v19);
    v8 = v11;
    if ( v11 >= 0 )
    {
      for ( i = 0; i < v19; ++i )
      {
        v16 = 0LL;
        v13 = v17[0];
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v16);
        if ( (*(int (__fastcall **)(void *, _QWORD, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v13 + 32LL))(
               v13,
               i,
               &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
               &v16) >= 0 )
        {
          v14 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *, char *))(*(_QWORD *)v16 + 112LL))(
                  v16,
                  &v20,
                  &v21);
          v8 = v14;
          if ( v14 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x22E,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
              (const char *)(unsigned int)v14);
            Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v16);
            goto LABEL_16;
          }
          if ( a2 == v20 )
          {
            Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v16);
            *a3 = v16;
            Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v16);
            break;
          }
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v16);
      }
      if ( *a3 )
      {
        v8 = 0;
        goto LABEL_16;
      }
      v8 = -2147023728;
      v9 = 2147943568LL;
      v10 = 569LL;
    }
    else
    {
      v9 = (unsigned int)v11;
      v10 = 549LL;
    }
  }
  else
  {
    v9 = (unsigned int)v7;
    v10 = 546LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)v9);
LABEL_16:
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(v17);
  return v8;
}
