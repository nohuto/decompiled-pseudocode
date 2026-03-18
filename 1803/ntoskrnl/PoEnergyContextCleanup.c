/*
 * XREFs of PoEnergyContextCleanup @ 0x140511194
 * Callers:
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     KeQueryTimelineBitmapTime @ 0x140060590 (KeQueryTimelineBitmapTime.c)
 *     RtlStateDurationCapture @ 0x14006F8E4 (RtlStateDurationCapture.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     RtlTimelineBitmapUpdateRange @ 0x1400B8CE8 (RtlTimelineBitmapUpdateRange.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopEtEnumEnergyTrackers @ 0x14052F9D8 (PopEtEnumEnergyTrackers.c)
 *     PopEtAppIdDereference @ 0x1405350DC (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x140535108 (RtlInternEntryDereference.c)
 */

void __fastcall PoEnergyContextCleanup(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned int TimelineBitmapTime; // r15d
  __int64 v6; // r14
  unsigned __int64 *v7; // rdx
  unsigned int v8; // r8d
  unsigned __int64 *v9; // rcx
  __int64 v10; // rcx
  _QWORD v11[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(unsigned __int64 **)(a1 + 1856);
  if ( v1 )
  {
    v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v4 = 0LL;
    TimelineBitmapTime = KeQueryTimelineBitmapTime();
    v6 = 3LL;
    do
    {
      v8 = RtlStateDurationCapture((__int64)&v1[v4 + 13], &v1[v4 + 13], v3);
      if ( v7 == v1 + 13 )
      {
        v9 = v1 + 38;
      }
      else if ( v7 == v1 + 14 )
      {
        v9 = v1 + 39;
      }
      else
      {
        v9 = 0LL;
      }
      if ( v9 && v8 )
        RtlTimelineBitmapUpdateRange(v9, TimelineBitmapTime - (v8 >> 12), TimelineBitmapTime);
      ++v4;
      --v6;
    }
    while ( v6 );
    RtlStateDurationCapture((__int64)(v1 + 52), v1 + 52, v3);
    memset(v11, 0, 0x20uLL);
    LODWORD(v11[0]) = 4;
    v11[3] = v1;
    v11[1] = a1;
    PopAcquireRwLockExclusive((ULONG_PTR)(v1 + 54));
    PopEtEnumEnergyTrackers(v10, v11);
    PopReleaseRwLock((ULONG_PTR)(v1 + 54));
    if ( v1[56] )
    {
      PopEtAppIdDereference();
      v1[56] = 0LL;
    }
    if ( v1[57] )
    {
      RtlInternEntryDereference(PopEtGlobals + 56);
      v1[57] = 0LL;
    }
  }
}
