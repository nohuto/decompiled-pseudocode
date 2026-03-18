/*
 * XREFs of PspAssignPrimaryToken @ 0x140716E70
 * Callers:
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     PspLockUnlockProcessExclusive @ 0x1401261EC (PspLockUnlockProcessExclusive.c)
 *     SeCheckPrivilegedObject @ 0x14046EE78 (SeCheckPrivilegedObject.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     ObDereferenceDeviceMap @ 0x1404FC1D4 (ObDereferenceDeviceMap.c)
 *     SeIsTokenAssignableToProcess @ 0x140573A88 (SeIsTokenAssignableToProcess.c)
 *     SeExchangePrimaryToken @ 0x14072E0A8 (SeExchangePrimaryToken.c)
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
      if ( v12[0] || SeCheckPrivilegedObject(SeAssignPrimaryTokenPrivilege, a3, 0x200u, a2) )
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
