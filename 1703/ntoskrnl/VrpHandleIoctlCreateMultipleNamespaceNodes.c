/*
 * XREFs of VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140679694
 * Callers:
 *     IoctlDeviceDispatch @ 0x140678B40 (IoctlDeviceDispatch.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x14000C280 (PsGetPermanentSiloContext.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     PsGetJobSilo @ 0x140239490 (PsGetJobSilo.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     VrpAddNamespaceNodeToList @ 0x14067AC20 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x14067AF54 (VrpCreateNamespaceNode.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x14067B1CC (VrpCreateNamespaceNodePlaceholderKey.c)
 *     VrpDestroyNamespaceNode @ 0x14067B280 (VrpDestroyNamespaceNode.c)
 */

__int64 __fastcall VrpHandleIoctlCreateMultipleNamespaceNodes(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  _QWORD *v7; // rbx
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  int JobSilo; // esi
  _QWORD *v11; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int16 v15; // cx
  unsigned __int64 v16; // r8
  unsigned __int16 v17; // dx
  int v18; // esi
  _QWORD *PoolWithTag; // rax
  _QWORD *j; // r14
  _QWORD *k; // r14
  PVOID Object; // [rsp+40h] [rbp-40h] BYREF
  __int64 v24; // [rsp+48h] [rbp-38h]
  __int64 v25; // [rsp+50h] [rbp-30h] BYREF
  _WORD v26[4]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v27; // [rsp+60h] [rbp-20h]
  _WORD v28[4]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v29; // [rsp+70h] [rbp-10h]
  int v31; // [rsp+D8h] [rbp+58h]
  unsigned int i; // [rsp+E0h] [rbp+60h]

  Object = 0LL;
  v7 = 0LL;
  a6 = 0LL;
  v8 = 0LL;
  v31 = 0;
  v9 = 12LL;
  v24 = 0LL;
  if ( a2 >= 0xC )
  {
    ObpReferenceObjectByHandleWithTag(*(_QWORD *)a1, 6, (__int64)PsJobType, a3, 1381395779, &Object, 0LL, 0LL);
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo < 0 )
      goto LABEL_34;
    JobSilo = PsGetPermanentSiloContext(v24, gVregSiloContextSlot, (unsigned __int64 *)&a6);
    if ( JobSilo < 0 )
    {
      v8 = a6;
      goto LABEL_34;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = a6;
    ExAcquirePushLockExclusiveEx(a6 + 16, 0LL);
    v31 = 1;
    for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
    {
      v13 = v9 + 12;
      v25 = 0LL;
      v14 = v9 + a1;
      if ( v9 >= v9 + 12
        || a2 < v13
        || (v15 = *(_WORD *)(v14 + 4), (v15 & 1) != 0)
        || !v15
        || (v16 = v15 + v13, v13 > v16) )
      {
        JobSilo = -1073741811;
        goto LABEL_34;
      }
      v17 = *(_WORD *)(v14 + 6);
      if ( (v17 & 1) != 0 )
        goto LABEL_27;
      if ( !v17 )
        goto LABEL_27;
      v9 = v16 + v17;
      if ( v16 > v9
        || a2 < v9
        || (v18 = *(_DWORD *)(v14 + 8),
            v29 = v14 + 12,
            v28[1] = v15,
            v28[0] = v15,
            v26[1] = v17,
            v26[0] = v17,
            v27 = v14 + 2 * (((unsigned __int64)v15 >> 1) + 6),
            (v18 & 7) != v18) )
      {
LABEL_27:
        JobSilo = -1073741811;
        goto LABEL_34;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x67655256u);
      if ( !PoolWithTag )
      {
        JobSilo = -1073741670;
        goto LABEL_34;
      }
      *PoolWithTag = v7;
      v7 = PoolWithTag;
      PoolWithTag[1] = 0LL;
      JobSilo = VrpCreateNamespaceNode(v8, (unsigned int)v28, (unsigned int)v26, v18, (__int64)&v25);
      if ( JobSilo < 0 )
        goto LABEL_34;
      v7[1] = v25;
    }
    for ( j = v7; j; j = (_QWORD *)*j )
    {
      JobSilo = VrpAddNamespaceNodeToList(v8, j[1]);
      if ( JobSilo < 0 )
        goto LABEL_34;
    }
    for ( k = v7; k; k = (_QWORD *)*k )
    {
      JobSilo = VrpCreateNamespaceNodePlaceholderKey(k[1]);
      if ( JobSilo < 0 )
        goto LABEL_34;
    }
    JobSilo = 0;
    goto LABEL_34;
  }
  JobSilo = -1073741811;
  v11 = 0LL;
  while ( v11 )
  {
    if ( JobSilo < 0 && v11[1] )
      VrpDestroyNamespaceNode(v8);
    ExFreePoolWithTag(v11, 0x67655256u);
LABEL_34:
    v11 = v7;
    if ( v7 )
      v7 = (_QWORD *)*v7;
  }
  if ( v31 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 16));
    KeAbPostRelease(v8 + 16);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
