/*
 * XREFs of ExpCovResetInformation @ 0x140760074
 * Callers:
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusive @ 0x140008500 (ExfAcquirePushLockExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1400A7DD0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlDuplicateUnicodeString @ 0x1404DF8A0 (RtlDuplicateUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     MmEnumerateSystemImages @ 0x1406E2040 (MmEnumerateSystemImages.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x14075F374 (ExpCovDeleteUnloadedModuleEntry.c)
 *     ExpCovIsUnLoadedModulePresent @ 0x14075F528 (ExpCovIsUnLoadedModulePresent.c)
 *     ExpCovReadRequestBuffer @ 0x14075FEEC (ExpCovReadRequestBuffer.c)
 */

__int64 __fastcall ExpCovResetInformation(unsigned __int64 a1, unsigned int a2)
{
  int v3; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *i; // rdi
  __int64 *v6; // r14
  int v7; // [rsp+20h] [rbp-A8h] BYREF
  UNICODE_STRING StringIn; // [rsp+28h] [rbp-A0h] BYREF
  __int128 v9; // [rsp+38h] [rbp-90h] BYREF
  __int64 v10; // [rsp+48h] [rbp-80h]
  _BYTE v11[16]; // [rsp+50h] [rbp-78h] BYREF
  UNICODE_STRING StringOut; // [rsp+60h] [rbp-68h] BYREF
  __int128 v13; // [rsp+70h] [rbp-58h]
  int v14; // [rsp+80h] [rbp-48h]
  __int128 v15; // [rsp+90h] [rbp-38h] BYREF

  StringIn.Buffer = 0LL;
  StringIn.Length = 0;
  StringOut.Buffer = 0LL;
  StringOut.Length = 0;
  if ( !ExCovMaxPagedPoolToUse )
    return 3221225506LL;
  if ( a2 < 0x18 )
    return 3221225476LL;
  if ( a1 >= 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  v9 = *(_OWORD *)a1;
  v10 = *(_QWORD *)(a1 + 16);
  v3 = ExpCovReadRequestBuffer((int *)&v9, &StringIn, &v15, &v7);
  if ( v3 >= 0 )
  {
    v14 = v7;
    v13 = v15;
    if ( !StringIn.Buffer || (v3 = RtlDuplicateUnicodeString(1u, &StringIn, &StringOut), v3 >= 0) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v3 = MmEnumerateSystemImages((__int64 (__fastcall *)(PVOID *, __int64))ExpCovResetInfoCallBack, (__int64)v11);
      if ( v3 >= 0 )
      {
        ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
        for ( i = (__int64 *)ExpCovUnloadedModuleList; i != &ExpCovUnloadedModuleList; i = (__int64 *)*i )
        {
          v6 = i;
          if ( i[7] && ExpCovIsUnLoadedModulePresent((__int64)i, v7, &StringIn, &v15) )
          {
            i = (__int64 *)i[1];
            ExpCovDeleteUnloadedModuleEntry(v6);
          }
        }
        ExfReleasePushLock(&ExpCovPushLock);
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
  if ( StringIn.Buffer )
    RtlFreeUnicodeString(&StringIn);
  if ( StringOut.Buffer )
    RtlFreeUnicodeString(&StringOut);
  return (unsigned int)v3;
}
