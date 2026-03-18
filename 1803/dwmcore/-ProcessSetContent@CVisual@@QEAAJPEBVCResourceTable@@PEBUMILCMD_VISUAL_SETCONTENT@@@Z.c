/*
 * XREFs of ?ProcessSetContent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z @ 0x1800506C4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18004E420 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180055DE0 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B3C40 (-IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ProcessSetContent(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETCONTENT *a3)
{
  struct CContent *v4; // rbx
  unsigned int v5; // edx
  __int64 Resource; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 (__fastcall *v10)(struct CContent *, __int64); // rax
  char v11; // al
  __int64 (__fastcall *v12)(CVisual *, struct CContent *); // rax
  int v13; // eax
  unsigned int v14; // ebx

  v4 = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5
    && ((Resource = CResourceTable::GetResource((__int64)a2, v5, 0x28u), (v4 = (struct CContent *)Resource) == 0LL)
     || ((v10 = *(__int64 (__fastcall **)(struct CContent *, __int64))(*(_QWORD *)Resource + 48LL),
          (char *)v10 != (char *)CRenderData::IsOfType)
       ? ((char *)v10 != (char *)CAtlasedRectsGroup::IsOfType
        ? (v11 = v10(v4, 41LL))
        : (v11 = CAtlasedRectsGroup::IsOfType(v4, 41LL)))
       : (v11 = CRenderData::IsOfType(v4, 41LL, v8, v9)),
         v11)) )
  {
    v14 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xAABu);
  }
  else
  {
    v12 = *(__int64 (__fastcall **)(CVisual *, struct CContent *))(*(_QWORD *)this + 296LL);
    if ( v12 == CVisual::SetContent )
      v13 = CVisual::SetContent(this, v4);
    else
      v13 = v12(this, v4);
    v14 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xAAFu);
  }
  return v14;
}
