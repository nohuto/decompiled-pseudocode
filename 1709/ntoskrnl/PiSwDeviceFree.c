/*
 * XREFs of PiSwDeviceFree @ 0x1406CDAD4
 * Callers:
 *     PiSwDeviceDereference @ 0x1405F2D74 (PiSwDeviceDereference.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x140526CC4 (PnpFreeDevPropertyArray.c)
 *     PiSwFreeInterfaceList @ 0x1405BB1F4 (PiSwFreeInterfaceList.c)
 *     PiSwInstanceInfoFree @ 0x1406CDD1C (PiSwInstanceInfoFree.c)
 *     PiSwPdoAssociationFree @ 0x1406CE22C (PiSwPdoAssociationFree.c)
 *     PiSwPnPInfoFree @ 0x1406CE260 (PiSwPnPInfoFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406CE694 (PiSwQueuedCreateInfoFree.c)
 */

void __fastcall PiSwDeviceFree(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rdx
  _QWORD **v6; // rbx
  _QWORD *v7; // rcx
  _QWORD *v8; // rax

  PiSwInstanceInfoFree(a1 + 8);
  PiSwPnPInfoFree(a1 + 24);
  v2 = *(void **)(a1 + 80);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x57706E50u);
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  v3 = *(void **)(a1 + 88);
  if ( v3 )
  {
    PiSwQueuedCreateInfoFree(v3);
    *(_QWORD *)(a1 + 88) = 0LL;
  }
  v4 = *(void **)(a1 + 152);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x57706E50u);
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  v5 = *(void **)(a1 + 168);
  if ( v5 )
  {
    PnpFreeDevPropertyArray(*(_DWORD *)(a1 + 176), v5, 0x57706E50u);
    *(_QWORD *)(a1 + 168) = 0LL;
    *(_DWORD *)(a1 + 176) = 0;
  }
  PiSwFreeInterfaceList((_QWORD **)(a1 + 184));
  v6 = (_QWORD **)(a1 + 128);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      break;
    if ( (_QWORD **)v7[1] != v6 || (v8 = (_QWORD *)*v7, *(_QWORD **)(*v7 + 8LL) != v7) )
      __fastfail(3u);
    *v6 = v8;
    v8[1] = v6;
    PiSwPdoAssociationFree(v7);
  }
}
