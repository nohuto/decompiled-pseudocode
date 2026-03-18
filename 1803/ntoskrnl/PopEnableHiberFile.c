/*
 * XREFs of PopEnableHiberFile @ 0x140624E34
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     PoInitHiberServices @ 0x140624CC8 (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x140626B50 (PopNotifyPolicyDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     MmGetHighestPhysicalPage @ 0x1401063D0 (MmGetHighestPhysicalPage.c)
 *     PopOpenPowerKey @ 0x14016EC0C (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EmClientQueryRuleState @ 0x14046FAB0 (EmClientQueryRuleState.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x14051CF4C (PopRemoveReasonRecordByReasonCode.c)
 *     MmReleaseDumpHibernateResources @ 0x1405EFA0C (MmReleaseDumpHibernateResources.c)
 *     PopLogSleepDisabled @ 0x140602AE8 (PopLogSleepDisabled.c)
 *     PopCalculateHiberFileSize @ 0x140613550 (PopCalculateHiberFileSize.c)
 *     PopClearHiberFileSignature @ 0x14061422C (PopClearHiberFileSignature.c)
 *     MmAllocateDumpHibernateResources @ 0x140614550 (MmAllocateDumpHibernateResources.c)
 *     PopCheckDisabledReason @ 0x1406251B4 (PopCheckDisabledReason.c)
 *     PopPreallocateHibernateMemory @ 0x1406251EC (PopPreallocateHibernateMemory.c)
 *     PopCreateHiberFile @ 0x140625404 (PopCreateHiberFile.c)
 *     PopResetCurrentPolicies @ 0x14062625C (PopResetCurrentPolicies.c)
 *     MmZeroPageFileAtShutdown @ 0x14074A344 (MmZeroPageFileAtShutdown.c)
 *     MmReturnChargesToLockPagedPool @ 0x14074DB80 (MmReturnChargesToLockPagedPool.c)
 *     PopSaveHibernateEnabled @ 0x14075D540 (PopSaveHibernateEnabled.c)
 *     PopDeleteHiberFile @ 0x1407625E8 (PopDeleteHiberFile.c)
 *     PopZeroHiberFile @ 0x140762A08 (PopZeroHiberFile.c)
 */

