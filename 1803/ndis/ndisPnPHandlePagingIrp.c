/*
 * XREFs of ndisPnPHandlePagingIrp @ 0x1C00EDD4C
 * Callers:
 *     ndisPnPIrpDeviceUsageNotification @ 0x1C00EDFB8 (ndisPnPIrpDeviceUsageNotification.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 */

void __fastcall ndisPnPHandlePagingIrp(__int64 a1, __int64 a2, char a3)
{
  if ( a3 )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(a2 + 3472)) == 1 )
    {
      ndisReferencePackage((__int64)&ndisPkgs);
      *(_DWORD *)(a1 + 48) &= ~0x2000u;
      *(_DWORD *)(*(_QWORD *)(a2 + 4064) + 560LL) |= 0x80u;
      *(_DWORD *)(*(_QWORD *)(a2 + 4064) + 1336LL) |= 0x80u;
    }
  }
  else if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 3472), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(a1 + 48) |= 0x2000u;
    *(_DWORD *)(*(_QWORD *)(a2 + 4064) + 560LL) &= ~0x80u;
    *(_DWORD *)(*(_QWORD *)(a2 + 4064) + 1336LL) &= ~0x80u;
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  }
  IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a2 + 3856));
}
