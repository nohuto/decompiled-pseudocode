/*
 * XREFs of RtlGetLocaleFileMappingAddress @ 0x18007C4C0
 * Callers:
 *     sub_18007C3E8 @ 0x18007C3E8 (sub_18007C3E8.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     ZwInitializeNlsFiles @ 0x18009C9B0 (ZwInitializeNlsFiles.c)
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
  if ( qword_18015D2C0 )
  {
    *BaseAddress = (PVOID)qword_18015D2C0;
    *DefaultLocaleId = dword_18015D02C;
    DefaultCasingTableSize->QuadPart = qword_18015D030;
  }
  else
  {
    result = ZwInitializeNlsFiles(BaseAddress, DefaultLocaleId, DefaultCasingTableSize, CurrentNLSVersion);
    if ( result < 0 )
      return result;
    v8 = *BaseAddress;
    dword_18015D02C = *DefaultLocaleId;
    qword_18015D030 = DefaultCasingTableSize->QuadPart;
    if ( _InterlockedCompareExchange64(&qword_18015D2C0, (signed __int64)v8, 0LL) )
    {
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *BaseAddress);
      *BaseAddress = (PVOID)qword_18015D2C0;
    }
  }
  return 0;
}
