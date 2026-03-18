/*
 * XREFs of ObAssignSecurity @ 0x140575E50
 * Callers:
 *     <none>
 * Callees:
 *     ObpAssignSecurity @ 0x1404F63F4 (ObpAssignSecurity.c)
 */

__int64 __fastcall ObAssignSecurity(__int64 a1, __int64 a2, void *a3, struct _OBJECT_TYPE *a4)
{
  return ObpAssignSecurity(a1, a2, a3, a4, 0, 0);
}
