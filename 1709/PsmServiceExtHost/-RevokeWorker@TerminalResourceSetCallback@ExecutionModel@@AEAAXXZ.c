/*
 * XREFs of ?RevokeWorker@TerminalResourceSetCallback@ExecutionModel@@AEAAXXZ @ 0x18003DA00
 * Callers:
 *     ?RevokeWorkerCallback@TerminalResourceSetCallback@ExecutionModel@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003DB30 (-RevokeWorkerCallback@TerminalResourceSetCallback@ExecutionModel@@SAXPEAU_TP_CALLBACK_INSTANCE@@.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18001549C (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ?RmpSystemTerminateHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180041490 (-RmpSystemTerminateHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall ExecutionModel::TerminalResourceSetCallback::RevokeWorker(
        ExecutionModel::TerminalResourceSetCallback *this)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  unsigned int v4; // edx
  const GUID *v5; // r8
  const GUID *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // [rsp+38h] [rbp-9h] BYREF
  __int64 v9; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  __int64 *v11; // [rsp+68h] [rbp+27h]
  int v12; // [rsp+70h] [rbp+2Fh]
  int v13; // [rsp+74h] [rbp+33h]
  __int64 *v14; // [rsp+78h] [rbp+37h]
  int v15; // [rsp+80h] [rbp+3Fh]
  int v16; // [rsp+84h] [rbp+43h]

  v1 = *((_QWORD *)this + 1);
  v8 = -1LL;
  v3 = 0LL;
  RmpAcquireGlobalLock();
  if ( *(_BYTE *)(v1 + 12) )
  {
    v3 = *(_QWORD *)(v1 + 1440);
    RmpObjectAddRef((struct _RM_OBJECT_HEADER *)v3);
    RmpReleaseGlobalLock();
    v8 = *(_QWORD *)(v3 + 24);
    RmpSystemTerminateHost((struct _RM_ACTIVITY_HOST *)v3, v4);
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
      v7 = *(_QWORD *)(*((_QWORD *)this + 1) + 1896LL);
      v13 = 0;
      v16 = 0;
      v11 = &v9;
      v14 = &v8;
      v9 = v7;
      v12 = 8;
      v15 = 8;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800596E3, v5, v6, 4u, &pData);
    }
  }
}
