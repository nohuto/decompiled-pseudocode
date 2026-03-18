/*
 * XREFs of PiSwDeviceFree @ 0x1405C41F8
 * Callers:
 *     PiSwDeviceDereference @ 0x1405C53A0 (PiSwDeviceDereference.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x14050AC0C (PnpFreeDevPropertyArray.c)
 *     PiSwPdoAssociationFree @ 0x1405C3EF0 (PiSwPdoAssociationFree.c)
 *     PiSwPnPInfoFree @ 0x1405C4288 (PiSwPnPInfoFree.c)
 *     PiSwInstanceInfoFree @ 0x1405C42F4 (PiSwInstanceInfoFree.c)
 *     PiSwFreeInterfaceList @ 0x1405C5D5C (PiSwFreeInterfaceList.c)
 *     PiSwQueuedCreateInfoFree @ 0x140735684 (PiSwQueuedCreateInfoFree.c)
 */

void __fastcall PiSwDeviceFree(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  char *v5; // rdx
  PVOID **v6; // rbx
  PVOID *v7; // rcx
  PVOID *v8; // rax

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
  v5 = *(char **)(a1 + 168);
  if ( v5 )
  {
    PnpFreeDevPropertyArray(*(_DWORD *)(a1 + 176), v5, 0x57706E50u);
    *(_QWORD *)(a1 + 168) = 0LL;
    *(_DWORD *)(a1 + 176) = 0;
  }
  PiSwFreeInterfaceList(a1 + 184);
  v6 = (PVOID **)(a1 + 128);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (PVOID *)v6 )
      break;
    if ( v7[1] != v6 || (v8 = (PVOID *)*v7, *((PVOID **)*v7 + 1) != v7) )
      __fastfail(3u);
    *v6 = v8;
    v8[1] = v6;
    PiSwPdoAssociationFree(v7);
  }
}
