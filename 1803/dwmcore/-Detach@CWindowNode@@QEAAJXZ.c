/*
 * XREFs of ?Detach@CWindowNode@@QEAAJXZ @ 0x180090308
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18008FE70 (-DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x180092EB8 (--1CWindowNode@@MEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x180092B98 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowNode::Detach(CWindowNode *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CWindowNode::WindowManagerAddRemove(this, 0);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xDC1u);
  else
    *((_QWORD *)this + 75) = 0LL;
  return v3;
}
