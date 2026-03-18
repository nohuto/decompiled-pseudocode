/*
 * XREFs of ?ExposeVisual@CoRenderHost@@QEAAJIPEAVCVisual@@_N@Z @ 0x18013B240
 * Callers:
 *     ?ProcessExposeToCoRenderer@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_EXPOSETOCORENDERER@@@Z @ 0x18012B2D8 (-ProcessExposeToCoRenderer@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_EXPOSETOCORENDERE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_xd @ 0x180148D8C (Template_xd.c)
 */

__int64 __fastcall CoRenderHost::ExposeVisual(CoRenderHost *this, unsigned int a2, struct CVisual *a3, char a4)
{
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  void *v10; // rdx
  int v11; // eax

  v6 = **((_QWORD **)this + 3);
  if ( a4 )
  {
    v7 = (*(__int64 (**)(void))(v6 + 120))();
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xF4u);
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v10 = &EVTDESC_PROCESS_VISUAL_EXPOSE_Start;
LABEL_9:
      Template_xd(v8, v10, a3, a2);
    }
  }
  else
  {
    v11 = (*(__int64 (**)(void))(v6 + 128))();
    v9 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xF9u);
      return v9;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v10 = &EVTDESC_PROCESS_VISUAL_EXPOSE_Stop;
      goto LABEL_9;
    }
  }
  return v9;
}
