/*
 * XREFs of ?Initialize@WGIRawInputProvider@@AEAAJXZ @ 0x18009D69C
 * Callers:
 *     ?Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18009D530 (-Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJK@Z @ 0x18009DEE8 (-SetInputFocusProcess@WGIRawInputProvider@@AEAAJK@Z.c)
 *     ?StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x18009DFF8 (-StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WGIRawInputProvider::Initialize(WGIRawInputProvider *this)
{
  _QWORD *v1; // rbx
  __int64 v3; // rcx
  int started; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // r9d
  HANDLE FileW; // rax
  HANDLE v9; // rcx
  HANDLE v10; // rbx
  __int64 v11; // rcx
  signed int v12; // ebx
  signed int LastError; // eax
  unsigned __int64 v15; // rcx
  DWORD CurrentProcessId; // [rsp+50h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 40);
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
  {
    *v1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  started = CoreUICreate(v1);
  v6 = started;
  if ( started >= 0 )
  {
    if ( ((1LL << gdwDeviceFamily) & 0x1820) != 0 )
    {
      FileW = CreateFileW(L"\\\\.\\XboxGIP_Admin", 0xC0000000, 3u, 0LL, 3u, 0xA0000000, 0LL);
      v9 = (HANDLE)*((_QWORD *)this + 7);
      v10 = FileW;
      if ( FileW != v9 )
      {
        if ( v9 != (HANDLE)-1LL )
        {
          if ( !CloseHandle(v9) )
          {
            LastError = GetLastError();
            v15 = (unsigned __int16)LastError | 0x80070000;
            if ( LastError <= 0 )
              v15 = (unsigned int)LastError;
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v15);
            JUMPOUT(0x18009D863LL);
          }
          *((_QWORD *)this + 7) = -1LL;
        }
        *((_QWORD *)this + 7) = v10;
      }
      if ( *((_QWORD *)this + 7) == -1LL )
      {
        v12 = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
        if ( v12 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 0, 108, v12);
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
      }
    }
    started = WGIRawInputProvider::SetInputFocusProcess(this, 0);
    v6 = started;
    if ( started >= 0 )
    {
      CurrentProcessId = GetCurrentProcessId();
      RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_LISTENER_INFO, 0LL, &CurrentProcessId, 4LL, 0LL);
      started = WGIRawInputProvider::StartRawGameControllerWatcher(this);
      v6 = started;
      if ( started < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 114;
        goto LABEL_28;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 112;
      goto LABEL_28;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 81;
LABEL_28:
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v7, started);
  }
  return v6;
}
