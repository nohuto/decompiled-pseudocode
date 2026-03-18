/*
 * XREFs of Crashdump_EventRing_UpdateDequeuePointer @ 0x1C0039C34
 * Callers:
 *     Crashdump_EventRing_AsyncPoll @ 0x1C0039438 (Crashdump_EventRing_AsyncPoll.c)
 *     Crashdump_EventRing_Poll @ 0x1C003977C (Crashdump_EventRing_Poll.c)
 *     Crashdump_EventRing_PrepareForDump @ 0x1C0039A38 (Crashdump_EventRing_PrepareForDump.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Crashdump_EventRing_UpdateDequeuePointer(__int64 a1)
{
  __int128 v1; // xmm0
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  __int64 v4; // rcx
  signed __int32 v5[6]; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v2 = *(_QWORD *)(a1 + 16);
  result = (*(_QWORD *)(a1 + 48) + 16LL * *(unsigned int *)(a1 + 92)) & 0xFFFFFFFFFFFFFFF0uLL | 8;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  *(_OWORD *)v5 = v1;
  if ( (v4 & 1) != 0 )
  {
    *(_DWORD *)(v2 + 24) = result;
    _InterlockedOr(v5, 0);
    result >>= 32;
    *(_DWORD *)(v2 + 28) = result;
  }
  else
  {
    *(_QWORD *)(v2 + 24) = result;
  }
  _InterlockedOr(v5, 0);
  return result;
}
