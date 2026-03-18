/*
 * XREFs of ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C00C386C
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C00C4240 (MultiUserNtGreCleanup.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C00D6564 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 */

void __fastcall GreCleanupRemoteAdapterContext(struct tagREMOTE_CONTEXT *a1)
{
  if ( qword_1C01A1760 )
  {
    if ( dword_1C01A1750 )
      ObfDereferenceObject(qword_1C01A1760);
    qword_1C01A1760 = 0LL;
  }
  memset(word_1C01A1768, 0, 0x20uLL);
  qword_1C01A1754 = 0LL;
}
