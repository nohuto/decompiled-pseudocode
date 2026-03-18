/*
 * XREFs of PopEnableHiberFile @ 0x1405A92A4
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     PoInitHiberServices @ 0x1405A913C (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x1405D6760 (PopNotifyPolicyDevice.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x1400DD8FC (MmGetHighestPhysicalPage.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x14014CFA8 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EmClientQueryRuleState @ 0x140404750 (EmClientQueryRuleState.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1404C5C00 (PopRemoveReasonRecordByReasonCode.c)
 *     MmReleaseDumpHibernateResources @ 0x140577870 (MmReleaseDumpHibernateResources.c)
 *     PopCalculateHiberFileSize @ 0x14057CF08 (PopCalculateHiberFileSize.c)
 *     PopClearHiberFileSignature @ 0x14057D3F0 (PopClearHiberFileSignature.c)
 *     MmAllocateDumpHibernateResources @ 0x14057D51C (MmAllocateDumpHibernateResources.c)
 *     PopDeleteHiberFile @ 0x14059BA44 (PopDeleteHiberFile.c)
 *     PopCheckDisabledReason @ 0x1405A963C (PopCheckDisabledReason.c)
 *     PopLogSleepDisabled @ 0x1405C2380 (PopLogSleepDisabled.c)
 *     PopResetCurrentPolicies @ 0x1405C3544 (PopResetCurrentPolicies.c)
 *     PopCreateHiberFile @ 0x1405D7378 (PopCreateHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x1405D9F4C (PopPreallocateHibernateMemory.c)
 *     MmZeroPageFileAtShutdown @ 0x1406B3404 (MmZeroPageFileAtShutdown.c)
 *     MmReturnChargesToLockPagedPool @ 0x1406B694C (MmReturnChargesToLockPagedPool.c)
 *     PopSaveHibernateEnabled @ 0x1406C55C0 (PopSaveHibernateEnabled.c)
 *     PopZeroHiberFile @ 0x1406C9DDC (PopZeroHiberFile.c)
 */

