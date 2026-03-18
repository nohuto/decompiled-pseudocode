/*
 * XREFs of KiProcessSecondarySignalList @ 0x140207340
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KiAcquireSecondarySignalListLock @ 0x140206EC8 (KiAcquireSecondarySignalListLock.c)
 *     KiProcessDisconnectList @ 0x14020B3E8 (KiProcessDisconnectList.c)
 */

void __fastcall KiProcessSecondarySignalList(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 **v4; // rcx
  __int64 v5; // rax
  unsigned __int8 v6[8]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v7; // [rsp+28h] [rbp-18h] BYREF
  __int64 **v8; // [rsp+30h] [rbp-10h]

  v8 = (__int64 **)&v7;
  v7 = (__int64)&v7;
  KiAcquireSecondarySignalListLock(v6);
  if ( (__int64 *)KiSecondarySignalList != &KiSecondarySignalList )
  {
    v4 = v8;
    if ( *(__int64 **)(v7 + 8) != &v7 || *v8 != &v7 )
      __fastfail(3u);
    if ( *(__int64 **)(KiSecondarySignalList + 8) != &KiSecondarySignalList
      || *(__int64 **)qword_14036ABA8 != &KiSecondarySignalList )
    {
      __fastfail(3u);
    }
    *v8 = &KiSecondarySignalList;
    v8 = (__int64 **)qword_14036ABA8;
    *(_QWORD *)qword_14036ABA8 = &v7;
    v5 = KiSecondarySignalList;
    qword_14036ABA8 = (__int64)v4;
    if ( *(__int64 **)(KiSecondarySignalList + 8) != &KiSecondarySignalList || *v4 != &KiSecondarySignalList )
      __fastfail(3u);
    *v4 = (__int64 *)KiSecondarySignalList;
    *(_QWORD *)(v5 + 8) = v4;
    qword_14036ABA8 = (__int64)&KiSecondarySignalList;
    KiSecondarySignalList = (__int64)&KiSecondarySignalList;
  }
  KiSecondarySignalDpcRunning = 0;
  KxReleaseSpinLock(&KiSecondarySignalListLock);
  __writecr8(v6[0]);
  KiProcessDisconnectList(&v7);
}
