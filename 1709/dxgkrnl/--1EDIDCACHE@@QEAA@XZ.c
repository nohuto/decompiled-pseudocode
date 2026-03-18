/*
 * XREFs of ??1EDIDCACHE@@QEAA@XZ @ 0x1C01AE748
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C01A932C (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C0007DC4 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 */

void __fastcall EDIDCACHE::~EDIDCACHE(EDIDCACHE *this)
{
  DXGFASTMUTEX *v2; // rcx

  v2 = (DXGFASTMUTEX *)*((_QWORD *)this + 76);
  if ( v2 )
  {
    DXGFASTMUTEX::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 76) = 0LL;
  }
}
