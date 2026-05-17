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
  result = sub_18003B380(a2, a3, v11);
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
          result = sub_18003B41C(&Environment, a2, a3, a4, a5, v11);
          if ( (_DWORD)result != -1073741568 )
            return result;
          v10 = 1;
        }
      }
      return sub_18003B6D0(Environment, a2, a3, a4, a5, v11, v10);
    }
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    Environment = v17->ProcessEnvironmentBlock->ProcessParameters->Environment;
    v13 = a5;
    v16 = sub_18003B41C(&Environment, a2, a3, a4, a5, v11);
    if ( v16 == -1073741568 )
      v16 = sub_18003B6D0(Environment, a2, a3, a4, v13, v11, 1);
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    return v16;
  }
  return result;
}
