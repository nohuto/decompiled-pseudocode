/*
 * XREFs of PspAllocateAndQueryProcessNotificationChannel @ 0x14054A2BC
 * Callers:
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x14017F140 (ZwCreateWnfStateName.c)
 *     ZwDeleteWnfStateName @ 0x14017F2E0 (ZwDeleteWnfStateName.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140486330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140486390 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x1404BBB70 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x14054A4B0 (RtlCreateSecurityDescriptor.c)
 */

NTSTATUS __fastcall PspAllocateAndQueryProcessNotificationChannel(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  char v7; // r13
  char v8; // r14
  char v9; // al
  NTSTATUS result; // eax
  unsigned int v11; // ecx
  int *v12; // rdx
  int v13; // r8d
  int v14; // eax
  unsigned __int8 v15; // cf
  char v16; // [rsp+40h] [rbp-E8h]
  _BYTE SecurityDescriptor[40]; // [rsp+48h] [rbp-E0h] BYREF
  _WNF_STATE_NAME StateName; // [rsp+70h] [rbp-B8h] BYREF
  ACL Acl; // [rsp+80h] [rbp-A8h] BYREF

  v3 = a2 + 2040;
  v16 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  StateName = 0LL;
  if ( !*(_QWORD *)(a2 + 2040) )
  {
    RtlCreateAcl(&Acl, 0x58u, 2u);
    RtlpAddKnownAce(&Acl, 2u, 0, 1, (unsigned __int8 *)SeWorldSid, 0);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    result = ZwCreateWnfStateName(&StateName, WnfTemporaryStateName, WnfDataScopeMachine, 0, 0LL, 0, SecurityDescriptor);
    if ( result < 0 )
      return result;
    --*(_WORD *)(a1 + 484);
    ExAcquirePushLockExclusiveEx(a2 + 728, 0LL);
    if ( *(_QWORD *)v3 )
    {
      v7 = 1;
    }
    else
    {
      *(_WNF_STATE_NAME *)v3 = StateName;
      *(_QWORD *)(a2 + 2076) = *(_QWORD *)(a3 + 36);
      v16 = 1;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 728));
    KeAbPostRelease(a2 + 728);
    KeLeaveCriticalRegionThread(a1);
    v9 = v16;
  }
  v11 = 0;
  v12 = (int *)(a3 + 8);
  *(_OWORD *)a3 = *(_OWORD *)v3;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(v3 + 16);
  *(_OWORD *)(a3 + 32) = *(_OWORD *)(v3 + 32);
  do
  {
    v13 = *v12 & 0x7FFFFFFF;
    *v12 = v13;
    if ( v9 )
    {
      v14 = *(_DWORD *)(a3 + 36);
      v15 = _bittest(&v14, v11);
      v9 = v16;
      if ( v15 )
      {
        if ( v13 )
          v8 = 1;
      }
    }
    ++v11;
    ++v12;
  }
  while ( v11 < 7 );
  if ( v8 )
    ZwUpdateWnfStateData((PCWNF_STATE_NAME)v3, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( v7 )
    ZwDeleteWnfStateName(&StateName);
  return 0;
}
