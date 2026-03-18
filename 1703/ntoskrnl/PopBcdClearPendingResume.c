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

__int64 __fastcall PopBcdClearPendingResume(__int64 a1)
{
  __int64 result; // rax
  int v3; // ebx
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  result = BcdOpenObject(a1, &GUID_WINDOWS_BOOTMGR, &Handle);
  if ( (int)result >= 0 )
  {
    v3 = BiDeleteElement(Handle, 637534213LL);
    if ( v3 >= 0 )
    {
      v3 = BiDeleteElement(Handle, 637534245LL);
      if ( v3 >= 0 )
        BcdFlushStore(a1);
    }
    BcdCloseObject(Handle);
    return (unsigned int)v3;
  }
  return result;
}
