/*
 * XREFs of PopLogSleepDisabled @ 0x140602AE8
 * Callers:
 *     PopLogDisabledSleepReason @ 0x14051CCD4 (PopLogDisabledSleepReason.c)
 *     PopFilterCapabilities @ 0x14051CDCC (PopFilterCapabilities.c)
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     PopEnableHiberFile @ 0x140624E34 (PopEnableHiberFile.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 *     PopInitPlatformSettings @ 0x1408C7854 (PopInitPlatformSettings.c)
 *     PopCheckForUpgradeInProgress @ 0x1408C8CBC (PopCheckForUpgradeInProgress.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PopGetReasonListByReasonCode @ 0x14051CF94 (PopGetReasonListByReasonCode.c)
 */

__int64 __fastcall PopLogSleepDisabled(int a1, char a2, const void *a3, size_t a4)
{
  unsigned int v8; // edi
  PVOID PoolWithTag; // rax
  __int64 v10; // rbx
  __int64 *v11; // rax

  v8 = 0;
  if ( PopGetReasonListByReasonCode(a1) )
  {
    return (unsigned int)-1073741771;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4 + 32, 0x66756263u);
    v10 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, a4 + 32);
      *(_DWORD *)(v10 + 24) = a1;
      if ( (a2 & 1) != 0 )
        *(_BYTE *)(v10 + 16) = 1;
      if ( (a2 & 2) != 0 )
        *(_BYTE *)(v10 + 17) = 1;
      if ( (a2 & 4) != 0 )
        *(_BYTE *)(v10 + 18) = 1;
      if ( (a2 & 8) != 0 )
        *(_BYTE *)(v10 + 19) = 1;
      if ( (a2 & 0x10) != 0 )
        *(_BYTE *)(v10 + 22) = 1;
      if ( (a2 & 0x20) != 0 )
        *(_BYTE *)(v10 + 20) = 1;
      if ( a4 )
      {
        *(_DWORD *)(v10 + 28) = a4;
        memmove((void *)(v10 + 32), a3, a4);
      }
      v11 = (__int64 *)qword_1403AA7B8;
      if ( *(__int64 **)qword_1403AA7B8 != &PowerStateDisableReasonListHead )
        __fastfail(3u);
      *(_QWORD *)v10 = &PowerStateDisableReasonListHead;
      *(_QWORD *)(v10 + 8) = v11;
      *v11 = v10;
      qword_1403AA7B8 = v10;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
