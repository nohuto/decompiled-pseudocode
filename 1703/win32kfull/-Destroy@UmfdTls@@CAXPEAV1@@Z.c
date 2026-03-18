/*
 * XREFs of ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x1C00D5B90
 * Callers:
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00D5ABC (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C0115580 (-Create@UmfdTls@@CAPEAV1@XZ.c)
 * Callees:
 *     ?Destroy@UmfdUMBuffer@@SAXPEAV1@@Z @ 0x1C00D5BBC (-Destroy@UmfdUMBuffer@@SAXPEAV1@@Z.c)
 */

void __fastcall UmfdTls::Destroy(struct UmfdUMBuffer **a1)
{
  struct UmfdUMBuffer *v2; // rcx

  v2 = *a1;
  if ( v2 )
    UmfdUMBuffer::Destroy(v2);
  EngFreeMem(a1);
}
