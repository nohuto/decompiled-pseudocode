/*
 * XREFs of NtUserGetWindowRgnEx @ 0x1C0062B60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IsPWNDEligibleForGDIScaling @ 0x1C0060BC4 (IsPWNDEligibleForGDIScaling.c)
 *     CalcVisRgn @ 0x1C0066160 (CalcVisRgn.c)
 *     MirrorRegion @ 0x1C00FC6C4 (MirrorRegion.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C027D840 (GreScaleRgnToDestLogPixel.c)
 */

__int64 __fastcall NtUserGetWindowRgnEx(__int64 a1, HRGN a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  HRGN v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  unsigned int RgnBox; // eax
  unsigned int v12; // edi
  HRGN v14; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v15[16]; // [rsp+28h] [rbp-20h] BYREF

  v14 = a2;
  EnterSharedCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v10 = v5;
  if ( !v5 )
    goto LABEL_14;
  if ( (a3 & 0xFFFFFFC0) != 0 )
  {
    UserSetLastError(1004LL);
    goto LABEL_14;
  }
  v7 = v14;
  if ( !v14 )
  {
    v12 = 0;
    UserSetLastError(87LL);
    goto LABEL_12;
  }
  if ( (a3 & 2) != 0 )
  {
    CalcVisRgn(&v14);
    RgnBox = GreGetRgnBox(v14, v15);
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 216);
    if ( !v6 || (*(_BYTE *)(v5 + 61) & 8) != 0 )
      goto LABEL_14;
    RgnBox = GreCombineRgn(v14, v6, 0LL, 5LL);
  }
  v12 = RgnBox;
  if ( !RgnBox )
  {
LABEL_14:
    v12 = 0;
    goto LABEL_12;
  }
  if ( (*(_WORD *)(v10 + 82) & 0x3FFF) != 0x29D )
    v12 = GreOffsetRgn(v14, (unsigned int)-*(_DWORD *)(v10 + 128), (unsigned int)-*(_DWORD *)(v10 + 132));
  LOBYTE(v7) = ((a3 & 1) == 0) & (*(_BYTE *)(v10 + 66) >> 6);
  if ( (_BYTE)v7 )
    MirrorRegion(v10, v14, 0LL);
  if ( (a3 & 0x20) != 0 && IsPWNDEligibleForGDIScaling(v10) )
    GreScaleRgnToDestLogPixel(*(unsigned __int16 *)(v10 + 372), v14);
LABEL_12:
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v12;
}
