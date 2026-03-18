/*
 * XREFs of ?GetAlphaMode@CSystemMemoryBitmap@@UEBA?AW4D2D1_ALPHA_MODE@@XZ @ 0x1801A8E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::GetAlphaMode(CSystemMemoryBitmap *this)
{
  __int64 v1; // rcx

  v1 = ((unsigned __int64)this - 208) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 224) >> 64);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
}
