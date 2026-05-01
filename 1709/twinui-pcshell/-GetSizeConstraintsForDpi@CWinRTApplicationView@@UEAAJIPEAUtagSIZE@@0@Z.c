/*
 * XREFs of ?GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x180083770
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetIam@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIImmersiveApplicationPresentation@@@WRL@Microsoft@@XZ @ 0x18007D560 (-GetIam@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIImmersiveApplicationPresentation@@@W.c)
 *     ?GetWindowSizeConverter@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIWindowSizeConversionLogicalClientToWindow@@@WRL@Microsoft@@XZ @ 0x18007D610 (-GetWindowSizeConverter@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIWindowSizeConversion.c)
 *     ?AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z @ 0x180082BB8 (-AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWinRTApplicationView::GetSizeConstraintsForDpi(
        CWinRTApplicationView *this,
        unsigned int a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4)
{
  RTL_SRWLOCK *v8; // rdi
  __int64 v9; // rbx
  int v10; // edi
  struct tagSIZE v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagSIZE v15; // rcx
  __int64 v16; // rcx
  struct tagSIZE v17; // rcx
  __int64 v19; // rdx
  int v20; // r8d
  int cy; // r9d
  struct tagSIZE v22; // rcx
  int v23; // eax
  unsigned int v24; // ebx
  __int64 v25; // rdx
  LONG v26; // eax
  LONG v27; // eax
  LONG cx; // eax
  LONG v29; // eax
  __int64 v30; // rdx
  int v31; // r8d
  int v32; // r9d
  struct tagSIZE v33; // rax
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // eax
  LONG v37; // eax
  __int64 v38; // rcx
  __int64 v39; // [rsp+40h] [rbp-40h] BYREF
  __int64 v40; // [rsp+48h] [rbp-38h] BYREF
  __int64 v41; // [rsp+50h] [rbp-30h] BYREF
  __int64 v42; // [rsp+58h] [rbp-28h] BYREF
  struct tagSIZE v43; // [rsp+60h] [rbp-20h] BYREF
  int v44[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v45; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  struct tagSIZE v47; // [rsp+B0h] [rbp+30h] BYREF

  v45 = -2LL;
  v8 = (RTL_SRWLOCK *)((char *)this + 40);
  AcquireSRWLockShared((PSRWLOCK)this + 5);
  v9 = *(_QWORD *)((char *)this + 196);
  if ( v8 )
    ReleaseSRWLockShared(v8);
  v43 = 0LL;
  v40 = 0LL;
  *(_QWORD *)v44 = 0LL;
  v41 = 0LL;
  ApplicationViewManagement::CGlobals::GetIam((__int64 *)&v47);
  if ( !*(_QWORD *)&v47 )
  {
    v10 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC0,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)0x8007000CLL);
    v11 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(struct tagSIZE))(**(_QWORD **)&v11 + 16LL))(v11);
    }
    goto LABEL_20;
  }
  v39 = 0LL;
  v12 = (***(__int64 (__fastcall ****)(struct tagSIZE, GUID *, __int64 *))&v47)(
          v47,
          &GUID_9886efb0_afb3_4a35_b381_329935b32d5a,
          &v39);
  v10 = v12;
  if ( v12 < 0 )
  {
    v13 = 195LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v12);
    v14 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(struct tagSIZE))(**(_QWORD **)&v15 + 16LL))(v15);
    }
    goto LABEL_19;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct tagSIZE *, __int64 *, int *, __int64 *))(*(_QWORD *)v39 + 40LL))(
          v39,
          *((_QWORD *)this + 23),
          &v43,
          &v40,
          v44,
          &v41);
  v10 = v12;
  if ( v12 < 0 )
  {
    v13 = 196LL;
    goto LABEL_8;
  }
  v16 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(struct tagSIZE))(**(_QWORD **)&v17 + 16LL))(v17);
  }
  v10 = 0;
LABEL_19:
  if ( v10 < 0 )
  {
LABEL_20:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x198,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  ApplicationViewManagement::CGlobals::GetWindowSizeConverter(&v42);
  if ( !a3 )
    goto LABEL_46;
  v19 = v40;
  v20 = HIDWORD(v40);
  cy = v43.cy;
  v22 = v43;
  if ( (v43.cx <= 0 || v43.cy <= 0) && ((int)v40 <= 0 || SHIDWORD(v40) <= 0) )
  {
    v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, CWinRTApplicationView *, struct tagSIZE *))(*(_QWORD *)v42 + 40LL))(
            v42,
            v9,
            a2,
            this,
            a3);
    v24 = v23;
    if ( v23 < 0 )
    {
      v25 = 436LL;
      goto LABEL_64;
    }
    goto LABEL_46;
  }
  *a3 = 0LL;
  if ( v22.cx <= 0 || cy <= 0 )
  {
LABEL_35:
    if ( (int)v19 > 0 && v20 > 0 )
    {
      v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, CWinRTApplicationView *, struct tagSIZE *))(*(_QWORD *)v42 + 40LL))(
              v42,
              v19,
              a2,
              this,
              &v47);
      v24 = v23;
      if ( v23 < 0 )
      {
        v25 = 429LL;
        goto LABEL_64;
      }
      cx = v47.cx;
      if ( a3->cx > v47.cx )
        cx = a3->cx;
      a3->cx = cx;
      v29 = v47.cy;
      if ( a3->cy > v47.cy )
        v29 = a3->cy;
      a3->cy = v29;
    }
LABEL_46:
    if ( a4 )
    {
      v30 = v41;
      v31 = HIDWORD(v41);
      v32 = v44[1];
      v33 = *(struct tagSIZE *)v44;
      if ( (v44[0] <= 0 || v44[1] <= 0) && ((int)v41 <= 0 || SHIDWORD(v41) <= 0) )
      {
        v47.cx = GetSystemMetrics(59);
        v47.cy = GetSystemMetrics(60);
        *a4 = v47;
      }
      else
      {
        v47 = (struct tagSIZE)0x7FFFFFFF7FFFFFFFLL;
        *a4 = (struct tagSIZE)0x7FFFFFFF7FFFFFFFLL;
        if ( v33.cx > 0 && v32 > 0 )
        {
          v47 = v33;
          v23 = CWinRTApplicationView::AdjustSizeForChrome(this, &v47, a2);
          v24 = v23;
          if ( v23 < 0 )
          {
            v25 = 449LL;
            goto LABEL_64;
          }
          v34 = v47.cx;
          if ( a4->cx < v47.cx )
            v34 = a4->cx;
          a4->cx = v34;
          v35 = v47.cy;
          if ( a4->cy < v47.cy )
            v35 = a4->cy;
          a4->cy = v35;
          v30 = v41;
          v31 = HIDWORD(v41);
        }
        if ( (int)v30 > 0 && v31 > 0 )
        {
          v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, CWinRTApplicationView *, struct tagSIZE *))(*(_QWORD *)v42 + 40LL))(
                  v42,
                  v30,
                  a2,
                  this,
                  &v47);
          v24 = v23;
          if ( v23 < 0 )
          {
            v25 = 457LL;
            goto LABEL_64;
          }
          v36 = v47.cx;
          if ( a4->cx < v47.cx )
            v36 = a4->cx;
          a4->cx = v36;
          v37 = v47.cy;
          if ( a4->cy < v47.cy )
            v37 = a4->cy;
          a4->cy = v37;
        }
      }
    }
    v24 = 0;
    goto LABEL_72;
  }
  v47 = v22;
  v23 = CWinRTApplicationView::AdjustSizeForChrome(this, &v47, a2);
  v24 = v23;
  if ( v23 >= 0 )
  {
    v26 = v47.cx;
    if ( a3->cx > v47.cx )
      v26 = a3->cx;
    a3->cx = v26;
    v27 = v47.cy;
    if ( a3->cy > v47.cy )
      v27 = a3->cy;
    a3->cy = v27;
    v19 = v40;
    v20 = HIDWORD(v40);
    goto LABEL_35;
  }
  v25 = 421LL;
LABEL_64:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v25,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v23);
LABEL_72:
  v38 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
  return v24;
}
