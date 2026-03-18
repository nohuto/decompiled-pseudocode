/*
 * XREFs of UsbhQueryParentHubConfig @ 0x1C00263F8
 * Callers:
 *     UsbhInitialize @ 0x1C0015CC0 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     UsbhPropagateUxdState @ 0x1C00589CC (UsbhPropagateUxdState.c)
 */

__int64 __fastcall UsbhQueryParentHubConfig(__int64 a1)
{
  PDEVICE_OBJECT *v2; // rdi
  char *PoolWithTag; // rax
  char *v4; // rbx
  PIRP v5; // rax
  NTSTATUS v6; // edi
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  v2 = (PDEVICE_OBJECT *)FdoExt(a1);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xCCuLL, 0x42554855u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xCCuLL);
  *(_DWORD *)v4 = 1;
  *((_DWORD *)v4 + 1) = 204;
  v5 = IoBuildDeviceIoControlRequest(0x22044Fu, v2[151], 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( v5 )
  {
    v5->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v4;
    v6 = IofCallDriver(v2[151], v5);
    if ( v6 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v6 = 0;
    }
    if ( v6 >= 0 && IoStatusBlock.Status >= 0 && (*((_DWORD *)v4 + 33) & 1) != 0 )
      UsbhPropagateUxdState(a1, v4 + 136);
    v7 = *(void **)(v4 + 36);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0);
      *(_QWORD *)(v4 + 36) = 0LL;
      *((_DWORD *)v4 + 8) = 0;
    }
    v8 = *(void **)(v4 + 20);
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0);
      *(_QWORD *)(v4 + 20) = 0LL;
      *((_DWORD *)v4 + 4) = 0;
    }
    v9 = *(void **)(v4 + 52);
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0);
      *(_QWORD *)(v4 + 52) = 0LL;
      *((_DWORD *)v4 + 12) = 0;
    }
  }
  else
  {
    v6 = -1073741670;
  }
  ExFreePoolWithTag(v4, 0);
  return (unsigned int)v6;
}
