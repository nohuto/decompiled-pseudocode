/*
 * XREFs of ?IsSameGeometry@CRectangleGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x180094F10
 * Callers:
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x18008524C (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 * Callees:
 *     ??8CRoundedRectangleGeometryData@@QEBA_NAEBU0@@Z @ 0x180022094 (--8CRoundedRectangleGeometryData@@QEBA_NAEBU0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRectangleGeometry::IsSameGeometry(CRectangleGeometry *this, const struct CGeometry *a2)
{
  char v2; // bl

  v2 = 0;
  if ( a2 && (*(unsigned __int8 (__fastcall **)(const struct CGeometry *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 72LL) )
    return CRoundedRectangleGeometryData::operator==((float *)this + 26, (float *)a2 + 26);
  return v2;
}
