/*
 * XREFs of ?Initialize@AudioJournal@@AEAAXXZ @ 0x18002A4E8
 * Callers:
 *     ??0AudioJournal@@QEAA@XZ @ 0x18002A6CC (--0AudioJournal@@QEAA@XZ.c)
 * Callees:
 *     ?WriteValue@AudioJournal@@AEAAJPEBGKPEAEK@Z @ 0x180007694 (-WriteValue@AudioJournal@@AEAAJPEBGKPEAEK@Z.c)
 *     ?WriteStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z @ 0x180007770 (-WriteStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z.c)
 *     ?ResetData@AudioJournal@@AEAAX_N@Z @ 0x1800077F0 (-ResetData@AudioJournal@@AEAAX_N@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x18002A83C (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     ?ReadStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z @ 0x180049C88 (-ReadStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z.c)
 *     ?ReadLastLogTime@AudioJournal@@AEAA?AT_ULARGE_INTEGER@@XZ @ 0x180049DB8 (-ReadLastLogTime@AudioJournal@@AEAA-AT_ULARGE_INTEGER@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioJournal::Initialize(AudioJournal *this)
{
  int ValueW; // eax
  AudioJournal *v2; // rcx
  __int64 v3; // rcx
  bool v4; // sf
  AudioJournal *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  int cData; // [rsp+28h] [rbp-39h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+48h] [rbp-19h] BYREF
  int pvData; // [rsp+50h] [rbp-11h] BYREF
  int v13; // [rsp+54h] [rbp-Dh] BYREF
  __int64 v14; // [rsp+58h] [rbp-9h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+60h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp+7h] BYREF
  int *v17; // [rsp+88h] [rbp+27h]
  int v18; // [rsp+90h] [rbp+2Fh]
  int v19; // [rsp+94h] [rbp+33h]
  EVENT_DATA_DESCRIPTOR *p_pData; // [rsp+A0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v14 = -2LL;
  EnterCriticalSection(&stru_18018A398);
  v15 = &stru_18018A398;
  if ( g_AudioJournal )
    goto LABEL_14;
  memset_0(&unk_18018A478, 0, 0x4B0uLL);
  dword_18018A8F0 = 100;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  *(struct _FILETIME *)&qword_18018A470 = SystemTimeAsFileTime;
  pvData = 0;
  SystemTimeAsFileTime.dwLowDateTime = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Audio\\Journal",
             L"Version",
             0x18u,
             0LL,
             &pvData,
             (LPDWORD)&SystemTimeAsFileTime);
  if ( ValueW )
  {
    pvData = 0;
    if ( ValueW == 2 )
      goto LABEL_16;
    v4 = ValueW < 0;
    if ( ValueW > 0 )
    {
      ValueW = (unsigned __int16)ValueW | 0x80070000;
      v4 = ValueW < 0;
    }
    if ( !v4 )
      goto LABEL_16;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
      (const char *)(unsigned int)ValueW,
      cData);
  }
  if ( pvData == 1 )
  {
    *(_QWORD *)&qword_18018A470 = *(_QWORD *)AudioJournal::ReadLastLogTime(v2).QuadPart;
    if ( !*(_QWORD *)&qword_18018A470 )
    {
      GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
      *(struct _FILETIME *)&qword_18018A470 = SystemTimeAsFileTime;
      AudioJournal::WriteValue(v5, L"LastLogTime", 0xBu, &qword_18018A470, 8u);
    }
    if ( AudioJournal::ReadStreamInfo(
           (AudioJournal *)&g_AudioJournal,
           (struct AudioJournal::StreamInfo *)&unk_18018A478) < 0 )
      AudioJournal::WriteStreamInfo((AudioJournal *)&g_AudioJournal, (struct AudioJournal::StreamInfo *)&unk_18018A478);
    if ( AudioJournal::ReadStreamInfo(
           (AudioJournal *)&g_AudioJournal,
           (struct AudioJournal::StreamInfo *)&unk_18018A6D0) < 0 )
      AudioJournal::WriteStreamInfo((AudioJournal *)&g_AudioJournal, (struct AudioJournal::StreamInfo *)&unk_18018A6D0);
    if ( AudioJournal::ReadStreamInfo(
           (AudioJournal *)&g_AudioJournal,
           (struct AudioJournal::StreamInfo *)&unk_18018A860) < 0 )
      AudioJournal::WriteStreamInfo((AudioJournal *)&g_AudioJournal, (struct AudioJournal::StreamInfo *)&unk_18018A860);
    goto LABEL_12;
  }
LABEL_16:
  AudioJournal::ResetData((AudioJournal *)&g_AudioJournal, 1);
LABEL_12:
  pData.Ptr = (ULONGLONG)off_180121768;
  *(_QWORD *)&pData.Size = &g_AudioJournal;
  p_pData = &pData;
  v13 = CSerialWorkQueue::QueueRecurringItem(&qword_18018A3C0, 180000LL, 900000LL, &pData, &qword_18018A468);
  if ( v13 < 0 )
  {
    v6 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                      v3,
                                                      lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                        + 1);
    if ( *(_DWORD *)v6 > 2u && TlgKeywordOn(v6, 0x400000000000uLL) )
    {
      v17 = &v13;
      v18 = 4;
      v19 = 0;
      TlgWrite(v7, &unk_18014741F, v8, v9, 3u, &pData);
    }
  }
  else
  {
    g_AudioJournal = 1;
  }
LABEL_14:
  LeaveCriticalSection(&stru_18018A398);
}
