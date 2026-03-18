/*
 * XREFs of IopAllocateUnicodeString @ 0x1404E48CC
 * Callers:
 *     PiDeferSetInterfaceState @ 0x1404572B4 (PiDeferSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1404E47B4 (IopBuildGlobalSymbolicLinkString.c)
 *     PnpConcatenateUnicodeStrings @ 0x140581138 (PnpConcatenateUnicodeStrings.c)
 *     IoRequestDeviceRemovalForReset @ 0x1406948A0 (IoRequestDeviceRemovalForReset.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
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
