/*
 * XREFs of KiConfigureInitialNodes @ 0x140139440
 * Callers:
 *     KiInitializeKernel @ 0x140425860 (KiInitializeKernel.c)
 * Callees:
 *     KiAddProcessorToGroupDatabase @ 0x140139280 (KiAddProcessorToGroupDatabase.c)
 *     KiCommitNodeAssignment @ 0x1401394E4 (KiCommitNodeAssignment.c)
 */

_BYTE *__fastcall KiConfigureInitialNodes(__int64 a1)
{
  unsigned int v2; // edx
  _QWORD *v3; // r8
  _BYTE *v4; // rcx
  _BYTE *result; // rax

  byte_14041C2AD |= 2u;
  byte_14041C2AC = KiMaximumGroupSize;
  byte_14041C296 = 1;
  KeNodeBlock[0] = (__int64)&ExNode0;
  KiCommitNodeAssignment(&ExNode0);
  *(_QWORD *)(a1 + 192) = &ExNode0;
  qword_14041C250 |= 1uLL;
  *(_BYTE *)(a1 + 35) = 1;
  KiAddProcessorToGroupDatabase(a1, 0);
  v2 = 1;
  v3 = &unk_14041A408;
  v4 = &unk_1407FE8D6;
  do
  {
    *((_WORD *)v4 - 2) = v2;
    result = v4 - 150;
    ++v2;
    *v3 = v4 - 150;
    *v4 = 1;
    v4 += 320;
    ++v3;
  }
  while ( v2 < 0x40 );
  return result;
}
