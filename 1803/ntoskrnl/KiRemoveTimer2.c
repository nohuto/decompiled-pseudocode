/*
 * XREFs of KiRemoveTimer2 @ 0x1400E9160
 * Callers:
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     KeCancelTimer2 @ 0x1400873D0 (KeCancelTimer2.c)
 *     KeDisableTimer2 @ 0x140087498 (KeDisableTimer2.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1400E7BC0 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiTimer2Expiration @ 0x1400E8E30 (KiTimer2Expiration.c)
 *     KiAdjustTimer2DueTimes @ 0x1401683AC (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 */

char __fastcall KiRemoveTimer2(__int64 a1)
{
  unsigned int v1; // esi
  _BYTE *v2; // r14
  __int64 v3; // rbp
  __int64 v4; // r15
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  _RTL_RB_TREE *v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 Min; // rbx
  _RTL_BALANCED_NODE *v11; // rcx
  __int64 v12; // rcx
  __int64 *v13; // rdx
  __int64 v14; // r8
  bool v15; // cf
  __int64 v16; // rcx
  int v19; // [rsp+68h] [rbp+10h]

  v1 = 0;
  v2 = (_BYTE *)(a1 + 130);
  v3 = 0LL;
  v4 = 72LL;
  v5 = a1;
  v19 = 0;
  do
  {
    LOBYTE(v6) = *v2;
    if ( (*v2 & 0x10) != 0 )
      goto LABEL_17;
    v7 = (_RTL_RB_TREE *)(0x140000000LL + 24 * (v6 & 3) + 3884192);
    v8 = v5 + 24 * (v1 + 1LL);
    v9 = *(_QWORD *)(0x140000008LL + 24 * (v6 & 3) + 3884192);
    if ( (v9 & 1) != 0 )
    {
      if ( v9 == 1 )
        Min = 0LL;
      else
        Min = v9 ^ ((unsigned __int64)v7 | 1);
    }
    else
    {
      Min = (__int64)v7->Min;
    }
    LOBYTE(v6) = RtlRbRemoveNode(v7, (PRTL_BALANCED_NODE)(v5 + 24 * (v1 + 1LL)));
    if ( Min == v8 )
    {
      v11 = v7->Min;
      v19 = 1;
      if ( ((unsigned __int8)v11 & 1) != 0 )
      {
        if ( v11 == (_RTL_BALANCED_NODE *)1 )
          goto LABEL_15;
        v6 = (unsigned __int64)v11 ^ ((unsigned __int64)v7 | 1);
      }
      else
      {
        v6 = (unsigned __int64)v7->Min;
      }
      if ( !v6 )
      {
LABEL_15:
        v7[1].Root = (_RTL_BALANCED_NODE *)-1LL;
        goto LABEL_16;
      }
      v7[1].Root = *(_RTL_BALANCED_NODE **)(v4 - v3 + v6 - 24);
    }
LABEL_16:
    v5 = a1;
LABEL_17:
    ++v1;
    v4 += 8LL;
    ++v2;
    v3 += 24LL;
  }
  while ( v1 < 2 );
  if ( v19 )
  {
    v6 = *(_QWORD *)(v5 + 72);
    if ( KiNextTimer2DueTime == v6 )
    {
      v12 = -1LL;
      v13 = qword_1403B44B0;
      v14 = 4LL;
      do
      {
        v6 = v12;
        v12 = *v13;
        v15 = *v13 < v6;
        v13 += 3;
        if ( !v15 )
          v12 = v6;
        --v14;
      }
      while ( v14 );
      KiNextTimer2DueTime = v12;
    }
  }
  if ( (*(_BYTE *)(v5 + 129) & 4) != 0 && _InterlockedExchangeAdd(&KiHrTimerActiveCount, 0xFFFFFFFF) == 1 )
  {
    v6 = KiProcessorBlock[KiClockTimerOwner];
    v16 = *(_QWORD *)(v6 + 25016);
    if ( v16 )
    {
      LOBYTE(v6) = KiVelocityFlags;
      if ( (KiVelocityFlags & 0x40) != 0 )
      {
        LOBYTE(v6) = *(_BYTE *)(v16 + 27);
        if ( (_BYTE)v6 )
          *(_BYTE *)(v16 + 27) = 0;
      }
    }
  }
  return v6;
}
