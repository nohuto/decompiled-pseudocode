/*
 * XREFs of NtUserGetWindowRgnEx @ 0x1C00F7480
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     CalcVisRgn @ 0x1C006A5C0 (CalcVisRgn.c)
 *     IsPWNDEligibleForGDIScaling @ 0x1C009269C (IsPWNDEligibleForGDIScaling.c)
 *     MirrorRegion @ 0x1C0107644 (MirrorRegion.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C027A2E0 (GreScaleRgnToDestLogPixel.c)
 */

__int64 __fastcall NtUserGetWindowRgnEx(__int64 a1, HRGN a2, int a3)
{
  __int64 v5; // rdx
  HRGN v6; // rcx
  __int64 v7; // rdi
  int v8; // ebx
  __int64 v9; // rdx
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // r9d
  unsigned int RgnBox; // eax
  unsigned int v14; // ebx
  HRGN v16; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v17[16]; // [rsp+28h] [rbp-20h] BYREF

  v16 = a2;
  EnterSharedCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  if ( !v7 )
    goto LABEL_21;
  v8 = 63;
  if ( (unsigned int)UserUnsafeIsCurrentProcessDwm() )
    v8 = 127;
  if ( (~v8 & a3) != 0 )
  {
    UserSetLastError(1004LL, v9);
    goto LABEL_21;
  }
  v6 = v16;
  if ( !v16 )
  {
    v14 = 0;
    UserSetLastError(87LL, v9);
    goto LABEL_19;
  }
  if ( (a3 & 2) != 0 )
  {
    v10 = (2 * (a3 & 4 | 0x4000200)) | 0x10;
    if ( (a3 & 8) == 0 )
      v10 = 2 * (a3 & 4 | 0x4000200);
    v11 = v10 | 1;
    if ( (a3 & 0x10) != 0 )
      v11 = v10;
    v12 = v11 | 0x1000000;
    if ( (a3 & 0x40) == 0 )
      v12 = v11;
    CalcVisRgn(&v16, v7, (struct tagWND *)v7, v12);
    RgnBox = GreGetRgnBox(v16, v17);
  }
  else
  {
    v5 = *(_QWORD *)(v7 + 216);
    if ( !v5 || (*(_BYTE *)(v7 + 61) & 8) != 0 )
      goto LABEL_21;
    RgnBox = GreCombineRgn(v16, v5, 0LL, 5LL);
  }
  v14 = RgnBox;
  if ( !RgnBox )
  {
LABEL_21:
    v14 = 0;
    goto LABEL_19;
  }
  if ( (*(_WORD *)(v7 + 82) & 0x3FFF) != 0x29D )
    v14 = GreOffsetRgn(v16, (unsigned int)-*(_DWORD *)(v7 + 128), (unsigned int)-*(_DWORD *)(v7 + 132));
  if ( (*(_BYTE *)(v7 + 66) & 0x40) != 0 && (a3 & 1) == 0 )
    MirrorRegion(v7, v16, 0LL);
  if ( (a3 & 0x20) != 0 && IsPWNDEligibleForGDIScaling(v7) )
    GreScaleRgnToDestLogPixel(*(unsigned __int16 *)(v7 + 372), v16);
LABEL_19:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v14;
}
