/*
 * XREFs of NtSetInformationVirtualMemory @ 0x1404B30D0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiGetEffectivePagePriorityThread @ 0x14005605C (MiGetEffectivePagePriorityThread.c)
 *     MiPrefetchVirtualMemory @ 0x14007F6B0 (MiPrefetchVirtualMemory.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     PsGetIoPriorityThread @ 0x1401281D0 (PsGetIoPriorityThread.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiValidateMemoryRangeEntries @ 0x1404B36A4 (MiValidateMemoryRangeEntries.c)
 *     MiCfgMarkValidEntries @ 0x1404B3738 (MiCfgMarkValidEntries.c)
 *     MiProcessVaRangesInfoClass @ 0x140575908 (MiProcessVaRangesInfoClass.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationVirtualMemory(
        HANDLE ProcessHandle,
        VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
        ULONG_PTR NumberOfEntries,
        PMEMORY_RANGE_ENTRY VirtualAddresses,
        PVOID VmInformation,
        ULONG VmInformationLength)
{
  HANDLE v9; // rsi
  char v10; // r12
  int v11; // ebx
  _BYTE *v12; // r13
  NTSTATUS valid; // edi
  __int64 v14; // rcx
  bool v15; // zf
  struct _KTHREAD *CurrentThread; // r10
  _DWORD *p_LockNV; // r9
  ULONG_PTR v18; // rax
  char *v19; // rcx
  unsigned int v20; // r12d
  char *v21; // rdx
  NTSTATUS result; // eax
  _QWORD *PoolWithTag; // rsi
  SIZE_T v24; // r15
  int v25; // r8d
  __int32 v26; // r14d
  __int32 v27; // r14d
  HANDLE v28; // r14
  __int64 v29; // r9
  int IoPriorityThread; // eax
  int v31; // r8d
  int v32; // r9d
  NTSTATUS v33; // eax
  __int64 v34; // r9
  __int64 v35; // r8
  _BYTE *v36; // rax
  unsigned int v38; // [rsp+50h] [rbp-2F8h]
  char v39; // [rsp+54h] [rbp-2F4h]
  PVOID Object; // [rsp+60h] [rbp-2E8h] BYREF
  PVOID P; // [rsp+68h] [rbp-2E0h]
  ULONG_PTR v42; // [rsp+70h] [rbp-2D8h]
  volatile void *Address[2]; // [rsp+78h] [rbp-2D0h]
  void *v44; // [rsp+88h] [rbp-2C0h]
  int v45; // [rsp+90h] [rbp-2B8h] BYREF
  PVOID v46; // [rsp+98h] [rbp-2B0h]
  struct _KTHREAD *v47; // [rsp+A0h] [rbp-2A8h]
  HANDLE v48; // [rsp+A8h] [rbp-2A0h]
  void *Src; // [rsp+B0h] [rbp-298h]
  _BYTE v50[56]; // [rsp+C8h] [rbp-280h] BYREF
  _BYTE v51[256]; // [rsp+100h] [rbp-248h] BYREF
  _BYTE v52[256]; // [rsp+200h] [rbp-148h] BYREF

  Src = VirtualAddresses;
  v42 = NumberOfEntries;
  v9 = ProcessHandle;
  v48 = ProcessHandle;
  v10 = 0;
  v39 = 0;
  v11 = 0;
  v12 = v52;
  v46 = v52;
  valid = 0;
  v38 = 0;
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
    if ( VmInformationClass != VmPageDirtyStateInformation )
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
  v47 = CurrentThread;
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
  P = p_LockNV;
  if ( VmInformationClass == VmCfgCallTargetInformation && (p_LockNV[522] & 0x100) != 0 )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
      v10 = 1;
    v39 = v10;
  }
  Address[0] = 0LL;
  Address[1] = 0LL;
  v44 = 0LL;
  if ( CurrentThread->PreviousMode )
  {
    v18 = NumberOfEntries;
    if ( 16 * NumberOfEntries )
    {
      if ( ((unsigned __int8)VirtualAddresses & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&VirtualAddresses[v18] > 0x7FFFFFFF0000LL || &VirtualAddresses[v18] < VirtualAddresses )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( VmInformationClass == VmCfgCallTargetInformation )
    {
      if ( (_DWORD)v14 )
      {
        if ( ((unsigned __int8)VmInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v19 = (char *)VmInformation + v14;
        if ( (unsigned __int64)v19 > 0x7FFFFFFF0000LL || v19 < VmInformation )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      *(_OWORD *)Address = *(_OWORD *)VmInformation;
      v44 = (void *)*((_QWORD *)VmInformation + 2);
      v20 = _mm_cvtsi128_si32(*(__m128i *)Address);
      if ( !v20 || HIDWORD(Address[0]) )
        return -1073741581;
      ProbeForWrite(Address[1], 4uLL, 4u);
      if ( ((unsigned __int8)v44 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = (char *)v44 + 16 * v20;
      if ( (unsigned __int64)v21 > 0x7FFFFFFF0000LL || v21 < v44 )
        MEMORY[0x7FFFFFFF0000] = 0;
      p_LockNV = P;
    }
    else
    {
      if ( ((unsigned __int8)VmInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v38 = *(_DWORD *)VmInformation;
      v20 = (unsigned int)Address[0];
    }
    v9 = ProcessHandle;
    goto LABEL_37;
  }
  if ( VmInformationClass != VmCfgCallTargetInformation )
  {
    v38 = *(_DWORD *)VmInformation;
    v20 = (unsigned int)Address[0];
    goto LABEL_37;
  }
  *(_OWORD *)Address = *(_OWORD *)VmInformation;
  v44 = (void *)*((_QWORD *)VmInformation + 2);
  v20 = _mm_cvtsi128_si32(*(__m128i *)Address);
  if ( !v20 || HIDWORD(Address[0]) )
    return -1073741581;
LABEL_37:
  if ( v9 == (HANDLE)-1LL )
  {
    Object = p_LockNV;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)v9, 0x66506D4Du, (__int64)&Object, 0LL, 0LL);
    valid = result;
    if ( result < 0 )
      return result;
  }
  PoolWithTag = v51;
  P = v51;
  v24 = 16 * NumberOfEntries;
  if ( v42 > 0x10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v24, 0x724D6D4Du);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      PoolWithTag = v51;
LABEL_92:
      valid = -1073741670;
      goto LABEL_74;
    }
  }
  if ( v20 > 0x10 && VmInformationClass == VmCfgCallTargetInformation )
  {
    v36 = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v20, 0x724D6D4Du);
    v12 = v36;
    v46 = v36;
    if ( !v36 )
    {
      v12 = v52;
      goto LABEL_92;
    }
  }
  memmove(PoolWithTag, Src, v24);
  if ( VmInformationClass == VmCfgCallTargetInformation )
    memmove(v12, v44, 16LL * v20);
  if ( v47->ApcState.Process != Object )
  {
    if ( VmInformationClass == VmPageDirtyStateInformation )
      goto LABEL_95;
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v50);
    v11 = 1;
  }
  if ( !(unsigned int)MiValidateMemoryRangeEntries(PoolWithTag, v42, 0LL) )
  {
LABEL_96:
    valid = -1073741582;
    goto LABEL_74;
  }
  if ( VmInformationClass == VmPrefetchInformation )
  {
    if ( v38 == v25 )
    {
      MiGetEffectivePagePriorityThread((__int64)v47);
      IoPriorityThread = PsGetIoPriorityThread(v29);
      v32 = v31 | 0x400;
      if ( IoPriorityThread > 1 )
        v32 = v31;
      v33 = MiPrefetchVirtualMemory(v42, (__int64)PoolWithTag, (__int64)Object + 1280, v32);
      goto LABEL_73;
    }
    goto LABEL_80;
  }
  v26 = VmInformationClass - 1;
  if ( v26 )
  {
    v27 = v26 - 1;
    if ( !v27 )
    {
      if ( v42 == 1 )
      {
        valid = MiCfgMarkValidEntries(
                  (_DWORD)Object,
                  *PoolWithTag,
                  PoolWithTag[1],
                  (_DWORD)v12,
                  v20,
                  (__int64)&v45,
                  v39);
        if ( v11 )
          KiUnstackDetachProcess((__int64)v50, 0LL);
        LOBYTE(v11) = 0;
        *(_DWORD *)Address[1] = v45;
        v28 = ProcessHandle;
        goto LABEL_52;
      }
      goto LABEL_96;
    }
    if ( v27 != 1 )
      goto LABEL_74;
    if ( v38 == v25 )
    {
      if ( (*((_DWORD *)Object + 193) & 0x10) != 0 )
      {
        v34 = 0LL;
        v35 = 3LL;
        goto LABEL_79;
      }
LABEL_95:
      valid = -1073741637;
      goto LABEL_74;
    }
LABEL_80:
    valid = -1073741581;
    goto LABEL_74;
  }
  if ( v38 > 5 )
    goto LABEL_80;
  v34 = v38;
  v35 = 1LL;
LABEL_79:
  v33 = MiProcessVaRangesInfoClass(v42, PoolWithTag, v35, v34);
LABEL_73:
  valid = v33;
LABEL_74:
  v28 = ProcessHandle;
LABEL_52:
  if ( (v11 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v50, 0LL);
  if ( v28 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x66506D4Du);
  if ( PoolWithTag != (_QWORD *)v51 )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v12 != v52 )
    ExFreePoolWithTag(v12, 0);
  return valid;
}
