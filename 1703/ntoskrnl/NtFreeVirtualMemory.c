/*
 * XREFs of NtFreeVirtualMemory @ 0x14051A3B0
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x1406E7F30 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     MiFreeVadRange @ 0x140016C10 (MiFreeVadRange.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14009B6E0 (UNLOCK_ADDRESS_SPACE.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiObtainReferencedVad @ 0x1400BDAC0 (MiObtainReferencedVad.c)
 *     MiReturnProcessCommitment @ 0x1400CE224 (MiReturnProcessCommitment.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiFillCommitReturnInfo @ 0x1400CE2E8 (MiFillCommitReturnInfo.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     MiGetProcessPartition @ 0x1400D0EA8 (MiGetProcessPartition.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     PspReturnQuota @ 0x1400DC8F0 (PspReturnQuota.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiCheckSecuredVad @ 0x14047B694 (MiCheckSecuredVad.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x140519510 (PspChangeJobMemoryUsageByProcess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     PerfInfoLogVirtualFree @ 0x14070C65C (PerfInfoLogVirtualFree.c)
 */

NTSTATUS __stdcall NtFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _KPROCESS *Process; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  ULONG_PTR v11; // rsi
  unsigned __int64 v12; // r15
  void *v13; // r12
  int v14; // ebx
  _QWORD *p_Lock; // rax
  unsigned int *v16; // rax
  ULONG_PTR v17; // r14
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int16 v20; // r9
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  int v23; // r11d
  int v24; // eax
  __int64 PteAddress; // rdi
  unsigned __int64 v26; // rsi
  _KPROCESS *v27; // r8
  __int64 v28; // rsi
  __int64 v29; // r8
  unsigned __int64 v30; // r8
  __int64 v31; // rdi
  __int64 v32; // r10
  __int64 ProcessPartition; // rax
  unsigned __int64 v34; // r8
  __int64 v35; // r15
  PVOID v36; // rdi
  NTSTATUS result; // eax
  int v38; // eax
  NTSTATUS v39; // edx
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // rdx
  NTSTATUS v42; // [rsp+40h] [rbp-108h] BYREF
  char v43; // [rsp+44h] [rbp-104h] BYREF
  PVOID Object; // [rsp+48h] [rbp-100h] BYREF
  ULONG v45; // [rsp+54h] [rbp-F4h]
  _KPROCESS *v46; // [rsp+58h] [rbp-F0h]
  unsigned __int64 v47; // [rsp+60h] [rbp-E8h]
  unsigned __int64 v48; // [rsp+68h] [rbp-E0h]
  HANDLE v49; // [rsp+70h] [rbp-D8h]
  PSIZE_T v50; // [rsp+78h] [rbp-D0h]
  PVOID P; // [rsp+80h] [rbp-C8h]
  __int64 v52[2]; // [rsp+88h] [rbp-C0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-B0h]
  unsigned __int64 v54; // [rsp+A8h] [rbp-A0h]
  ULONG_PTR v55; // [rsp+B0h] [rbp-98h]
  _QWORD v56[4]; // [rsp+B8h] [rbp-90h] BYREF
  $5BC46E0569261879018906DEC3127961 v57; // [rsp+D8h] [rbp-70h] BYREF

  v45 = FreeType;
  v50 = RegionSize;
  v49 = ProcessHandle;
  if ( (FreeType & 0xC000) == 0 || (FreeType & 0xC000) == 49152 )
    return -1073741582;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v46 = Process;
  if ( CurrentThread->PreviousMode )
  {
    v8 = (__int64)BaseAddress;
    if ( (unsigned __int64)BaseAddress >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v8 = *(_QWORD *)v8;
    v9 = (__int64)RegionSize;
    if ( (unsigned __int64)RegionSize >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v9 = *(_QWORD *)v9;
    Process = v46;
  }
  v54 = (unsigned __int64)*BaseAddress;
  v10 = v54;
  v11 = *RegionSize;
  v55 = *RegionSize;
  if ( v54 > 0x7FFFFFFEFFFFLL )
    return -1073741584;
  if ( 0x7FFFFFFEFFFFLL - v54 < v11 )
    return -1073741583;
  v12 = (v54 + v11 - 1) | 0xFFF;
  v13 = (void *)(v54 & 0xFFFFFFFFFFFFF000uLL);
  v47 = (v54 & 0xFFFFFFFFFFFFF000uLL) >> 12;
  v48 = v12 >> 12;
  P = 0LL;
  v14 = 0;
  v57.SavedApcState.Process = 0LL;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    p_Lock = &Process->Header.Lock;
    Object = Process;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 1834380621, (__int64)&Object, 0LL, 0LL);
    v42 = result;
    if ( result < 0 )
      return result;
    p_Lock = Object;
    if ( v46 != Object )
    {
      v14 = 1;
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v57);
      p_Lock = Object;
    }
  }
  v43 = 0;
  if ( (FreeType & 0xFFFF3FFF) != 0 && (!p_Lock[226] || (FreeType & 0x10000) == 0 || (FreeType & 0x4000) != 0) )
  {
    v39 = -1073741582;
    goto LABEL_63;
  }
  v16 = MiObtainReferencedVad(v10 & 0xFFFFFFFFFFFFF000uLL, &v42);
  v17 = (ULONG_PTR)v16;
  if ( !v16 )
  {
    v39 = v42;
LABEL_62:
    p_Lock = Object;
LABEL_63:
    v42 = v39;
    goto LABEL_64;
  }
  P = v16;
  while ( 1 )
  {
    v18 = *(unsigned int *)(v17 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 32) << 32);
    v19 = *(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32);
    v20 = v45;
    v21 = v47;
    if ( v11 )
    {
      v22 = v48;
    }
    else
    {
      v22 = *(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32);
      v48 = v22;
      v12 = (v19 << 12) | 0xFFF;
      if ( (v45 & 0x8000) != 0 )
      {
        if ( v47 != v18 )
          goto LABEL_100;
        v13 = (void *)(v18 << 12);
      }
    }
    v23 = *(_DWORD *)(v17 + 48);
    if ( (v23 & 7) == 3 && (v23 & 0x40000) != 0 )
    {
      if ( v45 != 0x8000 )
      {
        v39 = -1073741582;
        goto LABEL_62;
      }
      if ( v11 )
      {
        v39 = -1073741583;
        goto LABEL_62;
      }
    }
    if ( v47 < v18 || v47 > v19 || v22 < v18 || v22 > v19 )
    {
      v39 = -1073741798;
      goto LABEL_62;
    }
    if ( (v45 & 0x10000) != 0 )
    {
      if ( (v23 & 0x8000) != 0 || (v23 & 7) != 0 || v47 == v18 && v22 == v19 )
      {
LABEL_95:
        v39 = -1073741797;
        goto LABEL_62;
      }
    }
    else if ( (v23 & 0x8000) == 0 || (v23 & 7) == 1 )
    {
      goto LABEL_95;
    }
    if ( (v23 & 0x4000) != 0 )
      break;
