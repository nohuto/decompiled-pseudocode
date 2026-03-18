/*
 * XREFs of ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C00435EC
 * Callers:
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00414C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     ProcessDpiAwarenessFromKernelDpiAwarenessContext @ 0x1C00432FC (ProcessDpiAwarenessFromKernelDpiAwarenessContext.c)
 *     _TlgCreateSz @ 0x1C0043700 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingShowWindowDPIAwarenessEvent(struct tagWND *const a1)
{
  _QWORD *CurrentProcessWin32Process; // rax
  const CHAR *ProcessImageFileName; // rax
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  __int64 i; // rdx
  int v6; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  int *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( (*(_DWORD *)(gpsi + 2220LL) & 0x20) == 0 )
  {
    v6 = ProcessDpiAwarenessFromKernelDpiAwarenessContext(*((_DWORD *)a1 + 92));
    if ( (v6 & 0xF) == 2 )
    {
      for ( i = *(_QWORD *)(PsGetCurrentProcessWin32Process() + 296); i; i = *(_QWORD *)(i + 640) )
      {
        if ( (**(_DWORD **)(i + 456) & 0x20000000) != 0 )
        {
          v6 = 128;
          break;
        }
      }
    }
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process();
        ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(*CurrentProcessWin32Process);
        TlgCreateSz(&pDesc, ProcessImageFileName);
        v11 = 0;
        v9 = &v6;
        v10 = 4;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E849F, v3, v4, 4u, &pData);
      }
    }
  }
}
