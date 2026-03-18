/*
 * XREFs of ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C0120C14
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0130CD4 (UserActivateMITInputProcessing.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0130F14 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0039F28 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall InputExtensibilityCallout::OnInputThreadStateChanged(__int64 a1, int a2)
{
  InputExtensibilityCallout *v2; // rbp
  CInputThread *v4; // rdi
  bool v5; // bl
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BYTE *v8; // rsi
  char *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  char *v12; // rdi
  char *v13; // rbp
  __int64 v14; // xmm1_8
  _QWORD *v15; // rdi
  unsigned __int64 v16; // rbx
  _BYTE v17[240]; // [rsp+20h] [rbp-108h] BYREF

  v2 = gpInputExtensibilityCallout;
  v4 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0LL);
  v5 = CInputThread::_CalledOnInputThread(v4);
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( !v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  if ( !a2 )
  {
    memset(v17, 0, sizeof(v17));
    v8 = v17;
    v9 = (char *)v2 + 24;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v2 + 24, 0LL);
    if ( !*((_QWORD *)v2 + 5) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
    v12 = (char *)v2 + 48;
    v13 = (char *)v2 + 448;
    while ( v12 != v13 )
    {
      if ( *(_QWORD *)v12 )
      {
        if ( (*((_DWORD *)v12 + 4) & 2) != 0 )
        {
          v14 = *((_QWORD *)v12 + 4);
          *(_OWORD *)v8 = *((_OWORD *)v12 + 1);
          *((_QWORD *)v8 + 2) = v14;
          v8 += 24;
          if ( (unsigned __int64)((v8 - v17) / 24) > 0xA )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v8 - v17, (v8 - v17) / 24);
        }
      }
      v12 += 40;
    }
    ExReleasePushLockSharedEx(v9, 0LL);
    KeLeaveCriticalRegion();
    if ( v17 < v8 )
    {
      v15 = &v17[16];
      v16 = (v8 - v17 - 1) / 0x18uLL + 1;
      do
      {
        ((void (__fastcall *)(__int64, _QWORD))*(v15 - 1))(2LL, *v15);
        v15 += 3;
        --v16;
      }
      while ( v16 );
    }
  }
}
