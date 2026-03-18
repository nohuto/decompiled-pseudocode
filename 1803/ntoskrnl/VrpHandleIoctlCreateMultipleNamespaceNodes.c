/*
 * XREFs of VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1407082FC
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
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     VRegEnabledInJob @ 0x1407080AC (VRegEnabledInJob.c)
 *     VrpAddNamespaceNodeToList @ 0x140709A0C (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x140709D4C (VrpCreateNamespaceNode.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x14070A004 (VrpCreateNamespaceNodePlaceholderKey.c)
 *     VrpDestroyNamespaceNode @ 0x14070A0B4 (VrpDestroyNamespaceNode.c)
 */

__int64 __fastcall VrpHandleIoctlCreateMultipleNamespaceNodes(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  _QWORD *v7; // rbx
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  int v10; // r12d
  int JobSilo; // esi
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r10
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v15; // rax
  unsigned __int16 v16; // cx
  int v17; // esi
  _QWORD *PoolWithTag; // rax
  unsigned __int64 v19; // r8
  _QWORD *v20; // r14
  _QWORD *v21; // r14
  PVOID Object; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-30h] BYREF
  __int64 v25; // [rsp+58h] [rbp-28h] BYREF
  _WORD v26[4]; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-18h]
  _WORD v28[4]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v29; // [rsp+78h] [rbp-8h]
  unsigned int v30; // [rsp+C8h] [rbp+48h]
  int v31; // [rsp+E0h] [rbp+60h]

  v30 = a2;
  Object = 0LL;
  v7 = 0LL;
  a6 = 0LL;
  v8 = 0LL;
  v9 = 12LL;
  v10 = 0;
  if ( (unsigned int)a2 >= 0xC )
  {
    ObpReferenceObjectByHandleWithTag(*(_QWORD *)a1, 6, (__int64)PsJobType, a3, 0x52566D43u, &Object, 0LL, 0LL);
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo < 0 )
      goto LABEL_36;
    if ( !PsIsThreadInSilo((__int64)KeGetCurrentThread(), 0LL) )
    {
      v24 = v13;
      VRegEnabledInJob(&v24);
      JobSilo = PsGetPermanentSiloContext(0LL, VrpSiloContextSlot, (unsigned __int64 *)&a6);
      if ( JobSilo < 0 )
      {
        v8 = a6;
        goto LABEL_36;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v8 = a6;
      ExAcquirePushLockExclusiveEx(a6 + 16, 0LL);
      v10 = 1;
      v31 = 0;
      if ( *(_DWORD *)(a1 + 8) )
      {
        while ( 1 )
        {
          v15 = v9 + 12;
          v25 = 0LL;
          a4 = v9 + a1;
          if ( v9 >= v9 + 12 )
            goto LABEL_30;
          if ( v30 < v15 )
            goto LABEL_30;
          v16 = *(_WORD *)(a4 + 4);
          if ( (v16 & 1) != 0 )
            goto LABEL_30;
          if ( !v16 )
            goto LABEL_30;
          a3 = v16 + v15;
          if ( v15 > a3 )
            goto LABEL_30;
          a2 = *(unsigned __int16 *)(a4 + 6);
          if ( (a2 & 1) != 0 )
            goto LABEL_30;
          if ( !(_WORD)a2 )
            goto LABEL_30;
          v9 = a3 + (unsigned __int16)a2;
          if ( a3 > v9
            || v30 < v9
            || (v17 = *(_DWORD *)(a4 + 8),
                v29 = a4 + 12,
                v28[1] = v16,
                v28[0] = v16,
                v26[1] = a2,
                v26[0] = a2,
                v27 = a4 + 2 * (((unsigned __int64)v16 >> 1) + 6),
                (v17 & 7) != v17) )
          {
LABEL_30:
            JobSilo = -1073741811;
            goto LABEL_36;
          }
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x67655256u);
          if ( !PoolWithTag )
            break;
          v19 = v24;
          *PoolWithTag = v7;
          v7 = PoolWithTag;
          PoolWithTag[1] = 0LL;
          JobSilo = VrpCreateNamespaceNode(v8, v28, v19, v26, v17, &v25);
          if ( JobSilo < 0 )
            goto LABEL_29;
          v10 = 1;
          v7[1] = v25;
          if ( (unsigned int)++v31 >= *(_DWORD *)(a1 + 8) )
            goto LABEL_21;
        }
        JobSilo = -1073741670;
      }
      else
      {
LABEL_21:
        v20 = v7;
        if ( v7 )
        {
          while ( 1 )
          {
            JobSilo = VrpAddNamespaceNodeToList(v8, v20[1]);
            if ( JobSilo < 0 )
              break;
            v20 = (_QWORD *)*v20;
            if ( !v20 )
              goto LABEL_24;
          }
        }
        else
        {
LABEL_24:
          v21 = v7;
          if ( !v7 )
          {
LABEL_27:
            JobSilo = 0;
            goto LABEL_36;
          }
          while ( 1 )
          {
            JobSilo = VrpCreateNamespaceNodePlaceholderKey(v21[1]);
            if ( JobSilo < 0 )
              break;
            v21 = (_QWORD *)*v21;
            if ( !v21 )
              goto LABEL_27;
          }
        }
      }
LABEL_29:
      v10 = 1;
      goto LABEL_36;
    }
    v8 = a6;
    JobSilo = -1073741811;
    v12 = (unsigned int)v13;
  }
  else
  {
    JobSilo = -1073741811;
    v12 = 0LL;
  }
  while ( v12 )
  {
    if ( JobSilo < 0 && *(_QWORD *)(v12 + 8) )
      VrpDestroyNamespaceNode(v8);
    ExFreePoolWithTag((PVOID)v12, 0x67655256u);
LABEL_36:
    v12 = (unsigned __int64)v7;
    if ( v7 )
      v7 = (_QWORD *)*v7;
  }
  if ( v10 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 16), a2, a3, a4);
    KeAbPostRelease(v8 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
