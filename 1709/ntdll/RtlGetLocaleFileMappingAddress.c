/*
 * XREFs of RtlGetLocaleFileMappingAddress @ 0x18007F700
 * Callers:
 *     RtlpLoadNlsData @ 0x18007F624 (RtlpLoadNlsData.c)
 * Callees:
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     NtInitializeNlsFiles @ 0x1800A1F90 (NtInitializeNlsFiles.c)
 */

NTSTATUS __cdecl RtlGetLocaleFileMappingAddress(
        PVOID *BaseAddress,
        PLCID DefaultLocaleId,
        PLARGE_INTEGER DefaultCasingTableSize,
        PULONG CurrentNLSVersion)
{
  NTSTATUS result; // eax
  PVOID v8; // rcx

  if ( !BaseAddress )
    return -1073741585;
  if ( !DefaultLocaleId )
    return -1073741584;
  if ( !DefaultCasingTableSize )
    return -1073741583;
  if ( gBaseAddress )
  {
    *BaseAddress = (PVOID)gBaseAddress;
    *DefaultLocaleId = gDefaultLocaleId;
    DefaultCasingTableSize->QuadPart = gDefaultCasingTableSize;
  }
  else
  {
    result = NtInitializeNlsFiles(BaseAddress, DefaultLocaleId, DefaultCasingTableSize, CurrentNLSVersion);
    if ( result < 0 )
      return result;
    v8 = *BaseAddress;
    gDefaultLocaleId = *DefaultLocaleId;
    gDefaultCasingTableSize = DefaultCasingTableSize->QuadPart;
    if ( _InterlockedCompareExchange64(&gBaseAddress, (signed __int64)v8, 0LL) )
    {
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *BaseAddress);
      *BaseAddress = (PVOID)gBaseAddress;
    }
  }
  return 0;
}
