/*
 * XREFs of ndisCreateHandler @ 0x1C000C8D8
 * Callers:
 *     ndisCreateIrpHandler @ 0x1C000CE80 (ndisCreateIrpHandler.c)
 *     NdisWdfCreateIrpHandler @ 0x1C00615B0 (NdisWdfCreateIrpHandler.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000C850 (NdisDereferenceWithTag.c)
 *     ?ndisReferenceWithTagCompact@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C000CD84 (-ndisReferenceWithTagCompact@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     NdisGetSessionCompartmentId @ 0x1C000CE40 (NdisGetSessionCompartmentId.c)
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisDereferencePackage @ 0x1C00A5008 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C00A5C80 (-ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z.c)
 *     NdisWaitEvent @ 0x1C00A5CE0 (NdisWaitEvent.c)
 *     ndisCheckAccess @ 0x1C00A5D34 (ndisCheckAccess.c)
 *     ndisDummyHandler @ 0x1C00A63E4 (ndisDummyHandler.c)
 *     ?ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00F065C (-ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 */

int __fastcall ndisCreateHandler(struct _DEVICE_OBJECT *a1, __int64 a2, _IRP *a3, _BYTE *a4)
{
  __int64 v4; // rsi
  const struct _DEVICE_OBJECT *v7; // r10
  _QWORD *v8; // r13
  int v9; // edx
  struct _DEVICE_OBJECT *v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r10
  struct _KTHREAD *CurrentThread; // r14
  unsigned int *ThreadProperty; // rax
  __int64 v15; // rcx
  unsigned int SessionCompartmentId; // edi
  PACCESS_TOKEN v17; // rax
  void *v18; // rdi
  unsigned int CurrentProcessSessionId; // eax
  KIRQL v20; // al
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v22; // r8
  unsigned int v23; // edx
  __int64 v24; // rbx
  KIRQL v25; // r14
  __int64 v26; // r8
  __int64 v27; // rdx
  bool v28; // bl
  KIRQL v29; // al
  __int64 v30; // rdi
  KIRQL v31; // r14
  bool v32; // zf
  KIRQL v33; // dl
  unsigned int v34; // ecx
  char v35; // r14
  KIRQL v36; // di
  __int64 v37; // r8
  int v38; // edx
  int v39; // edi
  KIRQL v40; // al
  KSPIN_LOCK *v41; // rcx
  _QWORD *PoolWithTag; // rax
  struct _DEVICE_OBJECT *v43; // r14
  __int64 v44; // rax
  __int64 v45; // rdx
  unsigned int v47; // eax
  NTSTATUS v48; // ebx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdx
  struct _KEVENT *v52; // rcx
  __int64 v53; // rcx
  KIRQL v54; // al
  KIRQL v55; // al
  KIRQL v56; // al
  char v57; // [rsp+30h] [rbp-49h]
  char v58; // [rsp+31h] [rbp-48h]
  char v59; // [rsp+32h] [rbp-47h]
  char v60; // [rsp+33h] [rbp-46h]
  char v61; // [rsp+34h] [rbp-45h]
  BOOLEAN EffectiveOnly; // [rsp+40h] [rbp-39h] BYREF
  BOOLEAN CopyOnOpen[3]; // [rsp+41h] [rbp-38h] BYREF
  int v65; // [rsp+44h] [rbp-35h]
  int v66; // [rsp+48h] [rbp-31h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+4Ch] [rbp-2Dh] BYREF
  PVOID TokenInformation; // [rsp+50h] [rbp-29h] BYREF
  _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+58h] [rbp-21h]
  _BYTE *v70; // [rsp+60h] [rbp-19h]
  __int128 v71; // [rsp+70h] [rbp-9h]

  v4 = a2;
  v57 = 0;
  LOBYTE(a2) = 0;
  v61 = 0;
  v65 = a2;
  v70 = a4;
  v7 = a1;
  v59 = 0;
  v8 = 0LL;
  v60 = 0;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    WPP_SF_qq(15LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, a1, a3);
    v7 = a1;
  }
  if ( a4 )
    *a4 = 0;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->FileObject )
  {
    a3->IoStatus.Status = -1073741823;
    IofCompleteRequest(a3, 2);
    return -1073741823;
  }
  if ( ndisIsSetupDevice(v7) )
    return ndisSetupDeviceCreateIrp(v10, a3);
  if ( *(_BYTE *)v4 != 17 )
    return ndisDummyHandler(v12, v4, a3);
  v66 = *(_DWORD *)(v4 + 120) & 0x80;
  if ( v66 )
  {
    v49 = *(_QWORD *)(v11 + 48);
    if ( v49 )
    {
      v9 = (unsigned __int8)v9;
      if ( *(_WORD *)(v49 + 88) )
        v9 = 1;
      v65 = v9;
    }
  }
  v58 = ndisCheckAccess(a3, v11, *(_QWORD *)(v4 + 3808));
  ndisReferencePackage(&ndisPkgs);
  CurrentThread = KeGetCurrentThread();
  v71 = 0uLL;
  ThreadProperty = (unsigned int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    SessionCompartmentId = *ThreadProperty;
    ObfDereferenceObject(ThreadProperty);
  }
  else
  {
    SessionCompartmentId = 0;
  }
  if ( !SessionCompartmentId )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v15);
    }
    else
    {
      v17 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v18 = v17;
      if ( v17
        && (v48 = SeQueryInformationToken(v17, TokenSessionId, &TokenInformation),
            PsDereferenceImpersonationToken(v18),
            v48 >= 0) )
      {
        CurrentProcessSessionId = (unsigned int)TokenInformation;
      }
      else
      {
        CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
      }
    }
    SessionCompartmentId = NdisGetSessionCompartmentId(CurrentProcessSessionId);
  }
  v20 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  Flink = ndisIfCompartmentList.Flink;
  v22 = 0LL;
  while ( Flink != &ndisIfCompartmentList )
  {
    v23 = (unsigned int)Flink[1].Flink;
    if ( v23 == SessionCompartmentId )
    {
      v22 = Flink;
      break;
    }
    if ( v23 > SessionCompartmentId )
      break;
    Flink = Flink->Flink;
  }
  v71 = *(__int128 *)((char *)&v22[105] + 4);
  KeReleaseSpinLock(&ndisIfListLock, v20);
  v24 = 0LL;
  v25 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  if ( *(_BYTE *)(v4 + 4056) )
  {
    v24 = *(_QWORD *)(v4 + 4064);
    v26 = *(_QWORD *)(v24 + 1448);
    if ( v26 )
    {
      if ( *(_BYTE *)(v26 + 1) )
      {
        if ( *(_BYTE *)(v26 + 1) == 1 )
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v26 + 1352), 1u);
      }
      else
      {
        ndisReferenceWithTagCompact(*(struct _NDIS_REFCOUNT_BLOCK **)(v24 + 1448), 0x15u);
      }
    }
    ++*(_DWORD *)(v24 + 1404);
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v25);
  if ( !v24 )
    goto LABEL_93;
  v27 = *(_QWORD *)(v24 + 1384);
  if ( SessionCompartmentId == *(_DWORD *)(v27 + 16) )
    goto LABEL_27;
  v50 = v71 - *(_QWORD *)(v27 + 1684);
  if ( (_QWORD)v71 == *(_QWORD *)(v27 + 1684) )
    v50 = *((_QWORD *)&v71 + 1) - *(_QWORD *)(v27 + 1692);
  if ( !v50 )
