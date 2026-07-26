/*
 * XREFs of ndisSendSystemPowerStateIndication @ 0x1C0065AB8
 * Callers:
 *     ndisSetSystemPower @ 0x1C00C6804 (ndisSetSystemPower.c)
 * Callees:
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00056C8 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0005714 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C0007254 (ndisIndicateStatusInternal.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 */

void __fastcall ndisSendSystemPowerStateIndication(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  unsigned __int8 v3[8]; // [rsp+28h] [rbp-39h] BYREF
  _DWORD v4[2]; // [rsp+30h] [rbp-31h] BYREF
  __int128 v5[7]; // [rsp+38h] [rbp-29h] BYREF

  v4[1] = a2;
  v4[0] = 524672;
  memset(v5, 0, sizeof(v5));
  LODWORD(v5[0]) = 7340440;
  *(_QWORD *)&v5[3] = v4;
  *((_QWORD *)&v5[0] + 1) = a1;
  DWORD1(v5[1]) = 1073807399;
  DWORD2(v5[3]) = 8;
  ndisMAcquireStInLockWithSpinLock(a1, v3);
  ndisIndicateStatusInternal(a1, v5);
  ndisMReleaseStInLockAndSpinLock(a1, v3[0]);
}
