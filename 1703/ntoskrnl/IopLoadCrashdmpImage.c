/*
 * XREFs of IopLoadCrashdmpImage @ 0x1405863C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IopLoadCrashdmpImage(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5, unsigned __int64 *a6)
{
  return MmLoadSystemImageEx(a1, a2, a3, a4 | 0x20u, a5, a6);
}
