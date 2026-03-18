/*
 * XREFs of NtGetWriteWatch @ 0x140101A00
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiObtainReferencedVad @ 0x1400BDAC0 (MiObtainReferencedVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     MiLocateVadEvent @ 0x1400CE790 (MiLocateVadEvent.c)
 *     MiGetNextPageTable @ 0x1400D2560 (MiGetNextPageTable.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiLockPageAndSetDirty @ 0x140100B80 (MiLockPageAndSetDirty.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExSystemExceptionFilter @ 0x140430F30 (ExSystemExceptionFilter.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406C0DE0 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtGetWriteWatch(
        HANDLE ProcessHandle,
        ULONG Flags,
        PVOID BaseAddress,
        SIZE_T RegionSize,
        PVOID *UserAddressArray,
        PULONG_PTR EntriesInUserAddressArray,
        PULONG Granularity)
{
  char v8; // r13
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r14
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  _BYTE *PoolWithQuotaTag; // rcx
  __int64 *v19; // r12
  int v20; // ebx
  _KPROCESS *v21; // rdi
  int v22; // edi
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rdi
  unsigned int *v25; // rax
  __int64 v26; // r8
  unsigned __int64 v27; // r14
  LONG *SharedVm; // rsi
  KIRQL v29; // al
  _KPROCESS *NextPageTable; // rdx
  unsigned __int64 v31; // rsi
  bool v32; // cc
  __int64 v33; // rax
  __int64 v34; // r10
  bool v35; // zf
  __int64 v36; // rsi
  _BYTE *v37; // rbx
  unsigned __int8 v38; // [rsp+40h] [rbp-9B8h]
  __int64 **VadEvent; // [rsp+48h] [rbp-9B0h]
  _BYTE *Src; // [rsp+50h] [rbp-9A8h]
  int v42; // [rsp+58h] [rbp-9A0h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp-998h]
  PVOID Object; // [rsp+68h] [rbp-990h] BYREF
  unsigned __int64 v45; // [rsp+70h] [rbp-988h]
  unsigned __int16 *v46; // [rsp+78h] [rbp-980h]
  PVOID P; // [rsp+80h] [rbp-978h]
  int v48; // [rsp+88h] [rbp-970h] BYREF
  __int64 v49; // [rsp+90h] [rbp-968h] BYREF
  HANDLE v50; // [rsp+98h] [rbp-960h]
  void *v51; // [rsp+A0h] [rbp-958h]
  PULONG_PTR v52; // [rsp+A8h] [rbp-950h]
  PULONG v53; // [rsp+B0h] [rbp-948h]
  int v54; // [rsp+C0h] [rbp-938h] BYREF
  __int16 v55; // [rsp+C4h] [rbp-934h]
  __int64 v56; // [rsp+C8h] [rbp-930h]
  __int64 v57; // [rsp+D0h] [rbp-928h]
  __int64 v58; // [rsp+D8h] [rbp-920h]
  $5BC46E0569261879018906DEC3127961 v59; // [rsp+180h] [rbp-878h] BYREF
  _BYTE v60[2048]; // [rsp+1B0h] [rbp-848h] BYREF

  v8 = Flags;
  v50 = ProcessHandle;
  v51 = UserAddressArray;
  v52 = EntriesInUserAddressArray;
  v53 = Granularity;
  v56 = 20LL;
  v54 = 1;
  v55 = 0;
  v57 = 0LL;
  v58 = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741584;
  v43 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)BaseAddress > 0x7FFFFFFDFFFFLL )
      return -1073741583;
    if ( 0x7FFFFFFE0000LL - (__int64)BaseAddress < RegionSize )
      return -1073741582;
    v14 = (__int64)EntriesInUserAddressArray;
    if ( (unsigned __int64)EntriesInUserAddressArray >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v15 = *EntriesInUserAddressArray;
    v43 = v15;
    if ( !v15 )
      return -1073741581;
    if ( v15 > 0x1FFFFFFFFFFFFFFFLL )
      return -1073741581;
    ProbeForWrite(UserAddressArray, 8 * v15, 8u);
    v16 = (__int64)Granularity;
    if ( (unsigned __int64)Granularity >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v16 = *(_DWORD *)v16;
    v17 = v43;
  }
  else
  {
    v17 = *EntriesInUserAddressArray;
    v43 = *EntriesInUserAddressArray;
  }
  PoolWithQuotaTag = v60;
  Src = v60;
  if ( v17 > 0x100 )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 8 * v17, 0x63476D4Du);
    Src = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      return -1073741670;
  }
  v19 = (__int64 *)PoolWithQuotaTag;
  P = 0LL;
  v20 = 0;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    v21 = Process;
    Object = Process;
  }
  else
  {
    v22 = ObReferenceObjectByHandleWithTag(
            ProcessHandle,
            8u,
            (POBJECT_TYPE)PsProcessType,
            PreviousMode,
            0x77576D4Du,
            &Object,
            0LL);
    v42 = v22;
    if ( v22 < 0 )
      goto LABEL_73;
    v21 = (_KPROCESS *)Object;
  }
  v23 = 0LL;
  if ( BaseAddress > (char *)BaseAddress + RegionSize - 1 )
  {
    v22 = -1073741582;
    goto LABEL_63;
  }
  if ( Process != v21 )
  {
    KiStackAttachProcess(v21, 0, (__int64)&v59);
    v20 = 1;
  }
  v46 = &v21[1].IdealNode[12];
  v24 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v45 = ((((unsigned __int64)BaseAddress + RegionSize - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = MiObtainReferencedVad((unsigned __int64)BaseAddress, &v42);
  if ( !v25 )
  {
    v22 = v42;
    if ( v42 != -1073741664 )
      goto LABEL_63;
    goto LABEL_62;
  }
  P = v25;
  if ( (v25[12] & 7) == 4
    && (unsigned __int64)BaseAddress + RegionSize - 1 <= (((v25[7] | ((unsigned __int64)*((unsigned __int8 *)v25 + 33) << 32)) << 12) | 0xFFF) )
  {
    VadEvent = MiLocateVadEvent((__int64)v25, 4);
    v27 = ((unsigned __int64)BaseAddress >> 12)
        - (*(unsigned int *)(v26 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 32) << 32));
    SharedVm = MiGetSharedVm((__int64)v46);
    v29 = ExAcquireSpinLockExclusive(SharedVm);
    v38 = v29;
    SharedVm[1] = 0;
    v31 = v45;
    if ( v24 > v45 )
      goto LABEL_61;
    while ( 1 )
    {
      NextPageTable = (_KPROCESS *)MiGetNextPageTable(v24, v31, 0LL, v29, 5, &v48);
      if ( !NextPageTable )
        NextPageTable = (_KPROCESS *)(v31 + 8);
      for ( ; (_KPROCESS *)v24 != NextPageTable; v24 += 8LL )
      {
        if ( _bittest64(VadEvent[2], v27) == 1 )
        {
          if ( (v8 & 1) != 0 )
            _bittestandreset64(VadEvent[2], v27);
          *v19++ = (__int64)(v24 << 25) >> 16;
          if ( ++v23 == v43 )
            goto LABEL_61;
        }
        ++v27;
      }
      v32 = v24 <= v31;
      if ( v24 > v31 )
        goto LABEL_60;
      do
      {
        v33 = MI_READ_PTE_LOCK_FREE(v24);
        v49 = v33;
        v20 &= 0xFFFFFFF9;
        if ( _bittest64(*(const signed __int64 **)(v34 + 16), v27) == 1 )
        {
          v20 |= 4u;
          if ( (v8 & 1) == 0 )
            goto LABEL_53;
          _bittestandreset64(*(signed __int64 **)(v34 + 16), v27);
          if ( (v33 & 1) == 0 )
            goto LABEL_53;
          v35 = (v33 & 0x42) == 0;
        }
        else
        {
          if ( (v33 & 1) == 0 || (v33 & 0x42) == 0 )
            goto LABEL_53;
          v20 |= 4u;
          v35 = (v8 & 1) == 0;
        }
        if ( !v35 )
          v20 |= 2u;
LABEL_53:
        if ( (v20 & 2) != 0 )
        {
          v36 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v49) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          MiWriteValidPteNewProtection(v24);
          MiInsertTbFlushEntry((__int64)&v54, (__int64)(v24 << 25) >> 16, 1LL, 0);
          MiLockPageAndSetDirty(v36, 1);
          v31 = v45;
        }
        if ( (v20 & 4) != 0 )
        {
          *v19++ = (__int64)(v24 << 25) >> 16;
          if ( ++v23 == v43 )
            goto LABEL_61;
        }
        ++v27;
        v24 += 8LL;
      }
      while ( (v24 & 0xFFF) != 0 && v24 <= v31 );
      v32 = v24 <= v31;
LABEL_60:
      v29 = v38;
      if ( !v32 )
      {
LABEL_61:
        MiFlushTbList((__int64)&v54, NextPageTable);
        MiUnlockWorkingSetExclusive((__int64)v46, v38);
        v22 = 0;
        goto LABEL_63;
      }
    }
  }
LABEL_62:
  v22 = -1073741585;
LABEL_63:
  if ( P )
    MiUnlockAndDereferenceVad((char *)P);
  if ( (v20 & 1) != 0 )
    KiUnstackDetachProcess(&v59, 0LL);
  if ( v50 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x77576D4Du);
  if ( !v22 )
  {
    v37 = Src;
    if ( v51 )
    {
      memmove(v51, Src, 8 * v23);
      *v52 = v23;
    }
    *v53 = 4096;
    goto LABEL_74;
  }
LABEL_73:
  v37 = Src;
LABEL_74:
  if ( v37 != v60 )
    ExFreePoolWithTag(v37, 0);
  return v22;
}
