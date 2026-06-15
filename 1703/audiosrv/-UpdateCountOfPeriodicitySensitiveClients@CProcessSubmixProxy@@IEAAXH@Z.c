/*
 * XREFs of ?UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800A7450
 * Callers:
 *     ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180007E40 (-DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180007F30 (-CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessSubmixProxy::UpdateCountOfPeriodicitySensitiveClients(CProcessSubmixProxy *this, int a2)
{
  int v2; // r8d

  v2 = *((_DWORD *)this + 24);
  *((_DWORD *)this + 24) = v2 + a2;
  if ( v2 != v2 + a2 && (!v2 || !(v2 + a2)) )
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 20) + 336LL))(
      *((_QWORD *)this + 20),
      (char *)this + 8);
}
