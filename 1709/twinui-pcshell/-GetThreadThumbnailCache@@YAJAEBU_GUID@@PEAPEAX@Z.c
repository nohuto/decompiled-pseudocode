/*
 * XREFs of ?GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C9A64
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1801CB860 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetThreadThumbnailCache(const struct _GUID *a1, void **a2)
{
  HRESULT ThreadFlags; // ebx
  LPVOID v4; // rcx
  const struct _GUID *v6; // [rsp+40h] [rbp+8h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp+10h] BYREF

  v6 = a1;
  *a2 = 0LL;
  ThreadFlags = GetThreadFlags(1LL, &v6);
  if ( ThreadFlags >= 0 )
  {
    ppv = 0LL;
    ThreadFlags = CoCreateInstance(
                    &GUID_50ef4544_ac9f_4a8e_b21b_8a26180db13f,
                    0LL,
                    1u,
                    &GUID_f676c15d_596a_4ce2_8234_33996f445db1,
                    &ppv);
    if ( ThreadFlags >= 0 )
      ThreadFlags = (**(__int64 (__fastcall ***)(LPVOID, GUID *, void **))ppv)(
                      ppv,
                      &GUID_f676c15d_596a_4ce2_8234_33996f445db1,
                      a2);
    v4 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  return (unsigned int)ThreadFlags;
}
