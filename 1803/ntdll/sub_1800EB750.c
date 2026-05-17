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

__int64 __fastcall sub_1800EB750(__int64 a1, __int64 a2)
{
  __int64 v5; // rax
  unsigned int v6; // ebx

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    {
      return 3221225474LL;
    }
    else
    {
      RtlEnterCriticalSection((__int64)&unk_18015AAC0);
      v5 = 60LL;
      if ( *(_DWORD *)(a1 + 16) != -571548178 )
        v5 = 208LL;
      if ( *(_WORD *)(v5 + a1) == 0xFFFF )
        v6 = -1073741811;
      else
        v6 = sub_1800ED0C0(a1, a2);
      RtlLeaveCriticalSection((__int64)&unk_18015AAC0);
      return v6;
    }
  }
  else
  {
    dword_18015ABAC = *(_DWORD *)(a2 + 12);
    qword_18015ABC8 = *(_QWORD *)(a2 + 40);
    qword_18015ABC0 = *(_QWORD *)(a2 + 32);
    qword_18015ABB8 = *(_QWORD *)(a2 + 24);
    dword_18015ABB0 = *(_DWORD *)(a2 + 16);
    sub_180060204(sub_1800ED0C0, a2, 0);
    return 0LL;
  }
}
