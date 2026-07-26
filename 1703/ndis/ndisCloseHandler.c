/*
 * XREFs of ndisCloseHandler @ 0x1C000C6A0
 * Callers:
 *     ndisCloseIrpHandler @ 0x1C000C8C0 (ndisCloseIrpHandler.c)
 *     NdisWdfCloseIrpHandler @ 0x1C0061590 (NdisWdfCloseIrpHandler.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000C850 (NdisDereferenceWithTag.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisDereferencePackage @ 0x1C00A5008 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C00A5C80 (-ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z.c)
 *     ndisDummyHandler @ 0x1C00A63E4 (ndisDummyHandler.c)
 *     ?ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00F065C (-ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 */

int __fastcall ndisCloseHandler(const struct _DEVICE_OBJECT *a1, __int64 a2, struct _IRP *a3, _BYTE *a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v9; // rdx
  struct _DEVICE_OBJECT *v10; // rcx
  int v11; // r13d
  _FILE_OBJECT *FileObject; // rax
  _BYTE *FsContext; // rbx
  KIRQL v14; // al
  KIRQL v15; // al
  KIRQL v16; // al
  ULONG_PTR v17; // rcx
  int v18; // ebx
  struct _KEVENT *v20; // rcx
  __int64 v21; // rcx
  KIRQL NewIrql; // [rsp+50h] [rbp+18h]

  if ( a4 )
    *a4 = 0;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( ndisIsSetupDevice(a1) )
    return ndisSetupDeviceCreateIrp(v10, a3);
  if ( *(_BYTE *)v9 == 17 )
  {
    v11 = *(_DWORD *)(v9 + 120) & 0x80;
    if ( (unsigned __int8)byte_1C0092612 >= 4u )
      WPP_SF_qq(26LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, a2, a3);
    FileObject = CurrentStackLocation->FileObject;
    FsContext = FileObject->FsContext;
    FileObject->FsContext = 0LL;
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4464));
    if ( FsContext[32] )
      --*(_DWORD *)(a2 + 3776);
    else
      --*(_DWORD *)(a2 + 3692);
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4464), v14);
    ExFreePoolWithTag(FsContext, 0);
    ndisReferencePackage(&ndisPkgs);
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    --*(_DWORD *)(a2 + 1800);
    *(_QWORD *)(a2 + 520) = 0LL;
    *(_DWORD *)(a2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v15);
    ndisDereferencePackage(&ndisPkgs);
    if ( (unsigned __int8)byte_1C009261B >= 4u )
      WPP_SF_q(25LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, a2);
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4464));
    v17 = *(_QWORD *)(a2 + 4920);
    NewIrql = v16;
    if ( v17 )
      NdisDereferenceWithTag(v17);
    v18 = --*(_DWORD *)(a2 + 4472);
    if ( (unsigned __int8)byte_1C009261B >= 4u )
      WPP_SF_qD(14LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, a2, *(unsigned int *)(a2 + 4472));
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4464), NewIrql);
    if ( !v18 )
    {
      v20 = *(struct _KEVENT **)(a2 + 1608);
      if ( v20 )
        KeSetEvent(v20, 0, 0);
    }
    if ( (unsigned __int8)byte_1C009261B >= 4u )
      WPP_SF_q(26LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, a2);
    if ( (*(_DWORD *)(a2 + 124) & 0x2000) != 0 )
    {
      v21 = *(_QWORD *)(a2 + 4008);
      if ( v21 )
        (*(void (__fastcall **)(_QWORD))(v21 + 40))(*(_QWORD *)(v21 + 8));
    }
    if ( v11 )
    {
      *a4 = 1;
    }
    else
    {
      a3->IoStatus.Status = 0;
      IofCompleteRequest(a3, 2);
    }
    if ( (unsigned __int8)byte_1C0092612 >= 4u )
      WPP_SF_qq(27LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, a2, a3);
    return 0;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0092612 >= 4u )
      WPP_SF_qq(25LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, a2, a3);
    return ndisDummyHandler(a1, a2, a3);
  }
}
