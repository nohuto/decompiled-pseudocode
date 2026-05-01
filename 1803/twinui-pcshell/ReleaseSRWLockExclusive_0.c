/*
 * XREFs of ReleaseSRWLockExclusive_0 @ 0x1800992F8
 * Callers:
 *     ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x18030A1B8 (-Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 *     ?Unregister@CGITRegistrationList@@QEAAJK@Z @ 0x18030A4C0 (-Unregister@CGITRegistrationList@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ReleaseSRWLockExclusive_0(PSRWLOCK SRWLock)
{
  ReleaseSRWLockExclusive(SRWLock);
}
