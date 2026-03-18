/*
 * XREFs of Controller_InitializeDeviceFlags @ 0x1C0055008
 * Callers:
 *     Controller_Create @ 0x1C0055B84 (Controller_Create.c)
 * Callees:
 *     <none>
 */

void __fastcall Controller_InitializeDeviceFlags(__int64 a1)
{
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
}
