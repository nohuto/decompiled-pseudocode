/*
 * XREFs of DbgkInitialize @ 0x14089F260
 * Callers:
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     DbgkpInitializePhase1 @ 0x14089F290 (DbgkpInitializePhase1.c)
 *     DbgkpInitializePhase0 @ 0x14089F2E0 (DbgkpInitializePhase0.c)
 */

__int64 DbgkInitialize()
{
  if ( !(_DWORD)InitializationPhase )
    return DbgkpInitializePhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 3uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return DbgkpInitializePhase1();
}
