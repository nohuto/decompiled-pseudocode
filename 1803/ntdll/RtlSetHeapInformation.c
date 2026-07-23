/*
 * XREFs of RtlSetHeapInformation @ 0x18007B300
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800EC6A0 @ 0x1800EC6A0 (sub_1800EC6A0.c)
 *     RtlHeapTrkInitialize @ 0x1800F3000 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     RtlRunOnceExecuteOnce @ 0x1800297E0 (RtlRunOnceExecuteOnce.c)
 *     sub_180060204 @ 0x180060204 (sub_180060204.c)
 *     sub_180060E04 @ 0x180060E04 (sub_180060E04.c)
 *     sub_18007B3C0 @ 0x18007B3C0 (sub_18007B3C0.c)
 *     sub_1800EB750 @ 0x1800EB750 (sub_1800EB750.c)
 *     sub_1800FD134 @ 0x1800FD134 (sub_1800FD134.c)
 */

NTSTATUS __cdecl RtlSetHeapInformation(
        PVOID HeapHandle,
        HEAP_INFORMATION_CLASS HeapInformationClass,
        PVOID HeapInformation,
        SIZE_T HeapInformationLength)
{
  NTSTATUS result; // eax
  __int64 v6; // rax

  switch ( HeapInformationClass )
  {
    case -2147483646:
      if ( HeapInformation && HeapInformationLength == 48 )
      {
        result = sub_1800EB750(HeapHandle);
LABEL_9:
        if ( result < 0 )
          return result;
        return 0;
      }
      return -1073741823;
    case 0:
      if ( HeapInformationLength < 4 )
        return -1073741789;
      if ( *(_DWORD *)HeapInformation == 2 )
      {
        if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
        {
          if ( (*((_DWORD *)HeapHandle + 28) & 0x75010F63) == 2 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
          {
            result = sub_18007B3C0();
            goto LABEL_9;
          }
          return -1073741811;
        }
        return 0;
      }
      return -1073741823;
    case 1:
      dword_18015D014 = 0;
      return 0;
  }
  if ( HeapInformationClass != 4 )
  {
    if ( HeapInformationClass == HeapOptimizeResources )
    {
      if ( !HeapInformation
        || HeapInformationLength < 4
        || *(_DWORD *)HeapInformation != 1
        || HeapInformationLength != 8
        || *((_DWORD *)HeapInformation + 1) )
      {
        return -1073741811;
      }
      if ( HeapHandle )
      {
        RtlEnterCriticalSection(&stru_18015AAC0);
        v6 = 60LL;
        if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
          v6 = 208LL;
        if ( *(_WORD *)((char *)HeapHandle + v6) != 0xFFFF )
          sub_180060E04((__int64)HeapHandle);
        RtlLeaveCriticalSection(&stru_18015AAC0);
      }
      else
      {
        sub_180060204((__int64 (__fastcall *)(_QWORD, _QWORD))sub_180060DF0, 0LL, 0);
      }
    }
    else if ( HeapInformationClass == 5 )
    {
      if ( !HeapInformation
        || HeapInformationLength < 0x10
        || *(_WORD *)HeapInformation != 1
        || (*((_WORD *)HeapInformation + 1) & 0xFFFE) != 0 )
      {
        return -1073741811;
      }
      sub_1800FD134(HeapInformation);
    }
    return 0;
  }
  if ( (byte_18015D028 & 1) == 0 )
    return -1073741811;
  result = RtlRunOnceExecuteOnce(&stru_18015D348, (PRTL_RUN_ONCE_INIT_FN)sub_18005F770, &Parameter, 0LL);
  if ( result >= 0 )
  {
    byte_18015D028 |= 2u;
    return 0;
  }
  return result;
}
