/*
 * XREFs of ?Initialize@CDWMInputThread@@AEAAJXZ @ 0x1801A07AC
 * Callers:
 *     ?Create@CDWMInputThread@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1801A070C (-Create@CDWMInputThread@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x180075BC8 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180076E2C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CDWMInputThread::Initialize(CDWMInputThread *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  HANDLE EventW; // rax
  signed int LastError; // eax
  DWORD v6; // r9d
  HANDLE v7; // rax
  signed int v8; // eax
  unsigned int v10; // [rsp+20h] [rbp-B8h]
  unsigned __int16 v11[66]; // [rsp+30h] [rbp-A8h] BYREF
  int v12; // [rsp+B4h] [rbp-24h]

  memset_0(v11, 0, 0x90uLL);
  StringCchCopyW(v11, 0x40uLL, (size_t *)L"Capture");
  v12 = 1;
  v2 = CMmcssTask::Set((CDWMInputThread *)((char *)this + 32), (const struct DWM_MMTASK *)v11, 0);
  v3 = v2;
  if ( v2 < 0 )
  {
    v10 = 84;
    v6 = v2;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, v10);
    return v3;
  }
  SetLastError(0);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 2) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    v10 = 90;
LABEL_6:
    if ( (v3 & 0x80000000) == 0 )
      v3 = -2003304445;
    v6 = v3;
    goto LABEL_14;
  }
  SetLastError(0);
  v7 = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 14) = v7;
  if ( !v7 )
  {
    v8 = GetLastError();
    v3 = v8;
    if ( v8 > 0 )
      v3 = (unsigned __int16)v8 | 0x80070000;
    v10 = 96;
    goto LABEL_6;
  }
  return v3;
}
