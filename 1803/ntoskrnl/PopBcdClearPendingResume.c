/*
 * XREFs of PopBcdClearPendingResume @ 0x1406064FC
 * Callers:
 *     PopFreeHiberContext @ 0x1405EF808 (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x140624CC8 (PoInitHiberServices.c)
 * Callees:
 *     BcdFlushStore @ 0x1405EF220 (BcdFlushStore.c)
 *     BiDeleteElement @ 0x140607AF4 (BiDeleteElement.c)
 *     BcdOpenObject @ 0x140608384 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140608500 (BcdCloseObject.c)
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
