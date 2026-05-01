/*
 * XREFs of ?GetLowestLayoutView@TabletModeCoverWindow@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x1802E203C
 * Callers:
 *     ?UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ @ 0x1802E29A4 (-UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModeCoverWindow::GetLowestLayoutView(
        TabletModeCoverWindow *this,
        struct IApplicationView **a2)
{
  __int64 v3; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // r14d
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // edi
  void *v15; // rbx
  int v16; // eax
  unsigned int v17; // esi
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rbx
  int v21; // eax
  struct IApplicationView *v23; // rax
  struct IUnknown *v24; // [rsp+30h] [rbp-18h] BYREF
  int v25[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  __int64 v27; // [rsp+80h] [rbp+38h] BYREF
  struct IUnknown *v28; // [rsp+88h] [rbp+40h] BYREF
  void *v29; // [rsp+90h] [rbp+48h] BYREF
  __int64 v30; // [rsp+98h] [rbp+50h] BYREF

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 18);
  v30 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 72LL))(v3, &v30);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 80LL))(v30, 1LL);
    if ( v7 == 1 )
    {
      v27 = 0LL;
      v8 = v30;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v8 + 104LL))(
             v8,
             0LL,
             1LL,
             &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
             &v27);
      v6 = v9;
      if ( v9 >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IApplicationView **))(*(_QWORD *)v27 + 48LL))(
               v27,
               &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
               a2);
        v6 = v9;
        if ( v9 >= 0 )
        {
LABEL_9:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
          goto LABEL_27;
        }
        v10 = 344LL;
      }
      else
      {
        v10 = 343LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_9;
    }
    if ( v7 > 1 )
    {
      v29 = 0LL;
      v11 = *((_QWORD *)this + 19);
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v29);
      v12 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v11 + 32LL))(v11, &v29);
      v6 = v12;
      if ( v12 < 0 )
      {
        v13 = 350LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
          (const char *)(unsigned int)v12);
LABEL_33:
        Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v29);
        goto LABEL_27;
      }
      v12 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v29 + 24LL))(v29, &v27);
      v6 = v12;
      if ( v12 < 0 )
      {
        v13 = 352LL;
        goto LABEL_15;
      }
      v14 = v27;
      if ( (_DWORD)v27 )
      {
        while ( 1 )
        {
          v28 = 0LL;
          v15 = v29;
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v28);
          v16 = (*(__int64 (__fastcall **)(void *, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)v15 + 32LL))(
                  v15,
                  (unsigned int)(v14 - 1),
                  &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
                  &v28);
          if ( v16 >= 0 )
            break;
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            356LL,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
            (const char *)(unsigned int)v16);
LABEL_24:
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v28);
          if ( !--v14 )
            goto LABEL_25;
        }
        v17 = 0;
        while ( 1 )
        {
          *(_QWORD *)v25 = 0LL;
          v18 = v30;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v25);
          v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v18 + 104LL))(
                  v18,
                  v17,
                  1LL,
                  &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
                  v25);
          v6 = v19;
          if ( v19 < 0 )
            break;
          v24 = 0LL;
          v20 = *(_QWORD *)v25;
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v24);
          v21 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v20 + 48LL))(
                  v20,
                  &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
                  &v24);
          v6 = v21;
          if ( v21 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x16B,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
              (const char *)(unsigned int)v21);
            goto LABEL_30;
          }
          if ( (unsigned int)SHIsSameObject(v24, v28) )
          {
            v23 = (struct IApplicationView *)v28;
            v28 = 0LL;
            v6 = 0;
            *a2 = v23;
LABEL_30:
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v24);
            goto LABEL_32;
          }
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v24);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v25);
          if ( ++v17 >= v7 )
            goto LABEL_24;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x169,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
          (const char *)(unsigned int)v19);
LABEL_32:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v25);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v28);
        goto LABEL_33;
      }
LABEL_25:
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v29);
    }
    v6 = -2147467259;
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x152,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
    (const char *)(unsigned int)v5);
LABEL_27:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  return v6;
}
