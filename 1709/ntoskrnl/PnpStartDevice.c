/*
 * XREFs of PnpStartDevice @ 0x1400FCED4
 * Callers:
 *     PnpStartDeviceNode @ 0x140552F08 (PnpStartDeviceNode.c)
 * Callees:
 *     PnpSendIrp @ 0x1400FBD5C (PnpSendIrp.c)
 *     PoFxPrepareDevice @ 0x1400FCDC8 (PoFxPrepareDevice.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall PnpStartDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // r8
  _QWORD v9[10]; // [rsp+30h] [rbp-58h] BYREF

  if ( a1 )
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v6 = 0LL;
  PoFxPrepareDevice(v6, 1);
  *(_DWORD *)(v6 + 140) = 1;
  memset(v9, 0, 0x48uLL);
  v9[1] = *(_QWORD *)(v6 + 416);
  v9[2] = *(_QWORD *)(v6 + 424);
  LOWORD(v9[0]) = 27;
  return PnpSendIrp(a1, (__int64)v9, v7, a2, a3);
}
