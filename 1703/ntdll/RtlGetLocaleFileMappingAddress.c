/*
 * XREFs of RtlGetLocaleFileMappingAddress @ 0x180080A60
 * Callers:
 *     sub_180080990 @ 0x180080990 (sub_180080990.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     ZwInitializeNlsFiles @ 0x1800A71B0 (ZwInitializeNlsFiles.c)
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
  if ( qword_18015C280 )
  {
    *BaseAddress = (PVOID)qword_18015C280;
    *DefaultLocaleId = dword_18015BFC0;
    DefaultCasingTableSize->QuadPart = qword_18015BFC8;
  }
  else
  {
    result = ZwInitializeNlsFiles(BaseAddress, DefaultLocaleId, DefaultCasingTableSize, CurrentNLSVersion);
    if ( result < 0 )
      return result;
    v8 = *BaseAddress;
    dword_18015BFC0 = *DefaultLocaleId;
    qword_18015BFC8 = DefaultCasingTableSize->QuadPart;
    if ( _InterlockedCompareExchange64(&qword_18015C280, (signed __int64)v8, 0LL) )
    {
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *BaseAddress);
      *BaseAddress = (PVOID)qword_18015C280;
    }
  }
  return 0;
}
