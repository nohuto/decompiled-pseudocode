/*
 * XREFs of ?ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z @ 0x180085DA0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x180084BFC (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180084EB8 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 */

__int64 __fastcall CVisual::ProcessMoveChild(
        CComposition **this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_MOVECHILD *a3)
{
  struct CVisual *Resource; // rax
  struct CProcessAttribution **v6; // rdi
  int inserted; // eax
  unsigned int v8; // ebx
  unsigned int v10; // [rsp+20h] [rbp-18h]

  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x1Fu);
  v6 = (struct CProcessAttribution **)Resource;
  if ( !Resource )
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xA74u);
    return v8;
  }
  inserted = CVisual::RemoveChild(this, Resource, 1);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v10 = 2679;
    goto LABEL_8;
  }
  inserted = CVisual::InsertChildAt((CVisual *)this, v6, *((_DWORD *)a3 + 3), 1);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v10 = 2680;
LABEL_8:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, v10);
  }
  return v8;
}
