/*
 * XREFs of PnpAllocatePWSTR @ 0x1405045F0
 * Callers:
 *     PiDqPnPGetObjectProperty @ 0x1405046A0 (PiDqPnPGetObjectProperty.c)
 *     PiDqActionDataCreate @ 0x14050D69C (PiDqActionDataCreate.c)
 *     PiSwPdoPnPDispatch @ 0x1405C53E0 (PiSwPdoPnPDispatch.c)
 *     PiSwCompleteCreate @ 0x1405C59F0 (PiSwCompleteCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1405C5C8C (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwBusRelationAdd @ 0x1405C6D44 (PiSwBusRelationAdd.c)
 *     PiSwPnPInfoInit @ 0x1405C6F68 (PiSwPnPInfoInit.c)
 *     PiSwInstanceInfoInit @ 0x1405C7100 (PiSwInstanceInfoInit.c)
 *     PiPnpRtlObjectEventWorker @ 0x1405D2B70 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectCreate @ 0x1405D3AB4 (PiDmObjectCreate.c)
 *     PiSwIrpPropertySet @ 0x140612B24 (PiSwIrpPropertySet.c)
 *     PnpCopyDevProperty @ 0x140642C84 (PnpCopyDevProperty.c)
 *     PiSwDeviceInterfaceSetState @ 0x140646AC0 (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x140646B8C (PiSwInterfaceCreate.c)
 *     PiSwQueuedCreateInfoCreate @ 0x140735570 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14006D198 (RtlStringCbCopyW.c)
 *     RtlStringCchLengthW @ 0x14006D220 (RtlStringCchLengthW.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
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