LABEL_26:
    if ( (v20 & 0x8000) == 0 )
    {
      v24 = *(_DWORD *)(v17 + 48) & 7;
      if ( v24 == 3 )
      {
        v39 = -1073741664;
        goto LABEL_62;
      }
      if ( v24 == 5 )
      {
        v39 = -1073741664;
        goto LABEL_62;
      }
      if ( !v11 )
      {
        if ( v10 >> 12 != (*(unsigned int *)(v17 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 32) << 32)) )
        {
LABEL_100:
          v39 = -1073741665;
          goto LABEL_62;
        }
        v12 = ((*(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32)) << 12) | 0xFFF;
      }
      memset(v56, 0, sizeof(v56));
      v46 = KeGetCurrentThread()->ApcState.Process;
      PteAddress = MiGetPteAddress((unsigned __int64)v13);
      v26 = MiGetPteAddress(v12);
      MiDecommitPages((unsigned __int64)v13, v26, v27, v17, 1, v56);
      v28 = ((__int64)(v26 - PteAddress) >> 3) - v56[3] + 1;
      v29 = *(unsigned int *)(v17 + 52);
      LODWORD(v29) = v29 & 0x7FFFFFFF;
      v30 = (((unsigned __int64)*(unsigned __int8 *)(v17 + 34) << 31) | v29) - v28;
      *(_DWORD *)(v17 + 52) ^= (v30 ^ *(_DWORD *)(v17 + 52)) & 0x7FFFFFFF;
      *(_BYTE *)(v17 + 34) = v30 >> 31;
      MiFillCommitReturnInfo(v28, (__int64)v56, v52);
      v31 = (__int64)v46;
      if ( v52[0] )
      {
        MiReturnProcessCommitment((__int64)v46, v52[0]);
        if ( (*(_DWORD *)(v31 + 768) & 0x10) != 0 )
        {
          PspChangeJobMemoryUsageByProcess(16, -v32, (__int64)KeGetCurrentThread()->ApcState.Process, 0LL);
          v32 = v52[0];
        }
        if ( v32 && (PEPROCESS)v31 != PsInitialSystemProcess )
          PspReturnQuota(*(char **)(v31 + 1040), v31, 2, v52[0]);
      }
      if ( v52[1] )
      {
        ProcessPartition = MiGetProcessPartition(v31);
        MiReturnCommit(ProcessPartition, v34);
      }
      MiUnlockAndDereferenceVad((char *)v17);
      v35 = v12 - (_QWORD)v13 + 1;
      v36 = Object;
      if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
        PerfInfoLogVirtualFree(v13, v35, Object);
      if ( v14 )
        KiUnstackDetachProcess(&v57, 0LL);
      if ( v49 != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(v36, 0x6D566D4Du);
      *v50 = v35;
      *BaseAddress = v13;
      return 0;
    }
    v38 = MiFreeVadRange(v17, (int)&v43, v21, v22, (__int64)Object);
    v39 = v38;
    v42 = v38;
    if ( v38 >= 0 )
    {
      if ( v14 )
        KiUnstackDetachProcess(&v57, 0LL);
      if ( v49 != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      *v50 = v12 - (_QWORD)v13 + 1;
      *BaseAddress = v13;
      return 0;
    }
    if ( v38 != -1073741267 )
      goto LABEL_78;
  }
  if ( (v45 & 0x8000) != 0 )
  {
    v40 = v19 - v18;
    v41 = v18 << 12;
  }
  else
  {
    v40 = v22 - v47;
    v41 = v10;
  }
  v42 = MiCheckSecuredVad(v17, v41, (v40 + 1) << 12, 0x55u);
  v39 = v42;
  if ( v42 >= 0 )
  {
    v21 = v47;
    v22 = v48;
    v20 = v45;
    goto LABEL_26;
  }
LABEL_78:
  p_Lock = Object;
LABEL_64:
  if ( P )
  {
    MiUnlockAndDereferenceVad((char *)P);
    p_Lock = Object;
    v39 = v42;
  }
  if ( v43 == 1 )
  {
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)p_Lock);
    p_Lock = Object;
    v39 = v42;
  }
  if ( v14 )
  {
    KiUnstackDetachProcess(&v57, 0LL);
    p_Lock = Object;
    v39 = v42;
  }
  if ( v49 != (HANDLE)-1LL )
  {
    ObfDereferenceObjectWithTag(p_Lock, 0x6D566D4Du);
    return v42;
  }
  return v39;
}
