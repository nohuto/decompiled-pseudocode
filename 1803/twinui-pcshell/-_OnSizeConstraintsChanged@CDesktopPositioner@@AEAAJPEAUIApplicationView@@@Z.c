/*
 * XREFs of ?_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180022368
 * Callers:
 *     ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800218D0 (-OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHAN.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x18002264C (-_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?GetSizeConstraints@CApplicationViewBase@@UEAAJPEAUIImmersiveMonitor@@PEAUtagSIZE@@1@Z @ 0x180024EE0 (-GetSizeConstraints@CApplicationViewBase@@UEAAJPEAUIImmersiveMonitor@@PEAUtagSIZE@@1@Z.c)
 *     ?GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002AB60 (-GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetMonitor@CWin32ApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18002AFC0 (-GetMonitor@CWin32ApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x18008B0F8 (-InternalRelease@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::_OnSizeConstraintsChanged(CDesktopPositioner *this, struct IApplicationView *a2)
{
  int IsViewManaged; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(CWin32ApplicationView *__hidden, struct IImmersiveMonitor **); // rax
  int Monitor; // eax
  __int64 (__fastcall *v8)(CApplicationViewBase *__hidden, struct IImmersiveMonitor *, struct tagSIZE *, struct tagSIZE *); // rax
  int SizeConstraints; // eax
  __int64 (__fastcall *v10)(CWin32ApplicationView *__hidden, const struct _GUID *, void **); // rax
  int Position; // eax
  int v12; // eax
  LONG v13; // r8d
  LONG cx; // eax
  LONG cy; // edx
  __int64 v17; // rdx
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-60h]
  bool v21; // [rsp+30h] [rbp-50h] BYREF
  struct IImmersiveMonitor *v22; // [rsp+38h] [rbp-48h] BYREF
  struct tagSIZE v23; // [rsp+40h] [rbp-40h] BYREF
  void *v24; // [rsp+48h] [rbp-38h] BYREF
  __int64 v25; // [rsp+50h] [rbp-30h]
  struct tagSIZE v26; // [rsp+58h] [rbp-28h] BYREF
  __int64 v27; // [rsp+60h] [rbp-20h]
  int v28; // [rsp+68h] [rbp-18h] BYREF
  int v29; // [rsp+6Ch] [rbp-14h]
  int v30; // [rsp+70h] [rbp-10h]
  int v31; // [rsp+74h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v27 = -2LL;
  IsViewManaged = CDesktopPositioner::_IsViewManaged(this, a2, &v21);
  v5 = IsViewManaged;
  if ( IsViewManaged < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x770,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)IsViewManaged,
      v20);
    return v5;
  }
  if ( v21 )
  {
    v22 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v22);
    v6 = *(__int64 (__fastcall **)(CWin32ApplicationView *__hidden, struct IImmersiveMonitor **))(*(_QWORD *)a2 + 80LL);
    if ( v6 == CWin32ApplicationView::GetMonitor )
      Monitor = CWin32ApplicationView::GetMonitor(a2, &v22);
    else
      Monitor = v6(a2, &v22);
    v5 = Monitor;
    if ( Monitor < 0 )
    {
      v17 = 1908LL;
    }
    else
    {
      v8 = *(__int64 (__fastcall **)(CApplicationViewBase *__hidden, struct IImmersiveMonitor *, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)a2 + 280LL);
      if ( v8 == CApplicationViewBase::GetSizeConstraints )
        SizeConstraints = CApplicationViewBase::GetSizeConstraints(a2, v22, &v23, &v26);
      else
        SizeConstraints = v8(a2, v22, &v23, &v26);
      v5 = SizeConstraints;
      if ( SizeConstraints >= 0 )
      {
        v24 = 0LL;
        Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease(&v24);
        v10 = *(__int64 (__fastcall **)(CWin32ApplicationView *__hidden, const struct _GUID *, void **))(*(_QWORD *)a2 + 104LL);
        if ( v10 == CWin32ApplicationView::GetPosition )
          Position = CWin32ApplicationView::GetPosition(a2, &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6, &v24);
        else
          Position = v10(a2, &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6, &v24);
        v5 = Position;
        if ( Position < 0 )
        {
          v18 = (unsigned int)Position;
          v19 = 1915LL;
        }
        else
        {
          v12 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)v24 + 24LL))(v24, &v28);
          v5 = v12;
          if ( v12 < 0 )
          {
            v19 = 1918LL;
          }
          else
          {
            v13 = v31 - v29;
            cx = v30 - v28;
            if ( v23.cx > v30 - v28 )
              cx = v23.cx;
            LODWORD(v25) = cx;
            cy = v31 - v29;
            if ( v23.cy > v13 )
              cy = v23.cy;
            HIDWORD(v25) = cy;
            if ( cx == v30 - v28 && cy == v13
              || (v12 = (*(__int64 (__fastcall **)(char *, struct IApplicationView *, __int64, __int64))(*((_QWORD *)this + 13) + 32LL))(
                          (char *)this + 104,
                          a2,
                          v25,
                          v25),
                  v5 = v12,
                  v12 >= 0) )
            {
              v5 = 0;
LABEL_20:
              Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease(&v24);
LABEL_21:
              Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v22);
              return v5;
            }
            v19 = 1926LL;
          }
          v18 = (unsigned int)v12;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)v18,
          v20);
        goto LABEL_20;
      }
      v17 = 1912LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)v5,
      v20);
    goto LABEL_21;
  }
  return 0LL;
}
