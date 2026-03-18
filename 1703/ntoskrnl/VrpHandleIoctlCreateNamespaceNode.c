/*
 * XREFs of VrpHandleIoctlCreateNamespaceNode @ 0x1406799C8
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
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     VrpAddNamespaceNodeToList @ 0x14067AC20 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x14067AF54 (VrpCreateNamespaceNode.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x14067B1CC (VrpCreateNamespaceNodePlaceholderKey.c)
 *     VrpDestroyNamespaceNode @ 0x14067B280 (VrpDestroyNamespaceNode.c)
 */

__int64 __fastcall VrpHandleIoctlCreateNamespaceNode(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        PVOID Object,
        __int64 a6)
{
  unsigned __int64 v8; // r15
  int v9; // r12d
  __int64 v10; // rsi
  int JobSilo; // edi
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // dx
  unsigned int v14; // ecx
  unsigned int v15; // edx
  int v16; // esi
  unsigned __int64 v17; // rax
  struct _KTHREAD *CurrentThread; // rax
  int NamespaceNode; // eax
  unsigned __int64 v21; // [rsp+40h] [rbp-30h] BYREF
  __int16 v22; // [rsp+48h] [rbp-28h] BYREF
  __int16 v23; // [rsp+4Ah] [rbp-26h]
  __int64 v24; // [rsp+50h] [rbp-20h]
  _WORD v25[4]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h]
  __int64 v27; // [rsp+B8h] [rbp+48h] BYREF

  Object = 0LL;
  v21 = 0LL;
  v27 = 0LL;
  v8 = 0LL;
  a6 = 0LL;
  v9 = 0;
  v10 = 0LL;
  if ( a2 < 0x18 )
    return (unsigned int)-1073741811;
  v12 = *(_WORD *)(a1 + 8);
  if ( (v12 & 1) != 0 || (v13 = *(_WORD *)(a1 + 10), (v13 & 1) != 0) )
  {
    JobSilo = -1073741811;
    goto LABEL_19;
  }
  if ( !v12 )
    return (unsigned int)-1073741811;
  if ( !v13 )
    return (unsigned int)-1073741811;
  v14 = v12 + 16;
  v15 = v14 + v13;
  if ( v14 > v15 || a2 < v15 )
    return (unsigned int)-1073741811;
  JobSilo = ObpReferenceObjectByHandleWithTag(*(_QWORD *)a1, 6, (__int64)PsJobType, a3, 1381395779, &Object, 0LL, 0LL);
  if ( JobSilo >= 0 )
  {
    v16 = *(_DWORD *)(a1 + 12);
    v26 = a1 + 16;
    v17 = *(unsigned __int16 *)(a1 + 8);
    v25[1] = v17;
    v25[0] = v17;
    v24 = a1 + 2 * ((v17 >> 1) + 8);
    v23 = *(_WORD *)(a1 + 10);
    v22 = v23;
    if ( (v16 & 7) != v16 )
    {
      JobSilo = -1073741811;
      goto LABEL_25;
    }
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo >= 0 )
    {
      JobSilo = PsGetPermanentSiloContext(a6, gVregSiloContextSlot, &v21);
      if ( JobSilo >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v8 = v21;
        ExAcquirePushLockExclusiveEx(v21 + 16, 0LL);
        v9 = 1;
        NamespaceNode = VrpCreateNamespaceNode(v8, (unsigned int)v25, (unsigned int)&v22, v16, (__int64)&v27);
        v10 = v27;
        JobSilo = NamespaceNode;
        if ( NamespaceNode >= 0 )
        {
          JobSilo = VrpAddNamespaceNodeToList(v8, v27);
          if ( JobSilo >= 0 )
          {
            JobSilo = VrpCreateNamespaceNodePlaceholderKey(v10);
            if ( JobSilo >= 0 )
            {
              JobSilo = 0;
LABEL_22:
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 16));
              KeAbPostRelease(v8 + 16);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              goto LABEL_25;
            }
          }
        }
LABEL_19:
        if ( v10 )
          VrpDestroyNamespaceNode(v8);
        if ( !v9 )
          goto LABEL_25;
        goto LABEL_22;
      }
    }
  }
LABEL_25:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
