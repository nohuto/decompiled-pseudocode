/*
 * XREFs of RIMIDEFreeInjectedInfo @ 0x1C000E92C
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C000E7F0 (RIMFreeSpecificDevWorker.c)
 *     RIMIDECreateHIDDesc @ 0x1C0108550 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall RIMIDEFreeInjectedInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 376);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 72);
    if ( v5 )
      Win32FreePool(v5, a2, a3);
    result = Win32FreePool(*(_QWORD *)(a1 + 376), a2, a3);
    *(_QWORD *)(a1 + 376) = 0LL;
  }
  return result;
}
