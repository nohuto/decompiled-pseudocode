/*
 * XREFs of ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x180003548
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180003228 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x1800034A0 (-OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     McTemplateU0j @ 0x18009F580 (McTemplateU0j.c)
 */

__int64 __fastcall CAnimationClockCoordinator::_ClearExpiredAnimationClocks(CAnimationClockCoordinator *this)
{
  int v1; // esi
  __int64 v2; // rdi
  __int64 v4; // rbp
  unsigned int v5; // eax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v9; // rdx
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  v2 = 0LL;
  while ( (unsigned int)v2 < *((_DWORD *)this + 20) )
  {
    if ( v1 < 0 )
      break;
    v4 = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v2);
    if ( *(_DWORD *)(v4 + 80) == 7 )
    {
      v5 = *((_DWORD *)this + 20);
      if ( (unsigned int)v2 >= v5 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x194u);
        v1 = -2147024809;
      }
      else
      {
        v6 = *((_QWORD *)this + 7);
        v7 = (unsigned int)v2;
        if ( (unsigned int)v2 < v5 - 1 )
        {
          do
          {
            v9 = (unsigned int)(v7 + 1);
            *(_QWORD *)(v6 + 8 * v7) = *(_QWORD *)(v6 + 8 * v9);
            v7 = v9;
          }
          while ( (unsigned int)v9 < *((_DWORD *)this + 20) - 1 );
        }
        --*((_DWORD *)this + 20);
        v1 = 0;
        v10 = *(_OWORD *)(v4 + 112);
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0j(v7, &UdwmAnimationClock_Destroy, &v10);
        CBaseObject::Release((CBaseObject *)v4);
      }
    }
    else
    {
      v2 = (unsigned int)(v2 + 1);
    }
  }
  return (unsigned int)v1;
}
