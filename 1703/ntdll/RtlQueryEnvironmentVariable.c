/*
 * XREFs of RtlQueryEnvironmentVariable @ 0x18003B180
 * Callers:
 *     RtlExpandEnvironmentStrings @ 0x18003AFF0 (RtlExpandEnvironmentStrings.c)
 *     sub_18004D108 @ 0x18004D108 (sub_18004D108.c)
 *     RtlGetExePath @ 0x1800504F0 (RtlGetExePath.c)
 *     RtlQueryEnvironmentVariable_U @ 0x180062DA0 (RtlQueryEnvironmentVariable_U.c)
 *     sub_1800874C4 @ 0x1800874C4 (sub_1800874C4.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_18003B380 @ 0x18003B380 (sub_18003B380.c)
 *     sub_18003B41C @ 0x18003B41C (sub_18003B41C.c)
 *     sub_18003B6D0 @ 0x18003B6D0 (sub_18003B6D0.c)
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
  result = sub_18003B380((wchar_t *)Name, NameLength, (__int64)v11);
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
          result = sub_18003B41C(&v18, Name, NameLength, Value, ValueLength, v11);
          if ( result != -1073741568 )
            return result;
          v10 = 1;
        }
      }
      return sub_18003B6D0(v18, Name, NameLength, Value, ValueLength, v11, v10);
    }
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v18 = v17->ProcessEnvironmentBlock->ProcessParameters->Environment;
    v13 = ValueLength;
    v16 = sub_18003B41C(&v18, Name, NameLength, Value, ValueLength, v11);
    if ( v16 == -1073741568 )
      v16 = sub_18003B6D0(v18, Name, NameLength, Value, v13, v11, 1);
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
    return v16;
  }
  return result;
}
