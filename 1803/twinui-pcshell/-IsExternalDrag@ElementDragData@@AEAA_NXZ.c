/*
 * XREFs of ?IsExternalDrag@ElementDragData@@AEAA_NXZ @ 0x1802A50AC
 * Callers:
 *     ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1802A4A8C (-DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180288518 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?ApplyMargins@RelativeMargins@@QEAA?AUCRect@Geometry@@AEBU23@@Z @ 0x180290C48 (-ApplyMargins@RelativeMargins@@QEAA-AUCRect@Geometry@@AEBU23@@Z.c)
 *     ?GetExternalDragProgress@ElementDragData@@AEAAMXZ @ 0x1802A502C (-GetExternalDragProgress@ElementDragData@@AEAAMXZ.c)
 */

bool __fastcall ElementDragData::IsExternalDrag(ElementDragData *this)
{
  _DWORD *v3; // rax
  _BYTE v4[16]; // [rsp+20h] [rbp-38h] BYREF
  struct tagPOINT v5; // [rsp+30h] [rbp-28h] BYREF

  if ( ElementDragData::GetExternalDragProgress(this) > 1.0 )
    return 1;
  v3 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct tagPOINT *))(**((_QWORD **)this + 5) + 88LL))(
                   *((_QWORD *)this + 5),
                   &v5);
  RelativeMargins::ApplyMargins((double *)this + 16, (__int64)v4, v3);
  v5 = *(struct tagPOINT *)((char *)this + 92);
  return !Geometry::CRect::Contains((Geometry::CRect *)v4, &v5);
}
