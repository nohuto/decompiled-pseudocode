/*
 * XREFs of CmpGetKeyNodeForKcb @ 0x140472A4C
 * Callers:
 *     CmpSetKeySecurity @ 0x1400161F0 (CmpSetKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x1401593C4 (CmpAssignKeySecurity.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401E35BC (CmQueryMultipleValueForLayeredKey.c)
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14068C5D0 (CmEnumerateValueFromLayeredKey.c)
 *     CmSetLastWriteTimeKey @ 0x14068E12C (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x14068E764 (CmpEnumerateLayeredKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x14069E61C (CmpCommitDeleteKeyUoW.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140481B84 (CmpUpdateKeyNodeAccessBits.c)
 */

__int64 __fastcall CmpGetKeyNodeForKcb(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi

  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(a1 + 24) + 8LL))(
         *(_QWORD *)(a1 + 24),
         *(unsigned int *)(a1 + 32),
         a2);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = v6;
  if ( a3 )
  {
    CmpUpdateKeyNodeAccessBits(v7, v6, *(unsigned int *)(a1 + 32));
  }
  else if ( (*(_DWORD *)(v7 + 144) & 0x8001) == 0 && (*(_BYTE *)(v6 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
  {
    (*(void (__fastcall **)(__int64, __int64))(v7 + 16))(v7, a2);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 24) + 2848LL), 1u);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(a1 + 24) + 8LL))(
           *(_QWORD *)(a1 + 24),
           *(unsigned int *)(a1 + 32),
           a2);
    CmpUpdateKeyNodeAccessBits(*(_QWORD *)(a1 + 24), v8, *(unsigned int *)(a1 + 32));
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 24) + 2848LL));
  }
  return v8;
}
