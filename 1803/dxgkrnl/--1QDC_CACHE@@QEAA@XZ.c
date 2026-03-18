/*
 * XREFs of ??1QDC_CACHE@@QEAA@XZ @ 0x1C01C4464
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C019C618 (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C001A030 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 */

void __fastcall QDC_CACHE::~QDC_CACHE(QDC_CACHE *this)
{
  DXGFASTMUTEX *v2; // rcx
  void **v3; // rbx
  __int64 v4; // rdi

  v2 = (DXGFASTMUTEX *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    DXGFASTMUTEX::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
  v3 = (void **)((char *)this + 32);
  v4 = 18LL;
  do
  {
    if ( *v3 )
    {
      operator delete[](*v3);
      *v3 = 0LL;
    }
    v3 += 4;
    --v4;
  }
  while ( v4 );
}
