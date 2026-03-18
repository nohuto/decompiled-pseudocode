/*
 * XREFs of PoEnergyContextCleanup @ 0x140498B70
 * Callers:
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KeQueryTimelineBitmapTime @ 0x1401FD9A4 (KeQueryTimelineBitmapTime.c)
 *     RtlStateDurationCapture @ 0x140234EC4 (RtlStateDurationCapture.c)
 *     RtlTimelineBitmapUpdateRange @ 0x140234FD8 (RtlTimelineBitmapUpdateRange.c)
 *     PopEtAppIdDereference @ 0x1406D0D30 (PopEtAppIdDereference.c)
 *     PopEtEnumEnergyTrackers @ 0x1406D26C4 (PopEtEnumEnergyTrackers.c)
 *     RtlInternEntryDereference @ 0x1406EF188 (RtlInternEntryDereference.c)
 */

void __fastcall PoEnergyContextCleanup(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // r14
  __int64 v4; // rsi
  unsigned int TimelineBitmapTime; // r12d
  __int64 v6; // r15
  _QWORD *v7; // rbx
  unsigned int v8; // r8d
  unsigned int *v9; // rcx
  __int64 v10; // rcx
  _QWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 1832);
  if ( v1 )
  {
    v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v4 = 0LL;
    TimelineBitmapTime = KeQueryTimelineBitmapTime();
    v6 = 3LL;
    do
    {
      v7 = (_QWORD *)(v4 + v1 + 104);
      v8 = RtlStateDurationCapture((__int64)v7, v7, v3);
      if ( v7 == (_QWORD *)(v1 + 104) )
      {
        v9 = (unsigned int *)(v1 + 304);
      }
      else if ( v7 == (_QWORD *)(v1 + 112) )
      {
        v9 = (unsigned int *)(v1 + 312);
      }
      else
      {
        v9 = 0LL;
      }
      if ( v9 && v8 )
        RtlTimelineBitmapUpdateRange(v9, TimelineBitmapTime - (v8 >> 12), TimelineBitmapTime);
      v4 += 8LL;
      --v6;
    }
    while ( v6 );
    memset(v11, 0, sizeof(v11));
    LODWORD(v11[2]) = 4;
    v11[3] = v1;
    v11[0] = a1;
    PopAcquireRwLockExclusive(v1 + 344);
    PopEtEnumEnergyTrackers(v10, v11);
    PopReleaseRwLock(v1 + 344);
    if ( *(_QWORD *)(v1 + 360) )
    {
      PopEtAppIdDereference();
      *(_QWORD *)(v1 + 360) = 0LL;
    }
    if ( *(_QWORD *)(v1 + 368) )
    {
      RtlInternEntryDereference(PopEtGlobals + 56);
      *(_QWORD *)(v1 + 368) = 0LL;
    }
  }
}
