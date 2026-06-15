/*
 * XREFs of ?Initialize@CAudioStream@@UEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18002F1A0
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023A10 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ?InitializeVolumeCoefficientCount@CPerStreamVolumeAudioStream@@UEAAJI@Z @ 0x18002B8D0 (-InitializeVolumeCoefficientCount@CPerStreamVolumeAudioStream@@UEAAJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18005FA30 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009B080 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioStream::Initialize(CAudioStream *this, const struct tWAVEFORMATEX *a2)
{
  HANDLE Event; // rbp
  const char *v5; // r9
  wil::details *v6; // rsi
  int v7; // ebx
  __int64 nChannels; // rdx
  __int64 (__fastcall *v9)(CPerStreamVolumeAudioStream *, unsigned int); // rax
  int v10; // eax
  DWORD LastError; // ebx
  void *v13; // rdx
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v6 = (wil::details *)*((_QWORD *)this + 67);
    if ( v6 )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v6, v13);
      SetLastError(LastError);
    }
    *((_QWORD *)this + 67) = Event;
    v7 = 0;
  }
  else
  {
    v7 = wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x1621,
           (unsigned int)"internal\\sdk\\inc\\wil\\ResultMacros.h",
           v5);
  }
  if ( v7 < 0 )
  {
    v14 = 300LL;
  }
  else
  {
    nChannels = a2->nChannels;
    v9 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *, unsigned int))(*(_QWORD *)this + 144LL);
    if ( v9 == CPerStreamVolumeAudioStream::InitializeVolumeCoefficientCount )
      v10 = CPerStreamVolumeAudioStream::InitializeVolumeCoefficientCount(this, nChannels);
    else
      v10 = v9(this, nChannels);
    v7 = v10;
    if ( v10 >= 0 )
      return 0LL;
    v14 = 302LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v7,
    v15);
  return (unsigned int)v7;
}
