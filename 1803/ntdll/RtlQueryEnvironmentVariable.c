/*
 * XREFs of RtlQueryEnvironmentVariable @ 0x180022780
 * Callers:
 *     RtlExpandEnvironmentStrings @ 0x180024050 (RtlExpandEnvironmentStrings.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18004BD30 (RtlQueryEnvironmentVariable_U.c)
 *     sub_18006DF50 @ 0x18006DF50 (sub_18006DF50.c)
 *     sub_180081044 @ 0x180081044 (sub_180081044.c)
 *     RtlGetExePath @ 0x1800814A0 (RtlGetExePath.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_180022980 @ 0x180022980 (sub_180022980.c)
 *     sub_180022A1C @ 0x180022A1C (sub_180022A1C.c)
 *     sub_180023380 @ 0x180023380 (sub_180023380.c)
 */

NTSTATUS __cdecl RtlQueryEnvironmentVariable(
        PVOID Environment,
        PCWSTR Name,
        SIZE_T NameLength,
        PWSTR Value,
        SIZE_T ValueLength,
        PSIZE_T ReturnLength)
{
  int v10; // ebx
  PSIZE_T v11; // r15
  NTSTATUS result; // eax
  SIZE_T v13; // rsi
  PPEB ProcessEnvironmentBlock; // rdx
  PRTL_CRITICAL_SECTION FastPebLock; // rdx
  NTSTATUS v16; // [rsp+40h] [rbp-28h]
  struct _TEB *v17; // [rsp+48h] [rbp-20h]
  PVOID v18; // [rsp+80h] [rbp+18h] BYREF

  v17 = NtCurrentTeb();
  v10 = 0;
  v11 = ReturnLength;
  *ReturnLength = 0LL;
  if ( !NameLength )
    return -1073741568;
  result = sub_180022980((wchar_t *)Name, NameLength, (__int64)v11);
  if ( result == -1073741568 )
  {
    if ( Environment )
    {
      v18 = Environment;
      if ( !*(_WORD *)Environment )
        return -1073741568;
      ProcessEnvironmentBlock = v17->ProcessEnvironmentBlock;
      if ( ProcessEnvironmentBlock->ProcessParameters->Environment == Environment )
      {
        FastPebLock = ProcessEnvironmentBlock->FastPebLock;
        if ( !FastPebLock || FastPebLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
        {
          result = sub_180022A1C(&v18, Name, NameLength, Value, ValueLength, v11);
          if ( result != -1073741568 )
            return result;
          v10 = 1;
        }
      }
      return sub_180023380(v18, Name, NameLength, Value, ValueLength, v11, v10);
    }
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v18 = v17->ProcessEnvironmentBlock->ProcessParameters->Environment;
    v13 = ValueLength;
    v16 = sub_180022A1C(&v18, Name, NameLength, Value, ValueLength, v11);
    if ( v16 == -1073741568 )
      v16 = sub_180023380(v18, Name, NameLength, Value, v13, v11, 1);
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
    return v16;
  }
  return result;
}
