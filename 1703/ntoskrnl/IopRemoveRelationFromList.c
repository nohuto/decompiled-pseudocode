/*
 * XREFs of IopRemoveRelationFromList @ 0x1406A7774
 * Callers:
 *     PipRemoveDevicesInRelationList @ 0x14056D420 (PipRemoveDevicesInRelationList.c)
 *     PnpProcessRelation @ 0x14056F60C (PnpProcessRelation.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x14056F9D0 (PipDeviceObjectListIndexOf.c)
 */

__int64 __fastcall IopRemoveRelationFromList(__int64 *a1, __int64 a2)
{
  unsigned int v2; // eax
  _QWORD *v3; // r11
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = PipDeviceObjectListIndexOf(*a1, a2, *(_DWORD *)*a1, &v5);
  if ( v2 == -1 )
    return 3221225486LL;
  else
    return PipDeviceObjectListRemove(*v3, v2);
}
