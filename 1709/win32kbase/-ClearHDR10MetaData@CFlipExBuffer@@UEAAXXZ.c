/*
 * XREFs of ?ClearHDR10MetaData@CFlipExBuffer@@UEAAXXZ @ 0x1C0152D80
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ @ 0x1C0039510 (-ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ.c)
 */

void __fastcall CFlipExBuffer::ClearHDR10MetaData(CFlipExBuffer *this, __int64 a2, __int64 a3)
{
  CFlipExBuffer::ReleaseHDR10MetaData(this, a2, a3);
}
