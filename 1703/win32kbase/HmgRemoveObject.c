/*
 * XREFs of HmgRemoveObject @ 0x1C003F330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall HmgRemoveObject(struct HOBJ__ *a1, int a2, int a3, int a4, char a5, unsigned int *a6)
{
  return HmgRemoveObjectImpl(a1, a2, a3, a4 != 0, a5, a6);
}
