/*
 * XREFs of ?GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x180141B80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800198CC (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x180092E5C (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     _lambda_93f12587be75daec396af0a75fadd596_::operator() @ 0x18013E2C0 (_lambda_93f12587be75daec396af0a75fadd596_--operator().c)
 *     ?AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z @ 0x180141474 (-AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z.c)
 *     ?GetSizeConstraintOverrides@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@000@Z @ 0x180141A40 (-GetSizeConstraintOverrides@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@000@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetSizeConstraintsForDpi(
        CWinRTApplicationView *this,
        unsigned int a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4)
{
  RTL_SRWLOCK *v8; // r14
  __int64 v9; // rbx
  int SizeConstraintOverrides; // eax
  unsigned int v11; // r14d
  volatile int *v13; // rdx
  LONG cy; // ecx
  LONG cx; // edx
  LONG v16; // r8d
  LONG v17; // r9d
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rdx
  LONG v21; // eax
  LONG v22; // eax
  LONG v23; // eax
  LONG v24; // eax
  LONG v25; // ecx
  LONG v26; // edx
  LONG v27; // r8d
  LONG v28; // r9d
  LONG v29; // eax
  LONG v30; // eax
  LONG v31; // eax
  LONG v32; // eax
  struct tagSIZE v33; // [rsp+30h] [rbp-40h] BYREF
  struct tagSIZE v34; // [rsp+38h] [rbp-38h] BYREF
  struct tagSIZE v35; // [rsp+40h] [rbp-30h] BYREF
  __int64 v36; // [rsp+48h] [rbp-28h] BYREF
  struct tagSIZE v37; // [rsp+50h] [rbp-20h] BYREF
  __int64 *v38[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct tagSIZE v40; // [rsp+A0h] [rbp+30h] BYREF

  v38[1] = (__int64 *)-2LL;
  v8 = (RTL_SRWLOCK *)((char *)this + 48);
  AcquireSRWLockShared((PSRWLOCK)this + 6);
  v9 = *(_QWORD *)((char *)this + 212);
  if ( v8 )
    ReleaseSRWLockShared(v8);
  v34.cx = 0;
  v34.cy = 0;
  v40.cx = 0;
  v40.cy = 0;
  v35.cx = 0;
  v35.cy = 0;
  v33.cx = 0;
  v33.cy = 0;
  SizeConstraintOverrides = CWinRTApplicationView::GetSizeConstraintOverrides(this, &v34, &v40, &v35, &v33);
  v11 = SizeConstraintOverrides;
  if ( SizeConstraintOverrides < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19F,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)SizeConstraintOverrides);
    return v11;
  }
  v36 = 0LL;
  v38[0] = &v36;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v37);
  v13 = (volatile int *)v37;
  if ( v37 )
    lambda_93f12587be75daec396af0a75fadd596_::operator()(v38, *(_QWORD *)&v37);
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease((__int64 *)&v37, v13);
  if ( !a3 )
    goto LABEL_30;
  cy = v40.cy;
  cx = v40.cx;
  v16 = v34.cy;
  v17 = v34.cx;
  if ( (v34.cx <= 0 || v34.cy <= 0) && (v40.cx <= 0 || v40.cy <= 0) )
  {
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, CWinRTApplicationView *, struct tagSIZE *))(*(_QWORD *)v36 + 40LL))(
            v36,
            v9,
            a2,
            this,
            a3);
    v19 = v18;
    if ( v18 < 0 )
    {
      v20 = 443LL;
      goto LABEL_50;
    }
    goto LABEL_30;
  }
  *a3 = 0LL;
  if ( v17 <= 0 || v16 <= 0 )
  {
LABEL_21:
    if ( cx > 0 && cy > 0 )
    {
      v18 = (*(__int64 (__fastcall **)(__int64, struct tagSIZE, _QWORD, CWinRTApplicationView *, struct tagSIZE *))(*(_QWORD *)v36 + 40LL))(
              v36,
              v40,
              a2,
              this,
              &v37);
      v19 = v18;
      if ( v18 < 0 )
      {
        v20 = 436LL;
        goto LABEL_50;
      }
      v23 = v37.cx;
      if ( a3->cx > v37.cx )
        v23 = a3->cx;
      a3->cx = v23;
      v24 = v37.cy;
      if ( a3->cy > v37.cy )
        v24 = a3->cy;
      a3->cy = v24;
    }
LABEL_30:
    if ( a4 )
    {
      v25 = v33.cy;
      v26 = v33.cx;
      v27 = v35.cy;
      v28 = v35.cx;
      if ( (v35.cx <= 0 || v35.cy <= 0) && (v33.cx <= 0 || v33.cy <= 0) )
      {
        v37.cx = GetSystemMetrics(59);
        v37.cy = GetSystemMetrics(60);
        *a4 = v37;
      }
      else
      {
        v37 = (struct tagSIZE)0x7FFFFFFF7FFFFFFFLL;
        *a4 = (struct tagSIZE)0x7FFFFFFF7FFFFFFFLL;
        if ( v28 > 0 && v27 > 0 )
        {
          v37 = v35;
          v18 = CWinRTApplicationView::AdjustSizeForChrome(this, &v37, a2);
          v19 = v18;
          if ( v18 < 0 )
          {
            v20 = 456LL;
            goto LABEL_50;
          }
          v29 = v37.cx;
          if ( a4->cx < v37.cx )
            v29 = a4->cx;
          a4->cx = v29;
          v30 = v37.cy;
          if ( a4->cy < v37.cy )
            v30 = a4->cy;
          a4->cy = v30;
          v25 = v33.cy;
          v26 = v33.cx;
        }
        if ( v26 > 0 && v25 > 0 )
        {
          v18 = (*(__int64 (__fastcall **)(__int64, struct tagSIZE, _QWORD, CWinRTApplicationView *, struct tagSIZE *))(*(_QWORD *)v36 + 40LL))(
                  v36,
                  v33,
                  a2,
                  this,
                  &v37);
          v19 = v18;
          if ( v18 < 0 )
          {
            v20 = 464LL;
            goto LABEL_50;
          }
          v31 = v37.cx;
          if ( a4->cx < v37.cx )
            v31 = a4->cx;
          a4->cx = v31;
          v32 = v37.cy;
          if ( a4->cy < v37.cy )
            v32 = a4->cy;
          a4->cy = v32;
        }
      }
    }
    v19 = 0;
    goto LABEL_58;
  }
  v37 = v34;
  v18 = CWinRTApplicationView::AdjustSizeForChrome(this, &v37, a2);
  v19 = v18;
  if ( v18 >= 0 )
  {
    v21 = v37.cx;
    if ( a3->cx > v37.cx )
      v21 = a3->cx;
    a3->cx = v21;
    v22 = v37.cy;
    if ( a3->cy > v37.cy )
      v22 = a3->cy;
    a3->cy = v22;
    cy = v40.cy;
    cx = v40.cx;
    goto LABEL_21;
  }
  v20 = 428LL;
LABEL_50:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v18);
LABEL_58:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
  return v19;
}
