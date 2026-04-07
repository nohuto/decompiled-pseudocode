/*
 * XREFs of ?Opacity@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z @ 0x18009EC30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CThumbnailAnimatedVisual::Opacity(
        CThumbnailAnimatedVisual *this,
        const struct TA_TRANSFORM_OPACITY *a2)
{
  *((double *)this + 7) = *((float *)a2 + 5);
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 35) + 88LL))((char *)this - 280);
  return 0LL;
}
