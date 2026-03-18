/*
 * XREFs of DbgkInitialize @ 0x14083EDD4
 * Callers:
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     DbgkpInitializePhase1 @ 0x14083EE04 (DbgkpInitializePhase1.c)
 *     DbgkpInitializePhase0 @ 0x14083EE54 (DbgkpInitializePhase0.c)
 */

__int64 DbgkInitialize()
{
  if ( !(_DWORD)InitializationPhase )
    return DbgkpInitializePhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 3uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return DbgkpInitializePhase1();
}
