/*
 * XREFs of SepInitializeCodeIntegrity @ 0x140642884
 * Callers:
 *     SepInitializationPhase1 @ 0x140641CF0 (SepInitializationPhase1.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     SepIsOptionPresent @ 0x14064293C (SepIsOptionPresent.c)
 */

__int64 SepInitializeCodeIntegrity()
{
  unsigned int v0; // edi
  __int64 v1; // rbx
  __int64 v2; // rcx
  unsigned int *v3; // rdx

  v0 = 6;
  memset(&SeCiCallbacks, 0, 0xD0uLL);
  SeCiCallbacks = 208;
  v1 = 0LL;
  qword_1403A5D48 = 167772165LL;
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
  return CiInitialize(v0, v1, &SeCiCallbacks, SeCiPrivateApis);
}
