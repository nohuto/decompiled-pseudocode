/*
 * XREFs of ?Compose@CComposition@@QEAAJPEA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180131B7C
 * Callers:
 *     ?Render@CIndependentRefreshRateScheduler@@AEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18013D984 (-Render@CIndependentRefreshRateScheduler@@AEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180131750 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?Render@CDebugVisualRenderer@@SAXPEAVCComposition@@@Z @ 0x180149388 (-Render@CDebugVisualRenderer@@SAXPEAVCComposition@@@Z.c)
 */

__int64 __fastcall CComposition::Compose(CComposition *this, bool *a2, struct FRAME_TIME_INFO *a3)
{
  int v5; // ebx
  bool v6; // si
  int v7; // eax
  bool v9; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)this + 49) = a3;
  v9 = 0;
  *((_DWORD *)this + 308) = 0;
  v5 = 0;
  v6 = 0;
  if ( !a3 )
    goto LABEL_7;
  if ( *((_DWORD *)this + 96) == 1 )
    *((_BYTE *)a3 + 28) = 1;
  v7 = CComposition::ProcessComposition((CRenderTargetManager **)this, &v9);
  v5 = v7;
  if ( v7 >= 0 )
  {
    v6 = v9;
LABEL_7:
    CDebugVisualRenderer::Render(this);
    *a2 = v6;
    goto LABEL_8;
  }
  MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v7, 0x3B3u);
LABEL_8:
  *((_QWORD *)this + 49) = 0LL;
  if ( v5 >= 0 && v5 != 142213121 )
    return 0;
  return (unsigned int)v5;
}
