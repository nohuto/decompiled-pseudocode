/*
 * XREFs of ?GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z @ 0x1800023CC
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x180013F60 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18008A2F0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?IsCaptureStream@CAudioStream@@UEAAHXZ @ 0x180019DF0 (-IsCaptureStream@CAudioStream@@UEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CAudioSession::GetPolicyVolumeForStream(
        CAudioSession *this,
        struct SessionPolicyGains *a2,
        struct CAudioStream *a3)
{
  CAudioStream *v3; // rdi
  float v4; // xmm6_4
  CAudioStream *v7; // rcx
  __int64 (__fastcall *v8)(CAudioStream *__hidden); // rax
  int IsCaptureStream; // eax
  __int64 (__fastcall *v10)(CAudioStream *__hidden); // rax
  int v11; // eax
  float v12; // xmm6_4

  v3 = (struct CAudioStream *)((char *)a3 + 8);
  v4 = FLOAT_1_0;
  v7 = (struct CAudioStream *)((char *)a3 + 8);
  v8 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*((_QWORD *)a3 + 1) + 56LL);
  if ( v8 == CAudioStream::IsCaptureStream )
    IsCaptureStream = CAudioStream::IsCaptureStream(v7);
  else
    IsCaptureStream = v8(v7);
  if ( !IsCaptureStream )
    v4 = *((float *)a2 + 2);
  v10 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v3 + 56LL);
  if ( v10 == CAudioStream::IsCaptureStream )
    v11 = CAudioStream::IsCaptureStream(v3);
  else
    v11 = v10(v3);
  if ( !v11 && !*((_BYTE *)a3 + 42) )
    v4 = v4 * *(float *)a2;
  v12 = v4 * *((float *)a2 + 1);
  if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 72LL))(
         g_PolicyManager,
         *((unsigned int *)a3 + 134)) )
  {
    v12 = v12 * *((float *)a2 + 3);
  }
  if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 112LL))(
          g_PolicyManager,
          *((unsigned int *)a3 + 134)) )
    v12 = v12 * *((float *)a2 + 4);
  if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 168LL))(
         g_PolicyManager,
         *((unsigned int *)a3 + 134)) )
  {
    return v12 * *((float *)a2 + 5);
  }
  return v12;
}
