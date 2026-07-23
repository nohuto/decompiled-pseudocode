/*
 * XREFs of NtSetInformationVirtualMemory @ 0x1404D43D0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x140028114 (MiGetEffectivePagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x140061EF0 (PsGetIoPriorityThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiPrefetchVirtualMemory @ 0x140109C80 (MiPrefetchVirtualMemory.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCfgMarkValidEntries @ 0x1404D3370 (MiCfgMarkValidEntries.c)
 *     MiValidateMemoryRangeEntries @ 0x1404D4A08 (MiValidateMemoryRangeEntries.c)
 *     MiProcessVaRangesInfoClass @ 0x140584814 (MiProcessVaRangesInfoClass.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationVirtualMemory(
        HANDLE ProcessHandle,
        VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
        ULONG_PTR NumberOfEntries,
        PMEMORY_RANGE_ENTRY VirtualAddresses,
        PVOID VmInformation,
        ULONG VmInformationLength)
{
  HANDLE v9; // r10
  char v10; // r11
  int v11; // edi
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // r9
  LONG *p_LockNV; // rdx
  char PreviousMode; // si
  ULONG_PTR v16; // rax
  char *v17; // rcx
  unsigned int v18; // r14d
  unsigned __int64 v19; // rdx
  unsigned int v20; // ebx
  NTSTATUS result; // eax
  unsigned __int64 *PoolWithTag; // rsi
  _KPROCESS *v23; // r13
  _BYTE *v24; // rbx
  NTSTATUS valid; // r14d
  HANDLE v26; // r15
  __int32 v27; // r12d
  __int64 v28; // r9
  int IoPriorityThread; // eax
  int v30; // r8d
  int v31; // r9d
  _BYTE *v32; // rax
  _BYTE *v34; // [rsp+48h] [rbp-2F0h]
  NTSTATUS v35; // [rsp+5Ch] [rbp-2DCh]
  char v36; // [rsp+60h] [rbp-2D8h]
  _KPROCESS *BugCheckParameter1; // [rsp+68h] [rbp-2D0h]
  __m128i Address; // [rsp+70h] [rbp-2C8h]
  void *Src; // [rsp+80h] [rbp-2B8h]
  PVOID Object; // [rsp+88h] [rbp-2B0h] BYREF
  int v41; // [rsp+90h] [rbp-2A8h] BYREF
  PVOID P; // [rsp+98h] [rbp-2A0h]
  struct _KTHREAD *v43; // [rsp+A0h] [rbp-298h]
  HANDLE v44; // [rsp+A8h] [rbp-290h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v45; // [rsp+C0h] [rbp-278h] BYREF
  _BYTE v46[256]; // [rsp+F0h] [rbp-248h] BYREF
  _BYTE v47[256]; // [rsp+1F0h] [rbp-148h] BYREF

  v9 = ProcessHandle;
  v44 = ProcessHandle;
  v10 = 0;
  v36 = 0;
  v11 = 0;
  v34 = v46;
  v35 = 0;
  if ( VmInformationClass == VmCfgCallTargetInformation )
  {
    v12 = VmInformationLength;
    if ( VmInformationLength != 24 )
      return -1073741580;
  }
  else
  {
    if ( VmInformationClass < VmPrefetchInformation
      || VmInformationClass > VmPagePriorityInformation && VmInformationClass != VmPageDirtyStateInformation )
    {
      return -1073741584;
    }
    if ( !VmInformation )
      return -1073741581;
    v12 = VmInformationLength;
    if ( VmInformationLength != 4 )
      return -1073741580;
  }
  if ( NumberOfEntries - 1 > 0xFFFFFFFFFFFFFFELL )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  v43 = CurrentThread;
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
  BugCheckParameter1 = (_KPROCESS *)p_LockNV;
  if ( VmInformationClass == VmCfgCallTargetInformation && (p_LockNV[522] & 0x100) != 0 )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
      v10 = 1;
    v36 = v10;
  }
  Address.m128i_i64[1] = 0LL;
  Src = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  if ( !PreviousMode )
  {
    if ( VmInformationClass != VmCfgCallTargetInformation )
    {
      v20 = *(_DWORD *)VmInformation;
      v18 = 0;
      goto LABEL_34;
    }
    Address = *(__m128i *)VmInformation;
    Src = (void *)*((_QWORD *)VmInformation + 2);
    v18 = _mm_cvtsi128_si32(*(__m128i *)VmInformation);
    if ( v18 && !Address.m128i_i32[1] )
    {
      v20 = 0;
      goto LABEL_34;
    }
    return -1073741581;
  }
  v16 = NumberOfEntries;
  if ( 16 * NumberOfEntries )
  {
    if ( ((unsigned __int8)VirtualAddresses & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&VirtualAddresses[v16] > 0x7FFFFFFF0000LL || &VirtualAddresses[v16] < VirtualAddresses )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( VmInformationClass == VmCfgCallTargetInformation )
  {
    if ( (_DWORD)v12 )
    {
      if ( ((unsigned __int8)VmInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = (char *)VmInformation + v12;
      if ( (unsigned __int64)v17 > 0x7FFFFFFF0000LL || v17 < VmInformation )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    Address = *(__m128i *)VmInformation;
    Src = (void *)*((_QWORD *)VmInformation + 2);
    v18 = _mm_cvtsi128_si32(*(__m128i *)VmInformation);
    if ( !v18 || Address.m128i_i32[1] )
      return -1073741581;
    ProbeForWrite((volatile void *)Address.m128i_i64[1], 4uLL, 4u);
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = (unsigned __int64)Src + 16 * v18;
    if ( v19 > 0x7FFFFFFF0000LL || v19 < (unsigned __int64)Src )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
      v20 = 0;
      v9 = ProcessHandle;
    }
    else
    {
      v20 = 0;
      v9 = ProcessHandle;
    }
  }
  else
  {
    if ( ((unsigned __int8)VmInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v20 = *(_DWORD *)VmInformation;
    v18 = 0;
  }
  p_LockNV = &BugCheckParameter1->Header.LockNV;
LABEL_34:
  if ( v9 == (HANDLE)-1LL )
  {
    Object = p_LockNV;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)v9,
               8,
               (__int64)PsProcessType,
               PreviousMode,
               1716546893,
               &Object,
               0LL,
               0LL);
    v35 = result;
    if ( result < 0 )
      return result;
    BugCheckParameter1 = (_KPROCESS *)Object;
  }
  PoolWithTag = (unsigned __int64 *)v47;
  P = v47;
  if ( NumberOfEntries > 0x10 )
  {
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * NumberOfEntries, 0x724D6D4Du);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      PoolWithTag = (unsigned __int64 *)v47;
      valid = -1073741670;
      v23 = BugCheckParameter1;
      v24 = v46;
      goto LABEL_71;
    }
  }
  if ( v18 > 0x10 && VmInformationClass == VmCfgCallTargetInformation )
  {
    v32 = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v18, 0x724D6D4Du);
    v34 = v32;
    if ( !v32 )
    {
      v24 = v46;
      valid = -1073741670;
      v23 = BugCheckParameter1;
      goto LABEL_71;
    }
  }
  memmove(PoolWithTag, VirtualAddresses, 16 * NumberOfEntries);
  if ( VmInformationClass == VmCfgCallTargetInformation )
    memmove(v34, Src, 16LL * v18);
  v23 = BugCheckParameter1;
  if ( v43->ApcState.Process != BugCheckParameter1 )
  {
    if ( VmInformationClass == VmPageDirtyStateInformation )
    {
      valid = -1073741637;
LABEL_70:
      v24 = v34;
      goto LABEL_71;
    }
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v45);
    v11 = 1;
  }
  if ( !(unsigned int)MiValidateMemoryRangeEntries(PoolWithTag, NumberOfEntries, 0LL) )
  {
    valid = -1073741582;
    goto LABEL_70;
  }
  if ( VmInformationClass != VmCfgCallTargetInformation )
  {
    if ( VmInformationClass )
    {
      v27 = VmInformationClass - 1;
      if ( v27 )
      {
        if ( v27 == 2 )
        {
          if ( v20 )
          {
            valid = -1073741581;
          }
          else if ( (BugCheckParameter1[1].DirectoryTableBase & 0x1000000000LL) != 0 )
          {
            valid = MiProcessVaRangesInfoClass(NumberOfEntries, PoolWithTag, 3LL);
          }
          else
          {
            valid = -1073741637;
          }
        }
        else
        {
          valid = v35;
        }
      }
      else if ( v20 > 5 )
      {
        valid = -1073741581;
      }
      else
      {
        valid = MiProcessVaRangesInfoClass(NumberOfEntries, PoolWithTag, 1LL);
      }
    }
    else if ( v20 )
    {
      valid = -1073741581;
    }
    else
    {
      MiGetEffectivePagePriorityThread((__int64)v43);
      IoPriorityThread = PsGetIoPriorityThread(v28);
      v31 = v30 | 0x400;
      if ( IoPriorityThread > 1 )
        v31 = v30;
      valid = MiPrefetchVirtualMemory(
                NumberOfEntries,
                (__int64)PoolWithTag,
                (__int64)&BugCheckParameter1[1].IdealNode[12],
                v31);
    }
    goto LABEL_70;
  }
  v24 = v34;
  if ( NumberOfEntries == 1 )
  {
    valid = MiCfgMarkValidEntries((__int64)BugCheckParameter1, *PoolWithTag, PoolWithTag[1], v34, v18, &v41, v36);
    if ( v11 )
    {
      KiUnstackDetachProcess(&v45, 0LL);
      v11 = 0;
    }
    *(_DWORD *)Address.m128i_i64[1] = v41;
    v26 = ProcessHandle;
    goto LABEL_47;
  }
  valid = -1073741582;
LABEL_71:
  v26 = ProcessHandle;
LABEL_47:
  if ( v11 )
    KiUnstackDetachProcess(&v45, 0LL);
  if ( v26 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(v23, 0x66506D4Du);
  if ( PoolWithTag != (unsigned __int64 *)v47 )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v24 != v46 )
    ExFreePoolWithTag(v24, 0);
  return valid;
}
