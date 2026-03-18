/*
 * XREFs of RtlCmDecodeMemIoResource @ 0x140035830
 * Callers:
 *     PnpCmResourcesToIoResources @ 0x1405B2B24 (PnpCmResourcesToIoResources.c)
 *     PnpFilterResourceRequirementsList @ 0x1405B3B10 (PnpFilterResourceRequirementsList.c)
 *     PnpIsRangeWithin @ 0x1405B63A4 (PnpIsRangeWithin.c)
 *     IopGenericUnpackResource @ 0x140696730 (IopGenericUnpackResource.c)
 *     PnprAddMemoryResources @ 0x1406A16B8 (PnprAddMemoryResources.c)
 * Callees:
 *     <none>
 */

ULONGLONG __stdcall RtlCmDecodeMemIoResource(PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor, PULONGLONG Start)
{
  ULONGLONG Length; // r8
  USHORT Flags; // ax

  Length = 0LL;
  if ( ((Descriptor->Type - 1) & 0xFD) != 0 )
  {
    Flags = Descriptor->Flags;
    if ( (Flags & 0x200) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Generic.Length << 8;
    }
    else if ( (Flags & 0x400) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Generic.Length << 16;
    }
    else if ( (Flags & 0x800) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Generic.Length << 32;
    }
  }
  else
  {
    Length = Descriptor->u.Generic.Length;
  }
  if ( Start )
    *Start = Descriptor->u.Generic.Start.QuadPart;
  return Length;
}
