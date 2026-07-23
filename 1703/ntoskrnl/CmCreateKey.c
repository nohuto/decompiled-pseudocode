/*
 * XREFs of CmCreateKey @ 0x14042DEF0
 * Callers:
 *     NtCreateKeyTransacted @ 0x14042D75C (NtCreateKeyTransacted.c)
 *     NtCreateKey @ 0x14042DEB0 (NtCreateKey.c)
 *     CmpSaveBootControlSet @ 0x14058D508 (CmpSaveBootControlSet.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     PsGetCurrentSilo @ 0x1400EDEE0 (PsGetCurrentSilo.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpDereferenceKeyControlBlock @ 0x140490D70 (CmpDereferenceKeyControlBlock.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmCreateKey(
        unsigned __int64 a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
        size_t a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  ULONG_PTR v8; // rsi
  unsigned int v11; // r14d
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v13; // di
  unsigned __int8 v14; // r12
  size_t v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  void *v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  int v22; // eax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r9
  PVOID PoolWithQuotaTag; // rax
  PVOID v27; // rsi
  int v28; // ebx
  void *v29; // rcx
  int v30; // ebx
  unsigned __int64 CurrentSilo; // rax
  __int64 v33; // rcx
  unsigned int v34; // [rsp+44h] [rbp-1F4h]
  HANDLE Handle; // [rsp+48h] [rbp-1F0h] BYREF
  size_t Size; // [rsp+50h] [rbp-1E8h]
  unsigned int v37; // [rsp+58h] [rbp-1E0h]
  PVOID P; // [rsp+60h] [rbp-1D8h]
  __int128 v39; // [rsp+70h] [rbp-1C8h] BYREF
  __int128 v40; // [rsp+80h] [rbp-1B8h]
  _QWORD *v41; // [rsp+90h] [rbp-1A8h]
  __int64 v42; // [rsp+98h] [rbp-1A0h]
  void *Src; // [rsp+A0h] [rbp-198h]
  ULONG_PTR v44; // [rsp+A8h] [rbp-190h]
  unsigned __int64 v45; // [rsp+B0h] [rbp-188h]
  ULONG_PTR v46; // [rsp+B8h] [rbp-180h]
  _DWORD *v47; // [rsp+C0h] [rbp-178h]
  PVOID Object; // [rsp+C8h] [rbp-170h] BYREF
  __int128 v49; // [rsp+D0h] [rbp-168h]
  __int128 v50; // [rsp+E0h] [rbp-158h]
  unsigned __int64 v51; // [rsp+F0h] [rbp-148h]
  _QWORD v52[28]; // [rsp+100h] [rbp-138h] BYREF
  LARGE_INTEGER v53[3]; // [rsp+1E0h] [rbp-58h] BYREF

  v8 = a3;
  v44 = a3;
  v41 = (_QWORD *)a1;
  v45 = a1;
  v46 = a3;
  Size = a5;
  v47 = a7;
  Handle = 0LL;
  v39 = 0uLL;
  v40 = 0uLL;
  P = 0LL;
  memset(v53, 0, sizeof(v53));
  v42 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v53, 0x20000u);
  memset(v52, 0, sizeof(v52));
  HIDWORD(v52[3]) = a2 & 0x300;
  v11 = a2 & 0xFFFFFCFF;
  v37 = v11;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v13 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v16 = (unsigned __int8)HvShutdownComplete;
    if ( HvShutdownComplete && (PopShutdownCleanly & 8) != 0 )
      KeBugCheckEx(0x51u, 0xEuLL, 1uLL, v8, 0LL);
    v28 = -1073741431;
    goto LABEL_66;
  }
  v14 = KeGetCurrentThread()->gap0[10];
  if ( v14 == 1 )
  {
    v15 = Size;
    v16 = 0x7FFFFFFF0000LL;
    if ( Size )
    {
      if ( Size >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      v17 = *(_DWORD *)v15;
      LODWORD(v49) = v17;
      v18 = *(void **)(v15 + 8);
      Src = v18;
      *((_QWORD *)&v49 + 1) = v18;
      v40 = v49;
      if ( (_WORD)v17 )
      {
        if ( ((unsigned __int8)v18 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v25 = (unsigned __int64)v18 + (unsigned __int16)v17;
        if ( v25 > 0x7FFFFFFF0000LL || v25 < (unsigned __int64)v18 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      if ( (v17 & 1) != 0 )
      {
        v28 = -1073741811;
        v34 = -1073741811;
        goto LABEL_46;
      }
      if ( (_WORD)v17 )
      {
        Size = (unsigned __int16)v17;
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, (unsigned __int16)v17, 0x78634D43u);
        P = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
        {
          v28 = -1073741670;
          v34 = -1073741670;
          goto LABEL_46;
        }
        v27 = PoolWithQuotaTag;
        memmove(PoolWithQuotaTag, Src, Size);
        *((_QWORD *)&v40 + 1) = v27;
        v8 = v44;
        v16 = 0x7FFFFFFF0000LL;
      }
    }
    v19 = a1;
    if ( a1 >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v19 = 0LL;
    if ( a7 )
    {
      v20 = (__int64)a7;
      if ( (unsigned __int64)a7 >= 0x7FFFFFFF0000LL )
        v20 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v20 = *(_DWORD *)v20;
    }
    if ( (v8 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = *(_QWORD *)(v8 + 16);
    v51 = v21;
    if ( v21 >= 0x7FFFFFFF0000LL )
      v21 = 0x7FFFFFFF0000LL;
    v22 = *(_DWORD *)v21;
    LODWORD(v50) = v22;
    v23 = *(_QWORD *)(v21 + 8);
    *((_QWORD *)&v50 + 1) = v23;
    v39 = v50;
    if ( (_WORD)v22 )
    {
      if ( (v23 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v24 = v23 + (unsigned __int16)v22;
      if ( v24 > 0x7FFFFFFF0000LL || v24 < v23 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( (v39 & 1) != 0 )
    {
      v28 = -1073741811;
      v34 = -1073741811;
      goto LABEL_46;
    }
    v29 = *(void **)(v8 + 8);
    Handle = v29;
  }
  else
  {
    if ( Size )
      v40 = *(_OWORD *)Size;
    v39 = *(_OWORD *)*(_QWORD *)(v8 + 16);
    v29 = *(void **)(v8 + 8);
    Handle = v29;
  }
  if ( CmpTraceRoutine
    && v29
    && ObReferenceObjectByHandle(
         Handle,
         0,
         (POBJECT_TYPE)CmKeyObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL) >= 0 )
  {
    v42 = *((_QWORD *)Object + 1);
    ObfDereferenceObject(Object);
  }
  v16 = a6 & 0x100001F;
  if ( (_DWORD)v16 != a6 )
  {
    v28 = -1073741811;
LABEL_66:
    v34 = v28;
    goto LABEL_46;
  }
  LODWORD(v52[3]) = a6;
  LODWORD(v52[0]) = 1;
  v52[1] = *((_QWORD *)&v40 + 1);
  WORD2(v52[0]) = v40;
  v52[9] = a8;
  v30 = (int)CmKeyObjectType;
  CurrentSilo = PsGetCurrentSilo();
  v28 = ObOpenObjectByNameEx(v8, v30, v14, 0, v11, (__int64)v52, CurrentSilo, (__int64)&Handle);
  v34 = v28;
  if ( v28 >= 0 )
  {
    v16 = (__int64)v41;
    *v41 = Handle;
    if ( a7 )
      *a7 = v52[4];
  }
LABEL_46:
  if ( CmpTraceRoutine )
  {
    v33 = v42;
    LOBYTE(v33) = 10;
    CmpTraceRoutine(v33, v53, (unsigned int)v28, 0LL, v42, &v39);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v52[11] )
  {
    CmpLockRegistry(v16);
    CmpDereferenceKeyControlBlock(v52[11]);
    CmpUnlockRegistry();
  }
  if ( v13 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v34;
  }
  return (unsigned int)v28;
}
