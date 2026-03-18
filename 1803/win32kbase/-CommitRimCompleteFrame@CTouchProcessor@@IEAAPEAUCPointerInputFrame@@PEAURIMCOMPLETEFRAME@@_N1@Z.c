/*
 * XREFs of ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C010EE34
 * Callers:
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0119A94 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0119C5C (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0125D88 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     HMAssignmentLock @ 0x1C00374D0 (HMAssignmentLock.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     HMValidateHandleNoSecure @ 0x1C004DDD4 (HMValidateHandleNoSecure.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C00AB670 (EtwTraceBeginPointerFrameCommit.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C010D3F8 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C010EDA8 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C0112154 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C011232C (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C0141310 (ApiSetResetLastSeenFrameId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::CommitRimCompleteFrame(
        CTouchProcessor *this,
        struct RIMCOMPLETEFRAME *a2,
        char a3,
        char a4)
{
  CTouchProcessor *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  PDEVICE_OBJECT v9; // rcx
  unsigned __int16 v10; // r9
  char *v11; // rcx
  KPROCESSOR_MODE v12; // r8
  int v13; // eax
  unsigned __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  const GUID *v17; // r8
  __int64 v18; // rdx
  char *v19; // rbx
  struct CPointerQFrame *v20; // rax
  unsigned __int64 v21; // rcx
  _DWORD *v22; // r12
  __int64 v23; // r13
  _OWORD *v24; // rdi
  __int64 v25; // rdx
  _OWORD *v26; // rcx
  struct A0xad387374::CFrameIdGenerator *v27; // r14
  int v28; // r13d
  _QWORD *v29; // r13
  __int64 v30; // r14
  _QWORD *v31; // r15
  void *v32; // rax
  CTouchProcessor *v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // r14
  CTouchProcessor *v37; // rcx
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  CInpLockGuard *v40; // [rsp+38h] [rbp-48h] BYREF
  int v41; // [rsp+40h] [rbp-40h]
  __int128 v42; // [rsp+50h] [rbp-30h]
  CInpLockGuard *v43; // [rsp+60h] [rbp-20h] BYREF
  int v44; // [rsp+68h] [rbp-18h]
  __int128 v45; // [rsp+70h] [rbp-10h] BYREF

  v6 = this;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x9Eu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v43,
    (CTouchProcessor *)((char *)v6 + 72));
  if ( *((struct _KTHREAD **)v6 + 13) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  if ( a4 )
  {
    if ( *((_DWORD *)v6 + 53) )
    {
      WPP_RECORDER_SF_(*((_QWORD *)v6 + 1), 3u, 0xBu, 0x9Fu, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v9 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v10 = 160;
LABEL_62:
        WPP_RECORDER_SF_(
          (__int64)v9->DeviceExtension,
          5u,
          0xBu,
          v10,
          (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
        goto LABEL_63;
      }
      goto LABEL_63;
    }
LABEL_12:
    v11 = (char *)*((_QWORD *)a2 + 4);
    v12 = *((_DWORD *)a2 + 12) == 0;
    Object = 0LL;
    v13 = RawInputManagerDeviceObjectResolveHandle(v11, 3u, v12, &Object);
    if ( v13 < 0 )
    {
      WPP_RECORDER_SF_d(
        *((_QWORD *)v6 + 1),
        2u,
        0xBu,
        0xA3u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids,
        v13);
      v9 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v10 = 164;
        goto LABEL_62;
      }
    }
    else
    {
      v14 = 0LL;
      if ( Object != (PVOID)-80LL )
        v14 = *((_QWORD *)Object + 10);
      ObfDereferenceObject(Object);
      Object = (PVOID)HMValidateHandleNoSecure(v14, 19);
      if ( !Object )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15);
      v18 = *((unsigned int *)a2 + 6);
      if ( !(_DWORD)v18 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v18);
        LODWORD(v18) = *((_DWORD *)a2 + 6);
      }
      EtwTraceBeginPointerFrameCommit(0LL, v18, v17);
      v19 = (char *)Win32AllocPoolZInit(0x78uLL, 0x66707355u);
      if ( v19 )
      {
        v20 = CTouchProcessor::AllocPointerQFrameList((struct _KTHREAD **)v6, *((unsigned int *)a2 + 6));
        *((_QWORD *)v19 + 13) = v20;
        if ( v20 )
        {
          v21 = 576LL * *((unsigned int *)a2 + 6);
          if ( v21 <= 0xFFFFFFFF )
            *((_QWORD *)v19 + 12) = Win32AllocPoolZInit((unsigned int)v21, 0x65707355u);
          if ( *((_QWORD *)v19 + 12) )
          {
            v22 = (_DWORD *)*((_QWORD *)a2 + 11);
            v23 = 0LL;
            if ( *((_DWORD *)a2 + 6) )
            {
              v24 = v22 + 2;
              do
              {
                v25 = 576 * v23;
                *(_DWORD *)(*((_QWORD *)v19 + 12) + v25 + 220) = *v22;
                v26 = (_OWORD *)(576 * v23 + *((_QWORD *)v19 + 12) + 224LL);
                *v26 = *v24;
                v26[1] = v24[1];
                v26[2] = v24[2];
                v26[3] = v24[3];
                v26[4] = v24[4];
                v26[5] = v24[5];
                v26[6] = v24[6];
                v26[7] = v24[7];
                v26[8] = v24[8];
                v26[9] = v24[9];
                *(_QWORD *)(*((_QWORD *)v19 + 12) + v25 + 248) = v14;
                CInputDest::SetEmpty((CInputDest *)(576 * v23 + *((_QWORD *)v19 + 12) + 392LL));
                v23 = (unsigned int)(v23 + 1);
                v22 += 42;
                v24 = (_OWORD *)((char *)v24 + 168);
              }
              while ( (unsigned int)v23 < *((_DWORD *)a2 + 6) );
              v6 = this;
            }
            v27 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
            CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
              (CInpLockGuardExclusiveIfNeeded *)&v40,
              (struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance + 8));
            v28 = (*(_DWORD *)v27)++;
            if ( v28 == -1 )
            {
              *(_DWORD *)v27 = 1;
              ApiSetResetLastSeenFrameId();
            }
            if ( !v41 )
              CInpLockGuard::UnLock((PERESOURCE *)v40);
            *((_DWORD *)v19 + 10) = v28;
            v29 = 0LL;
            *((_DWORD *)v19 + 12) = *((_DWORD *)a2 + 6);
            *((_QWORD *)v19 + 8) = v14;
            *((_QWORD *)v19 + 9) = *((_QWORD *)a2 + 5);
            *((_DWORD *)v19 + 14) = *((_DWORD *)a2 + 7);
            *(_QWORD *)v19 = gpTouchProcessor;
            v30 = *((_QWORD *)a2 + 10);
            while ( 1 )
            {
              if ( !v30 )
              {
                *(_QWORD *)&v42 = v19 + 112;
                *((_QWORD *)&v42 + 1) = *((_QWORD *)Object + 60);
                v45 = v42;
                HMAssignmentLock((__int64)&v45);
                if ( !a3 )
                {
                  CTouchProcessor::CommitInputFrame((struct _KTHREAD **)v6, (struct CPointerInputFrame *)v19);
                  if ( a4 )
                  {
                    *((_DWORD *)v19 + 20) |= 0x100u;
                    ++*((_DWORD *)v6 + 52);
                  }
                  else
                  {
                    ++*((_DWORD *)v6 + 53);
                  }
                }
                *((_QWORD *)v19 + 4) = v19 + 24;
                *((_QWORD *)v19 + 3) = v19 + 24;
                if ( a3 )
                  *((_DWORD *)v19 + 20) |= 0x200u;
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    5u,
                    0xBu,
                    0xAEu,
                    (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
                goto LABEL_64;
              }
              v31 = Win32AllocPoolZInit(0x20uLL, 0x64727355u);
              if ( !v31 )
                break;
              v32 = Win32AllocPoolZInit(*(unsigned int *)(v30 + 4), 0x64727355u);
              v31[2] = v32;
              *((_DWORD *)v31 + 1) = *(_DWORD *)v30;
              *((_DWORD *)v31 + 2) = *(_DWORD *)(v30 + 4);
              memmove(v32, *(const void **)(v30 + 8), *(unsigned int *)(v30 + 4));
              if ( v29 )
                v29[3] = v31;
              else
                *((_QWORD *)v19 + 11) = v31;
              v30 = *(_QWORD *)(v30 + 16);
              v29 = v31;
            }
            WPP_RECORDER_SF_(
              *((_QWORD *)v6 + 1),
              2u,
              0xBu,
              0xACu,
              (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
            v34 = *((_QWORD *)v19 + 11);
            while ( v34 )
            {
              v35 = *(_QWORD *)(v34 + 16);
              v36 = v34;
              if ( v35 )
                Win32FreePool(v35);
              v34 = *(_QWORD *)(v34 + 24);
              Win32FreePool(v36);
            }
            CTouchProcessor::FreePointerInfoList(v33, *((struct CPointerInfoNode **)v19 + 12), *((_DWORD *)a2 + 6));
            CTouchProcessor::FreePointerQFrameList(v37, *((struct CPointerQFrame **)v19 + 13), *((_DWORD *)a2 + 6));
            Win32FreePool((__int64)v19);
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                0xBu,
                0xADu,
                (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
          }
          else
          {
            CTouchProcessor::FreePointerQFrameList(
              (CTouchProcessor *)v21,
              *((struct CPointerQFrame **)v19 + 13),
              *((_DWORD *)a2 + 6));
            Win32FreePool((__int64)v19);
            WPP_RECORDER_SF_(
              *((_QWORD *)v6 + 1),
              2u,
              0xBu,
              0xA9u,
              (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
            v9 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              v10 = 170;
              goto LABEL_62;
            }
          }
        }
        else
        {
          Win32FreePool((__int64)v19);
          WPP_RECORDER_SF_(
            *((_QWORD *)v6 + 1),
            2u,
            0xBu,
            0xA7u,
            (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
          v9 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v10 = 168;
            goto LABEL_62;
          }
        }
      }
      else
      {
        WPP_RECORDER_SF_(
          *((_QWORD *)v6 + 1),
          2u,
          0xBu,
          0xA5u,
          (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
        v9 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v10 = 166;
          goto LABEL_62;
        }
      }
    }
    goto LABEL_63;
  }
  if ( !*((_DWORD *)v6 + 52) )
    goto LABEL_12;
  WPP_RECORDER_SF_(*((_QWORD *)v6 + 1), 3u, 0xBu, 0xA1u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  v9 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v10 = 162;
    goto LABEL_62;
  }
LABEL_63:
  v19 = 0LL;
LABEL_64:
  if ( !v44 )
    CInpLockGuard::UnLock((PERESOURCE *)v43);
  return (struct CPointerInputFrame *)v19;
}
