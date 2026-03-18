/*
 * XREFs of PfpScenCtxInitialize @ 0x1405DCFD8
 * Callers:
 *     PfInitializeSuperfetch @ 0x14084EEE8 (PfInitializeSuperfetch.c)
 * Callees:
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     memset @ 0x140192F40 (memset.c)
 */

void __fastcall PfpScenCtxInitialize(_QWORD *a1)
{
  memset(a1, 0, 0x78uLL);
  *a1 = 0LL;
  *((_DWORD *)a1 + 12) = 0;
  *((_DWORD *)a1 + 2) &= 0xFFFFFFFC;
  KeInitializeEvent((PRKEVENT)(a1 + 2), NotificationEvent, 0);
}
