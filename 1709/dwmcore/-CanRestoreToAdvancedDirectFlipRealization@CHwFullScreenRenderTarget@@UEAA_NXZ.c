/*
 * XREFs of ?CanRestoreToAdvancedDirectFlipRealization@CHwFullScreenRenderTarget@@UEAA_NXZ @ 0x1801B84F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CHwFullScreenRenderTarget::CanRestoreToAdvancedDirectFlipRealization(CHwFullScreenRenderTarget *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 152LL))(v1);
  else
    return 1;
}
