/*
 * XREFs of sub_1405493A8 @ 0x1405493A8
 * Callers:
 *     sub_140547A4C @ 0x140547A4C (sub_140547A4C.c)
 *     sub_140547C50 @ 0x140547C50 (sub_140547C50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405493A8(void *a1, ULONG a2, int a3, PMDL *a4, _QWORD *a5)
{
  if ( a3 )
    return WbMakeUserExecutablePagesKernelWritable(a1, a2, a4, a5);
  else
    return WbMakeUserDataPagesKernelWritable(a1, a2);
}
