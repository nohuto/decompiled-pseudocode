/*
 * XREFs of ?ReleaseCopyBuffers@CCompressedSourceBitmap@@UEAAJXZ @ 0x1801AAE30
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompressedSourceBitmap::ReleaseCopyBuffers(CCompressedSourceBitmap *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( *((_QWORD *)this + 2) )
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + 2);
  else
    return 1;
  return v2;
}
