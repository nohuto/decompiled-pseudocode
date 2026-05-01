/*
 * XREFs of __Platform_AcquireSRWLockExclusive @ 0x1800992FE
 * Callers:
 *     ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x18030A1B8 (-Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 *     ?Unregister@CGITRegistrationList@@QEAAJK@Z @ 0x18030A4C0 (-Unregister@CGITRegistrationList@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall _Platform_AcquireSRWLockExclusive(PSRWLOCK SRWLock)
{
  AcquireSRWLockExclusive(SRWLock);
}
