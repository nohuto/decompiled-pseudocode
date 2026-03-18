/*
 * XREFs of KiConfigureInitialNodes @ 0x140175F08
 * Callers:
 *     KiInitializeKernel @ 0x14047A5D0 (KiInitializeKernel.c)
 * Callees:
 *     KiAddProcessorToGroupDatabase @ 0x1401760B4 (KiAddProcessorToGroupDatabase.c)
 *     KiCommitNodeAssignment @ 0x1401766D4 (KiCommitNodeAssignment.c)
 */

_BYTE *__fastcall KiConfigureInitialNodes(__int64 a1)
{
  unsigned int v2; // edx
  _QWORD *v3; // r8
  _BYTE *v4; // rcx
  _BYTE *result; // rax

  byte_1404672ED |= 2u;
  byte_1404672EC = KiMaximumGroupSize;
  byte_1404672D6 = 1;
  KeNodeBlock[0] = (__int64)&ExNode0;
  KiCommitNodeAssignment(&ExNode0);
  *(_QWORD *)(a1 + 192) = &ExNode0;
  qword_140467290 |= 1uLL;
  *(_BYTE *)(a1 + 35) = 1;
  KiAddProcessorToGroupDatabase(a1, 0LL);
  v2 = 1;
  v3 = &unk_140465408;
  v4 = &unk_14086D256;
  do
  {
    *((_WORD *)v4 - 2) = v2;
    result = v4 - 150;
    ++v2;
    *v3 = v4 - 150;
    *v4 = 1;
    v4 += 384;
    ++v3;
  }
  while ( v2 < 0x40 );
  return result;
}
