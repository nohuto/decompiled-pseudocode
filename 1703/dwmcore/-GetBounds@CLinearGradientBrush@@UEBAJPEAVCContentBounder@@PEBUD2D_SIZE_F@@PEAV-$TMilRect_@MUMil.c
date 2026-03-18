/*
 * XREFs of ?GetBounds@CLinearGradientBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001A910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearGradientBrush::GetBounds(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  if ( !a3 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 176LL))(a1) )
  {
    a4[3] = 0;
    a4[2] = 0;
    a4[1] = 0;
    *a4 = 0;
  }
  else
  {
    a4[2] = *a3;
    a4[3] = a3[1];
  }
  return 0LL;
}
