/*
 * XREFs of RtlGetProcessPreferredUILanguages @ 0x1800907A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInitMuiCriticalSection @ 0x1800061E0 (RtlpInitMuiCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18002CDB0 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18002CE30 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 */

NTSTATUS __cdecl RtlGetProcessPreferredUILanguages(
        ULONG Flags,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  char v7; // bl
  NTSTATUS result; // eax
  __int64 v9; // rsi
  NTSTATUS v10; // ebx
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  v7 = Flags;
  if ( !ReturnLength || !NumberOfLanguages || !Languages && *ReturnLength )
    return -1073741811;
  if ( Flags )
  {
    if ( (Flags & 0xFFFFFFF3) == 0 && (Flags & 0xC) != 12 )
      goto LABEL_7;
    return -1073741811;
  }
  v7 = 8;
LABEL_7:
  result = RtlpCreateProcessRegistryInfo(&v11);
  if ( result >= 0 )
  {
    v9 = v11;
    if ( !*(_QWORD *)(v11 + 72) )
      return LdrpConvertLangFallbackListToMultiSz(0LL, v11, Languages, ReturnLength, v7, 0, (int *)NumberOfLanguages);
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection(&RegistryInfoCritSect);
    v10 = LdrpConvertLangFallbackListToMultiSz(
            *(_QWORD *)(v9 + 72),
            v9,
            Languages,
            ReturnLength,
            v7,
            0,
            (int *)NumberOfLanguages);
    RtlLeaveCriticalSection(&RegistryInfoCritSect);
    return v10;
  }
  return result;
}
