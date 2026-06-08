/*
 * XREFs of ComputeProcessorEnergy @ 0x1C0009870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ComputeProcessorEnergy(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  unsigned __int64 result; // rax

  result = 10 * a2 * a4 * (unsigned __int64)*((unsigned int *)&unk_1C0011970 + 54 * a1) / qword_1C0011B28;
  *a5 = result;
  return result;
}
