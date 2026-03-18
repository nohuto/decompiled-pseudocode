/*
 * XREFs of PnpGetSystemPdoList @ 0x1405E3298
 * Callers:
 *     sub_1405E31F0 @ 0x1405E31F0 (sub_1405E31F0.c)
 * Callees:
 *     PipForDeviceNodeSubtree @ 0x1405CA500 (PipForDeviceNodeSubtree.c)
 *     PiPnpFreePdoDeviceList @ 0x1405E3328 (PiPnpFreePdoDeviceList.c)
 */

__int64 __fastcall PnpGetSystemPdoList(__int64 a1, _QWORD *a2)
{
  void *v2; // rbx
  __int64 v4; // rcx
  int v5; // esi
  int v7; // [rsp+20h] [rbp-18h] BYREF
  void *v8; // [rsp+28h] [rbp-10h]

  v2 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  if ( a1 )
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v4 = IopRootDeviceNode;
  v8 = 0LL;
  v7 = 0;
  v5 = PipForDeviceNodeSubtree(v4, (__int64)PiPnpPdoDeviceListEnumCallback, (__int64)&v7);
  if ( v5 < 0 )
  {
    v2 = v8;
  }
  else
  {
    *a2 = v8;
    v8 = 0LL;
  }
  PiPnpFreePdoDeviceList(v2);
  return (unsigned int)v5;
}
