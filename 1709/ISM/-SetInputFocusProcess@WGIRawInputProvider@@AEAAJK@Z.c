/*
 * XREFs of ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJK@Z @ 0x18009DEE8
 * Callers:
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x180055860 (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ.c)
 *     ??1WGIRawInputProvider@@UEAA@XZ @ 0x18009D214 (--1WGIRawInputProvider@@UEAA@XZ.c)
 *     ?Initialize@WGIRawInputProvider@@AEAAJXZ @ 0x18009D69C (-Initialize@WGIRawInputProvider@@AEAAJXZ.c)
 *     ?OnTargetWithFocusChanged@WGIRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x18009D950 (-OnTargetWithFocusChanged@WGIRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?WGIRawInputProvider_SetInputFocusProcess_@ISMTracing@@QEAAXAEBK@Z @ 0x18009D09C (-WGIRawInputProvider_SetInputFocusProcess_@ISMTracing@@QEAAXAEBK@Z.c)
 */

__int64 __fastcall WGIRawInputProvider::SetInputFocusProcess(WGIRawInputProvider *this, unsigned int a2)
{
  signed int v2; // ebx
  _DWORD *v4; // rcx
  ISMTracing *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rcx
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  unsigned int InBuffer; // [rsp+58h] [rbp+10h] BYREF

  InBuffer = a2;
  v2 = 0;
  if ( *((_BYTE *)this + 160) )
  {
    v9 = a2;
    RtlPublishWnfStateData(WNF_SHEL_FOCUS_CHANGE, 0LL, &v9, 4LL, 0LL);
    v4 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v4 && *v4 )
    {
      ISMTracing::Instance();
      ISMTracing::WGIRawInputProvider_SetInputFocusProcess_(v5, &v9);
    }
    v6 = (void *)*((_QWORD *)this + 7);
    if ( v6 != (void *)-1LL && !DeviceIoControl(v6, 0x40001C28u, &InBuffer, 4u, 0LL, 0, 0LL, 0LL) )
    {
      v2 = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
      if ( v2 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 341, v2);
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
    }
    a2 = InBuffer;
  }
  *((_DWORD *)this + 41) = a2;
  return (unsigned int)v2;
}
