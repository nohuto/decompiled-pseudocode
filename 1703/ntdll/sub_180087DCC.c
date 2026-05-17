/*
 * XREFs of sub_180087DCC @ 0x180087DCC
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x180010CF0 (LdrUnloadAlternateResourceModuleEx.c)
 * Callees:
 *     <none>
 */

void *__fastcall sub_180087DCC(unsigned int a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rcx

  v1 = (unsigned int)dword_18015A268;
  v2 = qword_18015A260;
  v3 = (unsigned int)(dword_18015A268 - 1);
  if ( a1 < (unsigned int)v3 )
  {
    v4 = 9LL * a1;
    *(_OWORD *)(qword_18015A260 + 8 * v4) = *(_OWORD *)(qword_18015A260 + 72 * v3);
    *(_OWORD *)(v2 + 8 * v4 + 16) = *(_OWORD *)(v2 + 72 * v3 + 16);
    *(_OWORD *)(v2 + 8 * v4 + 32) = *(_OWORD *)(v2 + 72 * v3 + 32);
    *(_OWORD *)(v2 + 8 * v4 + 48) = *(_OWORD *)(v2 + 72 * v3 + 48);
    *(_QWORD *)(v2 + 8 * v4 + 64) = *(_QWORD *)(v2 + 72 * v3 + 64);
  }
  return memset((void *)(v2 + 72 * (v1 - 1)), 0, 0x48uLL);
}
