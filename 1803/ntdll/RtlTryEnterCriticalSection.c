/*
 * XREFs of RtlTryEnterCriticalSection @ 0x180060E90
 * Callers:
 *     sub_180013F50 @ 0x180013F50 (sub_180013F50.c)
 *     sub_180060E04 @ 0x180060E04 (sub_180060E04.c)
 *     RtlTryAcquirePebLock @ 0x180060E70 (RtlTryAcquirePebLock.c)
 *     sub_1800CA644 @ 0x1800CA644 (sub_1800CA644.c)
 *     sub_1800EB360 @ 0x1800EB360 (sub_1800EB360.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlTryEnterCriticalSection(__int64 a1)
{
  struct _TEB *v1; // rax
  signed __int8 v2; // cf
  HANDLE UniqueThread; // rax
  __int64 result; // rax

  v1 = NtCurrentTeb();
  v2 = _interlockedbittestandreset((volatile signed __int32 *)(a1 + 8), 0);
  UniqueThread = v1->ClientId.UniqueThread;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = UniqueThread;
    result = 1LL;
    *(_DWORD *)(a1 + 12) = 1;
  }
  else if ( *(HANDLE *)(a1 + 16) == UniqueThread )
  {
    ++*(_DWORD *)(a1 + 12);
    return 1LL;
  }
  else
  {
    return 0LL;
  }
  return result;
}
