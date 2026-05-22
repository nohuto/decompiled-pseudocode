/*
 * XREFs of ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z @ 0x180077280
 * Callers:
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x1800580B0 (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ.c)
 *     ??1WGIRawInputProvider@@UEAA@XZ @ 0x180076634 (--1WGIRawInputProvider@@UEAA@XZ.c)
 *     ?Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800768D0 (-Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 *     ?OnTargetWithFocusChanged@WGIRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x180076BC0 (-OnTargetWithFocusChanged@WGIRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?WGIRawInputProvider_SetInputFocusProcess_@ISMTracing@@QEAAXAEBK@Z @ 0x1800764B8 (-WGIRawInputProvider_SetInputFocusProcess_@ISMTracing@@QEAAXAEBK@Z.c)
 */

__int64 __fastcall WGIRawInputProvider::SetInputFocusProcess(WGIRawInputProvider *this, unsigned int a2, int a3)
{
  unsigned int LastError; // ebx
  _DWORD *v6; // rcx
  ISMTracing *v7; // rcx
  void *v8; // rcx
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF
  unsigned int InBuffer; // [rsp+58h] [rbp+10h] BYREF

  InBuffer = a2;
  LastError = 0;
  if ( !*((_BYTE *)this + 160) )
    goto LABEL_19;
  v10 = a2;
  if ( a3 )
    goto LABEL_8;
  RtlPublishWnfStateData(WNF_SHEL_FOCUS_CHANGE, 0LL, &v10, 4LL, 0LL);
  v6 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v6 && *v6 )
  {
    ISMTracing::Instance();
    ISMTracing::WGIRawInputProvider_SetInputFocusProcess_(v7, &v10);
  }
  if ( *((_DWORD *)this + 42) )
  {
    v10 = 0;
LABEL_8:
    RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_FOCUS_INFO, 0LL, &v10, 4LL, 0LL);
  }
  v8 = (void *)*((_QWORD *)this + 7);
  if ( v8 == (void *)-1LL
    || DeviceIoControl(v8, 0x40001C28u, &InBuffer, 4u, 0LL, 0, 0LL, 0LL)
    || ((int)GetLastError() > 0
      ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
      : (LastError = GetLastError()),
        (LastError & 0x80000000) == 0) )
  {
    a2 = InBuffer;
LABEL_19:
    *((_DWORD *)this + 41) = a2;
    *((_DWORD *)this + 42) = a3;
    return LastError;
  }
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
  return LastError;
}
