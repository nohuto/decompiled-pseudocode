/*
 * XREFs of sub_1800486A8 @ 0x1800486A8
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x180047210 (LdrUnloadAlternateResourceModuleEx.c)
 * Callees:
 *     <none>
 */

void *__fastcall sub_1800486A8(unsigned int a1)
{
  __int64 v1; // r9
  char *v2; // r8
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax

  v1 = (unsigned int)dword_18015B2A0;
  v2 = (char *)BaseAddress;
  if ( a1 < dword_18015B2A0 - 1 )
  {
    v3 = (unsigned __int64)(unsigned int)(dword_18015B2A0 - 1) << 6;
    v4 = (unsigned __int64)a1 << 6;
    *(_OWORD *)((char *)BaseAddress + v4) = *(_OWORD *)((char *)BaseAddress + v3);
    *(_OWORD *)&v2[v4 + 16] = *(_OWORD *)&v2[v3 + 16];
    *(_OWORD *)&v2[v4 + 32] = *(_OWORD *)&v2[v3 + 32];
    *(_OWORD *)&v2[v4 + 48] = *(_OWORD *)&v2[v3 + 48];
  }
  return memset(&v2[64 * v1 - 64], 0, 0x40uLL);
}
