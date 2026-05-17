/*
 * XREFs of sub_1800869C8 @ 0x1800869C8
 * Callers:
 *     sub_180086714 @ 0x180086714 (sub_180086714.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

struct _PEB *__fastcall sub_1800869C8(const void **a1, struct _RTL_USER_PROCESS_PARAMETERS *a2, void *a3, void *a4)
{
  struct _PEB *result; // rax
  __int64 v9; // rbx
  __int64 v10; // r10
  unsigned int v11; // esi
  unsigned __int64 v12; // rdi

  result = (struct _PEB *)RtlGetCurrentServiceSessionId();
  v9 = 2147353476LL;
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v10 = (__int64)result->HotpatchInformation + 554;
  }
  else
  {
    v10 = 2147353476LL;
  }
  if ( *(_BYTE *)v10 )
  {
    v11 = *(unsigned __int16 *)a1 + 64;
    result = (struct _PEB *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015B268 + 1572864, v11);
    v12 = (unsigned __int64)result;
    if ( result )
    {
      result->ProcessParameters = a2;
      result->SubSystemData = a3;
      *(_WORD *)(&result->3 + 3) = 5152;
      result->ProcessHeap = a4;
      memmove(&result->FastPebLock, a1[1], *(unsigned __int16 *)a1);
      *(_WORD *)(v12 + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1) + 56) = 0;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
      ZwTraceEvent(*(unsigned __int8 *)v9, 1026LL, v11 - 32, v12);
      return (struct _PEB *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12);
    }
  }
  return result;
}
