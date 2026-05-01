/*
 * XREFs of ?_IsSelfActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAH@Z @ 0x1801B27EC
 * Callers:
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B2FDC (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x18006D160 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall HolographicPositioner::_IsSelfActivation(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        int *a4)
{
  __int64 v7; // rax
  UAPViewWrapper *v8; // r8
  int v9; // ebx
  unsigned int v10; // edi
  __int64 v11; // rbx
  CWinRTApplicationView *v12; // rbx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  int v18; // [rsp+28h] [rbp-39h] BYREF
  __int64 v19; // [rsp+30h] [rbp-31h] BYREF
  __int64 v20; // [rsp+38h] [rbp-29h] BYREF
  __int64 v21; // [rsp+40h] [rbp-21h] BYREF
  __int64 v22; // [rsp+48h] [rbp-19h] BYREF
  CWinRTApplicationView *v23; // [rsp+50h] [rbp-11h] BYREF
  unsigned int v24; // [rsp+58h] [rbp-9h] BYREF
  __int64 (__fastcall ***v25[2])(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-1h] BYREF
  _BYTE v26[32]; // [rsp+70h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v25[1] = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))-2LL;
  *a4 = 0;
  v25[0] = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a3;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)v25);
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v26, (const WCHAR **)&off_180322BE0);
  v9 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(v25, *(_QWORD *)(v7 + 24), v8, &v24);
  if ( v9 >= 0 )
  {
    v10 = v24;
    v23 = 0LL;
    v11 = *((_QWORD *)this + 28);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, CWinRTApplicationView **))(*(_QWORD *)v11 + 48LL))(v11, v10, &v23);
    if ( v9 >= 0 )
    {
      v22 = 0LL;
      v12 = v23;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      v9 = (**(__int64 (__fastcall ***)(CWinRTApplicationView *, GUID *, __int64 *))v12)(
             v12,
             &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
             &v22);
      if ( v9 >= 0 )
      {
        v21 = 0LL;
        v13 = v22;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
        v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 24LL))(v13, &v21);
        v9 = v14;
        if ( v14 >= 0 )
        {
          v20 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
          v9 = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
                 a2,
                 &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
                 &v20);
          if ( v9 >= 0 )
          {
            v19 = 0LL;
            v15 = v20;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
            v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 24LL))(v15, &v19);
            v9 = v16;
            if ( v16 >= 0 )
            {
              v18 = 0;
              if ( (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v19 + 104LL))(v19, v21, &v18) >= 0 && v18 )
                *a4 = 1;
              v9 = 0;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x5DC,
                (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
                (const char *)(unsigned int)v16);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5D6,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v14);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v25);
  return (unsigned int)v9;
}
