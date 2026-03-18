/*
 * XREFs of IopAllocateUnicodeString @ 0x1405F5268
 * Callers:
 *     IopBuildGlobalSymbolicLinkString @ 0x1405F5140 (IopBuildGlobalSymbolicLinkString.c)
 *     PnpConcatenateUnicodeStrings @ 0x1405F5438 (PnpConcatenateUnicodeStrings.c)
 *     PiDeferSetInterfaceState @ 0x1405F5D60 (PiDeferSetInterfaceState.c)
 *     PiCreateRedirectedStateRoot @ 0x140648D7C (PiCreateRedirectedStateRoot.c)
 *     IoGetDeviceDirectory @ 0x140724670 (IoGetDeviceDirectory.c)
 *     PiGetDriverStateSubDirectory @ 0x14072516C (PiGetDriverStateSubDirectory.c)
 *     IoRequestDeviceRemovalForReset @ 0x1407260B0 (IoRequestDeviceRemovalForReset.c)
 * Callees:
 *     RtlUShortAdd @ 0x1400B8CC0 (RtlUShortAdd.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopAllocateUnicodeString(__int64 a1, USHORT a2)
{
  _WORD *v2; // rdi
  NTSTATUS v4; // ebx
  PVOID PoolWithTag; // rax

  v2 = (_WORD *)(a1 + 2);
  *(_WORD *)a1 = 0;
  v4 = RtlUShortAdd(a2, 2u, (USHORT *)(a1 + 2));
  if ( v4 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)*v2, 0x75737050u);
    *(_QWORD *)(a1 + 8) = PoolWithTag;
    if ( !PoolWithTag )
    {
      *v2 = 0;
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}
