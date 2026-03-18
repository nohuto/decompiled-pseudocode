/*
 * XREFs of IopWaitForLockAlertable @ 0x1400FFEDC
 * Callers:
 *     IopMountVolume @ 0x14055FFAC (IopMountVolume.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall IopWaitForLockAlertable(PVOID Object, char a2, char a3)
{
  KPROCESSOR_MODE v6; // di
  BOOLEAN v7; // r9
  NTSTATUS result; // eax

  v6 = a3 != 0 ? a2 : 0;
  do
  {
    v7 = a3 || a2 == 1;
    result = KeWaitForSingleObject(Object, Executive, v6, v7, 0LL);
  }
  while ( (result == 257 || result == 192) && !a3 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 );
  return result;
}
