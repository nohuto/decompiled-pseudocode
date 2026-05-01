/*
 * XREFs of ?SetHolographicActivationForTokenView@ViewManagerBridge@@UEAAJI_N@Z @ 0x180055F40
 * Callers:
 *     ?ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@5@@Z @ 0x180051D30 (-ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@P.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewManagerBridge::SetHolographicActivationForTokenView(
        ViewManagerBridge *this,
        int a2,
        unsigned __int8 a3)
{
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // esi
  int v9; // edi
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, int *); // rcx
  int v14; // eax
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, int *); // [rsp+28h] [rbp-40h] BYREF
  __int64 v21; // [rsp+30h] [rbp-38h]
  __int64 v22; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v24; // [rsp+70h] [rbp+8h] BYREF
  int v25; // [rsp+88h] [rbp+20h] BYREF

  v22 = -2LL;
  v6 = 0LL;
  v21 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 15) + 48LL))(*((_QWORD *)this + 15), &v24);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x175,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v7,
      v19[0]);
    goto LABEL_15;
  }
  v9 = 0;
  if ( v24 <= 0 )
    goto LABEL_14;
  do
  {
    v20 = 0LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 15) + 56LL))(
            *((_QWORD *)this + 15),
            (unsigned int)v9,
            &v20);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17A,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v10,
        v19[0]);
      goto LABEL_29;
    }
    *(_QWORD *)v19 = 0LL;
    v11 = (**v20)(v20, &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e, v19);
    v8 = v11;
    if ( v11 < 0 )
    {
      v18 = 380LL;
      goto LABEL_27;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v19 + 152LL))(*(_QWORD *)v19, &v25);
    v8 = v11;
    if ( v11 < 0 )
    {
      v18 = 383LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v11,
        v19[0]);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v19);
LABEL_29:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
      goto LABEL_15;
    }
    v12 = *(_QWORD *)v19;
    if ( v25 == a2 && v6 != *(_QWORD *)v19 )
    {
      v16 = *(_QWORD *)v19;
      if ( *(_QWORD *)v19 )
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v19 + 8LL))(*(_QWORD *)v19);
        v12 = *(_QWORD *)v19;
      }
      v17 = v6;
      v6 = v16;
      v21 = v16;
      if ( v17 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 16LL))(v17, v12);
        v12 = *(_QWORD *)v19;
      }
    }
    if ( v12 )
    {
      *(_QWORD *)v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, int *)))(*v13)[2])(v13);
    }
    ++v9;
  }
  while ( v9 < v24 );
  if ( v6 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 800LL))(v6, a3);
    v8 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18A,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v14,
        v19[0]);
      goto LABEL_15;
    }
  }
LABEL_14:
  v8 = 0;
LABEL_15:
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v8;
}