LABEL_27:
    v28 = 1;
  else
    v28 = (*(_DWORD *)(v27 + 1680) & 2) == 0 && SessionCompartmentId == 1;
  v29 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  v30 = *(_QWORD *)(v4 + 4064);
  v31 = v29;
  NdisDereferenceWithTag(*(_QWORD *)(v30 + 1448), 0x15u);
  v32 = (*(_DWORD *)(v30 + 1404))-- == 1;
  if ( v32 )
  {
    v51 = *(_QWORD *)(v30 + 1416);
    if ( v51 )
    {
      v52 = *(struct _KEVENT **)(v51 + 4072);
      if ( v52 )
        KeSetEvent(v52, 0, 0);
    }
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v31);
  if ( !v28 )
  {
LABEL_93:
    v39 = -1073741772;
    goto LABEL_94;
  }
  v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 4464));
  if ( v58 )
  {
    v34 = *(_DWORD *)(v4 + 3776);
    if ( v34 < 0x1000000 )
    {
      v59 = 1;
      *(_DWORD *)(v4 + 3776) = v34 + 1;
      goto LABEL_33;
    }
  }
  else
  {
    v47 = *(_DWORD *)(v4 + 3692);
    if ( v47 < 0x1000000 )
    {
      v60 = 1;
      *(_DWORD *)(v4 + 3692) = v47 + 1;
LABEL_33:
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 4464), v33);
      if ( (*(_DWORD *)(v4 + 124) & 0x20100) != 0 )
      {
        v39 = -1073741823;
        goto LABEL_94;
      }
      NdisWaitEvent((PNDIS_EVENT)(v4 + 3752), 0x32u);
      v35 = 1;
      v57 = 1;
      v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 4464));
      if ( !*(_BYTE *)(v4 + 4476) )
      {
        v37 = *(_QWORD *)(v4 + 4920);
        if ( v37 )
        {
          if ( *(_BYTE *)(v37 + 1) )
          {
            if ( *(_BYTE *)(v37 + 1) == 1 )
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v37 + 5448), 1u);
          }
          else
          {
            ndisReferenceWithTagCompact(*(struct _NDIS_REFCOUNT_BLOCK **)(v4 + 4920), 0x55u);
          }
        }
        v38 = *(_DWORD *)(v4 + 4472);
        *(_DWORD *)(v4 + 4472) = v38 + 1;
        if ( v38 != -1 )
          goto LABEL_39;
        *(_DWORD *)(v4 + 4472) = -1;
      }
      v35 = 0;
      v57 = 0;
