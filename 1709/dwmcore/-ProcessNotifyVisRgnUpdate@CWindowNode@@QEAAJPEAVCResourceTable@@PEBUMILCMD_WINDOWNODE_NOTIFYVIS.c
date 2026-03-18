/*
 * XREFs of ?ProcessNotifyVisRgnUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYVISRGNUPDATE@@@Z @ 0x180179504
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x18018B8C4 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessNotifyVisRgnUpdate(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_NOTIFYVISRGNUPDATE *a3)
{
  CDxAccumulationContext *v3; // rcx
  unsigned int v4; // ebx
  signed int updated; // eax

  v3 = (CDxAccumulationContext *)*((_QWORD *)this + 125);
  v4 = 0;
  if ( v3 )
  {
    updated = CDxAccumulationContext::UpdateDxClipShape(v3, 1);
    v4 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0x7F4u);
  }
  return v4;
}
