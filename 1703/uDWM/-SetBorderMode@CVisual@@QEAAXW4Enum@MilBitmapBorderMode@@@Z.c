/*
 * XREFs of ?SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z @ 0x180081C2C
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180038AF0 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetBorderMode(__int64 *a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  if ( (*((_BYTE *)a1 + 196) & 8) == 0 || *((_DWORD *)a1 + 51) )
  {
    *((_DWORD *)a1 + 49) |= 8u;
    v1 = *a1;
    *((_DWORD *)a1 + 51) = 0;
    return (*(__int64 (__fastcall **)(__int64 *, __int64))(v1 + 24))(a1, 64LL);
  }
  return result;
}
