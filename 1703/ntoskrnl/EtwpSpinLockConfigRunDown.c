/*
 * XREFs of EtwpSpinLockConfigRunDown @ 0x1407114B4
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140434EC0 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall EtwpSpinLockConfigRunDown(unsigned int a1, char a2)
{
  _DWORD v2[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v3; // [rsp+40h] [rbp-28h] BYREF
  int v4; // [rsp+48h] [rbp-20h]
  int v5; // [rsp+4Ch] [rbp-1Ch]

  v5 = 0;
  v2[0] = EtwpSpinLockSpinThreshold;
  v2[2] = EtwpSpinLockAcquireSampleRate;
  v2[1] = EtwpSpinLockContentionSampleRate;
  v2[3] = EtwpSpinLockHoldThreshold;
  v3 = v2;
  v4 = 16;
  EtwpLogKernelEvent((__int64)&v3, EtwpHostSiloState, a1, 1u, 3916 - (a2 != 0), 0x501903u);
}
