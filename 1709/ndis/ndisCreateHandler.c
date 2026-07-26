/*
 * XREFs of ndisCreateHandler @ 0x1C0008A80
 * Callers:
 *     ndisCreateIrpHandler @ 0x1C0008A60 (ndisCreateIrpHandler.c)
 *     NdisWdfCreateIrpHandler @ 0x1C00619A0 (NdisWdfCreateIrpHandler.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ndisIsPrivateDeviceInterface @ 0x1C005D68C (ndisIsPrivateDeviceInterface.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C0067B44 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006DDD8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006DE84 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisDummyHandler @ 0x1C00AC1B8 (ndisDummyHandler.c)
 *     ndisCheckAccess @ 0x1C00B7034 (ndisCheckAccess.c)
 *     NdisWaitEvent @ 0x1C00B7140 (NdisWaitEvent.c)
 *     ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C00B7194 (-ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ?ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00F9BB4 (-ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 */

int __fastcall ndisCreateHandler(struct _DEVICE_OBJECT *a1, __int64 a2, _IRP *a3, _BYTE *a4)
{
  BOOL v4; // ebx
  const struct _DEVICE_OBJECT *v8; // r10
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  struct _DEVICE_OBJECT *v10; // rcx
  struct _KTHREAD *CurrentThread; // r14
  unsigned int *ThreadProperty; // rax
  unsigned int v13; // ebx
  PACCESS_TOKEN v14; // rax
  void *v15; // rsi
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // esi
  KIRQL v18; // al
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v20; // r8
  unsigned int v21; // edx
  __int64 v22; // rsi
  KIRQL v23; // r14
  __int64 v24; // rdx
  bool v25; // r14
  KIRQL v26; // al
  __int64 v27; // rsi
  KIRQL v28; // r13
  ULONG_PTR v29; // r8
  __int64 v30; // rdx
  bool v31; // zf
  KIRQL v32; // dl
  unsigned int v33; // ecx
  char v34; // r14
  KIRQL v35; // si
  struct _NDIS_REFCOUNT_BLOCK *v36; // rcx
  int v37; // edx
  KIRQL v38; // al
  KSPIN_LOCK *v39; // rcx
  _QWORD *PoolWithTag; // rax
  struct _DEVICE_OBJECT *v41; // r13
  _QWORD *v42; // r14
  int v43; // esi
  __int64 v44; // rax
  __int64 v45; // rdx
  unsigned __int8 v47; // r10
  unsigned __int8 v48; // r9
  unsigned int v49; // eax
  char v50; // al
  NTSTATUS v51; // ebx
  KIRQL v52; // al
  __int64 v53; // rcx
  ULONG_PTR v54; // rbx
  unsigned int v55; // edx
  __int64 v56; // rax
  struct _KEVENT *v57; // rcx
  __int64 v58; // rcx
  KIRQL v59; // al
  KIRQL v60; // al
  KIRQL v61; // al
  char v62; // [rsp+30h] [rbp-49h]
  char v63; // [rsp+31h] [rbp-48h]
  char v64; // [rsp+32h] [rbp-47h]
  char v65; // [rsp+33h] [rbp-46h]
  char v66; // [rsp+34h] [rbp-45h]
  BOOLEAN EffectiveOnly; // [rsp+40h] [rbp-39h] BYREF
  BOOLEAN CopyOnOpen[3]; // [rsp+41h] [rbp-38h] BYREF
  BOOL v70; // [rsp+44h] [rbp-35h]
  _QWORD *v71; // [rsp+48h] [rbp-31h]
  int v72; // [rsp+50h] [rbp-29h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+54h] [rbp-25h] BYREF
  PVOID TokenInformation; // [rsp+58h] [rbp-21h] BYREF
  _IO_STACK_LOCATION *v75; // [rsp+60h] [rbp-19h]
  _BYTE *v76; // [rsp+68h] [rbp-11h]
  __int128 v77; // [rsp+78h] [rbp-1h]

  v76 = a4;
  LOBYTE(v4) = 0;
  v70 = v4;
  v71 = 0LL;
  v62 = 0;
  v8 = a1;
  v66 = 0;
  v64 = 0;
  v65 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    WPP_SF_qq(15LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, a1, a3);
    v8 = a1;
  }
  if ( a4 )
    *a4 = 0;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v75 = CurrentStackLocation;
  if ( !CurrentStackLocation->FileObject )
  {
    a3->IoStatus.Status = -1073741823;
    IofCompleteRequest(a3, 2);
    return -1073741823;
  }
  if ( ndisIsSetupDevice(v8) )
    return ndisSetupDeviceCreateIrp(v10, a3);
  if ( *(_BYTE *)a2 != 17 )
    return ndisDummyHandler(v10, a2, a3);
  v72 = *(_DWORD *)(a2 + 120) & 0x80;
  if ( v72 )
    v70 = (unsigned __int8)ndisIsPrivateDeviceInterface(a2, a3) != 0;
  v63 = ndisCheckAccess(a3, CurrentStackLocation, *(_QWORD *)(a2 + 3808));
  ndisReferencePackage(&ndisPkgs);
  CurrentThread = KeGetCurrentThread();
  v77 = 0uLL;
  ThreadProperty = (unsigned int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    v13 = *ThreadProperty;
    ObfDereferenceObject(ThreadProperty);
  }
  else
  {
    v13 = 0;
  }
  if ( !v13 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    }
    else
    {
      v14 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v15 = v14;
      if ( v14 )
      {
        v51 = SeQueryInformationToken(v14, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v15);
        if ( v51 >= 0 )
        {
          ThreadSessionId = (unsigned int)TokenInformation;
          goto LABEL_17;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    ThreadSessionId = CurrentProcessSessionId;
LABEL_17:
    if ( ThreadSessionId == -1 )
      ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    if ( ThreadSessionId < ndisCmSessionCount )
    {
      v13 = 0;
      v52 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
      if ( ThreadSessionId < ndisCmSessionCount )
        v13 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
      KeReleaseSpinLock(&ndisCmSessionLock, v52);
      if ( !v13 )
        v13 = 1;
    }
    else
    {
      v13 = 1;
    }
  }
  v18 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  Flink = ndisIfCompartmentList.Flink;
  v20 = 0LL;
  while ( Flink != &ndisIfCompartmentList )
  {
    v21 = (unsigned int)Flink[1].Flink;
    if ( v21 == v13 )
    {
      v20 = Flink;
      break;
    }
    if ( v21 > v13 )
      break;
    Flink = Flink->Flink;
  }
  v77 = *(__int128 *)((char *)&v20[105] + 4);
  KeReleaseSpinLock(&ndisIfListLock, v18);
  v22 = 0LL;
  v23 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  if ( *(_BYTE *)(a2 + 4056) )
  {
    v22 = *(_QWORD *)(a2 + 4064);
    NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v22 + 1448));
    ++*(_DWORD *)(v22 + 1404);
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v23);
  if ( !v22 )
    goto LABEL_110;
  v24 = *(_QWORD *)(v22 + 1384);
  if ( v13 == *(_DWORD *)(v24 + 16) )
    goto LABEL_29;
  v53 = v77 - *(_QWORD *)(v24 + 1684);
  if ( (_QWORD)v77 == *(_QWORD *)(v24 + 1684) )
    v53 = *((_QWORD *)&v77 + 1) - *(_QWORD *)(v24 + 1692);
  if ( !v53 )
