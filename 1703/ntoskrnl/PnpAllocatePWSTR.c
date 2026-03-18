/*
 * XREFs of PnpAllocatePWSTR @ 0x1404875B0
 * Callers:
 *     PiSwInterfaceCreate @ 0x14045F13C (PiSwInterfaceCreate.c)
 *     PiSwPdoPnPDispatch @ 0x14045F1F0 (PiSwPdoPnPDispatch.c)
 *     PiSwCompleteCreate @ 0x14045F814 (PiSwCompleteCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14045FAB8 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwBusRelationAdd @ 0x140460394 (PiSwBusRelationAdd.c)
 *     PnpCopyDevProperty @ 0x1404605B8 (PnpCopyDevProperty.c)
 *     PiSwPnPInfoInit @ 0x140460650 (PiSwPnPInfoInit.c)
 *     PiSwInstanceInfoInit @ 0x1404607E8 (PiSwInstanceInfoInit.c)
 *     PiSwDeviceInterfaceSetState @ 0x1404612DC (PiSwDeviceInterfaceSetState.c)
 *     PiDqPnPGetObjectProperty @ 0x140487420 (PiDqPnPGetObjectProperty.c)
 *     PiDqActionDataCreate @ 0x1404B99CC (PiDqActionDataCreate.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DEF00 (PiPnpRtlObjectEventWorker.c)
 *     PiSwIrpPropertySet @ 0x14057D004 (PiSwIrpPropertySet.c)
 *     PiDmObjectCreate @ 0x1405BDA78 (PiDmObjectCreate.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1406A3334 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14004C7E8 (RtlStringCchLengthW.c)
 *     RtlStringCbCopyW @ 0x14004C84C (RtlStringCbCopyW.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpAllocatePWSTR(NTSTRSAFE_PCWSTR pszSrc, size_t a2, ULONG a3, PVOID *a4)
{
  NTSTATUS v4; // ebx
  size_t v9; // rbx
  wchar_t *PoolWithTag; // rax
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *a4 = 0LL;
  if ( !pszSrc )
    return (unsigned int)v4;
  v4 = RtlStringCchLengthW(pszSrc, a2, &pcchLength);
  if ( v4 >= 0 )
  {
    if ( !pcchLength )
      goto LABEL_8;
    v9 = 2 * (pcchLength + 1);
    if ( is_mul_ok(pcchLength + 1, 2uLL) )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * (pcchLength + 1), a3);
      *a4 = PoolWithTag;
      if ( PoolWithTag )
      {
        v4 = RtlStringCbCopyW(PoolWithTag, v9, pszSrc);
LABEL_8:
        if ( v4 >= 0 )
          return (unsigned int)v4;
        goto LABEL_12;
      }
      v4 = -1073741670;
    }
    else
    {
      v4 = -1073741675;
    }
  }
LABEL_12:
  if ( *a4 )
  {
    ExFreePoolWithTag(*a4, a3);
    *a4 = 0LL;
  }
  return (unsigned int)v4;
}
