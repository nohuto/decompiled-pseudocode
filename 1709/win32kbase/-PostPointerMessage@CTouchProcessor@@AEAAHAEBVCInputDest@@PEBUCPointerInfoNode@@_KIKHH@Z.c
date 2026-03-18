/*
 * XREFs of ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C01233C8
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011E310 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     EtwTraceUIPIInputError @ 0x1C000EFC0 (EtwTraceUIPIInputError.c)
 *     ApiSetEditionPostInputMessage @ 0x1C00129F8 (ApiSetEditionPostInputMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0017230 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00172E4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C0073EF4 (CheckAccessForIntegrityLevelEx.c)
 *     flagString @ 0x1C0128D18 (flagString.c)
 *     messageString @ 0x1C0128E44 (messageString.c)
 *     WPP_RECORDER_SF_LsHHsLLLL @ 0x1C0129434 (WPP_RECORDER_SF_LsHHsLLLL.c)
 *     GetPointerInputSource @ 0x1C012E7B0 (GetPointerInputSource.c)
 *     ApiSetEditionIsGpqForegroundAccessible @ 0x1C013A3A4 (ApiSetEditionIsGpqForegroundAccessible.c)
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
  struct tagTHREADINFO *ThreadInfo; // rbp
  int v13; // edx
  __int64 v14; // rdi
  bool v15; // bl
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned int v20; // ebp
  unsigned __int16 v21; // si
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  int v24; // edx
  int v25; // r8d
  int v26; // r9d
  struct _ERESOURCE *v27; // rcx
  unsigned int v28; // edi
  __int64 v30; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v31; // [rsp+B8h] [rbp+20h]

  v31 = a4;
  if ( !(unsigned int)ApiSetEditionIsGpqForegroundAccessible(a7) )
    return 0LL;
  Queue = CInputDest::GetQueue(a2, 0);
  if ( Queue )
  {
    ThreadInfo = CInputDest::GetThreadInfo(a2);
    if ( a7 != v13 )
    {
      if ( (*(_DWORD *)a3 & 0x800) == 0
        && !CheckAccessForIntegrityLevelEx(
              *(_QWORD *)(*((_QWORD *)gptiCurrent + 50) + 832LL),
              *(_QWORD *)(Queue + 420),
              0)
        && !a8 )
      {
        UserSetLastError(5);
LABEL_9:
        EtwTraceUIPIInputError(gptiCurrent, ThreadInfo, Queue, *(_QWORD *)(Queue + 420), 8);
        return 0LL;
      }
      v14 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v14, 0LL);
      v15 = (unsigned int)PsGetCurrentThreadId() == *(_DWORD *)(v14 + 40);
      ExReleasePushLockSharedEx(v14, 0LL);
      KeLeaveCriticalRegion();
      if ( v15 && (*(_DWORD *)a3 & 0x800) == 0 && !a8 )
      {
        LOBYTE(v16) = 19;
        v19 = HMValidateHandleNoSecure(*((_QWORD *)a3 + 33), v16, v17, v18);
        if ( v19 )
        {
          if ( !CheckAccessForIntegrityLevelEx(*(_QWORD *)(*(_QWORD *)(v19 + 472) + 856LL), *(_QWORD *)(Queue + 420), 0) )
            goto LABEL_9;
        }
      }
    }
  }
  v20 = a5;
  v21 = *((_WORD *)a3 + 126);
  if ( a5 == 595 )
    v22 = v21;
  else
    v22 = v21 | (unsigned __int64)((unsigned __int16)(*((_WORD *)a3 + 130) & 0xE1F7) << 16);
  GetPointerInputSource(*((unsigned int *)a3 + 62), a7, a8, &v30);
  v23 = flagString(WORD1(v22));
  messageString(v20, v23);
  WPP_RECORDER_SF_LsHHsLLLL(*((_QWORD *)this + 1), v24, v25, v26);
  v27 = (struct _ERESOURCE *)*((_QWORD *)this + 28);
  *((_QWORD *)this + 32) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v27);
  v28 = ApiSetEditionPostInputMessage(
          (__int64)a2,
          (__int64)CBaseProcessor::_spfnQMsgCallback,
          0LL,
          v20,
          v22,
          v31,
          a6,
          *((_QWORD *)a3 + 41),
          0LL,
          *((_DWORD *)a3 + 98) != 0 ? 8 : 0,
          &v30,
          0LL,
          0LL);
  if ( v28 )
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 4u, 0xBu, 0x109u, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  CInpLockGuard::LockExclusive((PERESOURCE *)this + 28);
  return v28;
}
