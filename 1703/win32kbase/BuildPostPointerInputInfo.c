/*
 * XREFs of BuildPostPointerInputInfo @ 0x1C0129670
 * Callers:
 *     <none>
 * Callees:
 *     ?BuildPostInputInfo@CTouchProcessor@@QEAAH_KPEAUtagPOSTINPUTINFO@@PEAP6AHUtagINPUTDEST@@IKHH1@Z@Z @ 0x1C011B398 (-BuildPostInputInfo@CTouchProcessor@@QEAAH_KPEAUtagPOSTINPUTINFO@@PEAP6AHUtagINPUTDEST@@IKHH1@Z@.c)
 */

_BOOL8 __fastcall BuildPostPointerInputInfo(
        CTouchProcessor *a1,
        struct tagPOSTINPUTINFO *a2,
        int a3,
        int (__high **a4)(struct tagINPUTDEST, unsigned int, unsigned int, int, int, struct tagPOSTINPUTINFO *))
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( a3 == 152 )
    return CTouchProcessor::BuildPostInputInfo(a1, (__int64)a1, a2, a4);
  return result;
}
