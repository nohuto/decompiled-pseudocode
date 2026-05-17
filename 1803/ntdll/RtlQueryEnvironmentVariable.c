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

__int64 __fastcall RtlQueryEnvironmentVariable(_WORD *a1, wchar_t *a2, size_t a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  int v10; // ebx
  __int64 v11; // r15
  __int64 result; // rax
  __int64 v13; // rsi
  struct _PEB *ProcessEnvironmentBlock; // rdx
  struct _RTL_CRITICAL_SECTION *FastPebLock; // rdx
  unsigned int v16; // [rsp+40h] [rbp-28h]
  struct _TEB *v17; // [rsp+48h] [rbp-20h]
  _WORD *Environment; // [rsp+80h] [rbp+18h] BYREF

  v17 = NtCurrentTeb();
  v10 = 0;
  v11 = (__int64)a6;
  *a6 = 0LL;
  if ( !a3 )
    return 3221225728LL;
  result = sub_180022980(a2, a3, v11);
  if ( (_DWORD)result == -1073741568 )
  {
    if ( a1 )
    {
      Environment = a1;
      if ( !*a1 )
        return 3221225728LL;
      ProcessEnvironmentBlock = v17->ProcessEnvironmentBlock;
      if ( ProcessEnvironmentBlock->ProcessParameters->Environment == a1 )
      {
        FastPebLock = ProcessEnvironmentBlock->FastPebLock;
        if ( !FastPebLock || FastPebLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
        {
          result = sub_180022A1C(&Environment, a2, a3, a4, a5, v11);
          if ( (_DWORD)result != -1073741568 )
            return result;
          v10 = 1;
        }
      }
      return sub_180023380(Environment, a2, a3, a4, a5, v11, v10);
    }
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    Environment = v17->ProcessEnvironmentBlock->ProcessParameters->Environment;
    v13 = a5;
    v16 = sub_180022A1C(&Environment, a2, a3, a4, a5, v11);
    if ( v16 == -1073741568 )
      v16 = sub_180023380(Environment, a2, a3, a4, v13, v11, 1);
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    return v16;
  }
  return result;
}
