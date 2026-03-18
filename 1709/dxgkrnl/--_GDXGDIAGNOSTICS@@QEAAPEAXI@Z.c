/*
 * XREFs of ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C0027F0C
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C0034B6C (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C01A932C (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

DXGDIAGNOSTICS *__fastcall DXGDIAGNOSTICS::`scalar deleting destructor'(DXGDIAGNOSTICS *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
    operator delete(v2);
  operator delete(this);
  return this;
}
