/*
 * XREFs of ??_GDXGDIAGNOSTICSWITHMUTEX@@QEAAPEAXI@Z @ 0x1C003A5C8
 * Callers:
 *     ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C01ABB34 (--1OUTPUTDUPL_MGR@@QEAA@XZ.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C000BA00 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 */

DXGDIAGNOSTICSWITHMUTEX *__fastcall DXGDIAGNOSTICSWITHMUTEX::`scalar deleting destructor'(
        DXGDIAGNOSTICSWITHMUTEX *this)
{
  DXGFASTMUTEX *v2; // rcx
  void *v3; // rcx

  v2 = (DXGFASTMUTEX *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    DXGFASTMUTEX::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 4);
  if ( v3 )
    operator delete[](v3);
  operator delete(this);
  return this;
}