LABEL_29:
    v25 = 1;
  else
    v25 = (*(_DWORD *)(v24 + 1680) & 2) == 0 && v13 == 1;
  v26 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  v27 = *(_QWORD *)(a2 + 4064);
  v28 = v26;
  v29 = *(_QWORD *)(v27 + 1448);
  if ( v29 )
  {
    if ( *(_BYTE *)(v29 + 1) )
    {
      if ( *(_BYTE *)(v29 + 1) == 1 )
      {
        v54 = v29 + 1352;
        v55 = *(_DWORD *)(v29 + 1408);
        if ( v55 >> 17 < 0x3FFE && (unsigned __int16)v55 >> 1 == (v55 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v29 + 1352));
          *(_DWORD *)(v54 + 56) &= 0x10001u;
        }
        else
        {
          if ( (v55 & 0xFFFE) == 0 && (v55 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v29, 0x15uLL);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v29 + 1352), 0);
        }
      }
    }
    else
    {
      v30 = *(_QWORD *)(v29 + 8);
      if ( v30 && (v47 = *(_BYTE *)(v29 + 3), v48 = 0, v47) )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(v30 + 2LL * v48) == 21 )
          {
            v50 = *(_BYTE *)(v30 + 2LL * v48 + 1);
            if ( v50 )
              break;
          }
          if ( ++v48 >= v47 )
            goto LABEL_33;
        }
        *(_BYTE *)(v30 + 2LL * v48 + 1) = v50 - 1;
      }
      else
      {
LABEL_33:
        if ( !_bittestandreset((signed __int32 *)(v29 + 16), 0x15u) )
          ndisBugCheckEx(0x1EuLL, 0LL, v29, 0x15uLL);
      }
    }
  }
  v31 = (*(_DWORD *)(v27 + 1404))-- == 1;
  if ( v31 )
  {
    v56 = *(_QWORD *)(v27 + 1416);
    if ( v56 )
    {
      v57 = *(struct _KEVENT **)(v56 + 4072);
      if ( v57 )
        KeSetEvent(v57, 0, 0);
    }
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v28);
  if ( !v25 )
  {
LABEL_110:
    v42 = v71;
    v43 = -1073741772;
    goto LABEL_111;
  }
  v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4464));
  if ( v63 )
  {
    v33 = *(_DWORD *)(a2 + 3776);
    if ( v33 < 0x1000000 )
    {
      v64 = 1;
      *(_DWORD *)(a2 + 3776) = v33 + 1;
      goto LABEL_39;
    }
LABEL_98:
    v43 = -1073741670;
    v39 = (KSPIN_LOCK *)(a2 + 4464);
    goto LABEL_100;
  }
  v49 = *(_DWORD *)(a2 + 3692);
  if ( v49 >= 0x1000000 )
    goto LABEL_98;
  v65 = 1;
  *(_DWORD *)(a2 + 3692) = v49 + 1;
