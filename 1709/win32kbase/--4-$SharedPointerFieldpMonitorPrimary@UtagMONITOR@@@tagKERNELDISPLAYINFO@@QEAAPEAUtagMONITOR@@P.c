/*
 * XREFs of ??4?$SharedPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1C0061F88
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0061814 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     DestroyMonitor @ 0x1C0071210 (DestroyMonitor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagKERNELDISPLAYINFO::SharedPointerFieldpMonitorPrimary<tagMONITOR>::operator=(
        _QWORD *a1,
        __int64 a2)
{
  if ( a2 )
    *(_QWORD *)(*(a1 - 11) + 8LL) = *(_QWORD *)(a2 + 48);
  else
    *(_QWORD *)(*(a1 - 11) + 8LL) = 0LL;
  *a1 = a2;
  return a2;
}
