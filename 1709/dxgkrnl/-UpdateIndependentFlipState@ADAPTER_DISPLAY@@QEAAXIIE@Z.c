/*
 * XREFs of ?UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z @ 0x1C00FE5E0
 * Callers:
 *     ?PrepareIndependentFlipToken@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00CBE30 (-PrepareIndependentFlipToken@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?UpdateIndependentFlipStateUnsafe@DISPLAY_SOURCE@@QEAAXIE@Z @ 0x1C00FE9A8 (-UpdateIndependentFlipStateUnsafe@DISPLAY_SOURCE@@QEAAXIE@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::UpdateIndependentFlipState(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  __int64 v4; // rbx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (ADAPTER_DISPLAY *)((char *)this + 400));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  DISPLAY_SOURCE::UpdateIndependentFlipStateUnsafe((DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 3760 * v4), a3, a4);
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
}
