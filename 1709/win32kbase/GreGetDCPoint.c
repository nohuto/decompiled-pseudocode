/*
 * XREFs of GreGetDCPoint @ 0x1C005B500
 * Callers:
 *     GreGetDCOrgEx @ 0x1C005B480 (GreGetDCOrgEx.c)
 *     xxxEnumDisplayMonitors @ 0x1C005C4E0 (xxxEnumDisplayMonitors.c)
 *     GreGetDCOrg @ 0x1C005CAF0 (GreGetDCOrg.c)
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C003C9B0 (UserIsUserCritSecIn.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C004BE80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C224 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0057A50 (EtwTraceAcquiredSharedUserCrit.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00F2914 (-vMakeIso@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetDCPoint(struct HOBJ__ *a1, int a2, __int64 a3)
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
  __int64 v19; // r9
  int v20; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v22; // rdi
  struct tagTHREADINFO **v23; // rax
  PVOID CurrentProcess; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  PVOID v34; // rcx
  __int64 v35; // rcx
  DC *v36; // [rsp+30h] [rbp-28h] BYREF
  int v37; // [rsp+38h] [rbp-20h]
  int v38; // [rsp+3Ch] [rbp-1Ch]
  int v39; // [rsp+78h] [rbp+20h] BYREF
  int v40; // [rsp+7Ch] [rbp+24h]

  v37 = 0;
  v38 = 0;
  AspectRatioFilter = 1;
  XDCOBJ::vLock((XDCOBJ *)&v36, a1);
  v8 = v36;
  if ( !v36 )
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
              *(_QWORD *)a3 = *((_QWORD *)v36 + (*((_DWORD *)v36 + 10) & 1LL) + 179);
              if ( (_DWORD)v9 && (*((_DWORD *)v8 + 9) & 0x4000) != 0 )
              {
                if ( (unsigned int)UserIsUserCritSecIn() )
                {
                  v20 = 0;
                }
                else
                {
                  v20 = 1;
                  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v17, v16, v18, v19);
                  if ( CurrentThreadWin32Thread )
                    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
                  v22 = 0LL;
                  while ( 1 )
                  {
                    v23 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
                    if ( v23 )
                      v22 = *v23;
                    CurrentProcess = (PVOID)PsGetCurrentProcess();
                    if ( CurrentProcess )
                    {
                      if ( CurrentProcess == g_pepDwm )
                        break;
                    }
                    if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v22 != (struct tagTHREADINFO *)gptiTSRequest )
                      break;
                    if ( gbRITBlockedOnDIT )
                    {
                      if ( v22 == gptiRit )
                        break;
                      _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
                      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                      v34 = gpsemRITBlockedOnDITWaiters;
                    }
                    else
                    {
                      if ( gbDITInHitTest != 1 || v22 == gptiRit )
                        break;
                      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
                      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                      v34 = gpsemDITHitTestWaiters;
                    }
                    KeWaitForSingleObject(v34, UserRequest, 0, 0, 0LL);
                  }
                  EtwTraceAcquiredSharedUserCrit(v26, v25, v27, v28);
                }
                if ( (unsigned int)UserGetRedirectedWindowOrigin(a1, &v39) )
                {
                  *(_DWORD *)a3 += v39;
                  *(_DWORD *)(a3 + 4) += v40;
                }
                if ( v20 )
                  UserSessionSwitchLeaveCrit(v30, v29, v31, v32);
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
          *(_QWORD *)a3 = *(_QWORD *)(*((_QWORD *)v36 + 10) + 320LL);
          *(_DWORD *)a3 = *(_DWORD *)(*((_QWORD *)v8 + 10) + 316LL);
        }
        goto LABEL_9;
      }
      v33 = *(_QWORD *)(*((_QWORD *)v36 + 10) + 336LL);
    }
    else
    {
      v33 = *(_QWORD *)(*((_QWORD *)v36 + 10) + 328LL);
    }
    *(_QWORD *)a3 = v33;
    if ( (*(_DWORD *)(*((_QWORD *)v8 + 10) + 312LL) & 1) != 0 )
      *(_DWORD *)a3 = -*(_DWORD *)a3;
  }
  else
  {
    v35 = *((_QWORD *)v36 + 10);
    if ( (*(_DWORD *)(v35 + 352) & 0x4000) != 0 && *(_DWORD *)(v35 + 308) == 7 )
      DC::vMakeIso(v36);
    *(_QWORD *)a3 = *(_QWORD *)(*((_QWORD *)v8 + 10) + 344LL);
  }
LABEL_9:
  XDCOBJ::vUnlockFast((XDCOBJ *)&v36);
  return AspectRatioFilter;
}
