/*
 * XREFs of ?ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ @ 0x1C0039510
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C003A124 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?ClearHDR10MetaData@CFlipExBuffer@@UEAAXXZ @ 0x1C0152D80 (-ClearHDR10MetaData@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall CFlipExBuffer::ReleaseHDR10MetaData(CFlipExBuffer *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 42);
  if ( v4 )
  {
    Win32FreePool(v4, a2, a3);
    *((_QWORD *)this + 42) = 0LL;
  }
}
