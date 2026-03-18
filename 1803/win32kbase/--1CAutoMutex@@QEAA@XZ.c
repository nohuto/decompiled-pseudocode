/*
 * XREFs of ??1CAutoMutex@@QEAA@XZ @ 0x1C0062E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAutoMutex::~CAutoMutex(struct _KMUTANT ***this)
{
  struct _KMUTANT *v2; // rcx

  v2 = **this;
  if ( v2 )
    KeReleaseMutex(v2, 0);
  *this = 0LL;
}
