/*
 * XREFs of ?Detach@CWindowNode@@QEAAJXZ @ 0x1800993DC
 * Callers:
 *     ?DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180098CF0 (-DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x18009C498 (--1CWindowNode@@MEAA@XZ.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x18009B908 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowNode::Detach(CWindowNode *this)
{
  signed int v2; // eax
  unsigned int v3; // ebx

  v2 = CWindowNode::WindowManagerAddRemove(this, 0);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0x10FBu);
  else
    *((_QWORD *)this + 74) = 0LL;
  return v3;
}
