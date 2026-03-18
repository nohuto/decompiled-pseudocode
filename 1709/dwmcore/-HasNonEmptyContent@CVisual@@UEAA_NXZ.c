/*
 * XREFs of ?HasNonEmptyContent@CVisual@@UEAA_NXZ @ 0x1800506D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x180027E70 (-IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ.c)
 *     ?IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ @ 0x18006AD50 (-IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CVisual::HasNonEmptyContent(CVisual *this)
{
  CPrimitiveGroup *v1; // rcx
  bool result; // al
  bool (__fastcall *v3)(CAtlasedRectsGroup *__hidden); // rax
  char IsEmptyDrawing; // al

  v1 = (CPrimitiveGroup *)*((_QWORD *)this + 30);
  result = 0;
  if ( v1 )
  {
    v3 = *(bool (__fastcall **)(CAtlasedRectsGroup *__hidden))(*(_QWORD *)v1 + 192LL);
    if ( v3 == CRenderData::IsEmptyDrawing )
    {
      IsEmptyDrawing = *((_BYTE *)v1 + 137);
    }
    else if ( (char *)v3 == (char *)CPrimitiveGroup::IsEmptyDrawing )
    {
      IsEmptyDrawing = CPrimitiveGroup::IsEmptyDrawing(v1);
    }
    else
    {
      IsEmptyDrawing = v3 == CAtlasedRectsGroup::IsEmptyDrawing
                     ? CAtlasedRectsGroup::IsEmptyDrawing(v1)
                     : ((__int64 (*)(void))v3)();
    }
    if ( !IsEmptyDrawing )
      return 1;
  }
  return result;
}
