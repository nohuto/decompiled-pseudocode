/*
 * XREFs of CcDereferenceFileOffset @ 0x1401DE608
 * Callers:
 *     CcPinFileData @ 0x14009C5A0 (CcPinFileData.c)
 * Callees:
 *     CcReleaseBcbLockAndVacbLock @ 0x1400A9478 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1400A94E0 (CcAcquireBcbLockAndVacbLock.c)
 *     SetVacb @ 0x1400AA800 (SetVacb.c)
 */

void __fastcall CcDereferenceFileOffset(__int64 a1, unsigned int a2)
{
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    CcAcquireBcbLockAndVacbLock(1, (struct _FAST_MUTEX *)a1);
    SetVacb(a1, a2, 0xFFFFFFFFFFFFFFFEuLL);
    CcReleaseBcbLockAndVacbLock(1, (struct _FAST_MUTEX *)a1);
  }
}
