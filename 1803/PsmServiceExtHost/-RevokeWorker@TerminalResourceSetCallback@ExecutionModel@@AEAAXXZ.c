/*
 * XREFs of ?RevokeWorker@TerminalResourceSetCallback@ExecutionModel@@AEAAXXZ @ 0x18005CA94
 * Callers:
 *     ?RevokeWorkerCallback@TerminalResourceSetCallback@ExecutionModel@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18005CBE0 (-RevokeWorkerCallback@TerminalResourceSetCallback@ExecutionModel@@SAXPEAU_TP_CALLBACK_INSTANCE@@.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?RmpSystemTerminateHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180061B9C (-RmpSystemTerminateHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall ExecutionModel::TerminalResourceSetCallback::RevokeWorker(
        ExecutionModel::TerminalResourceSetCallback *this)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // [rsp+38h] [rbp-9h] BYREF
  __int64 v6; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  __int64 *v8; // [rsp+68h] [rbp+27h]
  int v9; // [rsp+70h] [rbp+2Fh]
  int v10; // [rsp+74h] [rbp+33h]
  __int64 *v11; // [rsp+78h] [rbp+37h]
  int v12; // [rsp+80h] [rbp+3Fh]
  int v13; // [rsp+84h] [rbp+43h]

  v1 = *((_QWORD *)this + 1);
  v5 = -1LL;
  v3 = 0LL;
  RmpAcquireGlobalLock();
  if ( *(_BYTE *)(v1 + 12) )
  {
    v3 = *(_QWORD *)(v1 + 1440);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 + 16)) <= 1 )
      __fastfail(0xEu);
    RmpReleaseGlobalLock();
    v5 = *(_QWORD *)(v3 + 32);
    RmpSystemTerminateHost((struct _RM_ACTIVITY_HOST *)v3);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 32LL))(v1, 0LL);
    RmpReleaseGlobalLock();
  }
  if ( v3 )
    RmpObjectRelease((char *)v3);
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 1) + 1880LL);
      v10 = 0;
      v13 = 0;
      v8 = &v6;
      v11 = &v5;
      v6 = v4;
      v9 = 8;
      v12 = 8;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007F922, 0LL, 0LL, 4u, &pData);
    }
  }
}
