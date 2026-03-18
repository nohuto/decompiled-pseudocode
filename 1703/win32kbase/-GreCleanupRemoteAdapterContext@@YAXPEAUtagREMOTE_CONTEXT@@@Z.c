/*
 * XREFs of ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C0068A88
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C0067BC4 (MultiUserNtGreCleanup.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C00FA864 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     memset @ 0x1C00A2500 (memset.c)
 */

void __fastcall GreCleanupRemoteAdapterContext(struct tagREMOTE_CONTEXT *a1)
{
  if ( qword_1C018C350 )
  {
    if ( dword_1C018C340 )
      ObfDereferenceObject(qword_1C018C350);
    qword_1C018C350 = 0LL;
  }
  memset(word_1C018C358, 0, 0x20uLL);
  qword_1C018C344 = 0LL;
}
