/*
 * XREFs of ??1QDC_CACHE@@QEAA@XZ @ 0x1C01C2DA4
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C01A932C (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C0007DC4 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 */

void __fastcall QDC_CACHE::~QDC_CACHE(QDC_CACHE *this)
{
  DXGFASTMUTEX *v2; // rcx
  PVOID *v3; // rbx
  __int64 v4; // rdi

  v2 = (DXGFASTMUTEX *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    DXGFASTMUTEX::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
  v3 = (PVOID *)((char *)this + 32);
  v4 = 18LL;
  do
  {
    if ( *v3 )
    {
      ExFreePoolWithTag(*v3, 0);
      *v3 = 0LL;
    }
    v3 += 4;
    --v4;
  }
  while ( v4 );
}
