/*
 * XREFs of ?ProcessSetContent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z @ 0x1800516FC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001D840 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800542A0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006AE30 (-IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B53B0 (-IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ProcessSetContent(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETCONTENT *a3)
{
  struct CContent *v4; // rbx
  __int64 v5; // rdx
  __int64 Resource; // rax
  bool (__fastcall *v8)(__int64, int); // rax
  char v9; // al
  __int64 (__fastcall *v10)(CVisual *__hidden, struct CContent *); // rax
  int v11; // eax
  unsigned int v12; // ebx

  v4 = 0LL;
  v5 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v5
    && ((Resource = CResourceTable::GetResource(a2, v5, 37LL), (v4 = (struct CContent *)Resource) == 0LL)
     || ((v8 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)Resource + 48LL), v8 != CRenderData::IsOfType)
       ? ((char *)v8 != (char *)CAtlasedRectsGroup::IsOfType
        ? ((char *)v8 != (char *)CPrimitiveGroupLayerClip::IsOfType
         ? (v9 = v8((__int64)v4, 38))
         : (v9 = CPrimitiveGroupLayerClip::IsOfType(v4, 38LL)))
        : (v9 = CAtlasedRectsGroup::IsOfType(v4, 38LL)))
       : (v9 = CRenderData::IsOfType((__int64)v4, 38)),
         v9)) )
  {
    v12 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xA18u);
  }
  else
  {
    v10 = *(__int64 (__fastcall **)(CVisual *__hidden, struct CContent *))(*(_QWORD *)this + 288LL);
    if ( v10 == CVisual::SetContent )
      v11 = CVisual::SetContent(this, v4);
    else
      v11 = v10(this, v4);
    v12 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xA1Cu);
  }
  return v12;
}
