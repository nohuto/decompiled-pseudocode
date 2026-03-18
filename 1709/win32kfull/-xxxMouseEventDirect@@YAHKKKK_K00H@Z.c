/*
 * XREFs of ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C004FBB4
 * Callers:
 *     xxxSendInput @ 0x1C009CEF0 (xxxSendInput.c)
 * Callees:
 *     MSGLUA_GPQFOREGROUND @ 0x1C004FB70 (MSGLUA_GPQFOREGROUND.c)
 *     IsGpqForegroundAccessible @ 0x1C0050654 (IsGpqForegroundAccessible.c)
 *     CheckGrantedAccess @ 0x1C0050878 (CheckGrantedAccess.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMouseEventDirect(
        unsigned int a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        int a8)
{
  int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  int v18; // r9d
  unsigned int v19; // r8d
  unsigned int v20; // r8d
  __int16 v21; // ax
  int v22; // edi
  __int64 v23; // rcx
  __int16 v24; // ax
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  ULONG v29; // eax
  int v30; // ecx
  int v31; // ecx
  __int64 v33; // [rsp+38h] [rbp-30h]
  __int16 v34; // [rsp+40h] [rbp-28h] BYREF
  __int16 v35; // [rsp+42h] [rbp-26h]
  unsigned int v36; // [rsp+44h] [rbp-24h]
  int v37; // [rsp+48h] [rbp-20h]
  unsigned int v38; // [rsp+4Ch] [rbp-1Ch]
  unsigned int v39; // [rsp+50h] [rbp-18h]
  int v40; // [rsp+54h] [rbp-14h]

  v12 = 1;
  if ( *(_QWORD *)(gptiCurrent + 432LL) != grpdeskRitInput
    || !(unsigned int)CheckGrantedAccess(*(unsigned int *)(gptiCurrent + 864LL), 32LL)
    && PsGetCurrentProcess(v14, v13) != gpepCSRSS )
  {
    v29 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v29);
    return 0LL;
  }
  if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
    return 1LL;
  if ( (a4 & 0x100000) == 0 )
  {
    if ( (unsigned int)IsGpqForegroundAccessible(1LL) )
      goto LABEL_6;
    MSGLUA_GPQFOREGROUND();
    return 1LL;
  }
  if ( (a4 & 0x1FF) != 0 )
    return 1LL;
LABEL_6:
  v15 = a2;
  v16 = a5;
  EtwTraceBeginInjectMouse((unsigned int)a5, a1, v15);
  if ( a5 )
  {
    v17 = a6;
  }
  else
  {
    v16 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    v17 = MilliSecsToQpcCount(v16);
  }
  v33 = v17;
  gppiInputProvider = *(_QWORD *)(gptiCurrent + 400LL);
  if ( (a4 & 0x50000) == 0x50000 )
    return 0LL;
  v18 = 0;
  v19 = a4 & 0x187E;
  if ( ((a4 & 0x800) != 0 || (a4 & 0x1000) != 0) && (a4 & 0x180) != 0 )
  {
    v19 = a4 & 0x7E;
  }
  else if ( (a4 & 0x1800) == 0x1800 )
  {
    v19 = a4 & 0x7E;
  }
  else if ( (a4 & 0x1800) != 0 )
  {
    if ( a3 > 32766 )
    {
      v18 = 0x7FFF;
    }
    else
    {
      v18 = a3;
      if ( a3 < -32768 )
        v18 = -32768;
    }
  }
  else if ( (a3 & 0xFFFFFFFC) == 0 )
  {
    if ( (a4 & 0x80u) != 0 )
    {
      v30 = v19 | 0x80;
      if ( (a3 & 1) == 0 )
        v30 = a4 & 0x187E;
      v19 = v30;
      if ( (a3 & 2) != 0 )
        v19 = v30 | 0x200;
    }
    if ( (a4 & 0x100) != 0 )
    {
      v31 = v19 | 0x100;
      if ( (a3 & 1) == 0 )
        v31 = v19;
      v19 = v31;
      if ( (a3 & 2) != 0 )
        v19 = v31 | 0x400;
    }
  }
  v20 = v19 >> 1;
  v34 = -2;
  v21 = (a4 & 0x8000) != 0;
  v35 = v21;
  if ( (a4 & 0x4000) != 0 )
  {
    v21 |= 2u;
    v35 = v21;
  }
  if ( (a4 & 0x2000) != 0 )
  {
    v21 |= 8u;
    v35 = v21;
  }
  if ( (a4 & 0x20000) != 0 )
  {
    v21 |= 0x20u;
    v35 = v21;
  }
  v22 = 16;
  if ( (a4 & 0x10000) != 0 )
  {
    v21 |= 0x10u;
    v35 = v21;
    v12 = 0;
  }
  v23 = 64LL;
  if ( (a4 & 0x40000) != 0 )
  {
    v35 = v21 | 0x40;
    v12 = 0;
  }
  v36 = v20;
  v24 = HIWORD(v20);
  if ( v18 )
    v24 = v18;
  v38 = a1;
  v37 = 0;
  HIWORD(v36) = v24;
  v39 = a2;
  v40 = a7;
  if ( gdwInAtomicOperation )
  {
    v23 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v23, gdwInAtomicOperation);
  if ( (a4 & 1) != 0 )
  {
    if ( !v12 )
      v22 = 18;
  }
  else
  {
    v38 = 0;
    v39 = 0;
    v22 = 24;
    v35 &= ~1u;
  }
  v25 = v22 | 0xA0;
  if ( (a4 & 0x100000) == 0 )
    v25 = v22;
  v26 = v25;
  if ( gbEnforceUIPI && *(int *)(*(_QWORD *)(gptiCurrent + 400LL) + 12LL) < 0 )
    v26 = v25 | 0x40;
  v27 = v26 | 0x100;
  if ( a8 )
    v27 = v26;
  SynthesizeMouseInput(0LL, &v34, v16, v33, v27);
  if ( a8 )
    ProcessMouseEvent();
  EnterCrit(0LL, 1LL);
  if ( (gdwPUDFlags & 0x100) != 0 )
    ResetAccessibilityCountersOnMouseInput();
  EtwTraceEndInjectMouse((unsigned int)v16, a1, a2);
  return 1LL;
}
