/*
 * XREFs of RtlGetProcessPreferredUILanguages @ 0x180089300
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_180031FD4 @ 0x180031FD4 (sub_180031FD4.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180034D10 (RtlpCreateProcessRegistryInfo.c)
 *     sub_1800359B0 @ 0x1800359B0 (sub_1800359B0.c)
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
      return sub_1800359B0(0LL, v11, Languages, ReturnLength, v7, 0, (int *)NumberOfLanguages);
    sub_180031FD4();
    RtlEnterCriticalSection(&stru_18015ABE0);
    v10 = sub_1800359B0(*(_QWORD *)(v9 + 72), v9, Languages, ReturnLength, v7, 0, (int *)NumberOfLanguages);
    RtlLeaveCriticalSection(&stru_18015ABE0);
    return v10;
  }
  return result;
}
