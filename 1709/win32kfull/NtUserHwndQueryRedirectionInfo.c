/*
 * XREFs of NtUserHwndQueryRedirectionInfo @ 0x1C01E7930
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000AC04 (UserSetLastStatus.c)
 *     IsWindowGhosted @ 0x1C0060008 (IsWindowGhosted.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     GetStyleWindow @ 0x1C006B4B0 (GetStyleWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00E6938 (RecreateRedirectionBitmap.c)
 *     GreGetDxSharedSurface @ 0x1C00E7634 (GreGetDxSharedSurface.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     GreGetDxRgn @ 0x1C024FA88 (GreGetDxRgn.c)
 *     GreGetHwndUpdateIds @ 0x1C024FCE4 (GreGetHwndUpdateIds.c)
 */

__int64 __fastcall NtUserHwndQueryRedirectionInfo(__int64 a1, int a2, _OWORD *a3, ULONG64 a4)
{
  int DxSharedSurface; // esi
  int DxRgn; // edi
  __int64 v10; // rax
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  NTSTATUS v13; // ecx
  __int64 StyleWindow; // rax
  __int64 v15; // r15
  unsigned int *v16; // rax
  unsigned int v17; // ebx
  __int64 CurrentProcess; // rax
  unsigned int v19; // r14d
  _OWORD *v20; // rax
  _OWORD *v21; // rax
  int v22; // r12d
  int v23; // r12d
  HDC DCEx; // rbx
  int HwndUpdateIds; // eax
  _DWORD *v26; // rax
  unsigned int v28; // [rsp+30h] [rbp-D8h] BYREF
  int v29; // [rsp+34h] [rbp-D4h]
  unsigned int v30; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v33[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+68h] [rbp-A0h]
  __int64 v35; // [rsp+70h] [rbp-98h]
  ULONG64 v36; // [rsp+78h] [rbp-90h]
  _OWORD Src[2]; // [rsp+A0h] [rbp-68h] BYREF

  v36 = a4;
  DxSharedSurface = -1073741811;
  memset(Src, 0, sizeof(Src));
  v32 = 0LL;
  v33[0] = 0LL;
  v31 = 0LL;
  v30 = 0;
  v28 = 0;
  DxRgn = 0;
  EnterSharedCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v34 = v10;
  if ( !v10 )
    goto LABEL_66;
  if ( a2 >= 5 )
  {
LABEL_3:
    v13 = -1073741821;
LABEL_65:
    UserSetLastStatus(v13, 1);
    goto LABEL_66;
  }
  StyleWindow = GetStyleWindow(v10, 2568);
  v15 = StyleWindow;
  if ( !StyleWindow || (*(_WORD *)(StyleWindow + 82) & 0x3FFF) == 0x29D )
  {
LABEL_64:
    v13 = DxSharedSurface;
    goto LABEL_65;
  }
  v16 = (unsigned int *)a4;
  if ( a4 >= MmUserProbeAddress )
    v16 = (unsigned int *)MmUserProbeAddress;
  v17 = *v16;
  v29 = *v16;
  if ( a2 )
  {
    v12 = (unsigned int)(a2 - 1);
    if ( a2 == 1 )
    {
      if ( !a3 )
        goto LABEL_16;
      v19 = 16;
    }
    else
    {
      v12 = (unsigned int)(a2 - 2);
      if ( a2 != 2 )
      {
        if ( a2 != 3 )
        {
          DxRgn = 0;
          goto LABEL_3;
        }
        CurrentProcess = PsGetCurrentProcess(v12, v11);
        if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
        {
          DxRgn = 0;
          v13 = -1073741790;
          goto LABEL_65;
        }
        if ( !a3 )
          goto LABEL_16;
        v19 = 16;
        if ( v17 < 0x10 )
        {
LABEL_18:
          DxRgn = 0;
          v13 = -1073741306;
          goto LABEL_65;
        }
        v29 = 16;
        v12 = MmUserProbeAddress;
        v20 = a3;
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          v20 = (_OWORD *)MmUserProbeAddress;
        Src[0] = *v20;
        goto LABEL_34;
      }
      if ( !a3 )
        goto LABEL_16;
      v19 = 4;
    }
    if ( v17 < v19 )
      goto LABEL_18;
    v29 = v19;
    goto LABEL_34;
  }
  if ( !a3 )
    goto LABEL_16;
  if ( v17 < 0x20 )
    goto LABEL_18;
  v19 = 32;
  v29 = 32;
  v12 = MmUserProbeAddress;
  v21 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v21 = (_OWORD *)MmUserProbeAddress;
  Src[0] = *v21;
  Src[1] = v21[1];
  v28 = DWORD1(Src[0]);
  if ( (DWORD1(Src[0]) & 0xFFFFFFFB) != 0 )
    goto LABEL_16;
LABEL_34:
  if ( !a2 )
  {
    v31 = *(_QWORD *)&Src[1];
    DxSharedSurface = GreGetDxSharedSurface(*(HWND *)v15, v33, &v31, &v30, &v28, &v32);
    if ( DxSharedSurface == -1071775484 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
      DxSharedSurface = RecreateRedirectionBitmap((struct tagWND *)v15, 0, 0, 0, 1, 0LL);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
      if ( DxSharedSurface < 0 )
        goto LABEL_16;
      DxSharedSurface = GreGetDxSharedSurface(*(HWND *)v15, v33, &v31, &v30, &v28, &v32);
    }
    if ( DxSharedSurface >= 0 )
    {
      *(_QWORD *)&Src[0] = __PAIR64__(v28, v30);
      *((_QWORD *)&Src[0] + 1) = v32;
      *(_QWORD *)&Src[1] = v31;
      *((_QWORD *)&Src[1] + 1) = v33[0];
      goto LABEL_58;
    }
LABEL_16:
    DxRgn = 0;
    goto LABEL_64;
  }
  v22 = a2 - 1;
  if ( !v22 )
  {
    HwndUpdateIds = GreGetHwndUpdateIds(*(HWND *)v15);
    DxSharedSurface = HwndUpdateIds;
    if ( HwndUpdateIds >= 0 )
      goto LABEL_58;
    goto LABEL_49;
  }
  v23 = v22 - 1;
  if ( !v23 )
  {
    HwndUpdateIds = GreGetDxSharedSurface(*(HWND *)v15, v33, &v31, &v30, &v28, &v32);
    DxSharedSurface = HwndUpdateIds;
    if ( HwndUpdateIds == -1073741822 )
    {
      DxSharedSurface = 0;
LABEL_50:
      LODWORD(Src[0]) = v28;
      goto LABEL_58;
    }
    if ( HwndUpdateIds >= 0 )
      goto LABEL_50;
LABEL_49:
    DxRgn = 0;
    v13 = HwndUpdateIds;
    goto LABEL_65;
  }
  if ( v23 != 1 )
    goto LABEL_58;
  if ( (*(_BYTE *)(v15 + 71) & 0x20) == 0 && !(unsigned int)IsWindowGhosted(v15) )
  {
    DCEx = (HDC)_GetDCEx(v34, 0LL, 66560LL);
    DxRgn = GreGetDxRgn(*(HWND *)v15, DCEx);
    _ReleaseDC(DCEx);
    if ( DxRgn )
    {
      if ( v35 && v34 != v15 )
        DxRgn = GreOffsetRgn(
                  v35,
                  (unsigned int)(*(_DWORD *)(v15 + 128) - *(_DWORD *)(v34 + 128)),
                  (unsigned int)(*(_DWORD *)(v15 + 132) - *(_DWORD *)(v34 + 132)));
      if ( DxRgn )
      {
        *((_QWORD *)&Src[0] + 1) = v35;
        DxSharedSurface = 0;
      }
    }
LABEL_58:
    if ( DxSharedSurface < 0 )
      goto LABEL_66;
  }
  DxRgn = 1;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (_OWORD *)MmUserProbeAddress;
  memmove(a3, Src, v19);
  v12 = MmUserProbeAddress;
  v26 = (_DWORD *)v36;
  if ( v36 >= MmUserProbeAddress )
    v26 = (_DWORD *)MmUserProbeAddress;
  *v26 = v19;
LABEL_66:
  UserSessionSwitchLeaveCrit(v12, v11);
  return DxRgn;
}
