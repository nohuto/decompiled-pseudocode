/*
 * XREFs of StorCreateIoGateway @ 0x1C00118F4
 * Callers:
 *     RaidCreateAdapter @ 0x1C001171C (RaidCreateAdapter.c)
 * Callees:
 *     memset @ 0x1C001F680 (memset.c)
 */

PKSPIN_LOCK __fastcall StorCreateIoGateway(PKSPIN_LOCK SpinLock)
{
  PKSPIN_LOCK result; // rax

  memset(SpinLock, 0, 0x140uLL);
  *((_DWORD *)SpinLock + 7) = 1000;
  *((_DWORD *)SpinLock + 8) = 1000;
  KeInitializeSpinLock(SpinLock);
  SpinLock[2] = (KSPIN_LOCK)(SpinLock + 1);
  SpinLock[1] = (KSPIN_LOCK)(SpinLock + 1);
  result = SpinLock + 33;
  SpinLock[34] = (KSPIN_LOCK)(SpinLock + 33);
  SpinLock[33] = (KSPIN_LOCK)(SpinLock + 33);
  *((_DWORD *)SpinLock + 32) = 0;
  return result;
}
