/*
 * XREFs of ExDestroyHandle @ 0x1404FBEAC
 * Callers:
 *     PspProcessDelete @ 0x1400B8F70 (PspProcessDelete.c)
 *     PspJobDelete @ 0x1400D3DE0 (PspJobDelete.c)
 *     RtlpInsertStringAtom @ 0x140489C88 (RtlpInsertStringAtom.c)
 *     AlpcpFreeMessageFunction @ 0x1404FBBA0 (AlpcpFreeMessageFunction.c)
 *     PspThreadDelete @ 0x1404FBC50 (PspThreadDelete.c)
 *     RtlpFreeHandleForAtom @ 0x14057CDB4 (RtlpFreeHandleForAtom.c)
 * Callees:
 *     ExSweepSingleHandle @ 0x1400B8890 (ExSweepSingleHandle.c)
 *     ExpFreeHandleTableEntry @ 0x1404FBF0C (ExpFreeHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x140756D18 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExDestroyHandle(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // ebx

  if ( *(_QWORD *)(a1 + 96) )
    ExpUpdateDebugInfo(a1, KeGetCurrentThread(), a2, 2LL);
  v6 = ExSweepSingleHandle(a1, a3);
  ExpFreeHandleTableEntry(a1, a2, a3);
  return v6;
}
