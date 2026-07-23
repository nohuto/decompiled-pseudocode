/*
 * XREFs of PsSetContextThread @ 0x14077D310
 * Callers:
 *     <none>
 * Callees:
 *     PspSetContextThreadInternal @ 0x1404D0960 (PspSetContextThreadInternal.c)
 */

int __fastcall PsSetContextThread(struct _KTHREAD *a1, CONTEXT *a2, char a3)
{
  return PspSetContextThreadInternal(a1, a2, a3, a3, 1);
}
