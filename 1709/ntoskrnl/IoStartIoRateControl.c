/*
 * XREFs of IoStartIoRateControl @ 0x140007388
 * Callers:
 *     PspIoRateEntryActivate @ 0x140445410 (PspIoRateEntryActivate.c)
 * Callees:
 *     IopIoRateStartRateControl @ 0x14000746C (IopIoRateStartRateControl.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall IoStartIoRateControl(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // r8d
  _QWORD v8[16]; // [rsp+40h] [rbp-41h] BYREF

  v6 = *(_DWORD *)(a1 + 36);
  v8[0] = *(_QWORD *)a1;
  v8[3] = *(_QWORD *)(a1 + 16);
  v8[6] = *(_QWORD *)(a1 + 48);
  v8[9] = *(_QWORD *)(a1 + 96);
  v8[12] = *(_QWORD *)(a1 + 120);
  v8[1] = *(_QWORD *)(a1 + 8);
  v8[4] = *(_QWORD *)(a1 + 56);
  v8[7] = *(_QWORD *)(a1 + 64);
  v8[10] = *(_QWORD *)(a1 + 104);
  v8[13] = *(_QWORD *)(a1 + 128);
  v8[2] = *(_QWORD *)(a1 + 72);
  v8[5] = *(_QWORD *)(a1 + 80);
  v8[8] = *(_QWORD *)(a1 + 88);
  v8[11] = *(_QWORD *)(a1 + 112);
  v8[14] = *(_QWORD *)(a1 + 136);
  return IopIoRateStartRateControl((unsigned int)v8, a5, (v6 >> 1) & 1, a2, a3, a4, a5);
}
