/*
 * XREFs of ??1BLTQUEUE@@QEAA@XZ @ 0x1C01CDD14
 * Callers:
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x1C0029790 (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0007C94 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0008A54 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_EBLTENTRY@@QEAAPEAXI@Z @ 0x1C002B8D0 (--_EBLTENTRY@@QEAAPEAXI@Z.c)
 *     ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x1C01CDDB4 (-Cleanup@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::~BLTQUEUE(BLTQUEUE *this)
{
  BLTENTRY *v2; // rcx

  BLTQUEUE::Cleanup(this);
  v2 = (BLTENTRY *)*((_QWORD *)this + 318);
  if ( v2 )
    BLTENTRY::`vector deleting destructor'(v2);
  `vector destructor iterator'((char *)this + 864, 560LL, 3LL, (void (__fastcall *)(char *))BLTENTRY::~BLTENTRY);
  DXGFASTMUTEX::~DXGFASTMUTEX((BLTQUEUE *)((char *)this + 632));
}
