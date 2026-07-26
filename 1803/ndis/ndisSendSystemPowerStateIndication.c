/*
 * XREFs of ndisSendSystemPowerStateIndication @ 0x1C00665D0
 * Callers:
 *     ndisSetSystemPower @ 0x1C00B09DC (ndisSetSystemPower.c)
 * Callees:
 *     ndisIndicateStatusInternal @ 0x1C0017E84 (ndisIndicateStatusInternal.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0019E34 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0019E80 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 */

void __fastcall ndisSendSystemPowerStateIndication(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  __int64 v3; // r8
  unsigned __int8 v4[8]; // [rsp+28h] [rbp-39h] BYREF
  _DWORD v5[2]; // [rsp+30h] [rbp-31h] BYREF
  __int128 v6[7]; // [rsp+38h] [rbp-29h] BYREF

  v5[1] = a2;
  v5[0] = 524672;
  memset(v6, 0, sizeof(v6));
  LODWORD(v6[0]) = 7340440;
  *(_QWORD *)&v6[3] = v5;
  *((_QWORD *)&v6[0] + 1) = a1;
  DWORD1(v6[1]) = 1073807399;
  DWORD2(v6[3]) = 8;
  ndisMAcquireStInLockWithSpinLock(a1, v4);
  ndisIndicateStatusInternal((__int64)a1, v6, v3);
  ndisMReleaseStInLockAndSpinLock(a1, v4[0]);
}
