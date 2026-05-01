/*
 * XREFs of ?CheckBorderWindowAlignment@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJUtagRECT@@PEAUHWND__@@W4BorderWindowAlignment@12@PEAW4Alignment@2@@Z @ 0x180081014
 * Callers:
 *     ?Finalize@ChromeWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x180080CB0 (-Finalize@ChromeWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applica.c)
 *     ?ProcessWindowBool@QuadShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@AEAA_NPEAUHWND__@@@Z @ 0x180080E74 (-ProcessWindowBool@QuadShadowWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::CheckBorderWindowAlignment(
        RECT *lprcSrc1,
        HWND hWnd,
        int a3,
        _DWORD *a4)
{
  int v6; // ebx
  const char *v7; // r9
  __int64 v8; // rdx
  int LastError; // edi
  LONG bottom; // eax
  int v11; // esi
  LONG v12; // r13d
  LONG right; // r14d
  LONG top; // edx
  int v16; // [rsp+20h] [rbp-69h]
  LONG v17; // [rsp+20h] [rbp-69h]
  struct tagRECT v18; // [rsp+50h] [rbp-39h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-29h] BYREF
  struct tagRECT Rect; // [rsp+70h] [rbp-19h] BYREF
  RECT rcSrc2; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT rcDst; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  if ( !a3 )
  {
    v6 = 0;
    Rect = 0LL;
    if ( !GetWindowRect(hWnd, &Rect) )
    {
      v8 = 48LL;
LABEL_4:
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)v8,
                    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
                    v7);
      goto LABEL_44;
    }
    v18.left = lprcSrc1->left;
    v18.top = lprcSrc1->top;
    v18.right = lprcSrc1->right;
    bottom = lprcSrc1->bottom;
    v11 = 0;
    v18.bottom = bottom;
    v17 = bottom;
    rc = v18;
    InflateRect(&rc, 2, 2);
    v12 = Rect.bottom;
    right = Rect.right;
    if ( rc.bottom > Rect.bottom )
      v12 = rc.bottom;
    top = Rect.top;
    if ( rc.right > Rect.right )
      right = rc.right;
    if ( rc.top < Rect.top )
      top = rc.top;
    if ( rc.left > Rect.left || top != rc.top || right != rc.right || v12 != rc.bottom )
      goto LABEL_25;
    if ( (int)abs32(Rect.left - v18.left) > 2 )
    {
      if ( (int)abs32(Rect.right - v18.right) > 2 )
      {
LABEL_20:
        if ( v11 >= Rect.right - Rect.left - 4 )
        {
LABEL_25:
          LastError = 0;
          goto LABEL_44;
        }
        if ( (int)abs32(Rect.top - v18.top) > 2 )
        {
          if ( (int)abs32(Rect.bottom - v17) <= 2 )
            v6 = 8;
          goto LABEL_25;
        }
LABEL_22:
        v6 = 4;
        goto LABEL_25;
      }
      v6 = 2;
    }
    else
    {
      v6 = 1;
    }
    v11 = Rect.bottom - Rect.top;
    goto LABEL_20;
  }
  if ( a3 == 1 )
  {
    v6 = 0;
    if ( !GetWindowRect(hWnd, &v18) )
    {
      v8 = 97LL;
      goto LABEL_4;
    }
    rcSrc2 = v18;
    InflateRect(&rcSrc2, -2, -2);
    if ( IntersectRect(&rcDst, lprcSrc1, &rcSrc2) )
      goto LABEL_25;
    if ( v18.left > lprcSrc1->left + 2 || v18.right < lprcSrc1->right - 2 )
    {
      if ( v18.top <= lprcSrc1->top + 2 && v18.bottom >= lprcSrc1->bottom - 2 )
      {
        if ( (int)abs32(v18.left - lprcSrc1->right) > 2 )
        {
          if ( (int)abs32(v18.right - lprcSrc1->left) <= 2 )
            v6 = 1;
        }
        else
        {
          v6 = 2;
        }
      }
      goto LABEL_25;
    }
    if ( (int)abs32(v18.top - lprcSrc1->bottom) <= 2 )
    {
      v6 = 8;
      goto LABEL_25;
    }
    if ( (int)abs32(v18.bottom - lprcSrc1->top) > 2 )
      goto LABEL_25;
    goto LABEL_22;
  }
  v6 = v16;
  LastError = -2147467259;
LABEL_44:
  if ( LastError >= 0 )
  {
    if ( !v6 || (*a4 & v6) != 0 )
    {
      return 2147500036LL;
    }
    else
    {
      *a4 |= v6;
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1EF,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
      (const char *)(unsigned int)LastError);
    return (unsigned int)LastError;
  }
}
