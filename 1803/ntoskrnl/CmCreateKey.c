/*
 * XREFs of CmCreateKey @ 0x14049F9B0
 * Callers:
 *     NtCreateKey @ 0x14049F96C (NtCreateKey.c)
 *     NtCreateKeyTransacted @ 0x14054C064 (NtCreateKeyTransacted.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x1400078DC (CmpAllocateTransientPoolWithQuotaTag.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400AAAD0 (EtwGetKernelTraceTimestamp.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     PsGetCurrentSilo @ 0x140105440 (PsGetCurrentSilo.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpCleanupParseContext @ 0x14049FF18 (CmpCleanupParseContext.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByNameEx @ 0x1405AC6B0 (ObOpenObjectByNameEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmCreateKey(
        HANDLE *a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
        __int128 *a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  __int64 v11; // rsi
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v13; // r12
  unsigned __int8 v14; // r12
  __int64 v15; // rcx
  const void *v16; // r12
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  int v20; // eax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rax
  struct _PRIVILEGE_SET *v25; // rsi
  int v26; // ebx
  void *v27; // rax
  unsigned int v28; // esi
  POBJECT_TYPE *v29; // rbx
  unsigned __int64 CurrentSilo; // rax
  __int64 v32; // rcx
  BOOLEAN v33; // [rsp+40h] [rbp-238h]
  unsigned int v34; // [rsp+44h] [rbp-234h]
  HANDLE Handle; // [rsp+50h] [rbp-228h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-220h]
  __int128 v37; // [rsp+60h] [rbp-218h] BYREF
  __int128 v38; // [rsp+70h] [rbp-208h]
  __int64 v39; // [rsp+80h] [rbp-1F8h]
  size_t Size; // [rsp+88h] [rbp-1F0h]
  HANDLE *v41; // [rsp+90h] [rbp-1E8h]
  ULONG_PTR v42; // [rsp+98h] [rbp-1E0h]
  _DWORD *v43; // [rsp+A0h] [rbp-1D8h]
  PVOID Object; // [rsp+A8h] [rbp-1D0h] BYREF
  __int128 v45; // [rsp+B0h] [rbp-1C8h]
  __int128 v46; // [rsp+C0h] [rbp-1B8h]
  unsigned __int64 v47; // [rsp+D0h] [rbp-1A8h]
  _QWORD v48[38]; // [rsp+E0h] [rbp-198h] BYREF
  LARGE_INTEGER v49[4]; // [rsp+210h] [rbp-68h] BYREF

  v41 = a1;
  v42 = a3;
  v11 = (__int64)a5;
  v43 = a7;
  Handle = 0LL;
  v37 = 0uLL;
  v38 = 0uLL;
  Privileges = 0LL;
  memset(v49, 0, sizeof(v49));
  v39 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v49, 0x20000u);
  memset(v48, 0, 0x128uLL);
  v48[19] = &v48[18];
  v48[18] = &v48[18];
  memset(&v48[27], 0, 0x50uLL);
  HIDWORD(v48[3]) = a2 & 0x300;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v33 = v13;
  if ( v13 )
  {
    v14 = KeGetCurrentThread()->gap0[10];
    if ( v14 == 1 )
    {
      if ( a5 )
      {
        if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
          v11 = 0x7FFFFFFF0000LL;
        v15 = *(unsigned int *)v11;
        LODWORD(v45) = v15;
        v16 = *(const void **)(v11 + 8);
        *((_QWORD *)&v45 + 1) = v16;
        v38 = v45;
        if ( (_WORD)v15 )
        {
          if ( ((unsigned __int8)v16 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v23 = (unsigned __int64)v16 + (unsigned __int16)v15;
          if ( v23 > 0x7FFFFFFF0000LL || v23 < (unsigned __int64)v16 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        if ( (v15 & 1) != 0 )
        {
          v26 = -1073741811;
          v34 = -1073741811;
          v13 = v33;
          goto LABEL_47;
        }
        if ( (_WORD)v15 )
        {
          Size = (unsigned __int16)v15;
          TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(
                                                                 v15,
                                                                 (unsigned __int16)v15,
                                                                 0x78634D43u);
          Privileges = TransientPoolWithQuotaTag;
          if ( !TransientPoolWithQuotaTag )
          {
            v26 = -1073741670;
            v34 = -1073741670;
            v13 = v33;
            goto LABEL_47;
          }
          v25 = TransientPoolWithQuotaTag;
          memmove(TransientPoolWithQuotaTag, v16, Size);
          *((_QWORD *)&v38 + 1) = v25;
        }
        v14 = 1;
      }
      v17 = (__int64)a1;
      if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v17 = 0LL;
      if ( a7 )
      {
        v18 = (__int64)a7;
        if ( (unsigned __int64)a7 >= 0x7FFFFFFF0000LL )
          v18 = 0x7FFFFFFF0000LL;
        *(_DWORD *)v18 = *(_DWORD *)v18;
      }
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = *(_QWORD *)(a3 + 16);
      v47 = v19;
      if ( v19 >= 0x7FFFFFFF0000LL )
        v19 = 0x7FFFFFFF0000LL;
      v20 = *(_DWORD *)v19;
      LODWORD(v46) = v20;
      v21 = *(_QWORD *)(v19 + 8);
      *((_QWORD *)&v46 + 1) = v21;
      v37 = v46;
      if ( (_WORD)v20 )
      {
        if ( (v21 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v22 = v21 + (unsigned __int16)v20;
        if ( v22 > 0x7FFFFFFF0000LL || v22 < v21 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      if ( (v37 & 1) != 0 )
      {
        v26 = -1073741811;
        v34 = -1073741811;
        v13 = v33;
        goto LABEL_47;
      }
      v27 = *(void **)(a3 + 8);
      Handle = v27;
      v28 = a2 & 0xFFFFFCFF;
    }
    else
    {
      if ( a5 )
        v38 = *a5;
      v37 = *(_OWORD *)*(_QWORD *)(a3 + 16);
      v27 = *(void **)(a3 + 8);
      Handle = v27;
      v28 = a2 & 0xFFFFFCFF;
    }
    if ( CmpTraceRoutine
      && v27
      && ObReferenceObjectByHandle(
           Handle,
           0,
           (POBJECT_TYPE)CmKeyObjectType,
           KeGetCurrentThread()->PreviousMode,
           &Object,
           0LL) >= 0 )
    {
      v39 = *((_QWORD *)Object + 1);
      ObfDereferenceObject(Object);
    }
    if ( (a6 & 0x100001F) == a6 )
    {
      LODWORD(v48[3]) = a6;
      LODWORD(v48[0]) = 1;
      v48[1] = *((_QWORD *)&v38 + 1);
      WORD2(v48[0]) = v38;
      v48[9] = a8;
      v29 = CmKeyObjectType;
      CurrentSilo = PsGetCurrentSilo();
      v26 = ObOpenObjectByNameEx(a3, v29, v14, 0LL, v28, v48, CurrentSilo, &Handle);
      v34 = v26;
      if ( v26 >= 0 )
      {
        *a1 = Handle;
        if ( a7 )
          *a7 = v48[4];
      }
      v13 = v33;
    }
    else
    {
      v26 = -1073741811;
      v34 = -1073741811;
      v13 = v33;
    }
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( HvShutdownComplete && (PopShutdownCleanly & 8) != 0 )
      KeBugCheckEx(0x51u, 0xEuLL, 1uLL, a3, 0LL);
    v26 = -1073741431;
    v34 = -1073741431;
  }
LABEL_47:
  if ( CmpTraceRoutine )
  {
    v32 = v39;
    LOBYTE(v32) = 10;
    CmpTraceRoutine(v32, v49, (unsigned int)v26, 0LL, v39, &v37);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  CmpCleanupParseContext(v48, 0LL);
  if ( v13 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v34;
  }
  return (unsigned int)v26;
}
