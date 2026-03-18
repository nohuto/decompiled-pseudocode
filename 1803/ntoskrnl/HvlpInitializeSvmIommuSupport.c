/*
 * XREFs of HvlpInitializeSvmIommuSupport @ 0x14022D2F4
 * Callers:
 *     HvlPhase2Initialize @ 0x1401869A4 (HvlPhase2Initialize.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     HvlSvmGetSystemCapabilities @ 0x14022B0F0 (HvlSvmGetSystemCapabilities.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 HvlpInitializeSvmIommuSupport()
{
  __int64 v0; // rbx
  PVOID PoolWithTag; // rax
  __int64 v2; // rdi
  unsigned int v4; // esi
  __int64 v5; // rdx
  _BYTE v6[16]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+30h] [rbp-18h]

  HvlSvmGetSystemCapabilities((__int64)v6);
  if ( (v6[0] & 1) == 0 )
    return 3221225659LL;
  v0 = v7;
  if ( !v7 )
    return 3221225659LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 104LL * v7, 0x204C5648u);
  qword_1403EAD30 = (__int64)PoolWithTag;
  v2 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 104 * v0);
  dword_1403EAD28 = v0;
  v4 = 0;
  if ( (_DWORD)v0 )
  {
    while ( 1 )
    {
      v5 = v2 + 104LL * v4;
      *(_DWORD *)v5 = v4;
      *(_QWORD *)(v5 + 32) = HvlpIommuPrqDpcRoutine;
      *(_DWORD *)(v5 + 8) = 275;
      *(_QWORD *)(v5 + 40) = v5;
      *(_QWORD *)(v5 + 64) = 0LL;
      *(_QWORD *)(v5 + 24) = 0LL;
      *(_QWORD *)(v5 + 96) = v5;
      *(_QWORD *)(v5 + 88) = HvlpProcessIommuPrq;
      *(_QWORD *)(v5 + 72) = 0LL;
      *(_DWORD *)(v5 + 4) = 3;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v5 + 72), HyperCriticalWorkQueue);
      if ( ++v4 >= dword_1403EAD28 )
        break;
      v2 = qword_1403EAD30;
    }
  }
  return 0LL;
}
