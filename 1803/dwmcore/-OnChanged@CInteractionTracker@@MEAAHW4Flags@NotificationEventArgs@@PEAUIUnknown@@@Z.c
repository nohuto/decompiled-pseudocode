/*
 * XREFs of ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180194AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x180193CAC (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x180196C68 (-StopCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x1801CA3D8 (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 */

__int64 __fastcall CInteractionTracker::OnChanged(CInteractionTracker *a1, int a2, __int64 a3)
{
  int v5; // edx
  _DWORD *i; // rax

  if ( a2 == 7 )
    goto LABEL_7;
  if ( a2 > 7 )
  {
    if ( a2 <= 9 )
    {
      if ( a3 )
      {
        v5 = 0;
        for ( i = (_DWORD *)((char *)a1 + 504); !*(_QWORD *)i || *(_QWORD *)(*(_QWORD *)i + 8LL) != a3; i += 2 )
        {
          if ( (unsigned int)++v5 >= 2 )
            return 1LL;
        }
        CInteractionTracker::StopCustomAnimation(a1, v5);
        if ( *((_DWORD *)a1 + 38) == 3 )
          CInteractionTracker::CheckForIdle(a1);
      }
    }
    else if ( a2 == 10 || a2 > 11 && a2 <= 13 )
    {
LABEL_7:
      InteractionSourceManager::OnManipulationChanged((char *)a1 + 352);
    }
  }
  return 1LL;
}
