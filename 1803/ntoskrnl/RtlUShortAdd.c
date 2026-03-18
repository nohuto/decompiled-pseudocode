/*
 * XREFs of RtlUShortAdd @ 0x1400B8CC0
 * Callers:
 *     FsRtlValidateReparsePointBuffer @ 0x1400B8AB0 (FsRtlValidateReparsePointBuffer.c)
 *     IopAllocateUnicodeString @ 0x1405F5268 (IopAllocateUnicodeString.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140779B40 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlAddResourceAttributeAce @ 0x140783F00 (RtlAddResourceAttributeAce.c)
 *     AslPathWildcardFindFirst @ 0x1407DA2FC (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1407DB5F8 (AslpPathWildcardAllocMatchNode.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1407F0408 (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUShortAdd(USHORT usAugend, USHORT usAddend, USHORT *pusResult)
{
  USHORT v3; // ax
  USHORT v4; // dx

  v3 = usAddend + usAugend;
  if ( (unsigned __int16)(usAddend + usAugend) < usAugend )
    v4 = -1;
  else
    v4 = usAddend + usAugend;
  *pusResult = v4;
  return v3 < usAugend ? 0xC0000095 : 0;
}
