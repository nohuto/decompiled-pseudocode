/*
 * XREFs of SepInitializeCodeIntegrity @ 0x1405C5404
 * Callers:
 *     SepInitializationPhase1 @ 0x1405C48E0 (SepInitializationPhase1.c)
 * Callees:
 *     strstr @ 0x1401697D0 (strstr.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 SepInitializeCodeIntegrity()
{
  unsigned int v0; // esi
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rcx
  unsigned int *v4; // rdx
  char *v5; // rdi
  char *v6; // rax

  v0 = 6;
  memset(&SeCiCallbacks, 0, 0xC0uLL);
  v1 = KeLoaderBlock_0;
  SeCiCallbacks = 192;
  v2 = 0LL;
  qword_140348C38 = 167772163LL;
  if ( KeLoaderBlock_0 )
  {
    v3 = *(_QWORD *)(KeLoaderBlock_0 + 240);
    if ( v3 )
    {
      v4 = *(unsigned int **)(v3 + 2552);
      if ( v4 )
        v0 = *v4;
    }
    v5 = *(char **)(KeLoaderBlock_0 + 216);
    if ( v5 )
    {
      v6 = strstr(*(const char **)(KeLoaderBlock_0 + 216), "MINTCBIGNOREKD");
      if ( v6 && (v6 == v5 || *(v6 - 1) == 32) && (v6[14] & 0xDF) == 0 )
        SeCiDebugOptions |= 1u;
      v1 = KeLoaderBlock_0;
    }
    if ( v1 )
      v2 = v1 + 48;
  }
  return CiInitialize(v0, v2, &SeCiCallbacks, &SeCiPrivateApis);
}
