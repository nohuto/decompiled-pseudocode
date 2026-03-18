/*
 * XREFs of CmpBlockTwoHiveWrites @ 0x1405C041C
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1405BFCD4 (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x1406F5CCC (CmpVirtualPathPresent.c)
 *     CmSaveMergedKeys @ 0x1407025D4 (CmSaveMergedKeys.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     CmpGetNextActiveHive @ 0x14049BA70 (CmpGetNextActiveHive.c)
 *     CmpReferenceHive @ 0x14049D1FC (CmpReferenceHive.c)
 *     CmpDeleteHive @ 0x14054D76C (CmpDeleteHive.c)
 */

__int64 __fastcall CmpBlockTwoHiveWrites(__int64 a1, __int64 a2, char a3)
{
  char v3; // r14
  char v4; // bp
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _EX_RUNDOWN_REF *v13; // rbx
  _QWORD *v15; // rcx

  v3 = 0;
  v4 = 0;
  for ( i = 0LL; ; i = v13 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v13 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
    if ( !NextActiveHive )
      break;
    if ( (__int64 *)a1 == NextActiveHive || (__int64 *)a2 == NextActiveHive )
    {
      if ( a3 )
        CmpReferenceHive((__int64)NextActiveHive);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&v13[9], 0LL);
      if ( (struct _EX_RUNDOWN_REF *)a1 == v13 )
        v3 = 1;
      else
        v4 = 1;
      if ( (!a1 || v3 == 1) && (!a2 || v4 == 1) )
      {
        ExReleaseRundownProtection(v13 + 204);
        break;
      }
    }
  }
  if ( (!a1 || v3) && (!a2 || v4) )
    return 0LL;
  if ( v3 == 1 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72), v10, v11, v12);
    KeAbPostRelease(a1 + 72);
    if ( !a3 || _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4288), 0xFFFFFFFF) != 1 )
      return 3221225524LL;
    v15 = (_QWORD *)a1;
  }
  else
  {
    if ( v4 != 1 )
      return 3221225524LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 72), v10, v11, v12);
    KeAbPostRelease(a2 + 72);
    if ( !a3 || _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 4288), 0xFFFFFFFF) != 1 )
      return 3221225524LL;
    v15 = (_QWORD *)a2;
  }
  CmpDeleteHive(v15);
  return 3221225524LL;
}
