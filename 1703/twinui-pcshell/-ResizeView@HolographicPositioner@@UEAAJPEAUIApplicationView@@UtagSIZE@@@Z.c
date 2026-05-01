/*
 * XREFs of ?ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@@Z @ 0x1800D8170
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1800D97A0 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1800DBB20 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicPositioner::ResizeView(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct tagSIZE a3)
{
  LONG cx; // edi
  int IsViewManaged; // ebx
  __int64 v7; // rdx
  __int64 v9; // r15
  wchar_t **v10; // rbx
  __int64 v11; // rbx
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v17[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v19; // [rsp+78h] [rbp+38h] BYREF
  struct tagSIZE v20; // [rsp+80h] [rbp+40h]
  __int64 v21; // [rsp+88h] [rbp+48h] BYREF

  v20 = a3;
  v17[1] = -2LL;
  cx = a3.cx;
  IsViewManaged = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 112LL))(a2, &v16);
  if ( IsViewManaged < 0 )
  {
    v7 = 501LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)IsViewManaged);
    return (unsigned int)IsViewManaged;
  }
  v9 = v16;
  v10 = &off_1802431E8;
  while ( (unsigned int)_o__wcsicmp(v9, *v10) )
  {
    if ( ++v10 == (wchar_t **)&CRVPrivate::cfhImmersiveShellStartup )
      return 2147500033LL;
  }
  IsViewManaged = HolographicPositioner::IsViewManaged((HolographicPositioner *)((char *)this + 16), a2, (int *)&v19);
  if ( IsViewManaged < 0 )
  {
    v7 = 505LL;
    goto LABEL_3;
  }
  if ( !(_DWORD)v19 )
  {
    IsViewManaged = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FA,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070057LL);
    return (unsigned int)IsViewManaged;
  }
  HolographicPositioner::_FindViewHostItem((char *)this - 96, v17, a2);
  v11 = v17[0];
  if ( v17[0] )
  {
    *(float *)&v19 = (float)cx;
    *((float *)&v19 + 1) = (float)v20.cy;
    v21 = 0LL;
    v13 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v17[0])(
            v17[0],
            &GUID_0cfc8c70_0442_4d54_ab51_7f5a0c9e44ad,
            &v21);
    v12 = v13;
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 72LL))(v21, v19);
      v12 = v13;
      if ( v13 >= 0 )
      {
        v12 = 0;
LABEL_21:
        v15 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        goto LABEL_23;
      }
      v14 = 516LL;
    }
    else
    {
      v14 = 515LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_21;
  }
  v12 = -2147023728;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1FD,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)0x80070490LL);
LABEL_23:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v12;
}
