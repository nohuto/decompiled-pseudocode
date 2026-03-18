/*
 * XREFs of ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18016D390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18016C64C (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x18016E628 (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x18016E91C (-StopCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18016EB34 (-TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18016EC44 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 *     ?StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z @ 0x180188978 (-StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::OnChanged(__int64 a1, int a2, __int64 a3)
{
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rsi
  _BYTE *v8; // r10
  char ShouldChainAllForAxis; // r11
  int v10; // edx
  __int64 i; // rax
  struct CManipulation *v12; // rax
  struct CManipulation *v13; // rdx

  if ( a2 == 7 )
  {
    if ( a3 )
    {
      v12 = *(struct CManipulation **)(a1 + 512);
      v13 = (struct CManipulation *)(a3 - 8);
      if ( !v12 || *(_DWORD *)(a1 + 140) == 2 )
      {
        if ( (unsigned int)(*((_DWORD *)v13 + 98) - 2) <= 2 )
          CInteractionTracker::TransitionToInContact((CInteractionTracker *)a1, v13);
      }
      else if ( v12 == v13 && (unsigned int)(*((_DWORD *)v12 + 98) - 2) > 2 )
      {
        CInteractionTracker::TransitionToInertia((CInteractionTracker *)a1);
      }
    }
  }
  else if ( a2 > 7 )
  {
    if ( a2 <= 9 )
    {
      if ( a3 )
      {
        v10 = 0;
        for ( i = a1 + 392; !*(_QWORD *)i || *(_QWORD *)(*(_QWORD *)i + 8LL) != a3; i += 8LL )
        {
          if ( (unsigned int)++v10 >= 2 )
            return 1LL;
        }
        CInteractionTracker::StopCustomAnimation((CInteractionTracker *)a1, v10);
        if ( *(_DWORD *)(a1 + 140) == 3 )
          CInteractionTracker::CheckForIdle((CInteractionTracker *)a1);
      }
    }
    else if ( a2 == 10 )
    {
      if ( a3
        && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 48LL))(a3, 108LL)
        && !*(_DWORD *)(a1 + 140) )
      {
        CChainingHelper::StartIdle((CChainingHelper *)(a1 + 328), (const struct CInteractionTracker *)a1);
      }
    }
    else if ( a2 == 12 )
    {
      v5 = 0;
      if ( a3 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 48LL))(a3, 108LL) )
        {
          v7 = a3 - 8;
          if ( *(_QWORD *)(a1 + 512) == v7 || !*(_DWORD *)(a1 + 140) )
          {
            do
            {
              ShouldChainAllForAxis = CInteractionTracker::ShouldChainAllForAxis(v6, (unsigned int)v5, v7);
              if ( (*v8 & 1) != ShouldChainAllForAxis )
              {
                LOBYTE(v6) = (ShouldChainAllForAxis ^ *v8) & 1;
                *v8 ^= v6;
                *(_BYTE *)(a1 + 364) |= 1u;
              }
              ++v5;
            }
            while ( v5 < 3 );
          }
        }
      }
    }
  }
  return 1LL;
}
