/*
 * XREFs of IopRemoveLegacyDeviceNode @ 0x14055B7D0
 * Callers:
 *     IopLegacyResourceAllocation @ 0x14055B6A0 (IopLegacyResourceAllocation.c)
 * Callees:
 *     IoDeleteDevice @ 0x1400FAC00 (IoDeleteDevice.c)
 *     PipClearDevNodeFlags @ 0x1405537C4 (PipClearDevNodeFlags.c)
 *     IopDestroyDeviceNode @ 0x1405887A0 (IopDestroyDeviceNode.c)
 */

void __fastcall IopRemoveLegacyDeviceNode(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  struct _DEVICE_OBJECT *v7; // rdi

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x1000) != 0 )
      return;
  }
  else
  {
    if ( !a2[54] )
      return;
    a2[54] = 0LL;
    v4 = (_QWORD *)a2[1];
    if ( v4 )
      *v4 = *a2;
    if ( *a2 )
      *(_QWORD *)(*a2 + 8LL) = a2[1];
    if ( (_QWORD *)IopLegacyDeviceNode == a2 )
      IopLegacyDeviceNode = *a2;
  }
  v5 = a2[66];
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD **)(v5 + 536);
      if ( v6 == a2 )
        break;
      v5 = *(_QWORD *)(v5 + 536);
      if ( !v6 )
        goto LABEL_16;
    }
    *(_QWORD *)(v5 + 536) = a2[67];
  }
LABEL_16:
  a2[3] = 0LL;
  a2[1] = 0LL;
  *a2 = 0LL;
  a2[2] = 0LL;
  v7 = (struct _DEVICE_OBJECT *)a2[4];
  PipClearDevNodeFlags((__int64)a2, 0x20000);
  IopDestroyDeviceNode(a2);
  if ( !a1 )
  {
    v7->DriverObject = PnpDriverObject;
    IoDeleteDevice(v7);
  }
}
