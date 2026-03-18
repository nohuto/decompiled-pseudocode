/*
 * XREFs of VrpHandleIoctlCreateNamespaceNode @ 0x140708654
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140707A60 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PsGetPermanentSiloContext @ 0x1400A5EF0 (PsGetPermanentSiloContext.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     PsIsThreadInSilo @ 0x1400F17F4 (PsIsThreadInSilo.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     PsGetJobSilo @ 0x1402847C0 (PsGetJobSilo.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     VRegEnabledInJob @ 0x1407080AC (VRegEnabledInJob.c)
 *     VrpAddNamespaceNodeToList @ 0x140709A0C (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x140709D4C (VrpCreateNamespaceNode.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x14070A004 (VrpCreateNamespaceNodePlaceholderKey.c)
 *     VrpDestroyNamespaceNode @ 0x14070A0B4 (VrpDestroyNamespaceNode.c)
 */

__int64 __fastcall VrpHandleIoctlCreateNamespaceNode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        PVOID Object)
{
  __int64 v6; // r9
  unsigned __int64 v8; // r14
  int v9; // r12d
  __int64 v10; // rsi
  int JobSilo; // edi
  unsigned __int16 v12; // ax
  unsigned int v13; // ecx
  unsigned int v14; // edx
  int v15; // esi
  unsigned __int64 v16; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v18; // eax
  unsigned __int64 v20; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-28h] BYREF
  __int16 v22; // [rsp+50h] [rbp-20h] BYREF
  __int16 v23; // [rsp+52h] [rbp-1Eh]
  __int64 v24; // [rsp+58h] [rbp-18h]
  _WORD v25[4]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v26; // [rsp+68h] [rbp-8h]

  Object = 0LL;
  v6 = (unsigned int)a2;
  v20 = 0LL;
  a5 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  if ( (unsigned int)a2 < 0x18 )
    return (unsigned int)-1073741811;
  v12 = *(_WORD *)(a1 + 8);
  if ( (v12 & 1) != 0 || (a2 = *(unsigned __int16 *)(a1 + 10), (a2 & 1) != 0) )
  {
    JobSilo = -1073741811;
    goto LABEL_20;
  }
  if ( !v12 )
    return (unsigned int)-1073741811;
  if ( !(_WORD)a2 )
    return (unsigned int)-1073741811;
  v13 = v12 + 16;
  v14 = v13 + (unsigned __int16)a2;
  if ( v13 > v14 || (unsigned int)v6 < v14 )
    return (unsigned int)-1073741811;
  JobSilo = ObpReferenceObjectByHandleWithTag(*(_QWORD *)a1, 6, (__int64)PsJobType, a3, 0x52566D43u, &Object, 0LL, 0LL);
  if ( JobSilo >= 0 )
  {
    v15 = *(_DWORD *)(a1 + 12);
    v26 = a1 + 16;
    v16 = *(unsigned __int16 *)(a1 + 8);
    v25[1] = v16;
    v25[0] = v16;
    v24 = a1 + 2 * ((v16 >> 1) + 8);
    v23 = *(_WORD *)(a1 + 10);
    v22 = v23;
    if ( (v15 & 7) != v15 )
    {
LABEL_11:
      JobSilo = -1073741811;
      goto LABEL_26;
    }
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo >= 0 )
    {
      if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), 0LL) )
        goto LABEL_11;
      v21 = 0LL;
      VRegEnabledInJob(&v21);
      JobSilo = PsGetPermanentSiloContext(0LL, VrpSiloContextSlot, &v20);
      if ( JobSilo >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v8 = v20;
        ExAcquirePushLockExclusiveEx(v20 + 16, 0LL);
        v9 = 1;
        v18 = VrpCreateNamespaceNode(v8, v25, v21, &v22, v15, &a5);
        v10 = a5;
        JobSilo = v18;
        if ( v18 >= 0 )
        {
          JobSilo = VrpAddNamespaceNodeToList(v8, a5);
          if ( JobSilo >= 0 )
          {
            JobSilo = VrpCreateNamespaceNodePlaceholderKey(v10);
            if ( JobSilo >= 0 )
            {
              JobSilo = 0;
LABEL_23:
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 16), a2, a3, v6);
              KeAbPostRelease(v8 + 16);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              goto LABEL_26;
            }
          }
        }
LABEL_20:
        if ( v10 )
          VrpDestroyNamespaceNode(v8);
        if ( !v9 )
          goto LABEL_26;
        goto LABEL_23;
      }
    }
  }
LABEL_26:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
