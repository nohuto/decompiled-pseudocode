/*
 * XREFs of KeFreeCalloutStack @ 0x1406D8290
 * Callers:
 *     <none>
 * Callees:
 *     MmDeleteKernelStack @ 0x140029590 (MmDeleteKernelStack.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall KeFreeCalloutStack(_BYTE *P, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  BOOL i; // ebp

  v3 = 0LL;
  for ( i = P[4] != 0; (unsigned int)v3 < (unsigned __int8)P[5]; v3 = (unsigned int)(v3 + 1) )
  {
    MmDeleteKernelStack(*(_QWORD *)&P[8 * v3 + 64], i, a3);
    *(_QWORD *)&P[8 * v3 + 64] = (char *)MmBadPointer + 4096;
  }
  ExFreePoolWithTag(P, 0);
}
