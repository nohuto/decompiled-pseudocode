/*
 * XREFs of ?SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z @ 0x1800828DC
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180012CFC (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetBorderMode(unsigned int *a1)
{
  __int64 result; // rax

  result = a1[49];
  if ( (result & 8) == 0 || a1[51] )
  {
    a1[51] = 0;
    a1[49] = result | 8;
    return (*(__int64 (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)a1 + 24LL))(a1, 64LL);
  }
  return result;
}
