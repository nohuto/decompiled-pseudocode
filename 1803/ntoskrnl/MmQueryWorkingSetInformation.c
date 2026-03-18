/*
 * XREFs of MmQueryWorkingSetInformation @ 0x14006CEF8
 * Callers:
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x1402A79AC (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1402A7D90 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     PspQueryQuotaLimits @ 0x1404F8FFC (PspQueryQuotaLimits.c)
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MmQueryWorkingSetInformation(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, _DWORD *a6)
{
  unsigned __int16 *v10; // rbp
  unsigned __int8 v11; // dl
  __int64 v12; // r8
  char v13; // al

  *a6 = 0;
  v10 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v11 = MiLockWorkingSetShared((__int64)v10);
  *a1 = *((_QWORD *)v10 + 20) << 12;
  *a2 = *((_QWORD *)v10 + 15) << 12;
  *a3 = *((_QWORD *)v10 + 16) << 12;
  *a4 = *((_QWORD *)v10 + 14) << 12;
  *a5 = *((_QWORD *)v10 + 19) << 12;
  v13 = *((_BYTE *)v10 + 184);
  if ( v13 < 0 )
  {
    *a6 |= 4u;
    v13 = *((_BYTE *)v10 + 184);
  }
  if ( (v13 & 0x40) != 0 )
    *a6 |= 1u;
  MiUnlockWorkingSetShared((__int64)v10, v11, v12);
  return 0LL;
}
