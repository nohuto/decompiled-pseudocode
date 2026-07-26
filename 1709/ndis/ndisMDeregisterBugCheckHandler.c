/*
 * XREFs of ndisMDeregisterBugCheckHandler @ 0x1C00AB9AC
 * Callers:
 *     ndisMHaltMiniport @ 0x1C00AB944 (ndisMHaltMiniport.c)
 *     NdisMDeregisterAdapterShutdownHandler @ 0x1C00E9730 (NdisMDeregisterAdapterShutdownHandler.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 *     ndisPmHaltMiniport @ 0x1C010DDEC (ndisPmHaltMiniport.c)
 *     ndisPmInitializeMiniport @ 0x1C010DF4C (ndisPmInitializeMiniport.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisMDeregisterBugCheckHandler(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 120);
  if ( (v1 & 0x2000) != 0 )
  {
    *(_DWORD *)(a1 + 120) = v1 & 0xFFFFDFFF;
    LOBYTE(v1) = KeDeregisterBugCheckCallback((PKBUGCHECK_CALLBACK_RECORD)(a1 + 2080));
  }
  return v1;
}
