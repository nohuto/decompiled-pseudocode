/*
 * XREFs of ?ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z @ 0x18005057C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x18004F9E8 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004FBA0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::ProcessMoveChild(
        CComposition **this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_MOVECHILD *a3)
{
  struct CVisual *Resource; // rax
  CComposition ***v6; // rdi
  int inserted; // eax
  unsigned int v8; // ebx
  unsigned int v10; // [rsp+20h] [rbp-18h]

  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x97u);
  v6 = (CComposition ***)Resource;
  if ( !Resource )
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xB4Du);
    return v8;
  }
  inserted = CVisual::RemoveChild(this, Resource, 1);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v10 = 2896;
    goto LABEL_8;
  }
  inserted = CVisual::InsertChildAt(this, v6, *((_DWORD *)a3 + 3), 1);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v10 = 2897;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v10);
  }
  return v8;
}
