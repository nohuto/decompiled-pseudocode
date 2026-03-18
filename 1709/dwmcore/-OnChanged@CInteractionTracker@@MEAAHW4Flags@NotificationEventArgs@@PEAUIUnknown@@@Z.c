/*
 * XREFs of ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18016C330
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016AFB8 (-AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18016B3C0 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x18016E824 (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x18016E8E8 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x18016EA90 (-StopCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18016ED74 (-TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18016EE90 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 *     ?StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z @ 0x18019265C (-StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::OnChanged(__int64 a1, int a2, struct CManipulation *a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  _BYTE *v9; // rbp
  int v10; // ebx
  _BYTE *v11; // rsi
  char ShouldChainAllForAxis; // al
  __int64 v13; // r9
  char v14; // r14
  __int64 v15; // rcx
  char v16; // r9
  int v17; // edx
  __int64 i; // rax
  struct CManipulation *v19; // rax

  if ( a2 == 7 )
  {
    if ( a3 )
    {
      v19 = *(struct CManipulation **)(a1 + 544);
      if ( !v19 || *(_DWORD *)(a1 + 152) == 2 )
      {
        if ( (unsigned int)(*((_DWORD *)a3 + 100) - 2) <= 2 )
          CInteractionTracker::TransitionToInContact((CInteractionTracker *)a1, a3);
      }
      else if ( v19 == a3 && (unsigned int)(*((_DWORD *)v19 + 100) - 2) > 2 )
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
        v17 = 0;
        for ( i = a1 + 408; !*(_QWORD *)i || *(struct CManipulation **)(*(_QWORD *)i + 8LL) != a3; i += 8LL )
        {
          if ( (unsigned int)++v17 >= 2 )
            return 1LL;
        }
        CInteractionTracker::StopCustomAnimation((CInteractionTracker *)a1, v17);
        if ( *(_DWORD *)(a1 + 152) == 3 )
          CInteractionTracker::CheckForIdle((CInteractionTracker *)a1);
      }
    }
    else if ( a2 == 10 )
    {
      if ( a3
        && (*(unsigned __int8 (__fastcall **)(struct CManipulation *, __int64))(*(_QWORD *)a3 + 48LL))(a3, 85LL)
        && !*(_DWORD *)(a1 + 152) )
      {
        CChainingHelper::StartIdle((CChainingHelper *)(a1 + 340), (const struct CInteractionTracker *)a1);
      }
    }
    else if ( a2 == 12 )
    {
      if ( a3
        && (*(unsigned __int8 (__fastcall **)(struct CManipulation *, __int64))(*(_QWORD *)a3 + 48LL))(a3, 85LL)
        && (*(struct CManipulation **)(a1 + 544) == a3 || *(_DWORD *)(a1 + 152) != 1) )
      {
        v9 = (_BYTE *)(a1 + 340);
        v10 = 0;
        v11 = v9;
        do
        {
          ShouldChainAllForAxis = CInteractionTracker::ShouldChainAllForAxis(v8, (unsigned int)v10, a3);
          LOBYTE(v13) = 1;
          v14 = ShouldChainAllForAxis;
          if ( (unsigned __int8)CInteractionTracker::ShouldChainForAxis(v15, (unsigned int)v10, a3, v13) )
          {
            LOBYTE(v8) = v16 & *v11;
            if ( (_BYTE)v8 != v14 )
            {
              *v11 = v14 | *v11 & 0xFE;
              v9[36] |= v16;
            }
          }
          ++v10;
          v11 += 12;
        }
        while ( v10 < 3 );
      }
    }
    else if ( a2 == 13 && CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
    {
      v7 = *(_QWORD *)(v5 + 544);
      if ( v7 )
      {
        if ( v7 == v6 )
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 216LL) + 376LL) |= 4u;
      }
    }
  }
  return 1LL;
}
