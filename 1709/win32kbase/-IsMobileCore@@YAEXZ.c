/*
 * XREFs of ?IsMobileCore@@YAEXZ @ 0x1C007ACF4
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C007A88C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x1C007AA70 (CheckDwmProcessSecurityIdentifier.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007AADC (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     DwmSetProcessBreakOnTerminate @ 0x1C00FE000 (DwmSetProcessBreakOnTerminate.c)
 *     UserIsMobileCore @ 0x1C00FE0C0 (UserIsMobileCore.c)
 * Callees:
 *     ApiSetResolveToHost @ 0x1C007AD98 (ApiSetResolveToHost.c)
 */

char __fastcall IsMobileCore(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 CurrentProcess; // rax
  __int64 ProcessPeb; // rbx
  int v6; // r8d
  char v7; // cl
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  _WORD v9[12]; // [rsp+40h] [rbp-18h] BYREF
  char v10; // [rsp+60h] [rbp+8h] BYREF

  v2 = byte_1C018DCEC;
  if ( byte_1C018DCEC == -1 )
  {
    v2 = 0;
    v10 = 0;
    CurrentProcess = PsGetCurrentProcess(a1, a2);
    ProcessPeb = PsGetProcessPeb(CurrentProcess);
    RtlInitUnicodeString(&DestinationString, L"ext-ms-win-mobilecore-boot-l1-1-0");
    if ( (int)ApiSetResolveToHost(
                *(_QWORD *)(ProcessPeb + 104),
                (unsigned int)&DestinationString,
                v6,
                (unsigned int)&v10,
                (__int64)v9) < 0 )
    {
      v7 = v10;
    }
    else
    {
      if ( !v10 )
      {
LABEL_8:
        byte_1C018DCEC = v2;
        return v2;
      }
      v7 = v9[0] != 0 ? v10 : 0;
    }
    if ( v7 )
      v2 = 1;
    goto LABEL_8;
  }
  return v2;
}
