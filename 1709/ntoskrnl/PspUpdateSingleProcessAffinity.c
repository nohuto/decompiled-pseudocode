/*
 * XREFs of PspUpdateSingleProcessAffinity @ 0x140716D58
 * Callers:
 *     PspSetProcessAffinityUpdateMode @ 0x1405D8D74 (PspSetProcessAffinityUpdateMode.c)
 *     PsUpdateActiveProcessAffinity @ 0x140716588 (PsUpdateActiveProcessAffinity.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     PspWritePebAffinityInfo @ 0x14045F5C4 (PspWritePebAffinityInfo.c)
 *     PspSetProcessAffinitySafe @ 0x140716B3C (PspSetProcessAffinitySafe.c)
 */

void __fastcall PspUpdateSingleProcessAffinity(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  signed __int64 *v6; // rbx
  int v7; // esi
  int v8; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a2 + 768) & 0x80000) != 0 )
  {
    v6 = (signed __int64 *)(a2 + 728);
    v8 = 0;
    v7 = 0;
    ExAcquirePushLockSharedEx(a2 + 728, 0LL);
    if ( (*(_DWORD *)(a2 + 768) & 0x80000) != 0 )
      v7 = PspSetProcessAffinitySafe(a2, 2, a3, 0LL, &v8);
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    if ( v7 >= 0 )
    {
      if ( v8 )
        PspWritePebAffinityInfo(a1, a2);
    }
  }
}
