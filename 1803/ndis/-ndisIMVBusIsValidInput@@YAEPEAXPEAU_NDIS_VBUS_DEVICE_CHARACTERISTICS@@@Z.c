/*
 * XREFs of ?ndisIMVBusIsValidInput@@YAEPEAXPEAU_NDIS_VBUS_DEVICE_CHARACTERISTICS@@@Z @ 0x1C0050CC0
 * Callers:
 *     NdisIMVBusDeviceAdd @ 0x1C00E57F0 (NdisIMVBusDeviceAdd.c)
 *     NdisIMVBusDeviceRemove @ 0x1C00E5890 (NdisIMVBusDeviceRemove.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIMVBusIsValidInput(_BYTE *a1, struct _NDIS_VBUS_DEVICE_CHARACTERISTICS *a2)
{
  bool result; // al

  result = 0;
  if ( a1
    && *a1 == 2
    && a2
    && *(_BYTE *)a2 == 0x80
    && *((_WORD *)a2 + 1) >= 0x58u
    && *((_BYTE *)a2 + 1) >= 2u
    && !*((_DWORD *)a2 + 1) )
  {
    if ( *((_QWORD *)a2 + 2) )
      return *((_QWORD *)a2 + 4) != 0LL;
  }
  return result;
}
