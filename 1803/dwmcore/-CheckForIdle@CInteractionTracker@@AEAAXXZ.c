/*
 * XREFs of ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x180193CAC
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18003A130 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180194AE0 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180195F9C (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x180193928 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x180194A20 (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x180196E48 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
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
      && ((*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 60) + 272LL))(*((_QWORD *)this + 60))
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 61) + 272LL))(*((_QWORD *)this + 61))
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 62) + 272LL))(*((_QWORD *)this + 62))) )
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
  v5 = (char *)this + 504;
  while ( !*(_QWORD *)v5 || !*(_QWORD *)(*(_QWORD *)v5 + 8LL) )
  {
    ++v4;
    v5 += 8;
    if ( v4 >= 2 )
      goto LABEL_8;
  }
}
