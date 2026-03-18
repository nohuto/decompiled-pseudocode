/*
 * XREFs of PopFxIsDevicePotentialDripsConstraint @ 0x140275448
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     IoGetDevicePropertyData @ 0x140587390 (IoGetDevicePropertyData.c)
 */

bool __fastcall PopFxIsDevicePotentialDripsConstraint(PVOID Object)
{
  bool v1; // di
  __int64 v3; // rbx
  KIRQL v4; // r14
  ULONG RequiredSize; // [rsp+40h] [rbp-48h] BYREF
  ULONG Type; // [rsp+44h] [rbp-44h] BYREF
  wchar_t Str1[4]; // [rsp+48h] [rbp-40h] BYREF

  *(_QWORD *)Str1 = 0LL;
  v1 = 0;
  ObfReferenceObjectWithTag(Object, 0x78466F50u);
  if ( Object )
    v3 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  else
    v3 = 0LL;
  if ( v3 )
  {
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 88));
    if ( (*(_DWORD *)(v3 + 296) & 4) != 0 )
      v1 = (_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v3 + 80) + 704LL), 0, 0) & 0x10) != 0;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 88));
    __writecr8(v4);
    if ( !v1
      && IoGetDevicePropertyData(
           *(PDEVICE_OBJECT *)(v3 + 32),
           &DEVPKEY_Device_EnumeratorName,
           0,
           0,
           8u,
           Str1,
           &RequiredSize,
           &Type) >= 0
      && Type == 18
      && RequiredSize > 2
      && !Str1[((unsigned __int64)RequiredSize >> 1) - 1] )
    {
      v1 = wcsicmp(Str1, L"USB") == 0;
    }
  }
  ObfDereferenceObjectWithTag(Object, 0x78466F50u);
  return v1;
}
