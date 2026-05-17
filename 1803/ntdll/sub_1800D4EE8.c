/*
 * XREFs of sub_1800D4EE8 @ 0x1800D4EE8
 * Callers:
 *     sub_1800D4FBC @ 0x1800D4FBC (sub_1800D4FBC.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     ZwSetInformationProcess @ 0x18009AE40 (ZwSetInformationProcess.c)
 */

__int64 sub_1800D4EE8()
{
  int v0; // ebx
  int v1; // eax

  if ( !dword_18015D494 || (v0 = ZwSetInformationProcess(), v0 < 0) )
  {
    v1 = ZwSetInformationProcess();
    v0 = v1;
    if ( v1 < 0 )
      DbgPrint("AVRF: failed to enable handle checking (status %X) \n", v1);
  }
  return (unsigned int)v0;
}
