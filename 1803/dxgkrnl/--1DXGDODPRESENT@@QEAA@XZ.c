/*
 * XREFs of ??1DXGDODPRESENT@@QEAA@XZ @ 0x1C01D4358
 * Callers:
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1C0027D68 (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x1C0034878 (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGDODPRESENT::~DXGDODPRESENT(DXGDODPRESENT *this)
{
  unsigned int i; // ebx

  for ( i = 0; i < *(_DWORD *)this; ++i )
    BLTQUEUE::`scalar deleting destructor'((BLTQUEUE *)(*((_QWORD *)this + 1) + 2704LL * i), 0);
}