LABEL_39:
      if ( (unsigned __int8)byte_1C009261B >= 4u )
        WPP_SF_qD(12LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, v4, *(unsigned int *)(v4 + 4472));
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 4464), v36);
      v39 = 0;
      if ( !v35 )
      {
        v39 = -1073676282;
        goto LABEL_94;
      }
      v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
      v41 = (KSPIN_LOCK *)(v4 + 96);
      v32 = *(_DWORD *)(v4 + 1520) == 2;
      *(_QWORD *)(v4 + 520) = KeGetCurrentThread();
      v33 = v40;
      *(_DWORD *)(v4 + 1856) = 918411;
      if ( !v32 )
      {
        ++*(_DWORD *)(v4 + 1800);
        v61 = 1;
        *(_QWORD *)(v4 + 520) = 0LL;
        *(_DWORD *)(v4 + 1856) = 0;
        KeReleaseSpinLock(v41, v40);
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x636F444Eu);
        v43 = a1;
        v8 = PoolWithTag;
        if ( PoolWithTag )
        {
          PoolWithTag[1] = a1;
          PoolWithTag[2] = v4;
          PoolWithTag[3] = 0LL;
          *((_BYTE *)PoolWithTag + 32) = v58;
          *(_BYTE *)PoolWithTag = v65;
          CurrentStackLocation->FileObject->FsContext = PoolWithTag;
          v44 = *(_QWORD *)(v4 + 1776);
          if ( v44 )
          {
            v8[3] = v44;
          }
          else if ( a3->RequestorMode == 1 )
          {
            v39 = -1073741823;
          }
        }
        else
        {
          v39 = -1073741670;
        }
        goto LABEL_46;
      }
      *(_QWORD *)(v4 + 520) = 0LL;
      v39 = -1073676282;
      *(_DWORD *)(v4 + 1856) = 0;
      goto LABEL_82;
    }
  }
  v39 = -1073741670;
  v41 = (KSPIN_LOCK *)(v4 + 4464);
LABEL_82:
  KeReleaseSpinLock(v41, v33);
LABEL_94:
  v43 = a1;
LABEL_46:
  ndisDereferencePackage(&ndisPkgs);
  if ( v39 < 0 )
    goto LABEL_98;
  if ( (*(_DWORD *)(v4 + 124) & 0x2000) != 0 )
  {
    v53 = *(_QWORD *)(v4 + 4008);
    if ( v53 )
      (*(void (__fastcall **)(_QWORD))(v53 + 32))(*(_QWORD *)(v53 + 8));
    else
      v39 = -1073741823;
  }
  if ( v39 < 0 )
  {
LABEL_98:
    if ( v59 )
    {
      v54 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 4464));
      --*(_DWORD *)(v4 + 3776);
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 4464), v54);
    }
    if ( v60 )
    {
      v55 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 4464));
      --*(_DWORD *)(v4 + 3692);
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 4464), v55);
    }
    if ( v61 )
    {
      ndisReferencePackage(&ndisPkgs);
      v56 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
      --*(_DWORD *)(v4 + 1800);
      *(_QWORD *)(v4 + 520) = 0LL;
      *(_DWORD *)(v4 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v56);
      ndisDereferencePackage(&ndisPkgs);
    }
    if ( v57 )
    {
      LOBYTE(v45) = 85;
      ndisDereferenceMiniport(v4, v45);
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  if ( v66 )
  {
    *v70 = 1;
  }
  else
  {
    a3->IoStatus.Status = v39;
    IofCompleteRequest(a3, 2);
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqd(16LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, v43, a3, v39);
  return v39;
}
