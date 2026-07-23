/*
 * XREFs of PopBcdClearPendingResume @ 0x140589704
 * Callers:
 *     PopFreeHiberContext @ 0x140577660 (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x1405A913C (PoInitHiberServices.c)
 * Callees:
 *     BcdFlushStore @ 0x140578E8C (BcdFlushStore.c)
 *     BiDeleteElement @ 0x14058A31C (BiDeleteElement.c)
 *     BcdOpenObject @ 0x14058B110 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14058B28C (BcdCloseObject.c)
 */

NTSTATUS __fastcall PopBcdClearPendingResume(HANDLE BcdStoreHandle)
{
  NTSTATUS result; // eax
  int v3; // ebx
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp+10h] BYREF

  result = BcdOpenObject(BcdStoreHandle, &GUID_WINDOWS_BOOTMGR, &BcdObjectHandle);
  if ( result >= 0 )
  {
    v3 = BiDeleteElement(BcdObjectHandle, 637534213LL);
    if ( v3 >= 0 )
    {
      v3 = BiDeleteElement(BcdObjectHandle, 637534245LL);
      if ( v3 >= 0 )
        BcdFlushStore(BcdStoreHandle);
    }
    BcdCloseObject(BcdObjectHandle);
    return v3;
  }
  return result;
}
