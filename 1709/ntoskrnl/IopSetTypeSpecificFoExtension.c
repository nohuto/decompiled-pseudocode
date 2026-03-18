/*
 * XREFs of IopSetTypeSpecificFoExtension @ 0x140024FC4
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x140024360 (IoSetOplockPrivateFoExt.c)
 *     IopGetSetSpecificExtension @ 0x140024EE4 (IopGetSetSpecificExtension.c)
 *     IoSetOplockKeyContext @ 0x14014862C (IoSetOplockKeyContext.c)
 *     IopSymlinkSetFoExtension @ 0x1405E0514 (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x1406B622C (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x1406B8098 (IopSetFileMemoryPartitionInformation.c)
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
