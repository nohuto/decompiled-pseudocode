/*
 * XREFs of KiConfigureInitialNodes @ 0x140154FF8
 * Callers:
 *     KiInitializeKernel @ 0x140411030 (KiInitializeKernel.c)
 * Callees:
 *     KiAddProcessorToGroupDatabase @ 0x14015509C (KiAddProcessorToGroupDatabase.c)
 *     KiCommitNodeAssignment @ 0x140155268 (KiCommitNodeAssignment.c)
 */

_BYTE *__fastcall KiConfigureInitialNodes(__int64 a1)
{
  unsigned int v2; // edx
  _QWORD *v3; // r8
  _BYTE *v4; // rcx
  _BYTE *result; // rax

  byte_1403FB2AD |= 2u;
  byte_1403FB2AC = KiMaximumGroupSize;
  byte_1403FB296 = 1;
  KeNodeBlock[0] = (__int64)&ExNode0;
  KiCommitNodeAssignment(&ExNode0);
  *(_QWORD *)(a1 + 192) = &ExNode0;
  qword_1403FB250 |= 1uLL;
  *(_BYTE *)(a1 + 35) = 1;
  KiAddProcessorToGroupDatabase(a1, 0LL);
  v2 = 1;
  v3 = &unk_1403F9408;
  v4 = &unk_1407B78D6;
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
