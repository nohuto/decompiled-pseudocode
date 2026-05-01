/*
 * XREFs of ?_IsSelfActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAH@Z @ 0x1800FEED4
 * Callers:
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800FE680 (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z @ 0x1800FA0C8 (-GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall HolographicPositioner::_IsSelfActivation(
        HolographicPositioner *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        struct Windows::Foundation::Collections::IPropertySet *a3,
        int *a4)
{
  HRESULT v7; // eax
  int UInt32; // ebx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall **v10)(_QWORD, GUID *, __int64 *); // rdi
  __int64 *v11; // rax
  int v12; // eax
  __int64 (__fastcall **v13)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 (__fastcall ***v20)(_QWORD, _QWORD, _QWORD); // rcx
  int v22; // [rsp+28h] [rbp-39h] BYREF
  __int64 v23; // [rsp+30h] [rbp-31h] BYREF
  __int64 v24; // [rsp+38h] [rbp-29h] BYREF
  __int64 v25; // [rsp+40h] [rbp-21h] BYREF
  __int64 v26; // [rsp+48h] [rbp-19h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-11h] BYREF
  unsigned int v28; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v29[2]; // [rsp+60h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+88h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v29[1] = -2LL;
  *a4 = 0;
  v29[0] = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a3 + 8LL))(a3);
  string = 0LL;
  v7 = WindowsCreateStringReference(L"ViewSizePreferences.SourceWindow", 0x20u, &hstringHeader, &string);
  if ( v7 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
  UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)v29,
             string,
             &v28);
  if ( UInt32 >= 0 )
  {
    v27 = 0LL;
    UInt32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 31) + 48LL))(
               *((_QWORD *)this + 31),
               v28,
               &v27);
    if ( UInt32 >= 0 )
    {
      v26 = 0LL;
      v9 = v27;
      v10 = *v27;
      v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v26);
      UInt32 = (*v10)(v9, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, v11);
      if ( UInt32 >= 0 )
      {
        v25 = 0LL;
        v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 24LL))(v26, &v25);
        UInt32 = v12;
        if ( v12 >= 0 )
        {
          v24 = 0LL;
          v13 = *a2;
          v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v24);
          UInt32 = (*v13)((struct IApplicationView *)a2, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, v14);
          if ( UInt32 >= 0 )
          {
            v23 = 0LL;
            v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 24LL))(v24, &v23);
            UInt32 = v15;
            if ( v15 >= 0 )
            {
              v22 = 0;
              if ( (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v23 + 104LL))(v23, v25, &v22) >= 0 && v22 )
                *a4 = 1;
              UInt32 = 0;
            }
            else
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x60B,
                (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
                (const char *)(unsigned int)v15);
            }
            v16 = v23;
            if ( v23 )
            {
              v23 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
            }
          }
          v17 = v24;
          if ( v24 )
          {
            v24 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x605,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v12);
        }
        v18 = v25;
        if ( v25 )
        {
          v25 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
      v19 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    v20 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v27;
    if ( v27 )
    {
      v27 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v20)[2])(v20);
    }
  }
  if ( v29[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v29[0] + 16LL))(v29[0]);
  return (unsigned int)UInt32;
}
