/*
 * XREFs of ?ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x180085CD4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004FEC0 (-IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x18007F61C (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180084EB8 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180085F50 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18008C6C0 (-IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ProcessRemoveChild(
        CComposition **this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_REMOVECHILD *a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rcx
  bool (__fastcall *v8)(__int64, int); // rax
  char v9; // al
  struct CVisual *v10; // rdx
  int v11; // eax
  unsigned int v12; // ebx

  if ( HANDLE_TABLE::ValidEntry((const struct CResourceTable *)((char *)a2 + 16), *((_DWORD *)a3 + 2))
    && (v6 = *(_QWORD *)(v5 + 40) + (unsigned int)(*(_DWORD *)(v4 + 8) * *(_DWORD *)(v5 + 24)),
        (v7 = *(_QWORD *)(v6 + 8)) != 0)
    && ((v8 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v7 + 48LL), (char *)v8 != (char *)CSpriteVisual::IsOfType)
      ? ((char *)v8 != (char *)CVisual::IsOfType
       ? (v8 != CWindowNode::IsOfType
        ? (v9 = v8(v7, 31))
        : (v9 = CWindowNode::IsOfType(v7, 31)))
       : (v9 = CVisual::IsOfType(v7, 31LL)))
      : (v9 = CSpriteVisual::IsOfType(v7, 31LL)),
        v9) )
  {
    v10 = *(struct CVisual **)(v6 + 8);
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v11 = CVisual::RemoveChild(this, v10, 0);
    v12 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x9FBu);
  }
  else
  {
    v12 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x9F8u);
  }
  return v12;
}
