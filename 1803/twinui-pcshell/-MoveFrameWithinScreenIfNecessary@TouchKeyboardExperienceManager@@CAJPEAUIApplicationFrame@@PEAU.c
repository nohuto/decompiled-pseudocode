/*
 * XREFs of ?MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAUIApplicationFrameWrapper@@@Z @ 0x18023E920
 * Callers:
 *     _lambda_f0bf810a5d9c986258710a4a09c5f600_::operator() @ 0x1800A2034 (_lambda_f0bf810a5d9c986258710a4a09c5f600_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x18008B0F8 (-InternalRelease@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x180132C18 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::MoveFrameWithinScreenIfNecessary(
        struct IApplicationFrame *a1,
        struct IApplicationFrameWrapper *a2)
{
  __int64 v3; // rdx
  unsigned int v4; // ebx
  const char *v6; // r9
  LONG right; // edx
  LONG left; // eax
  LONG bottom; // edx
  LONG top; // eax
  HMONITOR v11; // rbx
  LONG v12; // ecx
  LONG v13; // r8d
  LONG v14; // edx
  LONG v15; // r10d
  char v16; // al
  int v17; // r9d
  int v18; // r8d
  LONG v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  __int64 v23; // rdx
  void *v24[2]; // [rsp+28h] [rbp-29h] BYREF
  RECT v25; // [rsp+38h] [rbp-19h] BYREF
  HWND hWnd[2]; // [rsp+48h] [rbp-9h] BYREF
  RECT rc; // [rsp+58h] [rbp+7h] BYREF
  struct tagRECT Rect; // [rsp+68h] [rbp+17h] BYREF
  struct tagMONITORINFO mi; // [rsp+78h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  hWnd[1] = (HWND)-2LL;
  if ( !a1 )
  {
    v3 = 1272LL;
LABEL_3:
    v4 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v4);
    return v4;
  }
  if ( !a2 )
  {
    v3 = 1273LL;
    goto LABEL_3;
  }
  hWnd[0] = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)a1 + 24LL))(a1, hWnd);
  if ( (v4 & 0x80000000) != 0 )
  {
    v3 = 1276LL;
    goto LABEL_4;
  }
  *(_QWORD *)&Rect.left = 0LL;
  *(_QWORD *)&Rect.right = 0LL;
  if ( !GetWindowRect(hWnd[0], &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x4FE,
             (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
             v6);
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  right = Rect.right;
  left = Rect.right;
  if ( Rect.left < Rect.right )
    left = Rect.left;
  rc.left = left;
  if ( Rect.left > Rect.right )
    right = Rect.left;
  rc.right = right;
  bottom = Rect.bottom;
  top = Rect.bottom;
  if ( Rect.top < Rect.bottom )
    top = Rect.top;
  rc.top = top;
  if ( Rect.top > Rect.bottom )
    bottom = Rect.top;
  rc.bottom = bottom;
  v11 = MonitorFromRect(&rc, 2u);
  if ( !v11 )
  {
    v4 = -2147418113;
    v3 = 1288LL;
    goto LABEL_4;
  }
  memset_0(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( !GetMonitorInfoW(v11, &mi) )
  {
    v4 = -2147467259;
    v3 = 1291LL;
    goto LABEL_4;
  }
  v12 = mi.rcMonitor.right;
  v13 = mi.rcMonitor.right;
  if ( mi.rcMonitor.left < mi.rcMonitor.right )
    v13 = mi.rcMonitor.left;
  if ( mi.rcMonitor.left > mi.rcMonitor.right )
    v12 = mi.rcMonitor.left;
  v14 = mi.rcMonitor.bottom;
  v15 = mi.rcMonitor.bottom;
  if ( mi.rcMonitor.top < mi.rcMonitor.bottom )
    v15 = mi.rcMonitor.top;
  if ( mi.rcMonitor.top > mi.rcMonitor.bottom )
    v14 = mi.rcMonitor.top;
  v16 = 0;
  v25 = rc;
  v17 = _mm_cvtsi128_si32((__m128i)rc);
  if ( v17 >= v13 )
  {
    if ( v12 >= rc.right )
      goto LABEL_38;
    v20 = v12 - rc.right;
    v19 = v20 + v17;
    v25.right += v20;
  }
  else
  {
    if ( v12 < rc.right )
      goto LABEL_38;
    v18 = v13 - v17;
    v19 = v18 + v17;
    v25.right += v18;
  }
  v25.left = v19;
  v16 = 1;
LABEL_38:
  if ( rc.top >= v15 && v14 < rc.bottom )
  {
    v21 = v14 - rc.bottom;
    v25.top += v21;
    v25.bottom += v21;
    v16 = 1;
  }
  if ( v16 )
  {
    v24[0] = 0LL;
    Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)v24);
    v22 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
            v24,
            (__int128 *)&v25.left);
    v4 = v22;
    if ( v22 < 0 )
    {
      v23 = 1340LL;
LABEL_46:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v22);
      Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)v24);
      return v4;
    }
    v22 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, void *))(*(_QWORD *)a1 + 32LL))(a1, v24[0]);
    v4 = v22;
    if ( v22 < 0 )
    {
      v23 = 1341LL;
      goto LABEL_46;
    }
    Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)v24);
  }
  return 0LL;
}
