/*
 * XREFs of PspAssignPrimaryToken @ 0x1406E0B70
 * Callers:
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 * Callees:
 *     PspLockUnlockProcessExclusive @ 0x14002F5E0 (PspLockUnlockProcessExclusive.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     SeIsTokenAssignableToProcess @ 0x14043FBC0 (SeIsTokenAssignableToProcess.c)
 *     ObDereferenceDeviceMap @ 0x140498984 (ObDereferenceDeviceMap.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     SeCheckPrivilegedObject @ 0x14058547C (SeCheckPrivilegedObject.c)
 *     SeExchangePrimaryToken @ 0x1406F6594 (SeExchangePrimaryToken.c)
 */

NTSTATUS __fastcall PspAssignPrimaryToken(__int64 a1, KPROCESSOR_MODE a2, ULONG_PTR a3, void *a4)
{
  NTSTATUS result; // eax
  PVOID v8; // rsi
  int IsTokenAssignableToProcess; // ebx
  signed __int64 *v10; // rdi
  PVOID v11; // rcx
  char v12[8]; // [rsp+40h] [rbp-30h] BYREF
  PVOID v13; // [rsp+48h] [rbp-28h] BYREF
  PVOID v14; // [rsp+50h] [rbp-20h] BYREF
  PVOID Object[3]; // [rsp+58h] [rbp-18h] BYREF

  result = ObReferenceObjectByHandle(a4, 1u, (POBJECT_TYPE)SeTokenObjectType, a2, &v14, 0LL);
  if ( result >= 0 )
  {
    v8 = v14;
    IsTokenAssignableToProcess = SeIsTokenAssignableToProcess((__int64)v14, v12);
    if ( IsTokenAssignableToProcess >= 0 )
    {
      if ( v12[0] || SeCheckPrivilegedObject(SeAssignPrimaryTokenPrivilege, a3, 512, a2) )
      {
        IsTokenAssignableToProcess = ObpReferenceObjectByHandleWithTag(
                                       a3,
                                       512,
                                       (__int64)PsProcessType,
                                       a2,
                                       1699967824,
                                       &v13,
                                       0LL,
                                       0LL);
        if ( IsTokenAssignableToProcess >= 0 )
        {
          v10 = (signed __int64 *)v13;
          Object[0] = 0LL;
          if ( (*((_DWORD *)v13 + 192) & 0x8000) != 0 )
          {
            IsTokenAssignableToProcess = -1073741637;
          }
          else
          {
            --*(_WORD *)(a1 + 484);
            ExAcquirePushLockSharedEx((ULONG_PTR)(v10 + 91), 0LL);
            if ( (v10[96] & 0x8000) != 0 )
              IsTokenAssignableToProcess = -1073741637;
            else
              IsTokenAssignableToProcess = SeExchangePrimaryToken(v10, v8, Object);
            if ( _InterlockedCompareExchange64(v10 + 91, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v10 + 91);
            KeAbPostRelease((ULONG_PTR)(v10 + 91));
            KeLeaveCriticalRegionThread(a1);
            v10 = (signed __int64 *)v13;
            v8 = v14;
          }
          if ( IsTokenAssignableToProcess >= 0 )
          {
            v10 = (signed __int64 *)v13;
            v11 = v13;
            *((_QWORD *)v13 + 259) = _InterlockedIncrement64(&PsNextSecurityDomain);
            PspLockUnlockProcessExclusive((__int64)v11, a1);
            ObfDereferenceObject(Object[0]);
            ObDereferenceDeviceMap((__int64)v10);
            v8 = v14;
          }
          ObfDereferenceObjectWithTag(v10, 0x65537350u);
        }
      }
      else
      {
        IsTokenAssignableToProcess = -1073741727;
      }
    }
    ObfDereferenceObject(v8);
    return IsTokenAssignableToProcess;
  }
  return result;
}
