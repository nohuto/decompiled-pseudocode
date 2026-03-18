/*
 * XREFs of IopQueryName @ 0x1404A5B30
 * Callers:
 *     <none>
 * Callees:
 *     IopQueryNameInternal @ 0x1404A5650 (IopQueryNameInternal.c)
 */

__int64 __fastcall IopQueryName(
        struct _FILE_OBJECT *a1,
        __int64 a2,
        UNICODE_STRING *a3,
        unsigned int a4,
        ULONG *a5,
        char a6)
{
  return IopQueryNameInternal(a1, a2, 0, a3, a4, a5, a6);
}
