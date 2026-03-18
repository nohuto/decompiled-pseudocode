/*
 * XREFs of ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C0115580
 * Callers:
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00914E0 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C009BE0C (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 * Callees:
 *     ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x1C00D5B90 (-Destroy@UmfdTls@@CAXPEAV1@@Z.c)
 *     ?Create@UmfdUMBuffer@@SAPEAV1@XZ @ 0x1C01155D4 (-Create@UmfdUMBuffer@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

struct UmfdUMBuffer **UmfdTls::Create(void)
{
  struct UmfdUMBuffer **v0; // rax
  struct UmfdUMBuffer **v1; // rbx
  struct UmfdUMBuffer *v2; // rax

  v0 = (struct UmfdUMBuffer **)EngAllocMem(0, 0x30u, 0x6C744446u);
  v1 = v0;
  if ( !v0 )
    return v1;
  memset(v0, 0, 0x30uLL);
  *((_DWORD *)v1 + 2) = -1;
  v2 = UmfdUMBuffer::Create();
  *v1 = v2;
  if ( v2 )
    return v1;
  UmfdTls::Destroy(v1);
  return 0LL;
}
