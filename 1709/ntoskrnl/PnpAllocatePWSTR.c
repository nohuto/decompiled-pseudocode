/*
 * XREFs of PnpAllocatePWSTR @ 0x140524F08
 * Callers:
 *     PiDqPnPGetObjectProperty @ 0x140524D78 (PiDqPnPGetObjectProperty.c)
 *     PiPnpRtlObjectEventWorker @ 0x140528A70 (PiPnpRtlObjectEventWorker.c)
 *     PiDqActionDataCreate @ 0x14052DF68 (PiDqActionDataCreate.c)
 *     PiSwPdoPnPDispatch @ 0x1405BA930 (PiSwPdoPnPDispatch.c)
 *     PiSwCompleteCreate @ 0x1405BAE84 (PiSwCompleteCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1405BB128 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwBusRelationAdd @ 0x1405BB5CC (PiSwBusRelationAdd.c)
 *     PnpCopyDevProperty @ 0x1405BB7F0 (PnpCopyDevProperty.c)
 *     PiSwPnPInfoInit @ 0x1405BB888 (PiSwPnPInfoInit.c)
 *     PiSwInstanceInfoInit @ 0x1405BBA90 (PiSwInstanceInfoInit.c)
 *     PiDmObjectCreate @ 0x1405CD66C (PiDmObjectCreate.c)
 *     PiSwDeviceInterfaceSetState @ 0x1405E2678 (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x1405E26E4 (PiSwInterfaceCreate.c)
 *     PiSwIrpPropertySet @ 0x1406CE008 (PiSwIrpPropertySet.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1406CE580 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1400DF440 (RtlStringCchLengthW.c)
 *     RtlStringCbCopyW @ 0x1400DF4A4 (RtlStringCbCopyW.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpAllocatePWSTR(NTSTRSAFE_PCWSTR pszSrc, size_t a2, ULONG a3, PVOID *a4)
{
  NTSTATUS v4; // ebx
  size_t v8; // rbx
  wchar_t *PoolWithTag; // rax
  size_t v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *a4 = 0LL;
  if ( !pszSrc )
    return (unsigned int)v4;
  v4 = RtlStringCchLengthW(pszSrc, a2, &v11);
  if ( v4 >= 0 )
  {
    if ( !v11 )
      goto LABEL_7;
    v8 = 2 * (v11 + 1);
    if ( is_mul_ok(v11 + 1, 2uLL) )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * (v11 + 1), a3);
      *a4 = PoolWithTag;
      if ( PoolWithTag )
      {
        v4 = RtlStringCbCopyW(PoolWithTag, v8, pszSrc);
LABEL_7:
        if ( v4 >= 0 )
          return (unsigned int)v4;
        goto LABEL_11;
      }
      v4 = -1073741670;
    }
    else
    {
      v4 = -1073741675;
    }
  }
LABEL_11:
  if ( *a4 )
  {
    ExFreePoolWithTag(*a4, a3);
    *a4 = 0LL;
  }
  return (unsigned int)v4;
}
