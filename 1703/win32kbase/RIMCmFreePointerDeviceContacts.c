/*
 * XREFs of RIMCmFreePointerDeviceContacts @ 0x1C0009650
 * Callers:
 *     RIMCmAllocPointerDeviceContacts @ 0x1C00089D4 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMFreePointerDevice @ 0x1C0009450 (RIMFreePointerDevice.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01098C8 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C010B2C0 (RIMIDEResetPointerDeviceMaxCount.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

__int64 __fastcall RIMCmFreePointerDeviceContacts(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1560);
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)(a1 + 1560) = 0LL;
    *(_DWORD *)(a1 + 1568) = 0;
  }
  v3 = *(_QWORD *)(a1 + 1536);
  if ( v3 )
  {
    Win32FreePool(v3);
    *(_QWORD *)(a1 + 1536) = 0LL;
  }
  result = a1 + 1544;
  *(_QWORD *)(a1 + 1552) = a1 + 1544;
  *(_QWORD *)(a1 + 1544) = a1 + 1544;
  return result;
}
