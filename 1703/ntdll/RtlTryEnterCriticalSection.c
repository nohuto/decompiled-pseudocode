/*
 * XREFs of RtlTryEnterCriticalSection @ 0x18001EEC0
 * Callers:
 *     sub_180006330 @ 0x180006330 (sub_180006330.c)
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 *     RtlTryAcquirePebLock @ 0x180083080 (RtlTryAcquirePebLock.c)
 *     sub_1800D5364 @ 0x1800D5364 (sub_1800D5364.c)
 *     sub_1800EF328 @ 0x1800EF328 (sub_1800EF328.c)
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