__int64 __fastcall PopEnableHiberFile(char a1, char a2)
{
  char v4; // r14
  char v5; // al
  char v6; // r11
  char v7; // bl
  HANDLE v8; // rdi
  ULONG_PTR DumpHibernateResources; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  PVOID PoolWithTag; // rax
  void *v13; // rbx
  int v14; // ebx
  PVOID v16; // rdi
  PVOID v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20[8]; // [rsp+38h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-11h] BYREF
  UNICODE_STRING v25; // [rsp+70h] [rbp-1h] BYREF
  __int128 KeyValueInformation; // [rsp+80h] [rbp+Fh] BYREF
  int v27; // [rsp+90h] [rbp+1Fh]

  v4 = 0;
  PopRemoveReasonRecordByReasonCode();
  PopRemoveReasonRecordByReasonCode();
  if ( (unsigned __int64)MmGetHighestPhysicalPage(0) >= 0x100000000LL )
    PopLogSleepDisabled(8, 8, 0LL, 0LL);
  if ( !(unsigned __int8)PopCheckDisabledReason(2LL) && !(unsigned __int8)PopCheckDisabledReason(1LL) )
    PopCheckDisabledReason(15LL);
  if ( (unsigned __int8)PopCheckDisabledReason(16LL) )
    return (unsigned int)-1073741637;
  v5 = PopCheckDisabledReason(13LL);
  v7 = v6;
  if ( v5 )
    v7 = 1;
  if ( a1 )
  {
    if ( !FileObject )
    {
      dword_1403AA1C4 = 1;
      dword_1403AA1A4 = 1601;
      byte_1403AA1C1 = 0;
      dword_1403AA248 = 0;
      if ( (int)PopOpenPowerKey((__int64)&KeyHandle) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"MaxHuffRatio");
        v8 = KeyHandle;
        KeyValueInformation = 0uLL;
        v27 = 0;
        if ( ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x14u,
               &ResultLength) >= 0
          && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
        {
          dword_1403AA1C4 = HIDWORD(KeyValueInformation);
          if ( (unsigned int)(HIDWORD(KeyValueInformation) - 1) > 0x62 )
            dword_1403AA1C4 = 1;
        }
        RtlInitUnicodeString(&ValueName, L"HybridBootAnimationTime");
        KeyValueInformation = 0uLL;
        v27 = 0;
        if ( ZwQueryValueKey(v8, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
          && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
        {
          dword_1403AA1A4 = HIDWORD(KeyValueInformation);
        }
        RtlInitUnicodeString(&v25, L"MultiPhaseResumeDisabled");
        KeyValueInformation = 0uLL;
        v27 = 0;
        if ( ZwQueryValueKey(v8, &v25, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
          && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
        {
          byte_1403AA1C1 = HIDWORD(KeyValueInformation) == 1;
          dword_1403AA248 |= 0x20u;
        }
        ZwClose(v8);
      }
      if ( !PopHiberEnabled )
      {
        PopHiberEnabled = 1;
        v4 = 1;
      }
      if ( v7 )
      {
        v14 = -1073741637;
        goto LABEL_33;
      }
      DumpHibernateResources = MmAllocateDumpHibernateResources(0xD000uLL);
      v10 = DumpHibernateResources;
      if ( DumpHibernateResources )
      {
        v11 = DumpHibernateResources + 0x200000;
        if ( (DumpHibernateResources & 0x1FFFFF) != 0 )
          v11 = (DumpHibernateResources + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
        if ( v11 - DumpHibernateResources >= 0x7000 )
          v11 = DumpHibernateResources;
        PopCalculateHiberFileSize(&KeyHandle, (unsigned __int8 *)v20);
        LODWORD(KeyHandle) = PopCreateHiberFile(KeyHandle);
        if ( (int)KeyHandle < 0 )
        {
          PopLogSleepDisabled(6, 8, &KeyHandle, 4uLL);
          v14 = (int)KeyHandle;
LABEL_32:
          if ( !v10 )
            goto LABEL_33;
          MmReleaseDumpHibernateResources(v10);
          v17 = 0LL;
          v16 = 0LL;
          goto LABEL_58;
        }
        *(_QWORD *)&xmmword_1403AA1A8 = v10;
        *((_QWORD *)&xmmword_1403AA1A8 + 1) = v11;
        v10 = 0LL;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1C8uLL, 0x70616D48u);
        v13 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 0x1C8uLL);
          MemoryMap = v13;
          v14 = PopPreallocateHibernateMemory();
          if ( v14 < 0 )
            goto LABEL_33;
          LODWORD(KeyHandle) = 1;
          EmClientQueryRuleState(EM_RULE_DISABLE_MULTI_PHASE_RESUME, &KeyHandle);
          if ( (_DWORD)KeyHandle == 2 )
          {
            dword_1403AA248 |= 0x10u;
            byte_1403AA1C1 = 1;
          }
          byte_1403AAB76 = v20[0];
          BYTE8(PopCapabilities) = 1;
          if ( !InitSafeBootMode )
            byte_1403AAB72 = 1;
          PopClearHiberFileSignature();
          v14 = 0;
          goto LABEL_32;
        }
      }
      v14 = -1073741670;
      goto LABEL_33;
    }
    return 0;
  }
  if ( !PopHiberEnabled )
  {
    PopDeleteHiberFile(0LL);
    return 0;
  }
  v4 = 1;
  PopHiberEnabled = 0;
  if ( FileObject )
  {
    if ( (unsigned int)MmZeroPageFileAtShutdown() )
      PopZeroHiberFile(PopHiberInfo);
    ObfDereferenceObjectWithTag(FileObject, 0x62486F50u);
    ZwClose(PopHiberInfo);
    ExFreePoolWithTag(qword_1403AA198, 0x72626968u);
    memset(&PopHiberInfo, 0, 0xD8uLL);
    v16 = qword_1403AA1D0;
    v17 = MemoryMap;
    xmmword_1403AA1A8 = 0LL;
    BYTE8(PopCapabilities) = 0;
    byte_1403AAB76 = 0;
    byte_1403AAB72 = 0;
    qword_1403AA1B8 = 0LL;
    v14 = PopResetCurrentPolicies(v19, v18);
LABEL_58:
    if ( v16 )
    {
      MmReturnChargesToLockPagedPool(v16, Length);
      ExFreePoolWithTag(v16, 0);
      memset(&qword_1403AA1D0, 0, 0x78uLL);
    }
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0x70616D48u);
      MemoryMap = 0LL;
    }
LABEL_33:
    if ( !v4 )
      return (unsigned int)v14;
    goto LABEL_34;
  }
  v14 = 0;
LABEL_34:
  if ( a2 )
    PopSaveHibernateEnabled();
  return (unsigned int)v14;
}
