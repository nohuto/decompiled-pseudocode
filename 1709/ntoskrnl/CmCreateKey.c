/*
 * XREFs of CmCreateKey @ 0x1404E2CA0
 * Callers:
 *     NtCreateKey @ 0x1404E2C5C (NtCreateKey.c)
 *     NtCreateKeyTransacted @ 0x140568BB4 (NtCreateKeyTransacted.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140003C40 (EtwGetKernelTraceTimestamp.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     PsGetCurrentSilo @ 0x1400817D0 (PsGetCurrentSilo.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObOpenObjectByNameEx @ 0x1404AC5A0 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     CmpCleanupParseContext @ 0x1404E322C (CmpCleanupParseContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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
  BOOLEAN v13; // r13
  char PreviousMode; // r13
  int v15; // ecx
  void *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  int v20; // eax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  PVOID PoolWithQuotaTag; // rax
  PVOID v25; // rsi
  int v26; // edi
  void *v27; // rax
  ACCESS_MASK v28; // esi
  POBJECT_TYPE *v29; // rdi
  unsigned __int64 CurrentSilo; // rax
  __int64 v32; // rcx
  BOOLEAN v33; // [rsp+40h] [rbp-1F8h]
  unsigned int v34; // [rsp+44h] [rbp-1F4h]
  HANDLE Handle; // [rsp+50h] [rbp-1E8h] BYREF
  PVOID P; // [rsp+58h] [rbp-1E0h]
  __int128 v37; // [rsp+60h] [rbp-1D8h] BYREF
  __int128 v38; // [rsp+70h] [rbp-1C8h]
  __int64 v39; // [rsp+80h] [rbp-1B8h]
  size_t Size; // [rsp+88h] [rbp-1B0h]
  void *Src; // [rsp+90h] [rbp-1A8h]
  HANDLE *v42; // [rsp+98h] [rbp-1A0h]
  ULONG_PTR v43; // [rsp+A0h] [rbp-198h]
  _DWORD *v44; // [rsp+A8h] [rbp-190h]
  PVOID Object; // [rsp+B0h] [rbp-188h] BYREF
  __int128 v46; // [rsp+C0h] [rbp-178h]
  __int128 v47; // [rsp+D0h] [rbp-168h]
  unsigned __int64 v48; // [rsp+E0h] [rbp-158h]
  _QWORD v49[30]; // [rsp+F0h] [rbp-148h] BYREF
  __int64 v50[3]; // [rsp+1E0h] [rbp-58h] BYREF

  v42 = a1;
  v43 = a3;
  v11 = (__int64)a5;
  v44 = a7;
  Handle = 0LL;
  v37 = 0uLL;
  v38 = 0uLL;
  P = 0LL;
  memset(v50, 0, sizeof(v50));
  v39 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v50, 0x20000u);
  memset(v49, 0, sizeof(v49));
  v49[19] = &v49[18];
  v49[18] = &v49[18];
  memset(&v49[20], 0, 0x50uLL);
  HIDWORD(v49[3]) = a2 & 0x300;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v33 = v13;
  if ( v13 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      if ( a5 )
      {
        if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
          v11 = 0x7FFFFFFF0000LL;
        v15 = *(_DWORD *)v11;
        LODWORD(v46) = v15;
        v16 = *(void **)(v11 + 8);
        Src = v16;
        *((_QWORD *)&v46 + 1) = v16;
        v38 = v46;
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
          PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, (unsigned __int16)v15, 0x78634D43u);
          P = PoolWithQuotaTag;
          if ( !PoolWithQuotaTag )
          {
            v26 = -1073741670;
            v34 = -1073741670;
            v13 = v33;
            goto LABEL_47;
          }
          v25 = PoolWithQuotaTag;
          memmove(PoolWithQuotaTag, Src, Size);
          *((_QWORD *)&v38 + 1) = v25;
        }
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
      v48 = v19;
      if ( v19 >= 0x7FFFFFFF0000LL )
        v19 = 0x7FFFFFFF0000LL;
      v20 = *(_DWORD *)v19;
      LODWORD(v47) = v20;
      v21 = *(_QWORD *)(v19 + 8);
      *((_QWORD *)&v47 + 1) = v21;
      v37 = v47;
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
      LODWORD(v49[3]) = a6;
      LODWORD(v49[0]) = 1;
      v49[1] = *((_QWORD *)&v38 + 1);
      WORD2(v49[0]) = v38;
      v49[9] = a8;
      v29 = CmKeyObjectType;
      CurrentSilo = PsGetCurrentSilo();
      v26 = ObOpenObjectByNameEx(a3, (__int64)v29, PreviousMode, 0LL, v28, (__int64)v49, CurrentSilo, &Handle);
      v34 = v26;
      if ( v26 >= 0 )
      {
        *a1 = Handle;
        if ( a7 )
          *a7 = v49[4];
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
    CmpTraceRoutine(v32, v50, (unsigned int)v26, 0LL, v39, &v37);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  CmpCleanupParseContext(v49, 0LL);
  if ( v13 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v34;
  }
  return (unsigned int)v26;
}
