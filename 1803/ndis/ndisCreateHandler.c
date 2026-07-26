/*
 * XREFs of ndisCreateHandler @ 0x1C00098C0
 * Callers:
 *     ndisCreateIrpHandler @ 0x1C00098A0 (ndisCreateIrpHandler.c)
 *     NdisWdfCreateIrpHandler @ 0x1C0062310 (NdisWdfCreateIrpHandler.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 *     ndisIsPrivateDeviceInterface @ 0x1C005E01C (ndisIsPrivateDeviceInterface.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C00686C4 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006E628 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006E6D4 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisCheckAccess @ 0x1C00AD5AC (ndisCheckAccess.c)
 *     NdisWaitEvent @ 0x1C00AD6C0 (NdisWaitEvent.c)
 *     ndisDereferencePackage @ 0x1C00ADAEC (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ndisDummyHandler @ 0x1C00E81CC (ndisDummyHandler.c)
 */

__int64 __fastcall ndisCreateHandler(__int64 a1, __int64 a2, _IRP *a3, _BYTE *a4)
{
  BOOL v4; // ebx
  __int64 v8; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  struct _KTHREAD *CurrentThread; // r14
  int *ThreadProperty; // rax
  __int64 v12; // rcx
  int v13; // edi
  unsigned int v14; // ebx
  PACCESS_TOKEN v15; // rax
  void *v16; // rdi
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // ebx
  KIRQL v19; // al
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v21; // r8
  unsigned int v22; // edx
  __int64 v23; // rbx
  KIRQL v24; // r14
  __int64 v25; // rdx
  bool v26; // r14
  KIRQL v27; // al
  __int64 v28; // rdi
  KIRQL v29; // r13
  ULONG_PTR v30; // r8
  __int64 v31; // rdx
  KIRQL v33; // dl
  unsigned int v34; // ecx
  char v35; // r14
  KIRQL v36; // di
  struct _NDIS_REFCOUNT_BLOCK *v37; // rcx
  int v38; // edx
  int v39; // edi
  KIRQL v40; // al
  KSPIN_LOCK *v41; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v43; // r14
  _IO_STACK_LOCATION *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  unsigned int v48; // eax
  unsigned __int8 v49; // r10
  unsigned __int8 v50; // r9
  char v51; // al
  NTSTATUS v52; // ebx
  KIRQL v53; // al
  __int64 v54; // rcx
  ULONG_PTR v55; // rbx
  unsigned int v56; // edx
  int v57; // ecx
  __int64 v58; // rax
  struct _KEVENT *v59; // rcx
  __int64 v60; // rcx
  KIRQL v61; // al
  KIRQL v62; // al
  KIRQL v63; // al
  char v64; // [rsp+30h] [rbp-59h]
  char v65; // [rsp+31h] [rbp-58h]
  char v66; // [rsp+32h] [rbp-57h]
  char v67; // [rsp+33h] [rbp-56h]
  char v68; // [rsp+34h] [rbp-55h]
  BOOLEAN EffectiveOnly; // [rsp+35h] [rbp-54h] BYREF
  BOOLEAN CopyOnOpen[2]; // [rsp+36h] [rbp-53h] BYREF
  BOOL v71; // [rsp+38h] [rbp-51h]
  _QWORD *v72; // [rsp+40h] [rbp-49h]
  int v73; // [rsp+48h] [rbp-41h]
  __int64 v74; // [rsp+50h] [rbp-39h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+58h] [rbp-31h] BYREF
  PVOID TokenInformation; // [rsp+60h] [rbp-29h] BYREF
  _IO_STACK_LOCATION *v77; // [rsp+68h] [rbp-21h]
  _BYTE *v78; // [rsp+70h] [rbp-19h]
  __int128 v79; // [rsp+80h] [rbp-9h]

  v78 = a4;
  LOBYTE(v4) = 0;
  v74 = a1;
  v71 = v4;
  v72 = 0LL;
  v64 = 0;
  v8 = a1;
  v67 = 0;
  v65 = 0;
  v66 = 0;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    WPP_SF_qq(15LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, a1, a3);
    v8 = v74;
  }
  if ( a4 )
    *a4 = 0;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v77 = CurrentStackLocation;
  if ( !CurrentStackLocation->FileObject )
  {
    a3->IoStatus.Status = -1073741823;
    IofCompleteRequest(a3, 2);
    return 3221225473LL;
  }
  if ( *(_BYTE *)a2 != 17 )
    return ndisDummyHandler(v8, a2, a3);
  v73 = *(_DWORD *)(a2 + 120) & 0x80;
  if ( v73 )
    v71 = (unsigned __int8)ndisIsPrivateDeviceInterface(a2, a3) != 0;
  v68 = ndisCheckAccess(a3, CurrentStackLocation, *(_QWORD *)(a2 + 3808));
  ndisReferencePackage(&ndisPkgs);
  CurrentThread = KeGetCurrentThread();
  v79 = 0uLL;
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    v13 = *ThreadProperty;
    ObfDereferenceObject(ThreadProperty);
    v14 = v13;
  }
  else
  {
    v13 = 0;
    v14 = 0;
  }
  if ( !v14 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12);
    }
    else
    {
      v15 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v16 = v15;
      if ( v15 )
      {
        v52 = SeQueryInformationToken(v15, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v16);
        if ( v52 >= 0 )
        {
          ThreadSessionId = (unsigned int)TokenInformation;
          goto LABEL_16;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    ThreadSessionId = CurrentProcessSessionId;
LABEL_16:
    if ( ThreadSessionId == -1 )
      ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    if ( ThreadSessionId < ndisCmSessionCount )
    {
      v13 = 0;
      v53 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
      if ( ThreadSessionId < ndisCmSessionCount )
        v13 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
      KeReleaseSpinLock(&ndisCmSessionLock, v53);
      if ( !v13 )
        v13 = 1;
    }
    else
    {
      v13 = 1;
    }
    v14 = v13;
  }
  v19 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  Flink = ndisIfCompartmentList.Flink;
  v21 = 0LL;
  while ( Flink != &ndisIfCompartmentList )
  {
    v22 = (unsigned int)Flink[1].Flink;
    if ( v22 == v14 )
    {
      v21 = Flink;
      break;
    }
    if ( v22 > v14 )
      break;
    Flink = Flink->Flink;
  }
  v79 = *(__int128 *)((char *)&v21[105] + 4);
  KeReleaseSpinLock(&ndisIfListLock, v19);
  v23 = 0LL;
  v24 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  if ( *(_BYTE *)(a2 + 4056) )
  {
    v23 = *(_QWORD *)(a2 + 4064);
    NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v23 + 1448));
    ++*(_DWORD *)(v23 + 1404);
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v24);
  if ( !v23 )
    goto LABEL_114;
  v25 = *(_QWORD *)(v23 + 1384);
  if ( v13 == *(_DWORD *)(v25 + 16) )
    goto LABEL_29;
  v54 = v79 - *(_QWORD *)(v25 + 1684);
  if ( (_QWORD)v79 == *(_QWORD *)(v25 + 1684) )
    v54 = *((_QWORD *)&v79 + 1) - *(_QWORD *)(v25 + 1692);
  if ( !v54 )
