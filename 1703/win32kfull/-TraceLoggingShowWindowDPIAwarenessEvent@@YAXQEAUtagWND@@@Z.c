/*
 * XREFs of ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C010F4A0
 * Callers:
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     ProcessDpiAwarenessFromKernelDpiAwarenessContext @ 0x1C00BA0CC (ProcessDpiAwarenessFromKernelDpiAwarenessContext.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingShowWindowDPIAwarenessEvent(struct tagWND *const a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  const CHAR *ProcessImageFileName; // rax
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  __int64 i; // rdx
  int v10; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-48h] BYREF
  int *v13; // [rsp+70h] [rbp-38h]
  int v14; // [rsp+78h] [rbp-30h]
  int v15; // [rsp+7Ch] [rbp-2Ch]

  if ( (*(_DWORD *)(gpsi + 2220LL) & 0x20) == 0 )
  {
    v10 = ProcessDpiAwarenessFromKernelDpiAwarenessContext(*((_DWORD *)a1 + 92));
    if ( (v10 & 0xF) == 2 )
    {
      for ( i = *(_QWORD *)(PsGetCurrentProcessWin32Process(v2, v1) + 288); i; i = *(_QWORD *)(i + 584) )
      {
        if ( (**(_DWORD **)(i + 432) & 0x20000000) != 0 )
        {
          v10 = 128;
          break;
        }
      }
    }
    if ( dword_1C0324850 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x400000000000uLL) )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v4, v3);
        ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(*CurrentProcessWin32Process);
        TlgCreateSz(&pDesc, ProcessImageFileName);
        v15 = 0;
        v13 = &v10;
        v14 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EB99C, v7, v8, 4u, &pData);
      }
    }
  }
}
