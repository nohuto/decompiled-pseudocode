/*
 * XREFs of RtlGetProcessPreferredUILanguages @ 0x1800EBAB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180040DB0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_180040E28 @ 0x180040E28 (sub_180040E28.c)
 *     sub_18006E3A0 @ 0x18006E3A0 (sub_18006E3A0.c)
 */

NTSTATUS __cdecl RtlGetProcessPreferredUILanguages(
        ULONG Flags,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  unsigned __int8 v7; // bl
  NTSTATUS result; // eax
  __int64 v9; // rsi
  NTSTATUS v10; // ebx
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  v7 = Flags;
  if ( !ReturnLength || !NumberOfLanguages || !Languages && *ReturnLength )
    return -1073741811;
  if ( !Flags )
  {
    v7 = 8;
    goto LABEL_8;
  }
  if ( (Flags & 0xFFFFFFF3) != 0 || (Flags & 0xC) == 12 )
    return -1073741811;
LABEL_8:
  result = RtlpCreateProcessRegistryInfo(&v11);
  if ( result >= 0 )
  {
    v9 = v11;
    if ( !*(_QWORD *)(v11 + 72) )
      return sub_180040E28(0LL, v11, Languages, ReturnLength, v7, 0, (int *)NumberOfLanguages);
    sub_18006E3A0();
    RtlEnterCriticalSection(&stru_180159BA0);
    v10 = sub_180040E28(*(_QWORD *)(v9 + 72), v9, Languages, ReturnLength, v7, 0, (int *)NumberOfLanguages);
    RtlLeaveCriticalSection(&stru_180159BA0);
    return v10;
  }
  return result;
}
