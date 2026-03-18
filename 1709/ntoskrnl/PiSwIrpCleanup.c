/*
 * XREFs of PiSwIrpCleanup @ 0x1405BBE50
 * Callers:
 *     PiSwDispatch @ 0x1405749C0 (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x1405BB304 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     _wcsnicmp @ 0x14015EC50 (_wcsnicmp.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140526314 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwCloseDescendants @ 0x14055E718 (PiSwCloseDescendants.c)
 *     PiSwFindSwDevice @ 0x14055E74C (PiSwFindSwDevice.c)
 *     PiSwCloseDevice @ 0x1406CDA04 (PiSwCloseDevice.c)
 */

void __fastcall PiSwIrpCleanup(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  IRP *v2; // rsi
  int v4; // eax
  bool v5; // di
  __int64 i; // rax
  const wchar_t *v7; // rbp
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 SwDevice; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  v4 = *(_DWORD *)(a1 + 180);
  v5 = v4 == 0;
  if ( v4 )
  {
    for ( i = *(_QWORD *)(a1 + 112); ; i = *(_QWORD *)(SwDevice + 112) )
    {
      v7 = *(const wchar_t **)(i + 8);
      if ( wcsnicmp(v7, L"SWD\\", 4uLL) )
        break;
      SwDevice = PiSwFindSwDevice(v7);
      if ( !SwDevice )
        goto LABEL_11;
      if ( !*(_DWORD *)(SwDevice + 180) && (*(_DWORD *)(SwDevice + 4) & 2) == 0 )
        goto LABEL_6;
    }
    RtlInitUnicodeString(&DestinationString, v7);
    v8 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
    if ( v8 )
    {
      ObfDereferenceObject(v8);
      goto LABEL_6;
    }
LABEL_11:
    v5 = 1;
  }
LABEL_6:
  v9 = *(_QWORD *)(a1 + 144);
  if ( v9 && _InterlockedExchange64((volatile __int64 *)(v9 + 104), 0LL) )
  {
    v2 = *(IRP **)(a1 + 144);
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  *(_DWORD *)(a1 + 4) &= ~1u;
  if ( v5 )
  {
    PiSwCloseDescendants((__int128 *)(a1 + 72));
    PiSwCloseDevice(a1);
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v2 )
  {
    v2->IoStatus.Information = 0LL;
    v2->IoStatus.Status = -1073741536;
    IofCompleteRequest(v2, 0);
  }
}
