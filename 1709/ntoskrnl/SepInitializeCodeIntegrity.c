/*
 * XREFs of SepInitializeCodeIntegrity @ 0x1405D87A4
 * Callers:
 *     SepInitializationPhase1 @ 0x1405D7CD4 (SepInitializationPhase1.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     SepIsOptionPresent @ 0x1405D885C (SepIsOptionPresent.c)
 */

__int64 SepInitializeCodeIntegrity()
{
  unsigned int v0; // edi
  __int64 v1; // rbx
  __int64 v2; // rcx
  unsigned int *v3; // rdx

  v0 = 6;
  memset(&SeCiCallbacks, 0, 0xC0uLL);
  SeCiCallbacks = 192;
  v1 = 0LL;
  qword_1403626D8 = 167772164LL;
  if ( KeLoaderBlock_0 )
  {
    v2 = *(_QWORD *)(KeLoaderBlock_0 + 240);
    if ( v2 )
    {
      v3 = *(unsigned int **)(v2 + 2552);
      if ( v3 )
        v0 = *v3;
    }
    if ( *(_QWORD *)(KeLoaderBlock_0 + 216) && (unsigned int)SepIsOptionPresent() )
      SeCiDebugOptions |= 1u;
    if ( KeLoaderBlock_0 )
      v1 = KeLoaderBlock_0 + 48;
  }
  return CiInitialize(v0, v1, &SeCiCallbacks, &SeCiPrivateApis);
}
