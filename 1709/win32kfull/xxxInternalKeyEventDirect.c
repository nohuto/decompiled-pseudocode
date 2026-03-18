/*
 * XREFs of xxxInternalKeyEventDirect @ 0x1C004FED0
 * Callers:
 *     xxxSendInput @ 0x1C009CEF0 (xxxSendInput.c)
 * Callees:
 *     MSGLUA_GPQFOREGROUND @ 0x1C004FB70 (MSGLUA_GPQFOREGROUND.c)
 *     IsGpqForegroundAccessible @ 0x1C0050654 (IsGpqForegroundAccessible.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInternalKeyEventDirect(unsigned __int8 a1, __int64 a2, char a3, int a4, __int64 a5)
{
  __int16 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int16 v12; // cx
  __int64 v13; // r8
  _WORD *v14; // rdx
  __int16 v16; // cx
  __int16 v17; // ax
  __int64 CurrentProcess; // rax
  __int64 v19; // rcx
  ULONG v20; // eax
  __int16 v21; // [rsp+30h] [rbp-30h] BYREF
  __int16 v22; // [rsp+32h] [rbp-2Eh]
  int v23; // [rsp+34h] [rbp-2Ch]
  __int64 v24; // [rsp+38h] [rbp-28h]
  __int16 v25; // [rsp+40h] [rbp-20h]
  __int16 v26; // [rsp+42h] [rbp-1Eh]
  __int16 v27; // [rsp+44h] [rbp-1Ch]
  __int16 v28; // [rsp+46h] [rbp-1Ah]
  int v29; // [rsp+48h] [rbp-18h]

  v8 = a2;
  if ( *(_QWORD *)(gptiCurrent + 432LL) != grpdeskRitInput
    || PsGetCurrentProcess(grpdeskRitInput, a2) != gpepCSRSS
    && !RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 864LL), 0x20u) )
  {
    v20 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v20);
    return 0LL;
  }
  if ( !(unsigned int)IsGpqForegroundAccessible(1LL) )
  {
    MSGLUA_GPQFOREGROUND();
    return 1LL;
  }
  if ( (a3 & 8) == 0 && ((unsigned __int8)(a1 + 61) <= 0x17u || (unsigned __int8)(a1 + 120) <= 7u) )
  {
    CurrentProcess = PsGetCurrentProcess(v10, v9);
    if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    {
      if ( !gpqForeground )
        return 0LL;
      v19 = *(_QWORD *)(gpqForeground + 112LL);
      if ( !v19
        || !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 400LL))
        || (*(_DWORD *)(gpqForeground + 380LL) & 0x2000000) == 0 )
      {
        return 0LL;
      }
    }
  }
  LOBYTE(v21) = v8;
  v11 = 256LL;
  v24 = 0LL;
  if ( (a3 & 8) != 0 )
  {
    LOBYTE(v11) = (a3 & 1) != 0 ? 0xE0 : 0;
    a1 = VKFromVSC(&v21, v11, gafRawKeyState);
    v12 = a1;
    v22 = a1;
  }
  else
  {
    switch ( a1 )
    {
      case 0x10u:
        a1 = ((v8 & 0x7F) == 54) - 96;
        break;
      case 0x11u:
        a1 = a3 & 1 | 0xA2;
        break;
      case 0x12u:
        a1 = a3 & 1 | 0xA4;
        break;
    }
    v12 = a1 | 0x2000;
    v22 = v12;
    if ( a1 == 0xA1 )
    {
      v12 |= 0x100u;
      v22 = v12;
    }
  }
  if ( (a3 & 2) != 0 )
  {
    v12 |= 0x8000u;
    v22 = v12;
  }
  if ( (a3 & 4) != 0 )
  {
    v17 = 4096;
    v21 = v8;
LABEL_33:
    v16 = v17 | v12;
    goto LABEL_30;
  }
  if ( (a3 & 1) != 0 )
  {
    v16 = v12 | 0x100;
LABEL_30:
    v22 = v16;
    goto LABEL_25;
  }
  if ( (unsigned __int8)(a1 - 96) <= 9u || a1 == 110 )
  {
LABEL_35:
    v17 = 2048;
    goto LABEL_33;
  }
  if ( ausNumPadCvt )
  {
    v13 = 0LL;
    v14 = (_WORD *)ausNumPadCvt;
    while ( a1 != *(_BYTE *)v14 )
    {
      ++v13;
      v14 = (_WORD *)((char *)&ausNumPadCvt + 2 * v13);
      if ( !*v14 )
        goto LABEL_25;
    }
    goto LABEL_35;
  }
LABEL_25:
  v26 = (unsigned __int8)v8;
  v27 = (a3 & 2) != 0;
  if ( (a3 & 1) != 0 )
    v27 = ((a3 & 2) != 0) | 2;
  v25 = -2;
  v28 = 0;
  v29 = a5;
  gppiInputProvider = *(_QWORD *)(gptiCurrent + 400LL);
  v23 = a4;
  xxxProcessKeyEvent(&v21, a5, 1LL, 0LL, 0LL);
  return 1LL;
}
