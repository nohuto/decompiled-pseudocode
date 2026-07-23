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
  _QWORD *v2; // r8
  __int64 v3; // rax
  __int64 v4; // rcx

  v1 = (unsigned int)dword_18015A268;
  v2 = BaseAddress;
  v3 = (unsigned int)(dword_18015A268 - 1);
  if ( a1 < (unsigned int)v3 )
  {
    v4 = 9LL * a1;
    *(_OWORD *)((char *)BaseAddress + 8 * v4) = *(_OWORD *)((char *)BaseAddress + 72 * v3);
    *(_OWORD *)&v2[v4 + 2] = *(_OWORD *)&v2[9 * v3 + 2];
    *(_OWORD *)&v2[v4 + 4] = *(_OWORD *)&v2[9 * v3 + 4];
    *(_OWORD *)&v2[v4 + 6] = *(_OWORD *)&v2[9 * v3 + 6];
    v2[v4 + 8] = v2[9 * v3 + 8];
  }
  return memset(&v2[9 * v1 - 9], 0, 0x48uLL);
}
