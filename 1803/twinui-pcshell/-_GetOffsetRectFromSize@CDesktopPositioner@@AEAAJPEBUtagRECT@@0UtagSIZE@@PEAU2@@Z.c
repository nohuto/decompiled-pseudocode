/*
 * XREFs of ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x1800F4EFC
 * Callers:
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800226F8 (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x1800F5144 (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 *     ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1802C1728 (-_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x1800236D8 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_GetOffsetSourceLocation@CDesktopPositioner@@AEAAXPEBUtagRECT@@U2@UtagSIZE@@2PEAUtagPOINT@@@Z @ 0x1800F50D8 (-_GetOffsetSourceLocation@CDesktopPositioner@@AEAAXPEBUtagRECT@@U2@UtagSIZE@@2PEAUtagPOINT@@@Z.c)
 *     ?_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x1800F51D4 (-_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x1802BF664 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CDesktopPositioner::_GetOffsetRectFromSize(
        CDesktopPositioner *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        struct tagSIZE a4,
        struct tagRECT *a5)
{
  int v6; // esi
  unsigned __int32 v9; // r14d
  int WorkAreaFromRect; // edi
  __int64 v11; // rdx
  __int64 result; // rax
  int SystemMetrics; // edi
  LONG v14; // edi
  struct tagRECT *v15; // rcx
  enum DEVICE_SCALE_FACTOR ScaleFactorForRect; // eax
  CDesktopPositioner *v17; // rcx
  int v18; // r15d
  unsigned int v19; // r12d
  int v20; // edx
  unsigned int v21; // [rsp+30h] [rbp-81h]
  struct tagRECT *v23[2]; // [rsp+38h] [rbp-79h]
  struct tagSIZE v24; // [rsp+48h] [rbp-69h] BYREF
  struct tagSIZE v25[2]; // [rsp+50h] [rbp-61h]
  struct tagPOINT v26; // [rsp+60h] [rbp-51h] BYREF
  struct tagSIZE v27; // [rsp+68h] [rbp-49h]
  struct tagRECT v28; // [rsp+70h] [rbp-41h] BYREF
  _QWORD v29[2]; // [rsp+80h] [rbp-31h] BYREF
  struct tagRECT v30; // [rsp+90h] [rbp-21h] BYREF
  struct tagRECT v31; // [rsp+A0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+57h]

  v25[0] = 0LL;
  v6 = 0;
  v25[1] = 0LL;
  v27 = a4;
  v9 = 1;
  *a5 = 0u;
  if ( !a3 )
    v9 = _InterlockedIncrement(&dword_180438070);
  WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaFromRect(this, a2, &v31);
  if ( WorkAreaFromRect < 0 )
  {
    v11 = 1081LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)WorkAreaFromRect);
    return (unsigned int)WorkAreaFromRect;
  }
  WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaSizeFromRect(this, a2, &v24);
  if ( WorkAreaFromRect < 0 )
  {
    v11 = 1084LL;
    goto LABEL_5;
  }
  SystemMetrics = GetSystemMetrics(32);
  v14 = GetSystemMetrics(30) + SystemMetrics;
  v25[0].cx = v14;
  if ( a2 )
  {
    v15 = &v30;
    v30 = *a2;
  }
  else
  {
    v15 = (struct tagRECT *)v29;
    v29[0] = 0LL;
    v29[1] = 0LL;
  }
  ScaleFactorForRect = GetScaleFactorForRect(v15);
  v28 = v31;
  v17 = (CDesktopPositioner *)(unsigned int)(32 * ScaleFactorForRect);
  v18 = (int)v17 / 100;
  v25[0].cy = (int)v17 / 100;
  v21 = (v24.cx - a4.cx) / v14 + 1;
  v19 = (v24.cy - v27.cy) / ((int)v17 / 100) + 1;
  CDesktopPositioner::_GetOffsetSourceLocation(v17, a3, &v28, a4, v25[0], &v26);
  if ( v21 )
    v20 = v9 % v21;
  else
    v20 = 0;
  if ( v19 )
    v6 = v9 % v19;
  LODWORD(v23[1]) = v20 * v14 + v26.x + a4.cx;
  HIDWORD(v23[0]) = v6 * v18 + v26.y;
  HIDWORD(v23[1]) = HIDWORD(v23[0]) + v27.cy;
  result = 0LL;
  LODWORD(v23[0]) = v20 * v14 + v26.x;
  *a5 = *(struct tagRECT *)v23;
  return result;
}
