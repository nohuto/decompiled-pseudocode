/*
 * XREFs of MmDeleteProcessor @ 0x14020D358
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406AC0A4 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140808F4C (KeStartAllProcessors.c)
 * Callees:
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 */

char __fastcall MmDeleteProcessor(__int64 a1)
{
  unsigned __int64 v1; // rdx
  char result; // al

  v1 = *(_QWORD *)(a1 + 24768);
  if ( v1 )
  {
    result = MiReleasePtes((__int64)&qword_14036D0A0, (_QWORD *)(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), 0x40u);
    *(_QWORD *)(a1 + 24768) = 0LL;
  }
  return result;
}
