/*
 * XREFs of IopSetTypeSpecificFoExtension @ 0x140069DD4
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x140068044 (IoSetOplockPrivateFoExt.c)
 *     IopGetSetSpecificExtension @ 0x1400694F0 (IopGetSetSpecificExtension.c)
 *     IoSetOplockKeyContext @ 0x14015AF04 (IoSetOplockKeyContext.c)
 *     IopSymlinkSetFoExtension @ 0x14057FB48 (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x14071AF1C (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14071CDA4 (IopSetFileMemoryPartitionInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopSetTypeSpecificFoExtension(__int64 a1, unsigned int a2, signed __int64 a3)
{
  if ( a2 > 8 )
    return 3221225485LL;
  else
    return _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8LL * (int)a2 + 8), a3, 0LL) != 0
         ? 0xC0000001
         : 0;
}
