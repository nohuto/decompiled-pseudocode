/*
 * XREFs of ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18000383C
 * Callers:
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800036A0 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18000383C (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x180003A98 (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 *     ?Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z @ 0x180003C58 (-Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x1800A0BA8 (-Reset@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800036A0 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18000383C (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x1800039A8 (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x180003B30 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 *     ?OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x1800041F0 (-OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z @ 0x1800A0CC8 (-s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z.c)
 *     Template_jdd @ 0x1800A0D60 (Template_jdd.c)
 */

__int64 __fastcall CAnimationClock::_SetState(union _LARGE_INTEGER *a1, __int64 a2)
{
  __int128 v2; // rax
  unsigned int LowPart; // edi
  DWORD v4; // ebp
  union _LARGE_INTEGER *v5; // rsi
  int v6; // ebx
  bool v7; // zf
  void (__fastcall ***QuadPart)(_QWORD, __int128 *, _QWORD); // rcx
  void (__fastcall *v9)(_QWORD, __int128 *, _QWORD); // rax
  DWORD v10; // ebp
  signed __int64 HighPart; // rdi
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+58h] [rbp+10h]

  *((_QWORD *)&v2 + 1) = a2;
  v14 = 0;
  LowPart = -1;
  v4 = DWORD2(v2);
  v5 = a1;
  if ( DWORD2(v2) == 1 )
  {
    LowPart = a1[16].LowPart;
    v6 = 0;
    goto LABEL_10;
  }
  if ( DWORD2(v2) == 2 )
  {
    a1 += 11;
    if ( a1->QuadPart )
    {
      *(_QWORD *)&v2 = CAnimationClock::s_GetElapsedMillsecondsFromTime(a1);
      if ( (__int64)v2 > 0 )
        LowPart = v2;
    }
    else
    {
      LowPart = 0;
    }
  }
  else if ( DWORD2(v2) != 3 )
  {
    if ( DWORD2(v2) != 4 )
    {
      if ( DWORD2(v2) == 5 || DWORD2(v2) == 6 )
      {
        LowPart = 1000;
      }
      else if ( DWORD2(v2) != 7 )
      {
        return (unsigned int)-2147418113;
      }
      goto LABEL_11;
    }
    LowPart = a1[16].HighPart;
    LODWORD(v2) = CAnimationClock::_TriggerAnimation((CAnimationClock *)a1);
    a1 = v5 + 11;
    v14 = v2;
    v6 = v2;
    if ( v5[11].QuadPart )
    {
      *(_QWORD *)&v2 = CAnimationClock::s_GetElapsedMillsecondsFromTime(a1);
      HighPart = (unsigned int)v5[16].HighPart;
      LODWORD(a1) = v2;
      v2 = (__int64)v2;
      if ( (__int64)abs64(v2) >= HighPart )
        LowPart = 0;
      else
        LowPart = HighPart - v2;
    }
LABEL_10:
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
LABEL_11:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_jdd((_DWORD)a1, DWORD2(v2), (_DWORD)v5 + 112, v5[10].LowPart, v4);
  v7 = v5[9].QuadPart == 0;
  v5[10].LowPart = v4;
  if ( !v7 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)&v5[3]);
    QuadPart = (void (__fastcall ***)(_QWORD, __int128 *, _QWORD))v5[9].QuadPart;
    v13 = *(_OWORD *)&v5[14].LowPart;
    v9 = **QuadPart;
    if ( (char *)v9 == (char *)CAnimationClockCoordinator::OnAnimationClockChanged )
      CAnimationClockCoordinator::OnAnimationClockChanged(QuadPart, &v13, v4);
    else
      v9(QuadPart, &v13, v4);
    EnterCriticalSection((LPCRITICAL_SECTION)&v5[3]);
  }
  if ( v4 == v5[10].LowPart )
  {
    if ( LowPart == -1 )
      v6 = v14;
    else
      v6 = CAnimationClock::_SetTimer((CAnimationClock *)v5, LowPart);
    if ( v6 >= 0 )
    {
      v10 = v4 - 2;
      if ( v10 )
      {
        if ( v10 == 1 )
          return (unsigned int)CAnimationClock::_SetTime(v5, 0, 0LL);
      }
      else if ( LowPart == -1 )
      {
        CAnimationClock::_SetState(v5, 4LL);
      }
    }
  }
  else
  {
    return v14;
  }
  return (unsigned int)v6;
}
