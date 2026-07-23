/*
 * XREFs of NtSetInformationVirtualMemory @ 0x14049A7B0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PsGetIoPriorityThread @ 0x1400FCA20 (PsGetIoPriorityThread.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400FE040 (MiGetEffectivePagePriorityThread.c)
 *     MiPrefetchVirtualMemory @ 0x140108070 (MiPrefetchVirtualMemory.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiValidateMemoryRangeEntries @ 0x14049AD94 (MiValidateMemoryRangeEntries.c)
 *     MiCfgMarkValidEntries @ 0x14049AE2C (MiCfgMarkValidEntries.c)
 *     MiSetPriorityVaRanges @ 0x1404C9C9C (MiSetPriorityVaRanges.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationVirtualMemory(
        HANDLE ProcessHandle,
        VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
        ULONG_PTR NumberOfEntries,
        PMEMORY_RANGE_ENTRY VirtualAddresses,
        PVOID VmInformation,
        ULONG VmInformationLength)
{
  HANDLE v9; // r11
  char v10; // si
  int v11; // ebx
  _BYTE *v12; // r12
  NTSTATUS valid; // edi
  __int64 v14; // rcx
  bool v15; // zf
  struct _KTHREAD *CurrentThread; // r9
  _DWORD *p_LockNV; // r8
  unsigned int v18; // r15d
  _QWORD *PoolWithTag; // rsi
  __int64 v20; // r8
  int v21; // r9d
  __int32 v22; // r14d
  HANDLE v23; // r14
  NTSTATUS result; // eax
  ULONG_PTR v25; // rax
  char *v26; // rcx
  char *v27; // rdx
  __int64 v28; // rdx
  int v29; // r10d
  _BYTE *v30; // rax
  unsigned int v32; // [rsp+50h] [rbp-2E8h]
  char v33; // [rsp+58h] [rbp-2E0h]
  PVOID Object; // [rsp+60h] [rbp-2D8h] BYREF
  PVOID P; // [rsp+68h] [rbp-2D0h]
  volatile void *Address[2]; // [rsp+70h] [rbp-2C8h]
  void *v37; // [rsp+80h] [rbp-2B8h]
  int v38; // [rsp+88h] [rbp-2B0h] BYREF
  PVOID v39; // [rsp+90h] [rbp-2A8h]
  struct _KTHREAD *v40; // [rsp+98h] [rbp-2A0h]
  HANDLE v41; // [rsp+A0h] [rbp-298h]
  void *Src; // [rsp+A8h] [rbp-290h]
  $5BC46E0569261879018906DEC3127961 v43; // [rsp+C0h] [rbp-278h] BYREF
  _BYTE v44[256]; // [rsp+F0h] [rbp-248h] BYREF
  _BYTE v45[256]; // [rsp+1F0h] [rbp-148h] BYREF

  Src = VirtualAddresses;
  v9 = ProcessHandle;
  v41 = ProcessHandle;
  v10 = 0;
  v33 = 0;
  v11 = 0;
  v12 = v45;
  v39 = v45;
  valid = 0;
  v32 = 0;
  if ( VmInformationClass < VmPrefetchInformation )
    return -1073741584;
  if ( VmInformationClass > VmPagePriorityInformation )
  {
    if ( VmInformationClass == VmCfgCallTargetInformation )
    {
      v14 = VmInformationLength;
      v15 = VmInformationLength == 24;
      goto LABEL_5;
    }
    return -1073741584;
  }
  if ( !VmInformation )
    return -1073741581;
  v14 = VmInformationLength;
  v15 = VmInformationLength == 4;
LABEL_5:
  if ( !v15 )
    return -1073741580;
  if ( NumberOfEntries - 1 > 0xFFFFFFFFFFFFFFELL )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  v40 = CurrentThread;
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
  P = p_LockNV;
  if ( VmInformationClass == VmCfgCallTargetInformation && (p_LockNV[192] & 0x400) != 0 )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
      v10 = 1;
    v33 = v10;
  }
  Address[0] = 0LL;
  Address[1] = 0LL;
  v37 = 0LL;
  if ( CurrentThread->PreviousMode )
  {
    v25 = NumberOfEntries;
    if ( 16 * NumberOfEntries )
    {
      if ( ((unsigned __int8)VirtualAddresses & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&VirtualAddresses[v25] > 0x7FFFFFFF0000LL || &VirtualAddresses[v25] < VirtualAddresses )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( VmInformationClass == VmCfgCallTargetInformation )
    {
      if ( (_DWORD)v14 )
      {
        if ( ((unsigned __int8)VmInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v26 = (char *)VmInformation + v14;
        if ( (unsigned __int64)v26 > 0x7FFFFFFF0000LL || v26 < VmInformation )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      *(_OWORD *)Address = *(_OWORD *)VmInformation;
      v37 = (void *)*((_QWORD *)VmInformation + 2);
      v18 = _mm_cvtsi128_si32(*(__m128i *)Address);
      if ( !v18 || HIDWORD(Address[0]) )
        return -1073741581;
      ProbeForWrite(Address[1], 4uLL, 4u);
      if ( ((unsigned __int8)v37 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v27 = (char *)v37 + 16 * v18;
      if ( (unsigned __int64)v27 > 0x7FFFFFFF0000LL || v27 < v37 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v9 = ProcessHandle;
    }
    else
    {
      if ( ((unsigned __int8)VmInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v32 = *(_DWORD *)VmInformation;
      v18 = (unsigned int)Address[0];
    }
    p_LockNV = P;
    goto LABEL_13;
  }
  if ( VmInformationClass != VmCfgCallTargetInformation )
  {
    v32 = *(_DWORD *)VmInformation;
    v18 = (unsigned int)Address[0];
    goto LABEL_13;
  }
  *(_OWORD *)Address = *(_OWORD *)VmInformation;
  v37 = (void *)*((_QWORD *)VmInformation + 2);
  v18 = _mm_cvtsi128_si32(*(__m128i *)Address);
  if ( !v18 || HIDWORD(Address[0]) )
    return -1073741581;
LABEL_13:
  if ( v9 == (HANDLE)-1LL )
  {
    Object = p_LockNV;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)v9, 1716546893, (__int64)&Object, 0LL, 0LL);
    valid = result;
    if ( result < 0 )
      return result;
  }
  PoolWithTag = v44;
  P = v44;
  if ( NumberOfEntries > 0x10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * NumberOfEntries, 0x724D6D4Du);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      PoolWithTag = v44;
LABEL_86:
      valid = -1073741670;
      goto LABEL_73;
    }
  }
  if ( v18 > 0x10 && VmInformationClass == VmCfgCallTargetInformation )
  {
    v30 = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v18, 0x724D6D4Du);
    v12 = v30;
    v39 = v30;
    if ( !v30 )
    {
      v12 = v45;
      goto LABEL_86;
    }
  }
  memmove(PoolWithTag, Src, 16 * NumberOfEntries);
  if ( VmInformationClass == VmCfgCallTargetInformation )
    memmove(v12, v37, 16LL * v18);
  if ( v40->ApcState.Process != Object )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v43);
    v11 = 1;
  }
  if ( !(unsigned int)MiValidateMemoryRangeEntries(PoolWithTag, NumberOfEntries, v20, 0LL) )
  {
LABEL_89:
    valid = -1073741582;
    goto LABEL_73;
  }
  if ( VmInformationClass == VmPrefetchInformation )
  {
    if ( v32 == v21 )
    {
      MiGetEffectivePagePriorityThread((__int64)v40);
      if ( (int)PsGetIoPriorityThread(v28) <= 1 )
        v29 |= 0x400u;
      valid = MiPrefetchVirtualMemory(NumberOfEntries, (__int64)PoolWithTag, (__int64)Object + 1280, v29);
      goto LABEL_73;
    }
    goto LABEL_90;
  }
  v22 = VmInformationClass - 1;
  if ( !v22 )
  {
    if ( v32 <= 5 )
    {
      MiSetPriorityVaRanges(NumberOfEntries, PoolWithTag, v32);
      valid = 0;
      goto LABEL_73;
    }
LABEL_90:
    valid = -1073741581;
    goto LABEL_73;
  }
  if ( v22 == 1 )
  {
    if ( NumberOfEntries == 1 )
    {
      valid = MiCfgMarkValidEntries((_DWORD)Object, *PoolWithTag, PoolWithTag[1], (_DWORD)v12, v18, (__int64)&v38, v33);
      if ( v11 )
      {
        KiUnstackDetachProcess(&v43, 0LL);
        v11 = 0;
      }
      *(_DWORD *)Address[1] = v38;
      v23 = ProcessHandle;
      goto LABEL_29;
    }
    goto LABEL_89;
  }
LABEL_73:
  v23 = ProcessHandle;
LABEL_29:
  if ( v11 )
    KiUnstackDetachProcess(&v43, 0LL);
  if ( v23 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x66506D4Du);
  if ( PoolWithTag != (_QWORD *)v44 )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v12 != v45 )
    ExFreePoolWithTag(v12, 0);
  return valid;
}
