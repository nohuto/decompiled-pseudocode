/*
 * XREFs of ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C00980AC
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C0074DF0 (MultiUserNtGreCleanup.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C00FAAA0 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     memset @ 0x1C00ABB80 (memset.c)
 */

void __fastcall GreCleanupRemoteAdapterContext(struct tagREMOTE_CONTEXT *a1)
{
  if ( Object )
  {
    if ( dword_1C0191070 )
      ObfDereferenceObject(Object);
    Object = 0LL;
  }
  memset(word_1C0191088, 0, 0x20uLL);
  qword_1C0191074 = 0LL;
}
