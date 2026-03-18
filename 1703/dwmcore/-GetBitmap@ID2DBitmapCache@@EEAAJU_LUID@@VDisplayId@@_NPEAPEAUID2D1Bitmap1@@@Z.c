/*
 * XREFs of ?GetBitmap@ID2DBitmapCache@@EEAAJU_LUID@@VDisplayId@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18015A8B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ID2DBitmapCache::GetBitmap(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
}
