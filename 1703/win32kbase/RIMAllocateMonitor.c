/*
 * XREFs of RIMAllocateMonitor @ 0x1C000774C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000A11C (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01098C8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

__int64 __fastcall RIMAllocateMonitor(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  v2 = Win32AllocPoolZInit(0x220uLL);
  *(_QWORD *)(a1 + 288) = v2;
  if ( v2 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 288) + 40LL) = Win32AllocPoolZInit(0x88uLL);
    v3 = *(_QWORD *)(a1 + 288);
    if ( !*(_QWORD *)(v3 + 40) )
    {
      Win32FreePool(v3);
      *(_QWORD *)(a1 + 288) = 0LL;
    }
  }
  return *(_QWORD *)(a1 + 288);
}
