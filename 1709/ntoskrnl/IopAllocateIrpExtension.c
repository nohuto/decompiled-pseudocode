/*
 * XREFs of IopAllocateIrpExtension @ 0x14010744C
 * Callers:
 *     IopSetDiskIoAttributionExtension @ 0x140008E14 (IopSetDiskIoAttributionExtension.c)
 *     IoPropagateIrpExtensionEx @ 0x1401072F0 (IoPropagateIrpExtensionEx.c)
 *     IoSetActivityIdIrp @ 0x14014A2C0 (IoSetActivityIdIrp.c)
 *     IoSetAdapterCryptoEngineExtension @ 0x1401FB0C0 (IoSetAdapterCryptoEngineExtension.c)
 *     IoSetFsTrackOffsetState @ 0x1401FB110 (IoSetFsTrackOffsetState.c)
 *     IoSetFsZeroingOffsetRequired @ 0x1401FB1B0 (IoSetFsZeroingOffsetRequired.c)
 *     IoSetGenericIrpExtension @ 0x1401FB210 (IoSetGenericIrpExtension.c)
 *     IopPerfCallDriver @ 0x1401FB3F4 (IopPerfCallDriver.c)
 *     ViGetContextPointer @ 0x1407A8AC4 (ViGetContextPointer.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall IopAllocateIrpExtension(__int64 a1, int a2)
{
  _WORD *v2; // rbx
  char v3; // si
  _WORD *PoolWithTag; // rax
  _WORD *v7; // rax

  v2 = *(_WORD **)(a1 + 200);
  v3 = a2;
  if ( !v2 )
  {
    if ( a2 != 2 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x58707249u);
      v2 = PoolWithTag;
      if ( !PoolWithTag )
        return v2;
      memset(PoolWithTag, 0, 0x38uLL);
      v2[1] = 1 << v3;
      *(_BYTE *)(a1 + 71) |= 0x40u;
LABEL_8:
      *(_QWORD *)(a1 + 200) = v2;
      *v2 |= 1u;
      return v2;
    }
    *(_BYTE *)(a1 + 71) |= 0x80u;
    return (_WORD *)(a1 + 196);
  }
  if ( *(char *)(a1 + 71) < 0 )
  {
    if ( a2 != 2 )
    {
      v7 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x58707249u);
      v2 = v7;
      if ( !v7 )
        return v2;
      memset(v7, 0, 0x38uLL);
      v2[1] = (1 << (v3 & 0xF)) | 4;
      *((_DWORD *)v2 + 1) = *(_DWORD *)(a1 + 200);
      *(_BYTE *)(a1 + 71) = *(_BYTE *)(a1 + 71) & 0x3F | 0x40;
      goto LABEL_8;
    }
    return (_WORD *)(a1 + 196);
  }
  v2[1] |= 1 << a2;
  return v2;
}
