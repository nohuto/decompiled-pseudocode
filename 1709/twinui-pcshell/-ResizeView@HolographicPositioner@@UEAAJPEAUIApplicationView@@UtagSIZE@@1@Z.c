/*
 * XREFs of ?ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1800FB4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1800FCF30 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x180100454 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicPositioner::ResizeView(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  LONG cx; // edi
  int IsViewManaged; // ebx
  __int64 v8; // rdx
  __int64 v10; // r15
  wchar_t **v11; // rbx
  __int64 v12; // rbx
  unsigned int v13; // edi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v21; // [rsp+78h] [rbp+38h] BYREF
  struct tagSIZE v22; // [rsp+80h] [rbp+40h]

  v22 = a3;
  v19[1] = -2LL;
  cx = a3.cx;
  IsViewManaged = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *, struct tagSIZE, struct tagSIZE))(*(_QWORD *)a2 + 112LL))(
                    a2,
                    &v18,
                    a3,
                    a4);
  if ( IsViewManaged < 0 )
  {
    v8 = 521LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)IsViewManaged);
    return (unsigned int)IsViewManaged;
  }
  v10 = v18;
  v11 = &off_1802B87A0;
  while ( (unsigned int)_o__wcsicmp(v10, *v11) )
  {
    if ( ++v11 == (wchar_t **)&CRVPrivate::cfhImmersiveShellStartup )
      return 2147500033LL;
  }
  IsViewManaged = HolographicPositioner::IsViewManaged((HolographicPositioner *)((char *)this + 16), a2, (int *)&v21);
  if ( IsViewManaged < 0 )
  {
    v8 = 525LL;
    goto LABEL_3;
  }
  if ( !(_DWORD)v21 )
  {
    IsViewManaged = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20E,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070057LL);
    return (unsigned int)IsViewManaged;
  }
  HolographicPositioner::_FindViewHostItem((char *)this - 120, v19, a2);
  v12 = v19[0];
  if ( v19[0] )
  {
    *(float *)&v21 = (float)cx;
    *((float *)&v21 + 1) = (float)v22.cy;
    v17 = 0LL;
    v14 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v19[0])(
            v19[0],
            &GUID_0cfc8c70_0442_4d54_ab51_7f5a0c9e44ad,
            &v17);
    v13 = v14;
    if ( v14 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 72LL))(v17, v21);
      v13 = v14;
      if ( v14 >= 0 )
      {
        v13 = 0;
LABEL_21:
        v16 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        goto LABEL_23;
      }
      v15 = 536LL;
    }
    else
    {
      v15 = 535LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_21;
  }
  v13 = -2147023728;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x211,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)0x80070490LL);
LABEL_23:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return v13;
}
