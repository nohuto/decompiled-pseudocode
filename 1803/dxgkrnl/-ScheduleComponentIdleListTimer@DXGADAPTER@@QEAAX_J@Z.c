/*
 * XREFs of ?ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z @ 0x1C00268A0
 * Callers:
 *     ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x1C0026270 (-ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C0026EF0 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::ScheduleComponentIdleListTimer(DXGADAPTER *this, __int64 a2)
{
  if ( !*((_BYTE *)this + 2933) )
  {
    *((_BYTE *)this + 2933) = 1;
    KeSetTimer((PKTIMER)((char *)this + 3048), (LARGE_INTEGER)-a2, (PKDPC)((char *)this + 3112));
  }
}
