/*
 * XREFs of ndisMDeregisterBugCheckHandler @ 0x1C00B2ED8
 * Callers:
 *     ndisMHaltMiniport @ 0x1C00B2E4C (ndisMHaltMiniport.c)
 *     NdisMDeregisterAdapterShutdownHandler @ 0x1C00EBC60 (NdisMDeregisterAdapterShutdownHandler.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 *     ndisPmHaltMiniport @ 0x1C010FD6C (ndisPmHaltMiniport.c)
 *     ndisPmInitializeMiniport @ 0x1C010FEDC (ndisPmInitializeMiniport.c)
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
