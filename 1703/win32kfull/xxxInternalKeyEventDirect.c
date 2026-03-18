/*
 * XREFs of xxxInternalKeyEventDirect @ 0x1C003B7CC
 * Callers:
 *     xxxSendInput @ 0x1C003B1F0 (xxxSendInput.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00B8A98 (IsForegroundShellFrameQueueAccessible.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInternalKeyEventDirect(unsigned __int8 a1, __int16 a2, char a3, int a4, __int64 a5)
{
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int16 v13; // cx
  __int64 v14; // r8
  _WORD *v15; // rdx
  unsigned __int64 v17; // rax
  __int16 v18; // cx
  __int16 v19; // ax
  ULONG v20; // eax
  __int64 CurrentProcess; // rax
  __int64 v22; // rcx
  __int16 v23; // [rsp+30h] [rbp-30h] BYREF
  __int16 v24; // [rsp+32h] [rbp-2Eh]
  int v25; // [rsp+34h] [rbp-2Ch]
  __int64 v26; // [rsp+38h] [rbp-28h]
  __int16 v27; // [rsp+40h] [rbp-20h]
  __int16 v28; // [rsp+42h] [rbp-1Eh]
  __int16 v29; // [rsp+44h] [rbp-1Ch]
  __int16 v30; // [rsp+46h] [rbp-1Ah]
  int v31; // [rsp+48h] [rbp-18h]

  if ( *(_QWORD *)(gptiCurrent + 408LL) == grpdeskRitInput
    && (PsGetCurrentProcess(grpdeskRitInput) == gpepCSRSS
     || RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 776LL), 0x20u)) )
  {
    v9 = gpqForeground;
    if ( gpqForeground )
    {
      v10 = *(_QWORD *)(gptiCurrent + 376LL);
      v9 = *(_QWORD *)(gpqForeground + 380LL);
      v11 = *(_QWORD *)(v10 + 824);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v11 <= (unsigned int)v9 )
        {
          if ( (_DWORD)v11 != (_DWORD)v9
            || (v17 = HIDWORD(v11), v9 >>= 32, (_DWORD)v17 != (_DWORD)v9) && (_DWORD)v9 != -1 && (_DWORD)v17 != -1 )
          {
            if ( *(int *)(v10 + 12) >= 0 && !(unsigned int)IsForegroundShellFrameQueueAccessible(gptiCurrent) )
            {
              EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
              return 1LL;
            }
          }
        }
      }
    }
    if ( (a3 & 8) != 0
      || (unsigned __int8)(a1 + 61) > 0x17u && (unsigned __int8)(a1 + 120) > 7u
      || (CurrentProcess = PsGetCurrentProcess(v9), !(unsigned int)IsProcessDwm(CurrentProcess))
      || gpqForeground
      && (v22 = *(_QWORD *)(gpqForeground + 80LL)) != 0
      && (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 376LL))
      && (*(_DWORD *)(gpqForeground + 340LL) & 0x2000000) != 0 )
    {
      LOBYTE(v23) = a2;
      v26 = 0LL;
      v12 = 256LL;
      if ( (a3 & 8) != 0 )
      {
        LOBYTE(v12) = (a3 & 1) != 0 ? 0xE0 : 0;
        a1 = VKFromVSC(&v23, v12, gafRawKeyState);
        v13 = a1;
        v24 = a1;
      }
      else
      {
        switch ( a1 )
        {
          case 0x10u:
            a1 = ((a2 & 0x7F) == 54) - 96;
            break;
          case 0x11u:
            a1 = a3 & 1 | 0xA2;
            break;
          case 0x12u:
            a1 = a3 & 1 | 0xA4;
            break;
        }
        v13 = a1 | 0x2000;
        v24 = v13;
        if ( a1 == 0xA1 )
        {
          v13 |= 0x100u;
          v24 = v13;
        }
      }
      if ( (a3 & 2) != 0 )
      {
        v13 |= 0x8000u;
        v24 = v13;
      }
      if ( (a3 & 4) != 0 )
      {
        v19 = 4096;
        v23 = a2;
      }
      else
      {
        if ( (a3 & 1) != 0 )
        {
          v18 = v13 | 0x100;
LABEL_37:
          v24 = v18;
          goto LABEL_27;
        }
        if ( (unsigned __int8)(a1 - 96) > 9u && a1 != 110 )
        {
          if ( !ausNumPadCvt )
          {
LABEL_27:
            v28 = (unsigned __int8)a2;
            v29 = (a3 & 2) != 0;
            if ( (a3 & 1) != 0 )
              v29 = ((a3 & 2) != 0) | 2;
            v27 = -2;
            v30 = 0;
            v31 = a5;
            gppiInputProvider = *(_QWORD *)(gptiCurrent + 376LL);
            v25 = a4;
            xxxProcessKeyEvent(&v23, a5, 1LL, 0LL, 0LL);
            return 1LL;
          }
          v14 = 0LL;
          v15 = (_WORD *)ausNumPadCvt;
          while ( a1 != *(_BYTE *)v15 )
          {
            ++v14;
            v15 = (_WORD *)((char *)&ausNumPadCvt + 2 * v14);
            if ( !*v15 )
              goto LABEL_27;
          }
        }
        v19 = 2048;
      }
      v18 = v19 | v13;
      goto LABEL_37;
    }
  }
  else
  {
    v20 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v20);
  }
  return 0LL;
}