LABEL_39:
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4464), v32);
  if ( (*(_DWORD *)(a2 + 124) & 0x20100) != 0 )
  {
    v43 = -1073741823;
    goto LABEL_102;
  }
  NdisWaitEvent((PNDIS_EVENT)(a2 + 3752), 0x32u);
  v34 = 1;
  v62 = 1;
  v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4464));
  if ( !*(_BYTE *)(a2 + 4476) )
  {
    v36 = *(struct _NDIS_REFCOUNT_BLOCK **)(a2 + 4920);
    if ( v36 )
      NdisReferenceWithTag(v36);
    v37 = *(_DWORD *)(a2 + 4472);
    *(_DWORD *)(a2 + 4472) = v37 + 1;
    if ( v37 != -1 )
      goto LABEL_44;
    *(_DWORD *)(a2 + 4472) = -1;
  }
  v62 = 0;
  v34 = 0;
LABEL_44:
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_qD(12LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, a2, *(unsigned int *)(a2 + 4472));
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4464), v35);
  if ( !v34 )
  {
    v43 = -1073676282;
    goto LABEL_102;
  }
  v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  v39 = (KSPIN_LOCK *)(a2 + 96);
  v31 = *(_DWORD *)(a2 + 1520) == 2;
  *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
  v32 = v38;
  *(_DWORD *)(a2 + 1856) = 918444;
  *(_QWORD *)(a2 + 520) = 0LL;
  *(_DWORD *)(a2 + 1856) = 0;
  if ( !v31 )
  {
    ++*(_DWORD *)(a2 + 1800);
    v66 = 1;
    KeReleaseSpinLock(v39, v38);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x636F444Eu);
    v41 = a1;
    v42 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[3] = 0LL;
      v43 = 0;
      PoolWithTag[1] = a1;
      PoolWithTag[2] = a2;
      *((_BYTE *)PoolWithTag + 32) = v63;
      *(_BYTE *)PoolWithTag = v70;
      v75->FileObject->FsContext = PoolWithTag;
      v44 = *(_QWORD *)(a2 + 1776);
      if ( v44 )
      {
        v42[3] = v44;
      }
      else if ( a3->RequestorMode == 1 )
      {
        v43 = -1073741823;
      }
    }
    else
    {
      v43 = -1073741670;
    }
    goto LABEL_51;
  }
  v43 = -1073676282;
LABEL_100:
  KeReleaseSpinLock(v39, v32);
LABEL_102:
  v42 = 0LL;
LABEL_111:
  v41 = a1;
LABEL_51:
  ndisDereferencePackage(&ndisPkgs);
  if ( v43 < 0 )
    goto LABEL_115;
  if ( (*(_DWORD *)(a2 + 124) & 0x2000) != 0 )
  {
    v58 = *(_QWORD *)(a2 + 4008);
    if ( v58 )
      (*(void (__fastcall **)(_QWORD))(v58 + 32))(*(_QWORD *)(v58 + 8));
    else
      v43 = -1073741823;
  }
  if ( v43 < 0 )
  {
LABEL_115:
    if ( v64 )
    {
      v59 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4464));
      --*(_DWORD *)(a2 + 3776);
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4464), v59);
    }
    if ( v65 )
    {
      v60 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4464));
      --*(_DWORD *)(a2 + 3692);
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4464), v60);
    }
    if ( v66 )
    {
      ndisReferencePackage(&ndisPkgs);
      v61 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
      --*(_DWORD *)(a2 + 1800);
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v61);
      ndisDereferencePackage(&ndisPkgs);
    }
    if ( v62 )
    {
      LOBYTE(v45) = 85;
      ndisDereferenceMiniport(a2, v45);
    }
    if ( v42 )
      ExFreePoolWithTag(v42, 0);
  }
  if ( v72 )
  {
    *v76 = 1;
  }
  else
  {
    a3->IoStatus.Status = v43;
    IofCompleteRequest(a3, 2);
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqd(16LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, v41, a3, v43);
  return v43;
}
