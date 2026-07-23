/*
 * XREFs of PsSetContextThread @ 0x140719590
 * Callers:
 *     <none>
 * Callees:
 *     PspSetContextThreadInternal @ 0x14049DFC0 (PspSetContextThreadInternal.c)
 */

int __fastcall PsSetContextThread(struct _KTHREAD *a1, CONTEXT *a2, char a3)
{
  return PspSetContextThreadInternal(a1, a2, a3, a3, 1);
}
