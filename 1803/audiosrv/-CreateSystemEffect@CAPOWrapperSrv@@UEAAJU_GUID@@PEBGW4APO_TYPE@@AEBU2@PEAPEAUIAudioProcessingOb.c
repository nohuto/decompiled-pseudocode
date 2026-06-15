/*
 * XREFs of ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x180108330
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x180109578 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 */

__int64 __fastcall CAPOWrapperSrv::CreateSystemEffect(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 *a6)
{
  unsigned int v9; // edi
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  struct IUnknown *v14; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+38h] [rbp-38h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, struct IUnknown **); // [rsp+40h] [rbp-30h]
  __int128 v17; // [rsp+48h] [rbp-28h]
  __int128 v18; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v17 = *a2;
  v18 = v17;
  EtwEventActivityIdControl(4LL, &v18);
  *a6 = 0LL;
  if ( a4 )
  {
    v16 = 0LL;
    v10 = CSystemEffectWrapper::Create(a5, 0LL, a3, a4);
    v9 = v10;
    if ( v10 >= 0 )
    {
      v14 = 0LL;
      v11 = (**v16)(v16, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, &v14);
      v9 = v11;
      if ( v11 >= 0 )
      {
        v15 = 0LL;
        if ( v14
          && (((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v14->lpVtbl->QueryInterface)(
                v14,
                &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
                &v15),
              v15) )
        {
          if ( *(struct IUnknown **)(a1 + 88) != v14 )
            ATL::AtlComPtrAssign((struct IUnknown **)(a1 + 88), v14);
          v12 = (a1 + 8) & -(__int64)(a1 != 0);
          *a6 = v12;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
          v9 = 0;
        }
        else
        {
          v9 = -2147467262;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x33,
            (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
            (const char *)0x80004002LL);
        }
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x30,
          (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
          (const char *)(unsigned int)v11);
      }
      if ( v14 )
        ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D,
        (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
        (const char *)(unsigned int)v10);
    }
  }
  else
  {
    v9 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
      (const char *)0x80070057LL);
  }
  EtwEventActivityIdControl(4LL, &v18);
  return v9;
}
