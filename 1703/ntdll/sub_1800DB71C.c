/*
 * XREFs of sub_1800DB71C @ 0x1800DB71C
 * Callers:
 *     sub_1800DB7F0 @ 0x1800DB7F0 (sub_1800DB7F0.c)
 * Callees:
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     ZwSetInformationProcess @ 0x1800A5680 (ZwSetInformationProcess.c)
 */

__int64 sub_1800DB71C()
{
  int v0; // ebx
  int v1; // eax

  if ( !dword_18015C490 || (v0 = ZwSetInformationProcess(), v0 < 0) )
  {
    v1 = ZwSetInformationProcess();
    v0 = v1;
    if ( v1 < 0 )
      DbgPrint("AVRF: failed to enable handle checking (status %X) \n", v1);
  }
  return (unsigned int)v0;
}
