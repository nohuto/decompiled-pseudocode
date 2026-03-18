/*
 * XREFs of ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0123D54
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011F470 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0047EBC (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0047F6C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C007B40C (CheckAccessForIntegrityLevelEx.c)
 *     ApiSetEditionPostInputMessage @ 0x1C00805C8 (ApiSetEditionPostInputMessage.c)
 *     EtwTraceUIPIInputError @ 0x1C008B6E0 (EtwTraceUIPIInputError.c)
 *     flagString @ 0x1C0129468 (flagString.c)
 *     messageString @ 0x1C0129594 (messageString.c)
 *     WPP_RECORDER_SF_LsHHsLLLL @ 0x1C0129AE8 (WPP_RECORDER_SF_LsHHsLLLL.c)
 *     GetPointerInputSource @ 0x1C012F100 (GetPointerInputSource.c)
 *     ApiSetEditionIsGpqForegroundAccessible @ 0x1C013B0E0 (ApiSetEditionIsGpqForegroundAccessible.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  bool v18; // bl
  __int64 v19; // rax
  unsigned int v20; // ebp
  unsigned __int16 v21; // si
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  int v24; // edx
  int v25; // r8d
  int v26; // r9d
  struct _ERESOURCE *v27; // rcx
  int v28; // edx
  unsigned int v29; // edi
  __int64 v31; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+20h]

  v32 = a4;
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
              *(_QWORD *)(*((_QWORD *)gptiCurrent + 47) + 824LL),
              *(_QWORD *)(Queue + 380),
              0)
        && !a8 )
      {
        UserSetLastError(5LL, v14, v15, v16);
LABEL_9:
        EtwTraceUIPIInputError(gptiCurrent, ThreadInfo, Queue, *(_QWORD *)(Queue + 380), 8);
        return 0LL;
      }
      v17 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v17, 0LL);
      v18 = (unsigned int)PsGetCurrentThreadId() == *(_DWORD *)(v17 + 40);
      ExReleasePushLockSharedEx(v17, 0LL);
      KeLeaveCriticalRegion();
      if ( v18 && (*(_DWORD *)a3 & 0x800) == 0 && !a8 )
      {
        v19 = HMValidateHandleNoSecure(*((_QWORD *)a3 + 33), 19);
        if ( v19 )
        {
          if ( !CheckAccessForIntegrityLevelEx(
                  *(_QWORD *)(*(_QWORD *)(v19 + 472) + 1520LL),
                  *(_QWORD *)(Queue + 380),
                  0) )
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
    v22 = v21 | ((unsigned __int64)(*((_WORD *)a3 + 130) & 0xE1F7) << 16);
  GetPointerInputSource(*((unsigned int *)a3 + 62), a7, a8, &v31);
  v23 = flagString(WORD1(v22));
  messageString(v20, v23);
  WPP_RECORDER_SF_LsHHsLLLL(*((_QWORD *)this + 1), v24, v25, v26);
  v27 = (struct _ERESOURCE *)*((_QWORD *)this + 25);
  *((_QWORD *)this + 29) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v27);
  v29 = ApiSetEditionPostInputMessage(
          (__int64)a2,
          (__int64)CBaseProcessor::_spfnQMsgCallback,
          0LL,
          v20,
          v22,
          v32,
          a6,
          *((_QWORD *)a3 + 41),
          0LL,
          0,
          &v31,
          0LL,
          0LL,
          *((_DWORD *)a3 + 98) != 0);
  if ( v29 )
  {
    LOBYTE(v28) = 4;
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), v28, 11, 265, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  CInpLockGuard::LockExclusive((PERESOURCE *)this + 25);
  return v29;
}
