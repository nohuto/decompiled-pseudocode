/*
 * XREFs of ??4?$SharedPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1C007B150
 * Callers:
 *     ?UpdateUserScreen@@YAJH@Z @ 0x1C0070960 (-UpdateUserScreen@@YAJH@Z.c)
 *     DestroyMonitor @ 0x1C0078C20 (DestroyMonitor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagKERNELDISPLAYINFO::SharedPointerFieldpMonitorFirst<tagMONITOR>::operator=(_QWORD *a1, __int64 a2)
{
  if ( a2 )
    *(_QWORD *)(*(a1 - 12) + 16LL) = *(_QWORD *)(a2 + 48);
  else
    *(_QWORD *)(*(a1 - 12) + 16LL) = 0LL;
  *a1 = a2;
  return a2;
}