LABEL_29:
    v26 = 1;
  else
    v26 = (*(_DWORD *)(v25 + 1680) & 2) == 0 && v13 == 1;
  v27 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  v28 = *(_QWORD *)(a2 + 4064);
  v29 = v27;
  v30 = *(_QWORD *)(v28 + 1448);
  if ( v30 - 2 <= 1 )
  {
    v30 = 0LL;
  }
  else if ( v30 < 2 )
  {
    ndisBugCheckEx(0x1EuLL, 3uLL, v30, 0LL);
  }
  if ( v30 )
  {
    if ( *(_BYTE *)(v30 + 2) <= 0x15u )
      ndisBugCheckEx(0x1EuLL, 2uLL, v30, 0x15uLL);
    if ( *(_BYTE *)(v30 + 1) )
    {
      if ( *(_BYTE *)(v30 + 1) == 1 )
      {
        v55 = v30 + 1352;
        v56 = *(_DWORD *)(v30 + 1408);
        v57 = (unsigned __int16)v56 >> 1;
        if ( v56 >> 17 < 0x3FFE && v57 == (v56 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v30 + 1352));
          *(_DWORD *)(v55 + 56) &= 0x10001u;
        }
        else
        {
          if ( v57 == 0 && (v56 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v30, 0x15uLL);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v30 + 1352), 0);
        }
      }
    }
    else
    {
      v31 = *(_QWORD *)(v30 + 8);
      if ( v31 && (v49 = *(_BYTE *)(v30 + 3), v50 = 0, v49) )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(v31 + 2LL * v50) == 21 )
          {
            v51 = *(_BYTE *)(v31 + 2LL * v50 + 1);
            if ( v51 )
              break;
          }
          if ( ++v50 >= v49 )
            goto LABEL_36;
        }
        *(_BYTE *)(v31 + 2LL * v50 + 1) = v51 - 1;
      }
      else
      {
LABEL_36:
        if ( !_bittestandreset((signed __int32 *)(v30 + 16), 0x15u) )
          ndisBugCheckEx(0x1EuLL, 0LL, v30, 0x15uLL);
      }
    }
  }
  if ( (*(_DWORD *)(v28 + 1404))-- == 1 )
  {
    v58 = *(_QWORD *)(v28 + 1416);
    if ( v58 )
    {
      v59 = *(struct _KEVENT **)(v58 + 4072);
      if ( v59 )
        KeSetEvent(v59, 0, 0);
    }
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v29);
  if ( !v26 )
  {
LABEL_114:
    v39 = -1073741772;
    goto LABEL_115;
  }
  v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4464));
  if ( v68 )
  {
    v34 = *(_DWORD *)(a2 + 3776);
    if ( v34 < 0x1000000 )
    {
      v65 = 1;
      *(_DWORD *)(a2 + 3776) = v34 + 1;
      goto LABEL_42;
    }
  }
  else
  {
    v48 = *(_DWORD *)(a2 + 3692);
    if ( v48 < 0x1000000 )
    {
      v66 = 1;
      *(_DWORD *)(a2 + 3692) = v48 + 1;
LABEL_42:
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4464), v33);
      if ( (*(_DWORD *)(a2 + 124) & 0x20100) != 0 )
      {
        v39 = -1073741823;
        goto LABEL_115;
      }
      NdisWaitEvent((PNDIS_EVENT)(a2 + 3752), 0x32u);
      v35 = 1;
      v64 = 1;
      v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4464));
      if ( !*(_BYTE *)(a2 + 4476) )
      {
        v37 = *(struct _NDIS_REFCOUNT_BLOCK **)(a2 + 4920);
        if ( v37 )
          NdisReferenceWithTag(v37);
        v38 = *(_DWORD *)(a2 + 4472);
        *(_DWORD *)(a2 + 4472) = v38 + 1;
        if ( v38 != -1 )
          goto LABEL_47;
        *(_DWORD *)(a2 + 4472) = -1;
      }
      v35 = 0;
      v64 = 0;
