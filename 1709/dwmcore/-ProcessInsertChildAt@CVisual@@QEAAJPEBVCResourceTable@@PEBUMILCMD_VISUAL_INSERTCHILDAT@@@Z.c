/*
 * XREFs of ?ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x180051578
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180022240 (-IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800509B0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180052870 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180098CC0 (-IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ProcessInsertChildAt(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_INSERTCHILDAT *a3)
{
  __int64 v3; // r9
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rcx
  bool (__fastcall *v10)(__int64, int); // rax
  char v11; // al
  CVisual **v12; // rdx
  int inserted; // eax
  unsigned int v14; // ebx

  v3 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v3
    && (unsigned int)v3 < *((_DWORD *)a2 + 7)
    && (v6 = *((_QWORD *)a2 + 5), v7 = (unsigned int)(v3 * *((_DWORD *)a2 + 6)), *(_DWORD *)(v7 + v6))
    && (v8 = v6 + (unsigned int)(v3 * *((_DWORD *)a2 + 6)), (v9 = *(_QWORD *)(v8 + 8)) != 0)
    && ((v10 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v9 + 48LL), v10 != CSpriteVisual::IsOfType)
      ? ((char *)v10 != (char *)CVisual::IsOfType
       ? ((char *)v10 != (char *)CWindowNode::IsOfType
        ? (v11 = v10(v9, 134))
        : (v11 = CWindowNode::IsOfType(v9, 134LL, v7, v3)))
       : (v11 = CVisual::IsOfType(v9, 134LL)))
      : (v11 = CSpriteVisual::IsOfType(v9, 134)),
        v11) )
  {
    v12 = *(CVisual ***)(v8 + 8);
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    inserted = CVisual::InsertChildAt(this, v12, *((_DWORD *)a3 + 3), 0);
    v14 = inserted;
    if ( inserted < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0xAA7u);
  }
  else
  {
    v14 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xAA4u);
  }
  return v14;
}
