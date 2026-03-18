/*
 * XREFs of ??1EDIDCACHE@@QEAA@XZ @ 0x1C01A86FC
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C019C618 (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C001A030 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
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
