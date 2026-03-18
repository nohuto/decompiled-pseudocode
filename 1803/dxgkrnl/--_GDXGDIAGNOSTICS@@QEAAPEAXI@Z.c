/*
 * XREFs of ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C003279C
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C004385C (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C019C618 (--1DXGGLOBAL@@AEAA@XZ.c)
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C019E420 (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DXGDIAGNOSTICS::`scalar deleting destructor'(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
  return P;
}
