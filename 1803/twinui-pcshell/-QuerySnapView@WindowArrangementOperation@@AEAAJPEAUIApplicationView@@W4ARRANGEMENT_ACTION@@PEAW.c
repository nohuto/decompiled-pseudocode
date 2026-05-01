/*
 * XREFs of ?QuerySnapView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x1802D65F0
 * Callers:
 *     ?QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x1802D62D8 (-QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@P.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x180284024 (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 */

__int64 __fastcall WindowArrangementOperation::QuerySnapView(
        __int64 a1,
        struct IApplicationView *a2,
        int a3,
        _DWORD *a4)
{
  int v8; // r13d
  int v9; // r15d
  int ViewLayoutBehaviorFlags; // ebx
  __int64 v11; // rdx
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  unsigned __int64 v18; // r9
  int v19; // eax
  char v20; // bl
  int v21; // eax
  unsigned int v22; // esi
  int v23; // eax
  unsigned int v24; // edi
  __int64 v25; // rbx
  char v26; // r15
  int v27; // eax
  int v28; // ecx
  unsigned int v29; // [rsp+30h] [rbp-30h] BYREF
  __int64 v30; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v31[2]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), 5LL);
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), 1LL);
  if ( !(*(unsigned int (__fastcall **)(_QWORD, struct IApplicationView *))(**(_QWORD **)(a1 + 64) + 184LL))(
          *(_QWORD *)(a1 + 64),
          a2) )
    ++v9;
  ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a2, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v29);
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    v11 = 133LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
      (const char *)(unsigned int)ViewLayoutBehaviorFlags);
    return (unsigned int)ViewLayoutBehaviorFlags;
  }
  v13 = *(__int64 **)(a1 + 64);
  v14 = *v13;
  if ( v8 == 2 )
  {
    if ( !(*(unsigned int (__fastcall **)(__int64 *, struct IApplicationView *))(v14 + 184))(v13, a2) )
    {
      ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64) + 248LL))(
                                  *(_QWORD *)(a1 + 64),
                                  0LL,
                                  a2,
                                  1LL);
      if ( ViewLayoutBehaviorFlags < 0 )
      {
        v11 = 146LL;
        goto LABEL_5;
      }
    }
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD, unsigned int *))(**(_QWORD **)(a1 + 64) + 152LL))(
                                *(_QWORD *)(a1 + 64),
                                a2,
                                0LL,
                                &v29);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v11 = 151LL;
      goto LABEL_5;
    }
    if ( a3 == 1 && v29 || a3 == 2 && v29 != 1 )
    {
      v30 = 0LL;
      v15 = *(_QWORD *)(a1 + 64);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v15 + 96LL))(
              v15,
              0LL,
              &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
              &v30);
      ViewLayoutBehaviorFlags = v16;
      if ( v16 < 0 )
      {
        v17 = 159LL;
LABEL_23:
        v18 = (unsigned int)v16;
LABEL_24:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
          (const char *)v18);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
        return (unsigned int)ViewLayoutBehaviorFlags;
      }
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 64) + 256LL))(*(_QWORD *)(a1 + 64), 0LL);
      ViewLayoutBehaviorFlags = v16;
      if ( v16 < 0 )
      {
        v17 = 160LL;
        goto LABEL_23;
      }
      v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 64) + 224LL))(
              *(_QWORD *)(a1 + 64),
              v30,
              1LL);
      ViewLayoutBehaviorFlags = v16;
      if ( v16 < 0 )
      {
        v17 = 161LL;
        goto LABEL_23;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    }
  }
  else if ( v9 == 1 )
  {
    v19 = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *))(v14 + 184))(v13, a2);
    v20 = v29;
    if ( !v19 )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 64)
                                                                                                 + 232LL))(
              *(_QWORD *)(a1 + 64),
              a2,
              0LL,
              v29,
              0LL);
      v22 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAA,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
          (const char *)(unsigned int)v21);
        return v22;
      }
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 264LL))(*(_QWORD *)(a1 + 64), 4LL);
    v23 = (*(__int64 (__fastcall **)(_QWORD, bool, _QWORD, _QWORD))(**(_QWORD **)(a1 + 64) + 240LL))(
            *(_QWORD *)(a1 + 64),
            a3 == 1,
            0LL,
            0LL);
    v24 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB0,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
        (const char *)(unsigned int)v23);
      return v24;
    }
    *a4 |= (v20 & 2) != 0 ? 12 : 6;
  }
  else
  {
    if ( (*(unsigned int (__fastcall **)(__int64 *, __int64))(v14 + 88))(v13, 2LL) )
    {
      v30 = 0LL;
      v25 = *(_QWORD *)(a1 + 64);
      v26 = 1;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v25 + 112LL))(
              v25,
              0LL,
              2LL,
              &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
              &v30);
      ViewLayoutBehaviorFlags = v27;
      if ( v27 < 0 )
      {
        v18 = (unsigned int)v27;
        v17 = 194LL;
        goto LABEL_24;
      }
      v31[0] = 0LL;
      v31[1] = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v30 + 104LL))(v30, 0LL, v31);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    }
    else
    {
      v26 = 0;
    }
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, bool, _QWORD, _QWORD))(**(_QWORD **)(a1 + 64) + 232LL))(
                                *(_QWORD *)(a1 + 64),
                                a2,
                                a3 != 1,
                                v29,
                                0LL);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v11 = 202LL;
      goto LABEL_5;
    }
    if ( (v29 & 2) != 0 || (v28 = 6, v26) )
      v28 = 12;
    *a4 |= v28;
  }
  return 0LL;
}
