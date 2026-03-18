/*
 * XREFs of ??_GDXGPROCESS@@AEAAPEAXI@Z @ 0x1C001D7D8
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z @ 0x1C00F0940 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z.c)
 * Callees:
 *     ??1DXGPROCESS@@AEAA@XZ @ 0x1C0088F9C (--1DXGPROCESS@@AEAA@XZ.c)
 */

DXGPROCESS *__fastcall DXGPROCESS::`scalar deleting destructor'(DXGPROCESS *P)
{
  DXGPROCESS::~DXGPROCESS(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
