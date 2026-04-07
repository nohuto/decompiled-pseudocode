/*
 * XREFs of ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180002D18
 * Callers:
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180002C14 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180002D18 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x180002E6C (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 *     ?Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z @ 0x180003038 (-Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x18009F3C4 (-Reset@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180002C14 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180002D18 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x180002F10 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 *     ?OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x1800034A0 (-OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18002C05C (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z @ 0x18009F538 (-s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z.c)
 *     McTemplateU0jdd @ 0x18009F5D0 (McTemplateU0jdd.c)
 */

__int64 __fastcall CAnimationClock::_SetState(const union _LARGE_INTEGER *a1, __int64 a2)
{
  __int128 v2; // rax
  int v3; // ebx
  unsigned int LowPart; // esi
  DWORD v5; // ebp
  union _LARGE_INTEGER *v6; // rdi
  bool v7; // zf
  void (__fastcall ***QuadPart)(_QWORD, CBaseObject **, _QWORD); // rcx
  void (__fastcall *v9)(_QWORD, CBaseObject **, _QWORD); // rax
  DWORD v10; // ebp
  CBaseObject *v12; // rbx
  signed __int64 HighPart; // rsi
  CBaseObject *v14[2]; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+68h] [rbp+10h]
  unsigned int v16; // [rsp+70h] [rbp+18h] BYREF
  HANDLE hObject; // [rsp+78h] [rbp+20h] BYREF

  *((_QWORD *)&v2 + 1) = a2;
  v3 = 0;
  LowPart = -1;
  v15 = 0;
  v5 = DWORD2(v2);
  v6 = (union _LARGE_INTEGER *)a1;
  if ( DWORD2(v2) == 1 )
  {
    LowPart = a1[16].LowPart;
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
    *((union _LARGE_INTEGER *)&v2 + 1) = a1[13];
    LowPart = a1[16].HighPart;
    v15 = 0;
    if ( *((_QWORD *)&v2 + 1) )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                   + 25)
                                                                + 224LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25),
              *((_QWORD *)&v2 + 1),
              &hObject);
      v3 = v15;
      if ( v15 >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(_QWORD, HANDLE, __int64, unsigned int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                    + 4)
                                                                                 + 120LL))(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
                hObject,
                1LL,
                &v16);
        v3 = v15;
        if ( v15 >= 0 )
        {
          v15 = CResource::WrapExistingResource(
                  *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                  v16,
                  v14);
          v3 = v15;
          if ( v15 >= 0 )
          {
            v12 = v14[0];
            v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, union _LARGE_INTEGER))(**((_QWORD **)v14[0] + 2) + 1016LL))(
                    *((_QWORD *)v14[0] + 2),
                    *((unsigned int *)v14[0] + 6),
                    v6[11]);
            CBaseObject::Release(v12);
            v3 = v15;
          }
          (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 128LL))(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
            v16);
        }
        CloseHandle(hObject);
      }
    }
    a1 = v6 + 11;
    if ( v6[11].QuadPart )
    {
      *(_QWORD *)&v2 = CAnimationClock::s_GetElapsedMillsecondsFromTime(a1);
      HighPart = (unsigned int)v6[16].HighPart;
      LODWORD(a1) = v2;
      v2 = (__int64)v2;
      if ( (__int64)abs64(v2) >= HighPart )
        LowPart = 0;
      else
        LowPart = HighPart - v2;
    }
LABEL_10:
    if ( v3 < 0 )
      return (unsigned int)v3;
  }
LABEL_11:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0jdd((_DWORD)a1, DWORD2(v2), (_DWORD)v6 + 112, v6[10].LowPart, v5);
  v7 = v6[9].QuadPart == 0;
  v6[10].LowPart = v5;
  if ( !v7 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)&v6[3]);
    QuadPart = (void (__fastcall ***)(_QWORD, CBaseObject **, _QWORD))v6[9].QuadPart;
    *(_OWORD *)v14 = *(_OWORD *)&v6[14].LowPart;
    v9 = **QuadPart;
    if ( (char *)v9 == (char *)CAnimationClockCoordinator::OnAnimationClockChanged )
      CAnimationClockCoordinator::OnAnimationClockChanged(QuadPart, v14, v5);
    else
      v9(QuadPart, v14, v5);
    EnterCriticalSection((LPCRITICAL_SECTION)&v6[3]);
    v3 = v15;
  }
  if ( v5 == v6[10].LowPart )
  {
    if ( LowPart != -1 )
      v3 = CAnimationClock::_SetTimer((CAnimationClock *)v6, LowPart);
    if ( v3 >= 0 )
    {
      v10 = v5 - 2;
      if ( v10 )
      {
        if ( v10 == 1 )
          return (unsigned int)CAnimationClock::_SetTime(v6, 0, 0LL);
      }
      else if ( LowPart == -1 )
      {
        CAnimationClock::_SetState(v6, 4LL);
      }
    }
  }
  return (unsigned int)v3;
}
