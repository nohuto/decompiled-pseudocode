/*
 * XREFs of RIMCmFreePointerDeviceContacts @ 0x1C000B740
 * Callers:
 *     RIMFreePointerDevice @ 0x1C000B580 (RIMFreePointerDevice.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C00904D0 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0108964 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C010A390 (RIMIDEResetPointerDeviceMaxCount.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall RIMCmFreePointerDeviceContacts(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 896);
  if ( v4 )
  {
    Win32FreePool(v4, a2, a3);
    *(_QWORD *)(a1 + 896) = 0LL;
    *(_DWORD *)(a1 + 904) = 0;
  }
  v5 = *(_QWORD *)(a1 + 872);
  if ( v5 )
  {
    Win32FreePool(v5, a2, a3);
    *(_QWORD *)(a1 + 872) = 0LL;
  }
  result = a1 + 880;
  *(_QWORD *)(a1 + 888) = a1 + 880;
  *(_QWORD *)(a1 + 880) = a1 + 880;
  return result;
}
