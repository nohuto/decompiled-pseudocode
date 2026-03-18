/*
 * XREFs of ?UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ @ 0x18002AC10
 * Callers:
 *     ??1CRgnGeometry@@MEAA@XZ @ 0x18002ADC0 (--1CRgnGeometry@@MEAA@XZ.c)
 *     ?ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z @ 0x18002ADE8 (-ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

void __fastcall CRgnGeometry::UnRegisterNotifiers(CRgnGeometry *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 18);
  if ( v2 )
  {
    operator delete(v2);
    *((_QWORD *)this + 18) = 0LL;
    *((_DWORD *)this + 34) = 0;
  }
}
