/*
 * XREFs of ??_EDXGPROCESSVMWP@@UEAAPEAXI@Z @ 0x1C0034410
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGPROCESSVMWP@@UEAA@XZ @ 0x1C0034350 (--1DXGPROCESSVMWP@@UEAA@XZ.c)
 */

DXGPROCESSVMWP *__fastcall DXGPROCESSVMWP::`vector deleting destructor'(DXGPROCESSVMWP *P, char a2)
{
  DXGPROCESSVMWP::~DXGPROCESSVMWP(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
