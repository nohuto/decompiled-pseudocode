/*
 * XREFs of ?Detach@CWindowNode@@QEAAJXZ @ 0x180050554
 * Callers:
 *     ?DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18004FEE0 (-DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x1800538D0 (--1CWindowNode@@MEAA@XZ.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x180052F50 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowNode::Detach(CWindowNode *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CWindowNode::WindowManagerAddRemove(this, 0);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x1169u);
  else
    *((_QWORD *)this + 72) = 0LL;
  return v3;
}
