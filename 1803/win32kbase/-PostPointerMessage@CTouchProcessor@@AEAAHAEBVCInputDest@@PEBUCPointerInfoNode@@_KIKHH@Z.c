/*
 * XREFs of ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0118E74
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C0112C94 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 * Callees:
 *     CheckAccessForIntegrityLevelEx @ 0x1C001E8B0 (CheckAccessForIntegrityLevelEx.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0036E3C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0036FA4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0039F28 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C004DDD4 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     EtwTraceUIPIInputError @ 0x1C0059990 (EtwTraceUIPIInputError.c)
 *     ApiSetEditionPostInputMessage @ 0x1C00651F8 (ApiSetEditionPostInputMessage.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     flagString @ 0x1C011F404 (flagString.c)
 *     messageString @ 0x1C011F530 (messageString.c)
 *     WPP_RECORDER_SF_LsHHsLLLL @ 0x1C011FB9C (WPP_RECORDER_SF_LsHHsLLLL.c)
 *     GetPointerInputSource @ 0x1C012EF40 (GetPointerInputSource.c)
 *     ApiSetEditionIsGpqForegroundAccessible @ 0x1C013EB24 (ApiSetEditionIsGpqForegroundAccessible.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::PostPointerMessage(
        CTouchProcessor *this,
        const struct CInputDest *a2,
        const struct CPointerInfoNode *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 Queue; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagTHREADINFO *ThreadInfo; // rbp
  CInputThread *v15; // rdi
  bool v16; // bl
  __int64 v17; // rax
  unsigned int v18; // esi
  __int64 v19; // rdi
  __int64 v20; // rax
  int v21; // edx
  int v22; // r8d
  int v23; // r9d
  unsigned int v24; // edi
  __int64 v26; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+20h]

  v27 = a4;
  if ( !(unsigned int)ApiSetEditionIsGpqForegroundAccessible(a7) )
    return 0LL;
  Queue = CInputDest::GetQueue(a2, 0LL);
  if ( Queue )
  {
    ThreadInfo = CInputDest::GetThreadInfo(a2);
    if ( !ThreadInfo )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
    if ( a7 )
    {
      if ( (*(_DWORD *)a3 & 0x800) == 0
        && !CheckAccessForIntegrityLevelEx(
              *(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 872LL),
              *(_QWORD *)(Queue + 428),
              0)
        && !a8 )
      {
        UserSetLastError(5);
LABEL_11:
        EtwTraceUIPIInputError(gptiCurrent, ThreadInfo, Queue, *(_QWORD *)(Queue + 428), 8);
        return 0LL;
      }
      v15 = gpInputThread;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v15, 0LL);
      v16 = CInputThread::_CalledOnInputThread(v15);
      ExReleasePushLockSharedEx(v15, 0LL);
      KeLeaveCriticalRegion();
      if ( v16 && (*(_DWORD *)a3 & 0x800) == 0 && !a8 )
      {
        v17 = HMValidateHandleNoSecure(*((_QWORD *)a3 + 31), 19);
        if ( v17 )
        {
          if ( !CheckAccessForIntegrityLevelEx(*(_QWORD *)(*(_QWORD *)(v17 + 480) + 856LL), *(_QWORD *)(Queue + 428), 0) )
            goto LABEL_11;
        }
      }
    }
  }
  v18 = a5;
  v19 = *((unsigned __int16 *)a3 + 118);
  if ( a5 != 595 )
    v19 = ((unsigned __int16)(*((_WORD *)a3 + 122) & 0xE1F7) << 16) | (unsigned __int64)v19;
  GetPointerInputSource(*((unsigned int *)a3 + 58), a7, a8, &v26);
  v20 = flagString(WORD1(v19));
  messageString(v18, v20);
  WPP_RECORDER_SF_LsHHsLLLL(*((_QWORD *)this + 1), v21, v22, v23);
  CInpLockGuard::UnLock((PERESOURCE *)this + 9);
  v24 = ApiSetEditionPostInputMessage(
          (__int64)a2,
          0LL,
          v18,
          v19,
          v27,
          a6,
          *((_QWORD *)a3 + 39),
          0LL,
          *((_DWORD *)a3 + 94) != 0 ? 8 : 0,
          &v26,
          0LL,
          0LL);
  if ( v24 )
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 4u, 0xBu, 0x11Cu, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  CInpLockGuard::LockExclusive((PERESOURCE *)this + 9);
  return v24;
}
