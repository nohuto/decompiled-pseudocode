/*
 * XREFs of ?ProcessSetContent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z @ 0x180085C04
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800846C0 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180088B00 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AF020 (-IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0260 (-IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ProcessSetContent(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETCONTENT *a3)
{
  struct CContent *v4; // rbx
  unsigned int v5; // edx
  __int64 Resource; // rax
  _BOOL8 (__fastcall *v8)(__int64, int); // rax
  char v9; // al
  __int64 (__fastcall *v10)(CVisual *__hidden, struct CContent *); // rax
  int v11; // eax
  unsigned int v12; // ebx

  v4 = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5
    && ((Resource = CResourceTable::GetResource((__int64)a2, v5, 0x5Bu), (v4 = (struct CContent *)Resource) == 0LL)
     || ((v8 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)Resource + 48LL), v8 != CRenderData::IsOfType)
       ? ((char *)v8 != (char *)CAtlasedRectsGroup::IsOfType
        ? ((char *)v8 != (char *)CPrimitiveGroupLayerClip::IsOfType
         ? (v9 = v8((__int64)v4, 120))
         : (v9 = CPrimitiveGroupLayerClip::IsOfType(v4, 120LL)))
        : (v9 = CAtlasedRectsGroup::IsOfType(v4, 120LL)))
       : (v9 = CRenderData::IsOfType((__int64)v4, 120)),
         v9)) )
  {
    v12 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x9D6u);
  }
  else
  {
    v10 = *(__int64 (__fastcall **)(CVisual *__hidden, struct CContent *))(*(_QWORD *)this + 248LL);
    if ( v10 == CVisual::SetContent )
      v11 = CVisual::SetContent(this, v4);
    else
      v11 = v10(this, v4);
    v12 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x9DAu);
  }
  return v12;
}
