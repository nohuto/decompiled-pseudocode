/*
 * XREFs of KeyboardClassSetWmiDataBlock @ 0x1C000E650
 * Callers:
 *     <none>
 * Callees:
 *     KeyboardToggleWaitWake @ 0x1C00051F4 (KeyboardToggleWaitWake.c)
 */

NTSTATUS __fastcall KeyboardClassSetWmiDataBlock(struct _DEVICE_OBJECT *a1, IRP *a2, int a3, int a4, int a5, char *a6)
{
  ULONG v6; // ebx
  __int64 DeviceExtension; // rcx
  NTSTATUS v10; // eax

  v6 = 0;
  DeviceExtension = (__int64)a1->DeviceExtension;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v6 = 1;
      if ( a5 )
      {
        if ( a4 )
          v10 = -1073741808;
        else
          v10 = KeyboardToggleWaitWake(DeviceExtension, *a6);
      }
      else
      {
        v10 = -1073741789;
      }
    }
    else
    {
      v10 = -1073741163;
    }
  }
  else
  {
    v10 = -1073741114;
  }
  return WmiCompleteRequest(a1, a2, v10, v6, 0);
}
