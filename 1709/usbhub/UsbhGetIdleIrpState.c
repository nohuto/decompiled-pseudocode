/*
 * XREFs of UsbhGetIdleIrpState @ 0x1C00013BC
 * Callers:
 *     UsbhCompletePdoIdleIrp @ 0x1C0001280 (UsbhCompletePdoIdleIrp.c)
 *     UsbhIdleIrp_Event @ 0x1C0056DEC (UsbhIdleIrp_Event.c)
 * Callees:
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 */

__int64 __fastcall UsbhGetIdleIrpState(__int64 a1, __int64 a2, KIRQL *a3)
{
  __int64 v4; // rdi
  KIRQL v5; // al
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 result; // rax

  v4 = PdoExt(a2);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 2040));
  v6 = *(_DWORD *)(v4 + 1528);
  v7 = 32LL * *(unsigned int *)(v4 + 1780);
  *a3 = v5;
  result = v6;
  *(_DWORD *)(v7 + v4 + 1784) = 0;
  *(_DWORD *)(v7 + v4 + 1788) = v6;
  return result;
}
