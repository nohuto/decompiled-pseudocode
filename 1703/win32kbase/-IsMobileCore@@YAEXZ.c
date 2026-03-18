/*
 * XREFs of ?IsMobileCore@@YAEXZ @ 0x1C00666D8
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0065FD4 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x1C0066270 (CheckDwmProcessSecurityIdentifier.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00663B4 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     DwmSetProcessBreakOnTerminate @ 0x1C00FDCE0 (DwmSetProcessBreakOnTerminate.c)
 *     UserIsMobileCore @ 0x1C00FDDA0 (UserIsMobileCore.c)
 * Callees:
 *     ApiSetResolveToHost @ 0x1C006677C (ApiSetResolveToHost.c)
 */

char __fastcall IsMobileCore(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  __int64 CurrentProcess; // rax
  __int64 ProcessPeb; // rbx
  int v8; // r8d
  char v9; // cl
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  _WORD v11[12]; // [rsp+40h] [rbp-18h] BYREF
  char v12; // [rsp+60h] [rbp+8h] BYREF

  v4 = byte_1C018919C;
  if ( byte_1C018919C == -1 )
  {
    v4 = 0;
    v12 = 0;
    CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
    ProcessPeb = PsGetProcessPeb(CurrentProcess);
    RtlInitUnicodeString(&DestinationString, L"ext-ms-win-mobilecore-boot-l1-1-0");
    if ( (int)ApiSetResolveToHost(
                *(_QWORD *)(ProcessPeb + 104),
                (unsigned int)&DestinationString,
                v8,
                (unsigned int)&v12,
                (__int64)v11) < 0 )
    {
      v9 = v12;
    }
    else
    {
      if ( !v12 )
      {
LABEL_8:
        byte_1C018919C = v4;
        return v4;
      }
      v9 = v11[0] != 0 ? v12 : 0;
    }
    if ( v9 )
      v4 = 1;
    goto LABEL_8;
  }
  return v4;
}
