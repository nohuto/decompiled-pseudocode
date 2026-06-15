/*
 * XREFs of ?Initialize@CAudioStream@@UEAAJPEAVCVADServer@@PEAUIAudioProcess@@PEBUtWAVEFORMATEX@@@Z @ 0x180019710
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001B110 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ??$out_param@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@0@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@Z @ 0x1800043C8 (--$out_param@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@wil@.c)
 *     ?InitializeVolumeCoefficientCount@CPerStreamVolumeAudioStream@@UEAAJI@Z @ 0x180016C00 (-InitializeVolumeCoefficientCount@CPerStreamVolumeAudioStream@@UEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007EC90 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::Initialize(
        CAudioStream *this,
        struct CVADServer *a2,
        struct IAudioProcess *a3,
        const struct tWAVEFORMATEX *a4)
{
  HANDLE EventW; // rax
  const char *v8; // r9
  __int64 nChannels; // rdx
  __int64 (__fastcall *v10)(CPerStreamVolumeAudioStream *, unsigned int); // rax
  int v11; // eax
  unsigned int v12; // ebx
  HANDLE *v13; // rsi
  HANDLE CurrentProcess; // rdi
  void *v15; // rbx
  HANDLE v16; // rax
  BOOL v17; // r15d
  __int64 v18; // rbp
  _QWORD *v19; // rdi
  void *v20; // rsi
  signed __int64 v21; // rax
  __int64 v23; // rdx
  DWORD LastError; // ebx
  int v25; // [rsp+20h] [rbp-58h]
  _QWORD v26[2]; // [rsp+48h] [rbp-30h] BYREF
  char v27; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 65) = EventW;
  if ( !EventW )
  {
    v23 = 307LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v23,
             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
             v8);
  }
  nChannels = a4->nChannels;
  v10 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *, unsigned int))(*(_QWORD *)this + 152LL);
  if ( v10 == CPerStreamVolumeAudioStream::InitializeVolumeCoefficientCount )
    v11 = CPerStreamVolumeAudioStream::InitializeVolumeCoefficientCount(this, nChannels);
  else
    v11 = v10(this, nChannels);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x135,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v11,
      v25);
    return v12;
  }
  *((_DWORD *)this + 20) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a3 + 40LL))(a3);
  if ( (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a3 + 168LL))(a3) )
  {
    v13 = (HANDLE *)(wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)v26, (__int64)this + 72) + 8);
    CurrentProcess = GetCurrentProcess();
    v15 = (void *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a3 + 168LL))(a3);
    v16 = GetCurrentProcess();
    v17 = DuplicateHandle(v16, v15, CurrentProcess, v13, 0, 0, 2u);
    if ( v27 )
    {
      v18 = v26[1];
      v19 = (_QWORD *)v26[0];
      v20 = *(void **)v26[0];
      if ( (unsigned __int64)(*(_QWORD *)v26[0] - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        LastError = GetLastError();
        CloseHandle(v20);
        SetLastError(LastError);
      }
      *v19 = v18;
    }
    if ( !v17 )
    {
      v23 = 314LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v23,
               (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
               v8);
    }
  }
  do
  {
    v21 = _InterlockedExchangeAdd64(&CAudioStream::s_llStreamIdentifier, 1uLL);
    *((_QWORD *)this + 66) = v21 + 1;
  }
  while ( v21 == -1 );
  return 0LL;
}
