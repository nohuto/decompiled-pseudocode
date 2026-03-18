/*
 * XREFs of ??1CMutex@@QEAA@XZ @ 0x1C006D970
 * Callers:
 *     ??_GCOPM@@QEAAPEAXI@Z @ 0x1C006D828 (--_GCOPM@@QEAAPEAXI@Z.c)
 *     ??_GCMutex@@QEAAPEAXI@Z @ 0x1C00E8650 (--_GCMutex@@QEAAPEAXI@Z.c)
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
