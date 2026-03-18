/*
 * XREFs of ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011B014
 * Callers:
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0123E5C (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0124014 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?ProcessMouseInput@CTouchProcessor@@QEAAXPEAX0@Z @ 0x1C01244F0 (-ProcessMouseInput@CTouchProcessor@@QEAAXPEAX0@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C012B348 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0005008 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     HMAssignmentLock @ 0x1C0017670 (HMAssignmentLock.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C00DFCA0 (EtwTraceBeginPointerFrameCommit.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C0119EE8 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C011D8F0 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C011DA38 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ?GetNextFrameId@CTouchProcessor@@AEAAKXZ @ 0x1C011F440 (-GetNextFrameId@CTouchProcessor@@AEAAKXZ.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::CommitRimCompleteFrame(
        CTouchProcessor *this,
        struct RIMCOMPLETEFRAME *a2,
        char a3,
        char a4)
{
  char v4; // r13
  unsigned int v8; // r15d
  PDEVICE_OBJECT v9; // rcx
  unsigned __int16 v10; // r9
  char *v11; // rcx
  KPROCESSOR_MODE v12; // r8
  int v13; // eax
  unsigned __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rax
  unsigned int v19; // edx
  const GUID *v20; // r8
  CTouchProcessor *v21; // rcx
  char *v22; // rbx
  struct CPointerQFrame *v23; // rax
  unsigned __int64 v24; // rcx
  _DWORD *v25; // r14
  _OWORD *v26; // r13
  __int64 v27; // rdx
  _OWORD *v28; // rcx
  _QWORD *v29; // r15
  __int64 v30; // r14
  _QWORD *v31; // rbp
  void *v32; // rax
  int v33; // ecx
  __int64 i; // rax
  CTouchProcessor *v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rbp
  CTouchProcessor *v39; // rcx
  _QWORD *v40; // rcx
  __int64 v41; // rdx
  _QWORD *v42; // rax
  PERESOURCE *v43; // rcx
  __int64 *v45[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v46; // [rsp+40h] [rbp-48h] BYREF
  int v47; // [rsp+48h] [rbp-40h]
  PVOID Object; // [rsp+90h] [rbp+8h] BYREF
  char v49; // [rsp+A8h] [rbp+20h]

  v49 = a4;
  v4 = a4;
  v8 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x8Fu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v46,
    (CTouchProcessor *)((char *)this + 224));
  if ( v4 )
  {
    if ( *((_DWORD *)this + 93) )
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        3u,
        0xBu,
        0x90u,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v9 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v10 = 145;
LABEL_58:
        WPP_RECORDER_SF_(
          (__int64)v9->DeviceExtension,
          5u,
          0xBu,
          v10,
          (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
        goto LABEL_59;
      }
      goto LABEL_59;
    }
LABEL_10:
    v11 = (char *)*((_QWORD *)a2 + 4);
    v12 = *((_DWORD *)a2 + 12) == 0;
    Object = 0LL;
    v13 = RawInputManagerDeviceObjectResolveHandle(v11, 3u, v12, &Object);
    if ( v13 < 0 )
    {
      WPP_RECORDER_SF_d(
        *((_QWORD *)this + 1),
        2u,
        0xBu,
        0x94u,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids,
        v13);
      v9 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v10 = 149;
        goto LABEL_58;
      }
    }
    else
    {
      v14 = 0LL;
      if ( Object != (PVOID)-64LL )
        v14 = *((_QWORD *)Object + 8);
      ObfDereferenceObject(Object);
      LOBYTE(v15) = 19;
      v18 = (void *)HMValidateHandleNoSecure(v14, v15, v16, v17);
      v19 = *((_DWORD *)a2 + 6);
      Object = v18;
      EtwTraceBeginPointerFrameCommit(0LL, v19, v20);
      v22 = (char *)Win32AllocPoolZInit(0x78uLL, 1718645589LL);
      if ( v22 )
      {
        v23 = CTouchProcessor::AllocPointerQFrameList(v21, *((_DWORD *)a2 + 6));
        *((_QWORD *)v22 + 13) = v23;
        if ( v23 )
        {
          v24 = 608LL * *((unsigned int *)a2 + 6);
          if ( v24 <= 0xFFFFFFFF )
            *((_QWORD *)v22 + 12) = Win32AllocPoolZInit((unsigned int)v24, 1701868373LL);
          if ( *((_QWORD *)v22 + 12) )
          {
            v25 = (_DWORD *)*((_QWORD *)a2 + 11);
            if ( *((_DWORD *)a2 + 6) )
            {
              v26 = v25 + 2;
              do
              {
                v27 = 608LL * v8;
                *(_DWORD *)(*((_QWORD *)v22 + 12) + v27 + 236) = *v25;
                v28 = (_OWORD *)(v27 + *((_QWORD *)v22 + 12) + 240LL);
                *v28 = *v26;
                v28[1] = v26[1];
                v28[2] = v26[2];
                v28[3] = v26[3];
                v28[4] = v26[4];
                v28[5] = v26[5];
                v28[6] = v26[6];
                v28[7] = v26[7];
                v28[8] = v26[8];
                v28[9] = v26[9];
                *(_QWORD *)(*((_QWORD *)v22 + 12) + v27 + 264) = v14;
                CInputDest::SetEmpty((CInputDest *)(v27 + *((_QWORD *)v22 + 12) + 408LL));
                ++v8;
                v25 += 42;
                v26 = (_OWORD *)((char *)v26 + 168);
              }
              while ( v8 < *((_DWORD *)a2 + 6) );
              v4 = v49;
            }
            *((_DWORD *)v22 + 10) = CTouchProcessor::GetNextFrameId((CTouchProcessor *)v24);
            v29 = 0LL;
            *((_DWORD *)v22 + 12) = *((_DWORD *)a2 + 6);
            *((_QWORD *)v22 + 8) = v14;
            *((_QWORD *)v22 + 9) = *((_QWORD *)a2 + 5);
            *((_DWORD *)v22 + 14) = *((_DWORD *)a2 + 7);
            *(_QWORD *)v22 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
            v30 = *((_QWORD *)a2 + 10);
            while ( 1 )
            {
              if ( !v30 )
              {
                if ( !a3 )
                {
                  v33 = *((_DWORD *)v22 + 10);
                  for ( i = *((_QWORD *)v22 + 11); i; i = *(_QWORD *)(i + 24) )
                    *(_DWORD *)i = v33;
                }
                v45[0] = (__int64 *)(v22 + 112);
                v45[1] = *((__int64 **)Object + 59);
                HMAssignmentLock(v45);
                if ( !a3 )
                {
                  v40 = (_QWORD *)((char *)this + 280);
                  v41 = *((_QWORD *)this + 35);
                  v42 = v22 + 8;
                  if ( *(CTouchProcessor **)(v41 + 8) != (CTouchProcessor *)((char *)this + 280) )
                    __fastfail(3u);
                  *v42 = v41;
                  *((_QWORD *)v22 + 2) = v40;
                  *(_QWORD *)(v41 + 8) = v42;
                  *v40 = v42;
                  if ( v4 )
                  {
                    *((_DWORD *)v22 + 20) |= 0x100u;
                    ++*((_DWORD *)this + 92);
                  }
                  else
                  {
                    ++*((_DWORD *)this + 93);
                  }
                }
                *((_QWORD *)v22 + 4) = v22 + 24;
                *((_QWORD *)v22 + 3) = v22 + 24;
                if ( a3 )
                  *((_DWORD *)v22 + 20) |= 0x200u;
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    5u,
                    0xBu,
                    0x9Fu,
                    (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
                goto LABEL_60;
              }
              v31 = Win32AllocPoolZInit(0x20uLL, 1685222229LL);
              if ( !v31 )
                break;
              v32 = Win32AllocPoolZInit(*(unsigned int *)(v30 + 4), 1685222229LL);
              v31[2] = v32;
              *((_DWORD *)v31 + 1) = *(_DWORD *)v30;
              *((_DWORD *)v31 + 2) = *(_DWORD *)(v30 + 4);
              memmove(v32, *(const void **)(v30 + 8), *(unsigned int *)(v30 + 4));
              if ( v29 )
                v29[3] = v31;
              else
                *((_QWORD *)v22 + 11) = v31;
              v30 = *(_QWORD *)(v30 + 16);
              v29 = v31;
            }
            WPP_RECORDER_SF_(
              *((_QWORD *)this + 1),
              2u,
              0xBu,
              0x9Du,
              (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
            v36 = *((_QWORD *)v22 + 11);
            while ( v36 )
            {
              v37 = *(_QWORD *)(v36 + 16);
              v38 = v36;
              if ( v37 )
                Win32FreePool(v37);
              v36 = *(_QWORD *)(v36 + 24);
              Win32FreePool(v38);
            }
            CTouchProcessor::FreePointerInfoList(v35, *((struct CPointerInfoNode **)v22 + 12), *((_DWORD *)a2 + 6));
            CTouchProcessor::FreePointerQFrameList(v39, *((struct CPointerQFrame **)v22 + 13), *((_DWORD *)a2 + 6));
            Win32FreePool((__int64)v22);
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                0xBu,
                0x9Eu,
                (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
          }
          else
          {
            CTouchProcessor::FreePointerQFrameList(
              (CTouchProcessor *)v24,
              *((struct CPointerQFrame **)v22 + 13),
              *((_DWORD *)a2 + 6));
            Win32FreePool((__int64)v22);
            WPP_RECORDER_SF_(
              *((_QWORD *)this + 1),
              2u,
              0xBu,
              0x9Au,
              (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
            v9 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              v10 = 155;
              goto LABEL_58;
            }
          }
        }
        else
        {
          Win32FreePool((__int64)v22);
          WPP_RECORDER_SF_(
            *((_QWORD *)this + 1),
            2u,
            0xBu,
            0x98u,
            (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
          v9 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v10 = 153;
            goto LABEL_58;
          }
        }
      }
      else
      {
        WPP_RECORDER_SF_(
          *((_QWORD *)this + 1),
          2u,
          0xBu,
          0x96u,
          (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
        v9 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v10 = 151;
          goto LABEL_58;
        }
      }
    }
    goto LABEL_59;
  }
  if ( !*((_DWORD *)this + 92) )
    goto LABEL_10;
  WPP_RECORDER_SF_(*((_QWORD *)this + 1), 3u, 0xBu, 0x92u, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v9 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v10 = 147;
    goto LABEL_58;
  }
LABEL_59:
  v22 = 0LL;
LABEL_60:
  if ( !v47 )
  {
    v43 = (PERESOURCE *)v46;
    *(_QWORD *)(v46 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v43);
  }
  return (struct CPointerInputFrame *)v22;
}
