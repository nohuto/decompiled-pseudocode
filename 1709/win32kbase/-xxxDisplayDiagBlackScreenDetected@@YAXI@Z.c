/*
 * XREFs of ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00DD980
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C0073750 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     _TlgKeywordOn @ 0x1C001C648 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C00DD8DC (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     xxxUserSetDisplayConfig @ 0x1C00DDDC0 (xxxUserSetDisplayConfig.c)
 *     DrvDxgkPollDisplayChildren @ 0x1C00F9D90 (DrvDxgkPollDisplayChildren.c)
 */

void __fastcall xxxDisplayDiagBlackScreenDetected(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rdi
  __int64 *DomainLockRef; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  LARGE_INTEGER *v24; // rbx
  struct tagTHREADINFO *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 *v30; // rdi
  __int64 *v31; // rbx
  const GUID *v32; // r9
  unsigned __int16 v33; // r10
  __int64 v34; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v35[2]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v36[4]; // [rsp+68h] [rbp-A0h] BYREF
  tagObjLock *v37; // [rsp+88h] [rbp-80h] BYREF
  tagObjLock *v38; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v39[10]; // [rsp+98h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  char *v41; // [rsp+108h] [rbp+0h]
  __int64 v42; // [rsp+110h] [rbp+8h]
  char *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  _QWORD *v45; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]
  _QWORD *v47; // [rsp+138h] [rbp+30h]
  __int64 v48; // [rsp+140h] [rbp+38h]
  _QWORD *v49; // [rsp+148h] [rbp+40h]
  __int64 v50; // [rsp+150h] [rbp+48h]
  char *v51; // [rsp+158h] [rbp+50h]
  __int64 v52; // [rsp+160h] [rbp+58h]
  char *v53; // [rsp+168h] [rbp+60h]
  __int64 v54; // [rsp+170h] [rbp+68h]
  _DWORD *v55; // [rsp+178h] [rbp+70h]
  __int64 v56; // [rsp+180h] [rbp+78h]
  const GUID *v57; // [rsp+188h] [rbp+80h]
  _DWORD v58[2]; // [rsp+190h] [rbp+88h] BYREF
  int *v59; // [rsp+198h] [rbp+90h]
  __int64 v60; // [rsp+1A0h] [rbp+98h]
  int v61; // [rsp+1D8h] [rbp+D0h] BYREF

  v61 = a1;
  memset(v39, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v39[1]);
  v39[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v39[4]) = v61;
  LODWORD(v39[3]) = 15;
  LOBYTE(v39[6]) = -1;
  while ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
  {
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v1, v2, v3);
    KeWaitForSingleObject(gpevtVideoportCallout, WrUserRequest, 0, 0, 0LL);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5, v4, v6, v7);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v9 = EnterCritAvoidingDitHitTestHazard(0, 1);
    EtwTraceAcquiredExclusiveUserCrit(v11, v10, v12, v13);
    gptiCurrent = v9;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v37);
    v14 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      DomainLockRef = GetDomainLockRef(8);
      do
      {
        gpducstulHead = v14[2];
        v14[2] = 0LL;
        tagObjLock::UnLock((tagObjLock *)DomainLockRef);
        HMUnlockObject(*v14);
        RIMLockExclusive((__int64)DomainLockRef);
        v14 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
    }
    tagObjLock::UnLock(v37);
  }
  memset(v36, 0, sizeof(v36));
  LOWORD(v36[0]) = gProtocolType;
  if ( !gProtocolType )
  {
    DisplayDiagRecordActiveTopology((struct USER_DETECTED_BLACK_SCREEN_REPORT *)v36);
    HIDWORD(v36[0]) = 1;
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v16, v17, v18);
    v35[0] = 0;
    v35[1] = 26;
    v19 = DrvDxgkPollDisplayChildren(v35);
    LODWORD(v36[1]) = v19;
    v24 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v21, v20, v22, v23);
    if ( v24 )
      v24[1] = KeQueryPerformanceCounter(0LL);
    v25 = EnterCritAvoidingDitHitTestHazard(0, 1);
    EtwTraceAcquiredExclusiveUserCrit(v27, v26, v28, v29);
    gptiCurrent = v25;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v38);
    v30 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      v31 = GetDomainLockRef(8);
      do
      {
        gpducstulHead = v30[2];
        v30[2] = 0LL;
        tagObjLock::UnLock((tagObjLock *)v31);
        HMUnlockObject(*v30);
        RIMLockExclusive((__int64)v31);
        v30 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
    }
    tagObjLock::UnLock(v38);
    if ( v19 >= 0 )
      HIDWORD(v36[1]) = xxxUserSetDisplayConfig(0, 0, 391, 128, 0LL, 0, (__int64)&v34, 0LL, (__int64)v39);
  }
  v32 = (const GUID *)v36[3];
  if ( dword_1C01880D0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01880D0, 0x400000000008uLL) )
  {
    v42 = 2LL;
    WORD1(v34) = 4;
    v41 = (char *)&v34 + 2;
    v43 = (char *)v36 + 4;
    v45 = v36;
    v47 = &v36[2];
    v49 = &v36[1];
    v51 = (char *)&v36[1] + 4;
    v53 = (char *)&v36[2] + 4;
    v55 = v58;
    v58[0] = v33;
    v59 = &v61;
    v44 = 4LL;
    v46 = 2LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 4LL;
    v54 = 4LL;
    v56 = 2LL;
    v57 = v32;
    v58[1] = 0;
    v60 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C01880D0, &unk_1C016A238, 0LL, v32, 0xCu, &pData);
    v32 = (const GUID *)v36[3];
  }
  if ( v32 )
    Win32FreePool((__int64)v32);
}
