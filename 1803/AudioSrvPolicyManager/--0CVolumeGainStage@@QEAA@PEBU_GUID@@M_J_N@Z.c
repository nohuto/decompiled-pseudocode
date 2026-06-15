/*
 * XREFs of ??0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z @ 0x18000FD48
 * Callers:
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x18000DEFC (-OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x18000E48C (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     WPP_SF_g @ 0x18000FD04 (WPP_SF_g.c)
 *     pow @ 0x180035AE4 (pow.c)
 */

CVolumeGainStage *__fastcall CVolumeGainStage::CVolumeGainStage(
        CVolumeGainStage *this,
        const struct _GUID *a2,
        float a3,
        __int64 a4,
        bool a5)
{
  __int64 v5; // r8
  double v7; // xmm6_8
  float v8; // xmm0_4

  v7 = a3;
  *(_QWORD *)this = &CGainStage::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_BYTE *)this + 32) = a5;
  *(_QWORD *)this = &CVolumeGainStage::`vftable';
  *((_OWORD *)this + 1) = DuckingPolicyGuid;
  *((_DWORD *)this + 9) = 1;
  *((_QWORD *)this + 5) = a4;
  if ( a3 == -INFINITY )
    v8 = 0.0;
  else
    v8 = pow(10.0, v7 / 20.0);
  *((float *)this + 12) = v8;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), (__int64)a2, v5, v7);
  }
  return this;
}
