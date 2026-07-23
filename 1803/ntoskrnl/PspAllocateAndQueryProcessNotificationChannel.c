/*
 * XREFs of PspAllocateAndQueryProcessNotificationChannel @ 0x140541BF4
 * Callers:
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x1401A8D60 (ZwCreateWnfStateName.c)
 *     ZwDeleteWnfStateName @ 0x1401A8F00 (ZwDeleteWnfStateName.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404C07E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1404C76D0 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140541DF0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140541E30 (RtlCreateAcl.c)
 */

NTSTATUS __fastcall PspAllocateAndQueryProcessNotificationChannel(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  char v7; // r13
  char v8; // r14
  char v9; // al
  NTSTATUS result; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ecx
  int *v15; // rdx
  int v16; // r8d
  int v17; // eax
  unsigned __int8 v18; // cf
  char v19; // [rsp+40h] [rbp-E8h]
  _BYTE SecurityDescriptor[40]; // [rsp+48h] [rbp-E0h] BYREF
  _WNF_STATE_NAME StateName; // [rsp+70h] [rbp-B8h] BYREF
  ACL Acl; // [rsp+80h] [rbp-A8h] BYREF

  v3 = a2 + 2040;
  v19 = 0;
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
      v19 = 1;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 728), v11, v12, v13);
    KeAbPostRelease(a2 + 728);
    KeLeaveCriticalRegionThread(a1);
    v9 = v19;
  }
  v14 = 0;
  v15 = (int *)(a3 + 8);
  *(_OWORD *)a3 = *(_OWORD *)v3;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(v3 + 16);
  *(_OWORD *)(a3 + 32) = *(_OWORD *)(v3 + 32);
  do
  {
    v16 = *v15 & 0x7FFFFFFF;
    *v15 = v16;
    if ( v9 )
    {
      v17 = *(_DWORD *)(a3 + 36);
      v18 = _bittest(&v17, v14);
      v9 = v19;
      if ( v18 )
      {
        if ( v16 )
          v8 = 1;
      }
    }
    ++v14;
    ++v15;
  }
  while ( v14 < 7 );
  if ( v8 )
    ZwUpdateWnfStateData((PCWNF_STATE_NAME)v3, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( v7 )
    ZwDeleteWnfStateName(&StateName);
  return 0;
}
