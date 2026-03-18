/*
 * XREFs of ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011C1B8
 * Callers:
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0124804 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01249BC (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?ProcessMouseInput@CTouchProcessor@@QEAAXPEAX0@Z @ 0x1C0124E98 (-ProcessMouseInput@CTouchProcessor@@QEAAXPEAX0@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C012BBF0 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     HMAssignmentLock @ 0x1C0049070 (HMAssignmentLock.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0054210 (RawInputManagerDeviceObjectResolveHandle.c)
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00927C0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C00D9940 (EtwTraceBeginPointerFrameCommit.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C011B10C (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C011EA50 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C011EB94 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ?GetNextFrameId@CTouchProcessor@@AEAAKXZ @ 0x1C01205C4 (-GetNextFrameId@CTouchProcessor@@AEAAKXZ.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::CommitRimCompleteFrame(
        CTouchProcessor *this,
        struct RIMCOMPLETEFRAME *a2,
        char a3,
        char a4)
{
  char v4; // r13
  struct RIMCOMPLETEFRAME *v6; // rsi
  unsigned int v8; // r15d
  int v9; // edx
  int v10; // edx
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  char *v13; // rcx
  KPROCESSOR_MODE v14; // r8
  int v15; // eax
  unsigned __int64 v16; // rbp
  void *v17; // rax
  int v18; // edx
  int v19; // r8d
  int v20; // edx
  CTouchProcessor *v21; // rcx
  char *v22; // rbx
  struct CPointerQFrame *v23; // rax
  int v24; // edx
  unsigned __int64 v25; // rcx
  int v26; // edx
  _DWORD *v27; // r14
  _OWORD *v28; // r13
  __int64 v29; // rdx
  _OWORD *v30; // rcx
  _QWORD *v31; // r15
  __int64 v32; // r14
  int v33; // edx
  _QWORD *v34; // rbp
  void *v35; // rax
  int v36; // ecx
  __int64 i; // rax
  CTouchProcessor *v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rbp
  CTouchProcessor *v42; // rcx
  __int64 v43; // rdx
  _QWORD *v44; // rcx
  _QWORD *v45; // rax
  PERESOURCE *v46; // rcx
  _QWORD v48[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v49; // [rsp+40h] [rbp-48h] BYREF
  int v50; // [rsp+48h] [rbp-40h]
  PVOID Object; // [rsp+90h] [rbp+8h] BYREF
  char v52; // [rsp+A8h] [rbp+20h]

  v52 = a4;
  v4 = a4;
  v6 = a2;
  v8 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      11,
      143,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v49,
    (CTouchProcessor *)((char *)this + 200));
  if ( v4 )
  {
    if ( *((_DWORD *)this + 87) )
    {
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_(*((_QWORD *)this + 1), v9, 11, 144, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 145;
LABEL_58:
        LOBYTE(v10) = 5;
        WPP_RECORDER_SF_(v11->DeviceExtension, v10, 11, v12, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
        goto LABEL_59;
      }
      goto LABEL_59;
    }
LABEL_10:
    v13 = (char *)*((_QWORD *)v6 + 4);
    v14 = *((_DWORD *)v6 + 12) == 0;
    Object = 0LL;
    v15 = RawInputManagerDeviceObjectResolveHandle(v13, 3u, v14, &Object);
    if ( v15 < 0 )
    {
      WPP_RECORDER_SF_D(
        *((_QWORD *)this + 1),
        2u,
        0xBu,
        0x94u,
        (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids,
        v15);
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 149;
        goto LABEL_58;
      }
    }
    else
    {
      v16 = 0LL;
      if ( Object != (PVOID)-64LL )
        v16 = *((_QWORD *)Object + 8);
      ObfDereferenceObject(Object);
      v17 = (void *)HMValidateHandleNoSecure(v16, 19);
      v18 = *((_DWORD *)v6 + 6);
      Object = v17;
      EtwTraceBeginPointerFrameCommit(0, v18, v19);
      v22 = (char *)Win32AllocPoolZInit(0x78uLL, 1718645589LL);
      if ( v22 )
      {
        v23 = CTouchProcessor::AllocPointerQFrameList(v21, *((_DWORD *)v6 + 6));
        *((_QWORD *)v22 + 13) = v23;
        if ( v23 )
        {
          v25 = 608LL * *((unsigned int *)v6 + 6);
          if ( v25 <= 0xFFFFFFFF )
            *((_QWORD *)v22 + 12) = Win32AllocPoolZInit((unsigned int)v25, 1701868373LL);
          if ( *((_QWORD *)v22 + 12) )
          {
            v27 = (_DWORD *)*((_QWORD *)v6 + 11);
            if ( *((_DWORD *)v6 + 6) )
            {
              v28 = v27 + 2;
              do
              {
                v29 = 608LL * v8;
                *(_DWORD *)(*((_QWORD *)v22 + 12) + v29 + 236) = *v27;
                v30 = (_OWORD *)(v29 + *((_QWORD *)v22 + 12) + 240LL);
                *v30 = *v28;
                v30[1] = v28[1];
                v30[2] = v28[2];
                v30[3] = v28[3];
                v30[4] = v28[4];
                v30[5] = v28[5];
                v30[6] = v28[6];
                v30[7] = v28[7];
                v30[8] = v28[8];
                v30[9] = v28[9];
                *(_QWORD *)(*((_QWORD *)v22 + 12) + v29 + 264) = v16;
                CInputDest::SetEmpty((CInputDest *)(v29 + *((_QWORD *)v22 + 12) + 408LL));
                ++v8;
                v27 += 42;
                v28 = (_OWORD *)((char *)v28 + 168);
              }
              while ( v8 < *((_DWORD *)v6 + 6) );
              v4 = v52;
            }
            *((_DWORD *)v22 + 10) = CTouchProcessor::GetNextFrameId((CTouchProcessor *)v25);
            v31 = 0LL;
            *((_DWORD *)v22 + 12) = *((_DWORD *)v6 + 6);
            *((_QWORD *)v22 + 8) = v16;
            *((_QWORD *)v22 + 9) = *((_QWORD *)v6 + 5);
            *((_DWORD *)v22 + 14) = *((_DWORD *)v6 + 7);
            *(_QWORD *)v22 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
            v32 = *((_QWORD *)v6 + 10);
            while ( 1 )
            {
              if ( !v32 )
              {
                if ( !a3 )
                {
                  v36 = *((_DWORD *)v22 + 10);
                  for ( i = *((_QWORD *)v22 + 11); i; i = *(_QWORD *)(i + 24) )
                    *(_DWORD *)i = v36;
                }
                v48[0] = v22 + 112;
                v48[1] = *((_QWORD *)Object + 59);
                HMAssignmentLock((__int64)v48);
                if ( !a3 )
                {
                  v44 = (_QWORD *)((char *)this + 256);
                  v43 = *((_QWORD *)this + 32);
                  v45 = v22 + 8;
                  if ( *(CTouchProcessor **)(v43 + 8) != (CTouchProcessor *)((char *)this + 256) )
                    __fastfail(3u);
                  *v45 = v43;
                  *((_QWORD *)v22 + 2) = v44;
                  *(_QWORD *)(v43 + 8) = v45;
                  *v44 = v45;
                  if ( v4 )
                  {
                    *((_DWORD *)v22 + 20) |= 0x100u;
                    ++*((_DWORD *)this + 86);
                  }
                  else
                  {
                    ++*((_DWORD *)this + 87);
                  }
                }
                *((_QWORD *)v22 + 4) = v22 + 24;
                *((_QWORD *)v22 + 3) = v22 + 24;
                if ( a3 )
                  *((_DWORD *)v22 + 20) |= 0x200u;
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(v43) = 5;
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v43,
                    11,
                    159,
                    (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
                }
                goto LABEL_60;
              }
              v34 = Win32AllocPoolZInit(0x20uLL, 1685222229LL);
              if ( !v34 )
                break;
              v35 = Win32AllocPoolZInit(*(unsigned int *)(v32 + 4), 1685222229LL);
              v34[2] = v35;
              *((_DWORD *)v34 + 1) = *(_DWORD *)v32;
              *((_DWORD *)v34 + 2) = *(_DWORD *)(v32 + 4);
              memmove(v35, *(const void **)(v32 + 8), *(unsigned int *)(v32 + 4));
              if ( v31 )
                v31[3] = v34;
              else
                *((_QWORD *)v22 + 11) = v34;
              v32 = *(_QWORD *)(v32 + 16);
              v31 = v34;
            }
            LOBYTE(v33) = 2;
            WPP_RECORDER_SF_(
              *((_QWORD *)this + 1),
              v33,
              11,
              157,
              (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
            v39 = *((_QWORD *)v22 + 11);
            while ( v39 )
            {
              v40 = *(_QWORD *)(v39 + 16);
              v41 = v39;
              if ( v40 )
                Win32FreePool(v40);
              v39 = *(_QWORD *)(v39 + 24);
              Win32FreePool(v41);
            }
            CTouchProcessor::FreePointerInfoList(v38, *((struct CPointerInfoNode **)v22 + 12), *((_DWORD *)v6 + 6));
            CTouchProcessor::FreePointerQFrameList(v42, *((struct CPointerQFrame **)v22 + 13), *((_DWORD *)v6 + 6));
            Win32FreePool((__int64)v22);
            v11 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              v12 = 158;
              goto LABEL_58;
            }
          }
          else
          {
            CTouchProcessor::FreePointerQFrameList(
              (CTouchProcessor *)v25,
              *((struct CPointerQFrame **)v22 + 13),
              *((_DWORD *)v6 + 6));
            Win32FreePool((__int64)v22);
            LOBYTE(v26) = 2;
            WPP_RECORDER_SF_(
              *((_QWORD *)this + 1),
              v26,
              11,
              154,
              (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
            v11 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              v12 = 155;
              goto LABEL_58;
            }
          }
        }
        else
        {
          Win32FreePool((__int64)v22);
          LOBYTE(v24) = 2;
          WPP_RECORDER_SF_(
            *((_QWORD *)this + 1),
            v24,
            11,
            152,
            (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
          v11 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v12 = 153;
            goto LABEL_58;
          }
        }
      }
      else
      {
        LOBYTE(v20) = 2;
        WPP_RECORDER_SF_(*((_QWORD *)this + 1), v20, 11, 150, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
        v11 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v12 = 151;
          goto LABEL_58;
        }
      }
    }
    goto LABEL_59;
  }
  if ( !*((_DWORD *)this + 86) )
    goto LABEL_10;
  LOBYTE(v9) = 3;
  WPP_RECORDER_SF_(*((_QWORD *)this + 1), v9, 11, 146, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  v11 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v12 = 147;
    goto LABEL_58;
  }
LABEL_59:
  v22 = 0LL;
LABEL_60:
  if ( !v50 )
  {
    v46 = (PERESOURCE *)v49;
    *(_QWORD *)(v49 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v46);
  }
  return (struct CPointerInputFrame *)v22;
}
