/*
 * XREFs of ??_GDXGDIAGNOSTICSWITHMUTEX@@QEAAPEAXI@Z @ 0x1C00359E8
 * Callers:
 *     ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C01C7F74 (--1OUTPUTDUPL_MGR@@QEAA@XZ.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C001A030 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall DXGDIAGNOSTICSWITHMUTEX::`scalar deleting destructor'(_QWORD *P)
{
  DXGFASTMUTEX *v2; // rcx
  void *v3; // rcx

  v2 = (DXGFASTMUTEX *)P[5];
  if ( v2 )
  {
    DXGFASTMUTEX::`scalar deleting destructor'(v2);
    P[5] = 0LL;
  }
  v3 = (void *)P[4];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  ExFreePoolWithTag(P, 0);
  return P;
}
