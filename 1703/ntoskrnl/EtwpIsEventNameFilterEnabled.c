/*
 * XREFs of EtwpIsEventNameFilterEnabled @ 0x1400870B4
 * Callers:
 *     EtwpApplyEventNameFilter @ 0x14002CF40 (EtwpApplyEventNameFilter.c)
 *     EtwpEventWriteFull @ 0x140085400 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1404F0990 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsEventNameFilterEnabled(__int64 a1, unsigned int a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v4; // r10
  bool result; // al
  __int64 v6; // rcx
  unsigned __int8 v7; // al

  v4 = *(_QWORD *)(a1 + 368);
  result = v4
        && (*(_DWORD *)(v4 + 80LL * a2) & 0x80000400) == 0x80000400
        && ((v6 = *(_QWORD *)(v4 + 80LL * a2 + 72), v7 = *(_BYTE *)(v6 + 1), a3 <= v7) || !v7)
        && (!a4 || (*(_QWORD *)(v6 + 8) & a4) != 0 && (a4 & *(_QWORD *)(v6 + 16)) == *(_QWORD *)(v6 + 16));
  return result;
}
