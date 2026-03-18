/*
 * XREFs of ?Unlock@CMutex@@QEAAXXZ @ 0x1C00D5240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMutex::Unlock(struct _KMUTANT **this)
{
  struct _KMUTANT *v1; // rcx

  v1 = *this;
  if ( v1 )
    KeReleaseMutex(v1, 0);
}
