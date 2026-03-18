/*
 * XREFs of NtUserHwndQueryRedirectionInfo @ 0x1C01DB6E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C00053F0 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IsWindowGhosted @ 0x1C005CE98 (IsWindowGhosted.c)
 *     GetStyleWindow @ 0x1C0067050 (GetStyleWindow.c)
 *     GreGetDxSharedSurface @ 0x1C009CA40 (GreGetDxSharedSurface.c)
 *     RecreateRedirectionBitmap @ 0x1C009DE40 (RecreateRedirectionBitmap.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     GreGetDxRgn @ 0x1C024E018 (GreGetDxRgn.c)
 *     GreGetHwndUpdateIds @ 0x1C024E270 (GreGetHwndUpdateIds.c)
 */

__int64 __fastcall NtUserHwndQueryRedirectionInfo(__int64 a1, int a2, _OWORD *a3, int *a4)
{
  int DxSharedSurface; // esi
  int DxRgn; // edi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  NTSTATUS v15; // ecx
  __int64 StyleWindow; // rax
  __int64 v17; // r12
  unsigned int *v18; // rax
  unsigned int v19; // ebx
  __int64 CurrentProcess; // rax
  size_t v21; // r15
  int v22; // r13d
  _OWORD *v23; // rax
  _OWORD *v24; // rax
  int v25; // r14d
  int v26; // r14d
  HDC DCEx; // rbx
  int HwndUpdateIds; // eax
  void *v29; // rax
  int *v30; // rax
  __int64 v32; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v36[2]; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD *v37; // [rsp+60h] [rbp-A8h]
  __int64 v38; // [rsp+70h] [rbp-98h]
  __int64 v39; // [rsp+78h] [rbp-90h]
  int *v40; // [rsp+80h] [rbp-88h]
  _OWORD Src[2]; // [rsp+A8h] [rbp-60h] BYREF

  v40 = a4;
  v37 = a3;
  DxSharedSurface = -1073741811;
  memset(Src, 0, sizeof(Src));
  v35 = 0LL;
  v36[0] = 0LL;
  v34 = 0LL;
  v33 = 0;
  v32 = 0LL;
  DxRgn = 0;
  EnterSharedCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v38 = v10;
  if ( !v10 )
    goto LABEL_65;
  if ( a2 >= 5 )
  {
LABEL_3:
    v15 = -1073741821;
LABEL_64:
    UserSetLastStatus(v15, 1);
    goto LABEL_65;
  }
  StyleWindow = GetStyleWindow(v10, 2568);
  v17 = StyleWindow;
  if ( !StyleWindow || (*(_WORD *)(StyleWindow + 82) & 0x3FFF) == 0x29D )
  {
LABEL_63:
    v15 = DxSharedSurface;
    goto LABEL_64;
  }
  v18 = (unsigned int *)a4;
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    v18 = (unsigned int *)W32UserProbeAddress;
  v19 = *v18;
  HIDWORD(v32) = *v18;
  if ( a2 )
  {
    v12 = (unsigned int)(a2 - 1);
    if ( a2 == 1 )
    {
      if ( !a3 )
        goto LABEL_16;
      v21 = 16LL;
      if ( v19 < 0x10 )
        goto LABEL_18;
      v22 = 16;
      HIDWORD(v32) = 16;
    }
    else
    {
      v12 = (unsigned int)(a2 - 2);
      if ( a2 == 2 )
      {
        if ( !a3 )
          goto LABEL_16;
        v22 = 4;
        if ( v19 < 4 )
          goto LABEL_18;
        HIDWORD(v32) = 4;
        v21 = 4LL;
      }
      else
      {
        if ( a2 != 3 )
        {
          DxRgn = 0;
          goto LABEL_3;
        }
        CurrentProcess = PsGetCurrentProcess(v12);
        if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
        {
          DxRgn = 0;
          v15 = -1073741790;
          goto LABEL_64;
        }
        if ( !a3 )
          goto LABEL_16;
        v21 = 16LL;
        if ( v19 < 0x10 )
        {
LABEL_18:
          DxRgn = 0;
          v15 = -1073741306;
          goto LABEL_64;
        }
        v22 = 16;
        HIDWORD(v32) = 16;
        v12 = W32UserProbeAddress;
        v23 = v37;
        if ( (unsigned __int64)v37 >= W32UserProbeAddress )
          v23 = (_OWORD *)W32UserProbeAddress;
        Src[0] = *v23;
      }
    }
  }
  else
  {
    if ( !a3 )
      goto LABEL_16;
    if ( v19 < 0x20 )
      goto LABEL_18;
    v22 = 32;
    HIDWORD(v32) = 32;
    v12 = W32UserProbeAddress;
    v24 = a3;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      v24 = (_OWORD *)W32UserProbeAddress;
    Src[0] = *v24;
    Src[1] = v24[1];
    LODWORD(v32) = DWORD1(Src[0]);
    v21 = 32LL;
    if ( (DWORD1(Src[0]) & 0xFFFFFFFB) != 0 )
      goto LABEL_16;
  }
  if ( !a2 )
  {
    v34 = *(_QWORD *)&Src[1];
    DxSharedSurface = GreGetDxSharedSurface(*(HWND *)v17, v36, &v34, &v33, &v32, &v35);
    if ( DxSharedSurface == -1071775484 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
      DxSharedSurface = RecreateRedirectionBitmap((struct tagWND *)v17, 0, 0, 0, 1, 0LL);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
      if ( DxSharedSurface < 0 )
        goto LABEL_16;
      DxSharedSurface = GreGetDxSharedSurface(*(HWND *)v17, v36, &v34, &v33, &v32, &v35);
    }
    if ( DxSharedSurface >= 0 )
    {
      *(_QWORD *)&Src[0] = __PAIR64__(v32, v33);
      *((_QWORD *)&Src[0] + 1) = v35;
      *(_QWORD *)&Src[1] = v34;
      *((_QWORD *)&Src[1] + 1) = v36[0];
      goto LABEL_57;
    }
LABEL_16:
    DxRgn = 0;
    goto LABEL_63;
  }
  v25 = a2 - 1;
  if ( !v25 )
  {
    HwndUpdateIds = GreGetHwndUpdateIds(*(HWND *)v17);
    DxSharedSurface = HwndUpdateIds;
    if ( HwndUpdateIds >= 0 )
      goto LABEL_57;
    goto LABEL_48;
  }
  v26 = v25 - 1;
  if ( !v26 )
  {
    HwndUpdateIds = GreGetDxSharedSurface(*(HWND *)v17, v36, &v34, &v33, &v32, &v35);
    DxSharedSurface = HwndUpdateIds;
    if ( HwndUpdateIds == -1073741822 )
    {
      DxSharedSurface = 0;
LABEL_49:
      LODWORD(Src[0]) = v32;
      goto LABEL_57;
    }
    if ( HwndUpdateIds >= 0 )
      goto LABEL_49;
LABEL_48:
    DxRgn = 0;
    v15 = HwndUpdateIds;
    goto LABEL_64;
  }
  if ( v26 != 1 )
    goto LABEL_57;
  if ( (*(_BYTE *)(v17 + 71) & 0x20) == 0 && !(unsigned int)IsWindowGhosted(v17) )
  {
    DCEx = (HDC)_GetDCEx(v38, 0LL, 66560LL);
    DxRgn = GreGetDxRgn(*(HWND *)v17, DCEx);
    _ReleaseDC(DCEx);
    if ( DxRgn )
    {
      if ( v39 && v38 != v17 )
        DxRgn = GreOffsetRgn(
                  v39,
                  (unsigned int)(*(_DWORD *)(v17 + 128) - *(_DWORD *)(v38 + 128)),
                  (unsigned int)(*(_DWORD *)(v17 + 132) - *(_DWORD *)(v38 + 132)));
      if ( DxRgn )
      {
        *((_QWORD *)&Src[0] + 1) = v39;
        DxSharedSurface = 0;
      }
    }
LABEL_57:
    if ( DxSharedSurface < 0 )
      goto LABEL_65;
  }
  DxRgn = 1;
  v29 = v37;
  if ( (unsigned __int64)v37 >= W32UserProbeAddress )
    v29 = (void *)W32UserProbeAddress;
  memmove(v29, Src, v21);
  v12 = W32UserProbeAddress;
  v30 = v40;
  if ( (unsigned __int64)v40 >= W32UserProbeAddress )
    v30 = (int *)W32UserProbeAddress;
  *v30 = v22;
LABEL_65:
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return DxRgn;
}
