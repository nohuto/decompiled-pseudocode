/*
 * XREFs of PopEnableHiberFile @ 0x1405AD8E0
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     PoInitHiberServices @ 0x1405AD774 (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x140706F40 (PopNotifyPolicyDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     MmGetHighestPhysicalPage @ 0x1401167C8 (MmGetHighestPhysicalPage.c)
 *     PopOpenPowerKey @ 0x14013A270 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     EmClientQueryRuleState @ 0x140424330 (EmClientQueryRuleState.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1404E89AC (PopRemoveReasonRecordByReasonCode.c)
 *     PopCheckDisabledReason @ 0x1405ADA0C (PopCheckDisabledReason.c)
 *     PopDeleteHiberFile @ 0x1405ADA44 (PopDeleteHiberFile.c)
 *     PopResetCurrentPolicies @ 0x1405B8D04 (PopResetCurrentPolicies.c)
 *     PopLogSleepDisabled @ 0x1405D5670 (PopLogSleepDisabled.c)
 *     MmZeroPageFileAtShutdown @ 0x1406DF3D4 (MmZeroPageFileAtShutdown.c)
 *     MmAllocateDumpHibernateResources @ 0x1406E24F0 (MmAllocateDumpHibernateResources.c)
 *     MmReleaseDumpHibernateResources @ 0x1406E2588 (MmReleaseDumpHibernateResources.c)
 *     MmReturnChargesToLockPagedPool @ 0x1406E3484 (MmReturnChargesToLockPagedPool.c)
 *     PopSaveHibernateEnabled @ 0x1406F5704 (PopSaveHibernateEnabled.c)
 *     PopCalculateHiberFileSize @ 0x1406FB2DC (PopCalculateHiberFileSize.c)
 *     PopClearHiberFileSignature @ 0x1406FB3D4 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x1406FB4BC (PopCreateHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x1406FBE3C (PopPreallocateHibernateMemory.c)
 *     PopZeroHiberFile @ 0x1406FC79C (PopZeroHiberFile.c)
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
  __int64 v12; // rdi
  HANDLE v13; // rbx
  __int64 DumpHibernateResources; // rax
  unsigned __int64 v15; // rbx
  PVOID PoolWithTag; // rax
  void *v17; // rbx
  char v18[8]; // [rsp+38h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-11h] BYREF
  UNICODE_STRING v23; // [rsp+70h] [rbp-1h] BYREF
  __int128 KeyValueInformation; // [rsp+80h] [rbp+Fh] BYREF
  int v25; // [rsp+90h] [rbp+1Fh]

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
    dword_140365B44 = 1;
    dword_140365B24 = 1601;
    byte_140365B41 = 0;
    dword_140365BC8 = 0;
    if ( (int)PopOpenPowerKey((__int64)&KeyHandle) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"MaxHuffRatio");
      v13 = KeyHandle;
      KeyValueInformation = 0uLL;
      v25 = 0;
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        dword_140365B44 = HIDWORD(KeyValueInformation);
        if ( (unsigned int)(HIDWORD(KeyValueInformation) - 1) > 0x62 )
          dword_140365B44 = 1;
      }
      RtlInitUnicodeString(&ValueName, L"HybridBootAnimationTime");
      KeyValueInformation = 0uLL;
      v25 = 0;
      if ( ZwQueryValueKey(v13, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        dword_140365B24 = HIDWORD(KeyValueInformation);
      }
      RtlInitUnicodeString(&v23, L"MultiPhaseResumeDisabled");
      KeyValueInformation = 0uLL;
      v25 = 0;
      if ( ZwQueryValueKey(v13, &v23, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        byte_140365B41 = HIDWORD(KeyValueInformation) == 1;
        dword_140365BC8 |= 0x20u;
      }
      ZwClose(v13);
    }
    if ( !PopHiberEnabled )
    {
      PopHiberEnabled = 1;
      v6 = 1;
    }
    if ( v10 )
    {
      v7 = -1073741637;
      goto LABEL_58;
    }
    DumpHibernateResources = MmAllocateDumpHibernateResources(53248LL);
    v12 = DumpHibernateResources;
    if ( DumpHibernateResources )
    {
      if ( (DumpHibernateResources & 0x1FFFFF) != 0 )
        v15 = (DumpHibernateResources + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
      else
        v15 = DumpHibernateResources + 0x200000;
      if ( v15 - DumpHibernateResources >= 0x7000 )
        v15 = DumpHibernateResources;
      PopCalculateHiberFileSize(&KeyHandle, v18);
      LODWORD(KeyHandle) = PopCreateHiberFile(KeyHandle);
      if ( (int)KeyHandle < 0 )
      {
        PopLogSleepDisabled(6LL, 8LL, &KeyHandle, 4LL);
        v7 = (unsigned int)KeyHandle;
        goto LABEL_52;
      }
      *(_QWORD *)&xmmword_140365B28 = v12;
      *((_QWORD *)&xmmword_140365B28 + 1) = v15;
      v12 = 0LL;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1D0uLL, 0x70616D48u);
      v17 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x1D0uLL);
        MemoryMap = v17;
        v7 = PopPreallocateHibernateMemory();
        if ( (v7 & 0x80000000) != 0 )
          goto LABEL_58;
        v3 = 0LL;
        LODWORD(KeyHandle) = 1;
        EmClientQueryRuleState(EM_RULE_DISABLE_MULTI_PHASE_RESUME, &KeyHandle);
        if ( (_DWORD)KeyHandle == 2 )
        {
          dword_140365BC8 |= 0x10u;
          byte_140365B41 = 1;
        }
        byte_140366316 = v18[0];
        BYTE8(PopCapabilities) = 1;
        if ( !InitSafeBootMode )
          byte_140366312 = 1;
        PopClearHiberFileSignature();
        v7 = 0;
LABEL_52:
        if ( v12 )
          MmReleaseDumpHibernateResources(v12, 53248LL);
        if ( v3 )
        {
          MmReturnChargesToLockPagedPool(v3, Length);
          ExFreePoolWithTag(v3, 0);
          memset(&qword_140365B50, 0, 0x78uLL);
        }
        if ( v5 )
        {
          ExFreePoolWithTag(v5, 0x70616D48u);
          MemoryMap = 0LL;
        }
LABEL_58:
        if ( !v6 )
          return v7;
        goto LABEL_59;
      }
    }
    v7 = -1073741670;
    goto LABEL_58;
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
    ExFreePoolWithTag(qword_140365B18, 0x72626968u);
    memset(&PopHiberInfo, 0, 0xD8uLL);
    v12 = xmmword_140365B28;
    v3 = qword_140365B50;
    v5 = MemoryMap;
    xmmword_140365B28 = 0LL;
    BYTE8(PopCapabilities) = 0;
    byte_140366316 = 0;
    byte_140366312 = 0;
    qword_140365B38 = 0LL;
    v7 = PopResetCurrentPolicies();
    goto LABEL_52;
  }
LABEL_59:
  if ( a2 )
    PopSaveHibernateEnabled();
  return v7;
}
