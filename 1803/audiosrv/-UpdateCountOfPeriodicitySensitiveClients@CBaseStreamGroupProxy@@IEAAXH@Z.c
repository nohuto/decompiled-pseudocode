/*
 * XREFs of ?UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z @ 0x1800CB06C
 * Callers:
 *     ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800C8EF0 (-CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRI.c)
 *     ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800C9170 (-DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnProcessSubmixSensitivityToPeriodicityChanged@CBaseStreamGroupProxy@@UEAAXPEAUIProcessSubmixProxy@@@Z @ 0x1800CA7E0 (-OnProcessSubmixSensitivityToPeriodicityChanged@CBaseStreamGroupProxy@@UEAAXPEAUIProcessSubmixPr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseStreamGroupProxy::UpdateCountOfPeriodicitySensitiveClients(CBaseStreamGroupProxy *this, int a2)
{
  int v2; // r8d
  __int64 v3; // r9
  int v4; // eax

  v2 = *((_DWORD *)this + 34);
  v3 = *((_QWORD *)this + 11);
  v4 = v2 + a2;
  *((_DWORD *)this + 34) = v2 + a2;
  if ( v3 && v2 != v4 && (!v2 || !v4) )
    (*(void (__fastcall **)(__int64, CBaseStreamGroupProxy *))(*(_QWORD *)v3 + 112LL))(v3, this);
}
