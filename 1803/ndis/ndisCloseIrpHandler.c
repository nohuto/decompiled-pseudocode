/*
 * XREFs of ndisCloseIrpHandler @ 0x1C0009DD0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ndisDereferencePackage @ 0x1C00ADAEC (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ndisDummyHandler @ 0x1C00E81CC (ndisDummyHandler.c)
 */

__int64 __fastcall ndisCloseIrpHandler(__int64 a1, _IRP *a2)
{
  __int64 v2; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  int v6; // r14d
  _FILE_OBJECT *FileObject; // rax
  unsigned int v8; // esi
  _BYTE *FsContext; // rbx
  KIRQL v10; // al
  KIRQL v11; // al
  __int64 v12; // rdx
  __int64 v14; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( *(_BYTE *)v2 == 17 )
  {
    v6 = *(_DWORD *)(v2 + 120) & 0x80;
    if ( (unsigned __int8)byte_1C0099612 >= 4u )
      WPP_SF_qq(26LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, v2, a2);
    FileObject = CurrentStackLocation->FileObject;
    v8 = 0;
    FsContext = FileObject->FsContext;
    FileObject->FsContext = 0LL;
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 4464));
    if ( FsContext[32] )
      --*(_DWORD *)(v2 + 3776);
    else
      --*(_DWORD *)(v2 + 3692);
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 4464), v10);
    ExFreePoolWithTag(FsContext, 0);
    ndisReferencePackage(&ndisPkgs);
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
    --*(_DWORD *)(v2 + 1800);
    *(_QWORD *)(v2 + 520) = 0LL;
    *(_DWORD *)(v2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v11);
    ndisDereferencePackage(&ndisPkgs);
    LOBYTE(v12) = 85;
    ndisDereferenceMiniport(v2, v12);
    if ( (*(_DWORD *)(v2 + 124) & 0x2000) != 0 )
    {
      v14 = *(_QWORD *)(v2 + 4008);
      if ( v14 )
        (*(void (__fastcall **)(_QWORD))(v14 + 40))(*(_QWORD *)(v14 + 8));
    }
    if ( v6 )
    {
      MEMORY[0] = 1;
    }
    else
    {
      a2->IoStatus.Status = 0;
      IofCompleteRequest(a2, 2);
    }
    if ( (unsigned __int8)byte_1C0099612 >= 4u )
      WPP_SF_qq(27LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, v2, a2);
  }
  else
  {
    if ( (unsigned __int8)byte_1C0099612 >= 4u )
      WPP_SF_qq(25LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, v2, a2);
    return (unsigned int)ndisDummyHandler(a1, v2, a2);
  }
  return v8;
}
