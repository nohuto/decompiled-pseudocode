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

unsigned __int64 __fastcall KiRemoveTimer2(__int64 a1)
{
  unsigned int v1; // esi
  unsigned __int8 *v2; // r14
  __int64 v3; // rbp
  __int64 v4; // r15
  __int64 v5; // r9
  unsigned __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 *v13; // rdx
  __int64 v14; // r8
  bool v15; // cf
  __int64 v16; // rcx
  int v18; // [rsp+68h] [rbp+10h]

  v1 = 0;
  v2 = (unsigned __int8 *)(a1 + 130);
  v3 = 0LL;
  v4 = 72LL;
  v5 = a1;
  v18 = 0;
  do
  {
    result = *v2;
    if ( (result & 0x10) != 0 )
      goto LABEL_17;
    v7 = 0x140000000LL + 24 * (result & 3) + 3884192;
    v8 = v5 + 24 * (v1 + 1LL);
    v9 = *(_QWORD *)(0x140000008LL + 24 * (result & 3) + 3884192);
    if ( (v9 & 1) != 0 )
    {
      if ( v9 == 1 )
        v10 = 0LL;
      else
        v10 = v9 ^ (v7 | 1);
    }
    else
    {
      v10 = *(_QWORD *)(v7 + 8);
    }
    result = RtlRbRemoveNode(v7, v5 + 24 * (v1 + 1LL));
    if ( v10 == v8 )
    {
      v11 = *(_QWORD *)(v7 + 8);
      v18 = 1;
      if ( (v11 & 1) != 0 )
      {
        if ( v11 == 1 )
          goto LABEL_15;
        result = v11 ^ (v7 | 1);
      }
      else
      {
        result = *(_QWORD *)(v7 + 8);
      }
      if ( !result )
      {
LABEL_15:
        *(_QWORD *)(v7 + 16) = -1LL;
        goto LABEL_16;
      }
      *(_QWORD *)(v7 + 16) = *(_QWORD *)(v4 - v3 + result - 24);
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
  if ( v18 )
  {
    result = *(_QWORD *)(v5 + 72);
    if ( KiNextTimer2DueTime == result )
    {
      v12 = -1LL;
      v13 = qword_1403B44B0;
      v14 = 4LL;
      do
      {
        result = v12;
        v12 = *v13;
        v15 = *v13 < result;
        v13 += 3;
        if ( !v15 )
          v12 = result;
        --v14;
      }
      while ( v14 );
      KiNextTimer2DueTime = v12;
    }
  }
  if ( (*(_BYTE *)(v5 + 129) & 4) != 0 && _InterlockedExchangeAdd(&KiHrTimerActiveCount, 0xFFFFFFFF) == 1 )
  {
    result = KiProcessorBlock[KiClockTimerOwner];
    v16 = *(_QWORD *)(result + 25016);
    if ( v16 )
    {
      result = (unsigned int)KiVelocityFlags;
      if ( (KiVelocityFlags & 0x40) != 0 )
      {
        result = *(unsigned __int8 *)(v16 + 27);
        if ( (_BYTE)result )
          *(_BYTE *)(v16 + 27) = 0;
      }
    }
  }
  return result;
}
