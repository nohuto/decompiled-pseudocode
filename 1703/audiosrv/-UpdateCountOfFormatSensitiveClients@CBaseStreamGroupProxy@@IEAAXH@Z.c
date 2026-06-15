/*
 * XREFs of ?UpdateCountOfFormatSensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z @ 0x1800A72FC
 * Callers:
 *     ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800A5880 (-CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRI.c)
 *     ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800A5AC0 (-DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnProcessSubmixSensitivityToFormatChanged@CBaseStreamGroupProxy@@UEAAXPEAUIProcessSubmixProxy@@@Z @ 0x1800A6BA0 (-OnProcessSubmixSensitivityToFormatChanged@CBaseStreamGroupProxy@@UEAAXPEAUIProcessSubmixProxy@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseStreamGroupProxy::UpdateCountOfFormatSensitiveClients(CBaseStreamGroupProxy *this, int a2)
{
  int v2; // r8d
  __int64 v3; // r9
  int v4; // eax

  v2 = *((_DWORD *)this + 33);
  v3 = *((_QWORD *)this + 10);
  v4 = v2 + a2;
  *((_DWORD *)this + 33) = v2 + a2;
  if ( v3 && v2 != v4 && (!v2 || !v4) )
    (*(void (__fastcall **)(__int64, CBaseStreamGroupProxy *))(*(_QWORD *)v3 + 144LL))(v3, this);
}
