/*
 * XREFs of ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x1800039A8
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18000383C (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18001A148 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationClock::_TriggerAnimation(CAnimationClock *this)
{
  __int64 v1; // rdx
  int v2; // edi
  CBaseObject *v5; // rbx
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  HANDLE hObject; // [rsp+58h] [rbp+10h] BYREF
  struct CResource *v8; // [rsp+60h] [rbp+18h] BYREF

  v1 = *((_QWORD *)this + 13);
  v2 = 0;
  if ( v1 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, HANDLE *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 21)
                                                              + 224LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21),
           v1,
           &hObject);
    if ( v2 >= 0 )
    {
      v2 = (*(__int64 (__fastcall **)(_QWORD, HANDLE, __int64, unsigned int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                 + 4)
                                                                              + 120LL))(
             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
             hObject,
             1LL,
             &v6);
      if ( v2 >= 0 )
      {
        v2 = CResource::WrapExistingResource(
               *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
               v6,
               &v8);
        if ( v2 >= 0 )
        {
          v5 = v8;
          v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)v8 + 2) + 1016LL))(
                 *((_QWORD *)v8 + 2),
                 *((unsigned int *)v8 + 6),
                 *((_QWORD *)this + 11));
          CBaseObject::Release(v5);
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 128LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
          v6);
      }
      CloseHandle(hObject);
    }
  }
  return (unsigned int)v2;
}
