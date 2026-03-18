/*
 * XREFs of IopAllocateUnicodeString @ 0x140556754
 * Callers:
 *     PiDeferSetInterfaceState @ 0x140555FF8 (PiDeferSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1405565F0 (IopBuildGlobalSymbolicLinkString.c)
 *     PnpConcatenateUnicodeStrings @ 0x140556718 (PnpConcatenateUnicodeStrings.c)
 *     IoRequestDeviceRemovalForReset @ 0x1406C0670 (IoRequestDeviceRemovalForReset.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopAllocateUnicodeString(__int64 a1, unsigned __int16 a2)
{
  unsigned int v2; // ebx
  PVOID PoolWithTag; // rax

  v2 = 0;
  *(_WORD *)a1 = 0;
  if ( (unsigned __int16)(a2 + 2) < a2 )
  {
    v2 = -1073741675;
    *(_WORD *)(a1 + 2) = -1;
  }
  else
  {
    *(_WORD *)(a1 + 2) = a2 + 2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(a2 + 2), 0x75737050u);
    *(_QWORD *)(a1 + 8) = PoolWithTag;
    if ( !PoolWithTag )
    {
      *(_WORD *)(a1 + 2) = 0;
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
