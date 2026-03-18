/*
 * XREFs of ?HasNonEmptyContent@CVisual@@UEAA_NXZ @ 0x18004A140
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x1800975E0 (-IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ.c)
 *     ?IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ @ 0x1800B3B60 (-IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ.c)
 *     ?GetShadowAtIndexNoRef@CProjectedShadowReceiver@@QEBAPEAVCProjectedShadow@@H@Z @ 0x1800DCFF4 (-GetShadowAtIndexNoRef@CProjectedShadowReceiver@@QEBAPEAVCProjectedShadow@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::HasNonEmptyContent(CVisual *this)
{
  CPrimitiveGroup *v2; // rcx
  __int64 v3; // rax
  bool (__fastcall *v5)(CRenderData *__hidden); // rax
  char IsEmptyDrawing; // al
  int v7; // edx
  int *v8; // rcx
  int v9; // edi
  __int64 v10; // rbx
  struct CProjectedShadow *ShadowAtIndexNoRef; // rax
  CProjectedShadowReceiver *v12; // [rsp+30h] [rbp+8h]

  v2 = (CPrimitiveGroup *)*((_QWORD *)this + 31);
  if ( !v2
    || ((v5 = *(bool (__fastcall **)(CRenderData *__hidden))(*(_QWORD *)v2 + 192LL), v5 != CRenderData::IsEmptyDrawing)
      ? (v5 != CAtlasedRectsGroup::IsEmptyDrawing
       ? (v5 != CPrimitiveGroup::IsEmptyDrawing
        ? (IsEmptyDrawing = ((__int64 (*)(void))v5)())
        : (IsEmptyDrawing = CPrimitiveGroup::IsEmptyDrawing(v2)))
       : (IsEmptyDrawing = CAtlasedRectsGroup::IsEmptyDrawing(v2)))
      : (IsEmptyDrawing = *((_BYTE *)v2 + 137)),
        IsEmptyDrawing) )
  {
    v3 = *((_QWORD *)this + 27);
    if ( (*(_BYTE *)(v3 + 4) & 1) == 0 )
      return 0;
    v7 = *(_DWORD *)(v3 + 12);
    v8 = (int *)(v3 + 12);
    if ( (v7 & 0x7F000000) != 0x20000000 )
    {
      do
      {
        v8 = (int *)((char *)v8 + (v7 & 0xFFFFFF) + 4);
        v7 = *v8;
      }
      while ( (*v8 & 0x7F000000) != 0x20000000 );
    }
    v12 = *(CProjectedShadowReceiver **)(v8 + 1);
    if ( !v12 )
      return 0;
    v9 = 0;
    v10 = (__int64)(*((_QWORD *)v12 + 9) - *((_QWORD *)v12 + 8)) >> 3;
    if ( (int)v10 <= 0 )
      return 0;
    while ( 1 )
    {
      ShadowAtIndexNoRef = CProjectedShadowReceiver::GetShadowAtIndexNoRef(v12, v9);
      if ( !(*(unsigned __int8 (__fastcall **)(struct CProjectedShadow *))(*(_QWORD *)ShadowAtIndexNoRef + 192LL))(ShadowAtIndexNoRef) )
        break;
      if ( ++v9 >= (int)v10 )
        return 0;
    }
  }
  return 1;
}
