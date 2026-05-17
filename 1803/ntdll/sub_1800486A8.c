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
  __int64 v2; // r8
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax

  v1 = (unsigned int)dword_18015B2A0;
  v2 = qword_18015B298;
  if ( a1 < dword_18015B2A0 - 1 )
  {
    v3 = (unsigned __int64)(unsigned int)(dword_18015B2A0 - 1) << 6;
    v4 = (unsigned __int64)a1 << 6;
    *(_OWORD *)(v4 + qword_18015B298) = *(_OWORD *)(v3 + qword_18015B298);
    *(_OWORD *)(v4 + v2 + 16) = *(_OWORD *)(v3 + v2 + 16);
    *(_OWORD *)(v4 + v2 + 32) = *(_OWORD *)(v3 + v2 + 32);
    *(_OWORD *)(v4 + v2 + 48) = *(_OWORD *)(v3 + v2 + 48);
  }
  return memset((void *)((v1 << 6) + v2 - 64), 0, 0x40uLL);
}