LABEL_47:
      if ( (unsigned __int8)byte_1C009961B >= 4u )
        WPP_SF_qD(12LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, a2, *(unsigned int *)(a2 + 4472));
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4464), v36);
      v39 = 0;
      if ( !v35 )
      {
        v39 = -1073676282;
        goto LABEL_115;
      }
      v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
      v41 = (KSPIN_LOCK *)(a2 + 96);
      *(_DWORD *)(a2 + 1856) = 918440;
      v33 = v40;
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 0;
      if ( *(_DWORD *)(a2 + 1520) != 2 )
      {
        ++*(_DWORD *)(a2 + 1800);
        v67 = 1;
        KeReleaseSpinLock(v41, v40);
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x636F444Eu);
        v43 = PoolWithTag;
        if ( PoolWithTag )
        {
          PoolWithTag[1] = v74;
          *(_BYTE *)PoolWithTag = v71;
          v44 = v77;
          v43[2] = a2;
          v43[3] = 0LL;
          *((_BYTE *)v43 + 32) = v68;
          v44->FileObject->FsContext = v43;
          v45 = *(_QWORD *)(a2 + 1776);
          if ( v45 )
          {
            v43[3] = v45;
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
        goto LABEL_54;
      }
      v39 = -1073676282;
      goto LABEL_105;
    }
  }
  v39 = -1073741670;
  v41 = (KSPIN_LOCK *)(a2 + 4464);
LABEL_105:
  KeReleaseSpinLock(v41, v33);
LABEL_115:
  v43 = v72;
LABEL_54:
  ndisDereferencePackage(&ndisPkgs);
  if ( v39 < 0 )
    goto LABEL_119;
  if ( (*(_DWORD *)(a2 + 124) & 0x2000) != 0 )
  {
    v60 = *(_QWORD *)(a2 + 4008);
    if ( v60 )
      (*(void (__fastcall **)(_QWORD))(v60 + 32))(*(_QWORD *)(v60 + 8));
    else
      v39 = -1073741823;
  }
  if ( v39 < 0 )
  {
LABEL_119:
    if ( v65 )
    {
      v61 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4464));
      --*(_DWORD *)(a2 + 3776);
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4464), v61);
    }
    if ( v66 )
    {
      v62 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4464));
      --*(_DWORD *)(a2 + 3692);
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4464), v62);
    }
    if ( v67 )
    {
      ndisReferencePackage(&ndisPkgs);
      v63 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
      --*(_DWORD *)(a2 + 1800);
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v63);
      ndisDereferencePackage(&ndisPkgs);
    }
    if ( v64 )
    {
      LOBYTE(v46) = 85;
      ndisDereferenceMiniport(a2, v46);
    }
    if ( v43 )
      ExFreePoolWithTag(v43, 0);
  }
  if ( v73 )
  {
    *v78 = 1;
  }
  else
  {
    a3->IoStatus.Status = v39;
    IofCompleteRequest(a3, 2);
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqd(16LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, v74, a3, v39);
  return (unsigned int)v39;
}
