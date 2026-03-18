/*
 * XREFs of HMUnlockObjectInternal @ 0x1C0047A80
 * Callers:
 *     HMAssignmentUnlock @ 0x1C0017630 (HMAssignmentUnlock.c)
 *     HMAssignmentLock @ 0x1C0017670 (HMAssignmentLock.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     ThreadUnlock1 @ 0x1C0047950 (ThreadUnlock1.c)
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     HMDestroyUnlockedObject @ 0x1C009E950 (HMDestroyUnlockedObject.c)
 */

__int64 __fastcall HMUnlockObjectInternal(__int64 a1)
{
  char *v2; // rdi
  char v3; // al
  char *v5; // rcx
  tagObjLock *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)qword_1C018E9B8 + dword_1C018E9C0 * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  v3 = v2[25];
  if ( (v3 & 1) == 0 || (v3 & 2) != 0 )
    return a1;
  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) || !ExIsResourceAcquiredSharedLite(gpresUser) )
  {
    HMDestroyUnlockedObject(v2);
  }
  else
  {
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v6);
    v5 = (char *)gpKernelHandleTable + 24 * (unsigned __int16)*(_DWORD *)a1;
    if ( !*((_QWORD *)v5 + 2) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
      if ( gpducstulHead )
        *((_QWORD *)v5 + 2) = gpducstulHead;
      gpducstulHead = (__int64)v5;
    }
    tagObjLock::UnLock(v6);
  }
  return 0LL;
}
