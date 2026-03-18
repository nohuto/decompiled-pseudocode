/*
 * XREFs of ??1CMutex@@QEAA@XZ @ 0x1C00BFFA0
 * Callers:
 *     ??_GCMutex@@QEAAPEAXI@Z @ 0x1C00C0058 (--_GCMutex@@QEAAPEAXI@Z.c)
 *     ??_GCOPM@@QEAAPEAXI@Z @ 0x1C00C5154 (--_GCOPM@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMutex::~CMutex(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4D504F47u);
    *this = 0LL;
  }
}
