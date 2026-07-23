/*
 * XREFs of sub_1800EB750 @ 0x1800EB750
 * Callers:
 *     RtlSetHeapInformation @ 0x18007B300 (RtlSetHeapInformation.c)
 *     RtlHeapTrkInitialize @ 0x1800F3000 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_180060204 @ 0x180060204 (sub_180060204.c)
 *     sub_1800ED0C0 @ 0x1800ED0C0 (sub_1800ED0C0.c)
 */

__int64 __fastcall sub_1800EB750(_DWORD *HeapHandle, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx

  if ( HeapHandle )
  {
    if ( (HeapHandle[29] & 0x1000000) != 0 )
    {
      return 3221225474LL;
    }
    else
    {
      RtlEnterCriticalSection(&stru_18015AAC0);
      v4 = 15LL;
      if ( HeapHandle[4] != -571548178 )
        v4 = 52LL;
      if ( LOWORD(HeapHandle[v4]) == 0xFFFF )
        v5 = -1073741811;
      else
        v5 = sub_1800ED0C0(HeapHandle);
      RtlLeaveCriticalSection(&stru_18015AAC0);
      return v5;
    }
  }
  else
  {
    dword_18015ABAC = *(_DWORD *)(a2 + 12);
    qword_18015ABC8 = *(_QWORD *)(a2 + 40);
    qword_18015ABC0 = *(_QWORD *)(a2 + 32);
    qword_18015ABB8 = *(_QWORD *)(a2 + 24);
    dword_18015ABB0 = *(_DWORD *)(a2 + 16);
    sub_180060204((__int64 (__fastcall *)(_QWORD, _QWORD))sub_1800ED0C0, a2, 0);
    return 0LL;
  }
}
