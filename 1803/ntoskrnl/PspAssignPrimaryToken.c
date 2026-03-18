/*
 * XREFs of PspAssignPrimaryToken @ 0x1406408AC
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     PspLockUnlockProcessExclusive @ 0x1400C5D40 (PspLockUnlockProcessExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ObDereferenceDeviceMap @ 0x14050EA74 (ObDereferenceDeviceMap.c)
 *     SeIsTokenAssignableToProcess @ 0x140562F14 (SeIsTokenAssignableToProcess.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     SeCheckPrivilegedObject @ 0x1406138A4 (SeCheckPrivilegedObject.c)
 *     SeExchangePrimaryToken @ 0x140640AD0 (SeExchangePrimaryToken.c)
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
                                       0x65537350u,
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
            *((_QWORD *)v13 + 263) = _InterlockedIncrement64(&PsNextSecurityDomain);
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
