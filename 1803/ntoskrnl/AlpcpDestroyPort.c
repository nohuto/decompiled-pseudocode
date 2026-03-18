/*
 * XREFs of AlpcpDestroyPort @ 0x14055F610
 * Callers:
 *     AlpcpDeletePort @ 0x14055F430 (AlpcpDeletePort.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall AlpcpDestroyPort(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *v5; // rcx
  __int64 **v6; // rax
  char v7; // al
  void *v8; // rdx

  if ( *a1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpPortListLock, 0LL);
    v5 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v6 = (__int64 **)a1[1], *v6 != a1) )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = (__int64)v6;
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpPortListLock, v2, v3, v4);
    KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
  }
  if ( (a1[52] & 0x200) != 0 )
  {
    v8 = (void *)a1[31];
    if ( v8 )
      ExFreeToNPagedLookasideList(&AlpcpNPLookasides, v8);
  }
}
