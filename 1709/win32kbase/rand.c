/*
 * XREFs of rand @ 0x1C00A793C
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C0015EDC (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_1C018D6B0 = 214013 * dword_1C018D6B0 + 2531011;
  return (dword_1C018D6B0 >> 16) & 0x7FFF;
}
