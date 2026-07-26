/*
 * XREFs of NdisSetThreadObjectCompartmentId @ 0x1C00E4740
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C0011878 (-ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z.c)
 */

__int64 __fastcall NdisSetThreadObjectCompartmentId(struct _KTHREAD *a1, unsigned int a2)
{
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return ndisCmSetThreadState(a1, &v3, 0LL);
}
