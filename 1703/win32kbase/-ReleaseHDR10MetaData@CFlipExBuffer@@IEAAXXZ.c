/*
 * XREFs of ?ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ @ 0x1C0011F10
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C00125A8 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?ClearHDR10MetaData@CFlipExBuffer@@UEAAXXZ @ 0x1C0151910 (-ClearHDR10MetaData@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall CFlipExBuffer::ReleaseHDR10MetaData(CFlipExBuffer *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 42);
  if ( v2 )
  {
    Win32FreePool(v2);
    *((_QWORD *)this + 42) = 0LL;
  }
}
