/*
 * XREFs of ?ProcessTelemetrySetAnimationScenarioGUID@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_TELEMETRYSETANIMATIONSCENARIOGUID@@@Z @ 0x18012F4CC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnimation::ProcessTelemetrySetAnimationScenarioGUID(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_TELEMETRYSETANIMATIONSCENARIOGUID *a3)
{
  unsigned int v5; // ebx
  _OWORD *v6; // rax
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v5 = *((_QWORD *)this + 16) != 0LL ? 0x80070005 : 0;
  if ( *((_QWORD *)this + 16) )
  {
    v8 = 248;
    goto LABEL_8;
  }
  if ( !*((_BYTE *)this + 96) )
  {
    v6 = operator new(0x10uLL);
    *((_QWORD *)this + 16) = v6;
    if ( v6 )
    {
      *v6 = *(_OWORD *)((char *)a3 + 8);
      return v5;
    }
    v5 = -2147024882;
    v8 = 259;
LABEL_8:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v8);
    return v5;
  }
  v5 = -2147024891;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024891, 0xFEu);
  return v5;
}
