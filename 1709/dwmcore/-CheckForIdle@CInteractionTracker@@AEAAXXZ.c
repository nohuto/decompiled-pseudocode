/*
 * XREFs of ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18016B3C0
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800A12A0 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18016C330 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18016DD60 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016AFB8 (-AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ.c)
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x18016C270 (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18016EC8C (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 */

void __fastcall CInteractionTracker::CheckForIdle(CInteractionTracker *this)
{
  int v2; // ecx
  int v3; // ecx
  unsigned int v4; // ecx
  char *v5; // rax
  CInteractionTracker *v6; // rcx

  v2 = *((_DWORD *)this + 38) - 1;
  if ( !v2 )
    return;
  v3 = v2 - 1;
  if ( !v3 )
  {
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this)
      && ((*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 272LL))(*((_QWORD *)this + 48))
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 49) + 272LL))(*((_QWORD *)this + 49))
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 50) + 272LL))(*((_QWORD *)this + 50))) )
    {
      return;
    }
LABEL_8:
    if ( CInteractionTracker::IsOutOfBounds(this) )
    {
      CInteractionTracker::TransitionToInertia(v6);
      return;
    }
LABEL_15:
    CInteractionTracker::TransitionToIdle(this);
    return;
  }
  if ( v3 != 1 )
    goto LABEL_15;
  v4 = 0;
  v5 = (char *)this + 408;
  while ( !*(_QWORD *)v5 || !*(_QWORD *)(*(_QWORD *)v5 + 8LL) )
  {
    ++v4;
    v5 += 8;
    if ( v4 >= 2 )
      goto LABEL_8;
  }
}
