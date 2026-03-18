/*
 * XREFs of GreGetDCPoint @ 0x1C00286C0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0026E90 (xxxEnumDisplayMonitors.c)
 *     GreGetDCOrgEx @ 0x1C0028640 (GreGetDCOrgEx.c)
 *     GreGetDCOrg @ 0x1C008C310 (GreGetDCOrg.c)
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C0027810 (UserIsUserCritSecIn.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0031A40 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031E20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00EFDEC (-vMakeIso@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetDCPoint(HDC a1, int a2, __int64 a3)
{
  unsigned int AspectRatioFilter; // ebp
  __int64 v7; // rcx
  DC *v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // edi
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r14d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v21; // rdi
  struct tagTHREADINFO **v22; // rax
  PVOID CurrentProcess; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rsi
  int v28; // ecx
  LARGE_INTEGER v29; // rdi
  int v30; // r8d
  __int64 v31; // rcx
  PRKSEMAPHORE v32; // rcx
  __int64 v33; // rcx
  DC *v34; // [rsp+30h] [rbp-28h] BYREF
  int v35; // [rsp+38h] [rbp-20h]
  int v36; // [rsp+3Ch] [rbp-1Ch]
  int v37; // [rsp+78h] [rbp+20h] BYREF
  int v38; // [rsp+7Ch] [rbp+24h]

  v35 = 0;
  v36 = 0;
  AspectRatioFilter = 1;
  XDCOBJ::vLock((XDCOBJ *)&v34, a1);
  v8 = v34;
  if ( !v34 )
    return 0;
  v9 = a2 & 0x40;
  v10 = (a2 & 0xFFFFFFBF) - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 2;
      if ( v12 )
      {
        v13 = v12 - 4;
        if ( v13 )
        {
          v14 = v13 - 8;
          if ( v14 )
          {
            if ( v14 == 16 )
            {
              *(_QWORD *)a3 = *(_QWORD *)((char *)v34 + ((*((_BYTE *)v34 + 40) & 1) != 0 ? 8 : 0) + 1432);
              if ( (_DWORD)v9 && (*((_DWORD *)v8 + 9) & 0x4000) != 0 )
              {
                if ( (unsigned int)UserIsUserCritSecIn() )
                {
                  v19 = 0;
                }
                else
                {
                  v19 = 1;
                  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v17, v16, v18);
                  if ( CurrentThreadWin32Thread )
                    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
                  v21 = 0LL;
                  while ( 1 )
                  {
                    v22 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
                    if ( v22 )
                      v21 = *v22;
                    CurrentProcess = (PVOID)PsGetCurrentProcess();
                    if ( CurrentProcess )
                    {
                      if ( CurrentProcess == g_pepDwm )
                        break;
                    }
                    if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v21 != (struct tagTHREADINFO *)gptiTSRequest )
                      break;
                    if ( gbRITBlockedOnDIT )
                    {
                      if ( v21 == gptiRit )
                        break;
                      _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
                      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                      v32 = gpsemRITBlockedOnDITWaiters;
                    }
                    else
                    {
                      if ( gbDITInHitTest != 1 || v21 == gptiRit )
                        break;
                      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
                      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                      v32 = (PRKSEMAPHORE)gpsemDITHitTestWaiters;
                    }
                    KeWaitForSingleObject(v32, UserRequest, 0, 0, 0LL);
                  }
                  v27 = PsGetCurrentThreadWin32Thread(v25, v24, v26);
                  if ( v27 )
                  {
                    v29 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v27 + 8));
                    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
                      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
                      && (qword_1C0186D80 & 0x200000010000000LL) != 0
                      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
                      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                    {
                      LOBYTE(v28) = byte_1C0186D98 - 1;
                      Template_xqx(
                        v28,
                        (unsigned int)&AcquiredSharedUserCritEvent,
                        v30,
                        v29.LowPart,
                        0,
                        (char)gullUserCritAcquireToken);
                    }
                    if ( v29.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
                      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
                    {
                      Template_xqx(
                        (_DWORD)gullUserCritAcquireToken,
                        (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
                        v30,
                        0,
                        1000 * v29.QuadPart / gliQpcFreq.QuadPart,
                        (char)gullUserCritAcquireToken);
                    }
                    *(_QWORD *)(v27 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
                  }
                }
                if ( (unsigned int)UserGetRedirectedWindowOrigin(a1, &v37) )
                {
                  *(_DWORD *)a3 += v37;
                  *(_DWORD *)(a3 + 4) += v38;
                }
                if ( v19 )
                  UserSessionSwitchLeaveCrit();
              }
            }
            else
            {
              AspectRatioFilter = 0;
            }
          }
          else if ( (int)IsGreGetAspectRatioFilterSupported(v7, v9) >= 0 )
          {
            AspectRatioFilter = GreGetAspectRatioFilter(a1, a3);
          }
        }
        else
        {
          *(_QWORD *)a3 = *(_QWORD *)(*((_QWORD *)v34 + 10) + 320LL);
          *(_DWORD *)a3 = *(_DWORD *)(*((_QWORD *)v8 + 10) + 316LL);
        }
        goto LABEL_9;
      }
      v31 = *(_QWORD *)(*((_QWORD *)v34 + 10) + 336LL);
    }
    else
    {
      v31 = *(_QWORD *)(*((_QWORD *)v34 + 10) + 328LL);
    }
    *(_QWORD *)a3 = v31;
    if ( (*(_DWORD *)(*((_QWORD *)v8 + 10) + 312LL) & 1) != 0 )
      *(_DWORD *)a3 = -*(_DWORD *)a3;
  }
  else
  {
    v33 = *((_QWORD *)v34 + 10);
    if ( (*(_DWORD *)(v33 + 352) & 0x4000) != 0 && *(_DWORD *)(v33 + 308) == 7 )
      DC::vMakeIso(v34);
    *(_QWORD *)a3 = *(_QWORD *)(*((_QWORD *)v8 + 10) + 344LL);
  }
LABEL_9:
  XDCOBJ::RestoreAttributes((XDCOBJ *)&v34);
  _InterlockedDecrement((volatile signed __int32 *)v34 + 3);
  return AspectRatioFilter;
}