__int64 __fastcall PopEnableHiberFile(char a1, char a2)
{
  PVOID v3; // rsi
  PVOID v5; // r15
  char v6; // r12
  unsigned int v7; // ebx
  bool v8; // zf
  char v9; // r11
  char v10; // r14
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  HANDLE v14; // rbx
  ULONG_PTR DumpHibernateResources; // rax
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  PVOID PoolWithTag; // rax
  void *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v22[8]; // [rsp+38h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-11h] BYREF
  UNICODE_STRING v27; // [rsp+70h] [rbp-1h] BYREF
  __int128 KeyValueInformation; // [rsp+80h] [rbp+Fh] BYREF
  int v29; // [rsp+90h] [rbp+1Fh]

  v3 = 0LL;
  v5 = 0LL;
  v6 = 0;
  PopRemoveReasonRecordByReasonCode();
  PopRemoveReasonRecordByReasonCode();
  if ( (unsigned __int64)MmGetHighestPhysicalPage(0) >= 0x100000000LL )
    PopLogSleepDisabled(8LL, 8LL, 0LL, 0LL);
  v7 = 0;
  if ( !(unsigned __int8)PopCheckDisabledReason(2LL) && !(unsigned __int8)PopCheckDisabledReason(1LL) )
    PopCheckDisabledReason(15LL);
  if ( (unsigned __int8)PopCheckDisabledReason(16LL) )
    return (unsigned int)-1073741637;
  v8 = (unsigned __int8)PopCheckDisabledReason(13LL) == 0;
  v10 = v9;
  if ( !v8 )
    v10 = 1;
  if ( a1 )
  {
    if ( FileObject )
      return v7;
    dword_14034B2E4 = 1;
    dword_14034B2C4 = 1601;
    byte_14034B2E1 = 0;
    dword_14034B368 = 0;
    if ( (int)PopOpenPowerKey((__int64)&KeyHandle) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"MaxHuffRatio");
      v14 = KeyHandle;
      KeyValueInformation = 0uLL;
      v29 = 0;
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        dword_14034B2E4 = HIDWORD(KeyValueInformation);
        if ( (unsigned int)(HIDWORD(KeyValueInformation) - 1) > 0x62 )
          dword_14034B2E4 = 1;
      }
      RtlInitUnicodeString(&ValueName, L"HybridBootAnimationTime");
      KeyValueInformation = 0uLL;
      v29 = 0;
      if ( ZwQueryValueKey(v14, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        dword_14034B2C4 = HIDWORD(KeyValueInformation);
      }
      RtlInitUnicodeString(&v27, L"MultiPhaseResumeDisabled");
      KeyValueInformation = 0uLL;
      v29 = 0;
      if ( ZwQueryValueKey(v14, &v27, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        byte_14034B2E1 = HIDWORD(KeyValueInformation) == 1;
        dword_14034B368 |= 0x20u;
      }
      ZwClose(v14);
    }
    if ( !PopHiberEnabled )
    {
      PopHiberEnabled = 1;
      v6 = 1;
    }
    if ( v10 )
    {
      v7 = -1073741637;
      goto LABEL_41;
    }
    DumpHibernateResources = MmAllocateDumpHibernateResources(0xD000uLL, v12, v13);
    v16 = DumpHibernateResources;
    if ( DumpHibernateResources )
    {
      if ( (DumpHibernateResources & 0x1FFFFF) != 0 )
        v17 = (DumpHibernateResources + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
      else
        v17 = DumpHibernateResources + 0x200000;
      if ( v17 - DumpHibernateResources >= 0x7000 )
        v17 = DumpHibernateResources;
      PopCalculateHiberFileSize(&KeyHandle, (unsigned __int8 *)v22);
      LODWORD(KeyHandle) = PopCreateHiberFile(KeyHandle);
      if ( (int)KeyHandle < 0 )
      {
        PopLogSleepDisabled(6LL, 8LL, &KeyHandle, 4LL);
        v7 = (unsigned int)KeyHandle;
LABEL_35:
        if ( v16 )
          MmReleaseDumpHibernateResources(v16);
        if ( v3 )
        {
          MmReturnChargesToLockPagedPool(v3, Length);
          ExFreePoolWithTag(v3, 0);
          memset(&qword_14034B2F0, 0, 0x78uLL);
        }
        if ( v5 )
        {
          ExFreePoolWithTag(v5, 0x70616D48u);
          MemoryMap = 0LL;
        }
LABEL_41:
        if ( !v6 )
          return v7;
        goto LABEL_42;
      }
      *(_QWORD *)&xmmword_14034B2C8 = v16;
      *((_QWORD *)&xmmword_14034B2C8 + 1) = v17;
      v16 = 0LL;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1D0uLL, 0x70616D48u);
      v19 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x1D0uLL);
        MemoryMap = v19;
        v7 = PopPreallocateHibernateMemory();
        if ( (v7 & 0x80000000) != 0 )
          goto LABEL_41;
        v3 = 0LL;
        LODWORD(KeyHandle) = 1;
        EmClientQueryRuleState(EM_RULE_DISABLE_MULTI_PHASE_RESUME, &KeyHandle);
        if ( (_DWORD)KeyHandle == 2 )
        {
          dword_14034B368 |= 0x10u;
          byte_14034B2E1 = 1;
        }
        byte_14034BC96 = v22[0];
        BYTE8(PopCapabilities) = 1;
        if ( !InitSafeBootMode )
          byte_14034BC92 = 1;
        PopClearHiberFileSignature();
        v7 = 0;
        goto LABEL_35;
      }
    }
    v7 = -1073741670;
    goto LABEL_41;
  }
  if ( !PopHiberEnabled )
  {
    PopDeleteHiberFile(0LL);
    return v7;
  }
  v6 = 1;
  PopHiberEnabled = 0;
  if ( FileObject )
  {
    if ( (unsigned int)MmZeroPageFileAtShutdown() )
      PopZeroHiberFile(PopHiberInfo);
    ObfDereferenceObject(FileObject);
    ZwClose(PopHiberInfo);
    ExFreePoolWithTag(qword_14034B2B8, 0x72626968u);
    memset(&PopHiberInfo, 0, 0xD8uLL);
    v16 = xmmword_14034B2C8;
    v3 = qword_14034B2F0;
    v5 = MemoryMap;
    xmmword_14034B2C8 = 0LL;
    BYTE8(PopCapabilities) = 0;
    byte_14034BC96 = 0;
    byte_14034BC92 = 0;
    qword_14034B2D8 = 0LL;
    v7 = PopResetCurrentPolicies(v21, v20);
    goto LABEL_35;
  }
LABEL_42:
  if ( a2 )
    PopSaveHibernateEnabled();
  return v7;
}
