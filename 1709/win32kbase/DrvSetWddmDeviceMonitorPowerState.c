/*
 * XREFs of DrvSetWddmDeviceMonitorPowerState @ 0x1C00A421C
 * Callers:
 *     DrvSetMonitorPowerState @ 0x1C00A41F0 (DrvSetMonitorPowerState.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DCE00 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     GreDeviceIoControlEx @ 0x1C007A620 (GreDeviceIoControlEx.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00A4550 (DrvDxgkLogCodePointPacket.c)
 */

_UNKNOWN **__fastcall DrvSetWddmDeviceMonitorPowerState(__int64 a1, int a2, char a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  wchar_t *v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  PDEVICE_OBJECT *v15; // r14
  wchar_t *v16; // rbx
  unsigned int v17; // edi
  unsigned int i; // edx
  __int64 v19; // rdx
  struct _DEVICE_OBJECT *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // esi
  PDEVICE_OBJECT *v30; // rbx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rbp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 *v42; // rdi
  wchar_t *j; // rbx
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdi
  wchar_t *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 *DomainLockRef; // rbx
  __int64 v53; // rax
  __int64 v54; // rax
  int InputBuffer; // [rsp+40h] [rbp-38h] BYREF
  __int64 v56; // [rsp+48h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  __int64 v58; // [rsp+88h] [rbp+10h] BYREF
  tagObjLock *v59; // [rsp+98h] [rbp+20h] BYREF

  result = &retaddr;
  v5 = a2;
  InputBuffer = a2;
  v56 = a4;
  if ( gProtocolType )
    return result;
  v8 = WdLogNewEntry5_WdTrace(a1);
  *(_QWORD *)(v8 + 24) = a1;
  *(_QWORD *)(v8 + 32) = v5;
  WdLogEvent5_WdTrace(v8);
  if ( !a3 )
  {
    v10 = gpGraphicsDeviceList;
    v11 = 0;
    while ( v10 )
    {
      if ( (*((_DWORD *)v10 + 40) & 0x800000) != 0 && (!a1 || *((_QWORD *)v10 + 18) == a1) )
        ++v11;
      v10 = (wchar_t *)*((_QWORD *)v10 + 16);
    }
    v15 = (PDEVICE_OBJECT *)PALLOCMEM2(24 * v11, 1886221383LL, 1);
    if ( v15 )
    {
      v16 = gpGraphicsDeviceList;
      v17 = 0;
      while ( v16 )
      {
        if ( (*((_DWORD *)v16 + 40) & 0x800000) != 0 && (!a1 || *((_QWORD *)v16 + 18) == a1) )
        {
          for ( i = 0; i < v17; ++i )
          {
            if ( v15[3 * i + 2] == *((PDEVICE_OBJECT *)v16 + 18) )
              break;
          }
          if ( v17 == i )
          {
            v19 = 3LL * v17;
            v15[v19] = (PDEVICE_OBJECT)*((_QWORD *)v16 + 17);
            v20 = (struct _DEVICE_OBJECT *)*((_QWORD *)v16 + 30);
            v15[v19 + 1] = v20;
            v15[v19 + 2] = (PDEVICE_OBJECT)*((_QWORD *)v16 + 18);
            ObfReferenceObject(v20);
            ++v17;
          }
        }
        v16 = (wchar_t *)*((_QWORD *)v16 + 16);
      }
      KeResetEvent(gpevtMonitorPowerWaiter);
      gfMonitorPowerInProgress = 1;
      UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
      v29 = 0;
      if ( v17 )
      {
        v30 = v15;
        do
        {
          DrvDxgkLogCodePointPacket(90LL, v29, v17, 0LL);
          v31 = GreDeviceIoControlEx(*v30, 0x23200Fu, &InputBuffer, 0x10u, 0LL, 0, &v58, 1u);
          v35 = v31;
          if ( v31 < 0 )
          {
            v51 = WdLogNewEntry5_WdError(v33, v32, v34);
            *(_QWORD *)(v51 + 24) = *v30;
            *(_QWORD *)(v51 + 32) = v35;
            WdLogEvent5_WdError(v51);
          }
          ObfDereferenceObject(v30[1]);
          DrvDxgkLogCodePointPacket(91LL, (unsigned int)v35, 0LL, 0LL);
          ++v29;
          v30 += 3;
        }
        while ( v29 < v17 );
      }
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v26, v25, v27, v28);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v37 = EnterCritAvoidingDitHitTestHazard(0, 1);
      EtwTraceAcquiredExclusiveUserCrit(v39, v38, v40, v41);
      gptiCurrent = v37;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v59);
      v42 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        DomainLockRef = GetDomainLockRef(8);
        do
        {
          gpducstulHead = v42[2];
          v42[2] = 0LL;
          tagObjLock::UnLock((tagObjLock *)DomainLockRef);
          HMUnlockObject(*v42);
          RIMLockExclusive((__int64)DomainLockRef);
          v42 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
      }
      tagObjLock::UnLock(v59);
      gfMonitorPowerInProgress = 0;
      KeSetEvent(gpevtMonitorPowerWaiter, 0, 0);
      return (_UNKNOWN **)Win32FreePool((__int64)v15);
    }
    v53 = WdLogNewEntry5_WdLowResource(v13, v12, v14);
    *(_QWORD *)(v53 + 24) = v11;
    WdLogEvent5_WdLowResource(v53);
  }
  for ( j = gpGraphicsDeviceList; j; j = (wchar_t *)*((_QWORD *)j + 16) )
  {
    if ( (*((_DWORD *)j + 40) & 0x800000) != 0 && (!a1 || *((_QWORD *)j + 18) == a1) )
    {
      v49 = gpGraphicsDeviceList;
      if ( gpGraphicsDeviceList )
      {
        v9 = *((_QWORD *)j + 18);
        do
        {
          if ( *((_QWORD *)v49 + 18) == v9 )
            break;
          v49 = (wchar_t *)*((_QWORD *)v49 + 16);
        }
        while ( v49 );
      }
      if ( v49 == j )
      {
        DrvDxgkLogCodePointPacket(90LL, 0LL, 0LL, 0LL);
        v44 = GreDeviceIoControlEx(*((PDEVICE_OBJECT *)j + 17), 0x23200Fu, &InputBuffer, 0x10u, 0LL, 0, &v58, 1u);
        v48 = v44;
        if ( v44 < 0 )
        {
          v54 = WdLogNewEntry5_WdError(v46, v45, v47);
          *(_QWORD *)(v54 + 24) = j;
          *(_QWORD *)(v54 + 32) = v48;
          WdLogEvent5_WdError(v54);
        }
        DrvDxgkLogCodePointPacket(91LL, (unsigned int)v48, 0LL, 0LL);
      }
    }
  }
  v50 = WdLogNewEntry5_WdTrace(v9);
  return (_UNKNOWN **)WdLogEvent5_WdTrace(v50);
}
