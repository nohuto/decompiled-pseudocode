/*
 * XREFs of PnpStartDevice @ 0x1400676C0
 * Callers:
 *     PnpStartDeviceNode @ 0x1404A7788 (PnpStartDeviceNode.c)
 * Callees:
 *     PoFxPrepareDevice @ 0x14006776C (PoFxPrepareDevice.c)
 *     PnpSendIrp @ 0x140080D08 (PnpSendIrp.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall PnpStartDevice(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebp
  int v5; // ebx
  __int64 v6; // rdi
  int v7; // r8d
  _QWORD v9[9]; // [rsp+30h] [rbp-58h] BYREF

  v4 = a2;
  v5 = a1;
  if ( a1 )
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v6 = 0LL;
  LOBYTE(a2) = 1;
  PoFxPrepareDevice(v6, a2);
  *(_DWORD *)(v6 + 140) = 1;
  memset(v9, 0, sizeof(v9));
  v9[1] = *(_QWORD *)(v6 + 416);
  v9[2] = *(_QWORD *)(v6 + 424);
  LOWORD(v9[0]) = 27;
  return PnpSendIrp(v5, (unsigned int)v9, v7, v4, a3);
}
