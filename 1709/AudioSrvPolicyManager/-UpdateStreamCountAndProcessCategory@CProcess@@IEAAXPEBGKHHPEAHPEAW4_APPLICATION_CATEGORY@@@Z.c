/*
 * XREFs of ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18000F8E4
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001EBD0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18001F110 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_dSS @ 0x18000B5DC (WPP_SF_dSS.c)
 *     ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x18000EDF8 (-GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180010B6C (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 */

void __fastcall CProcess::UpdateStreamCountAndProcessCategory(
        CProcess *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        int a5,
        int *a6,
        enum _APPLICATION_CATEGORY *a7)
{
  __int64 v7; // rbp
  __int64 v8; // r14
  int v11; // esi
  int v12; // edi
  int v13; // eax
  struct _TP_TIMER *v14; // rcx
  struct _TP_TIMER *v15; // rcx
  __int64 v16; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v18; // [rsp+38h] [rbp-20h]
  _FILETIME pftDueTime; // [rsp+60h] [rbp+8h] BYREF

  v7 = *((int *)this + 90);
  v8 = a3;
  v11 = a4 != 0 ? 1 : -1;
  v12 = 0;
  if ( (int)CProcess::GetActiveStreamCountStatsForEndpoint(this, a2, a5, (unsigned int **)&pftDueTime) >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)&pftDueTime + 4 * v8) += v11;
    if ( a5 )
    {
      *((_DWORD *)this + 89) += v11;
    }
    else
    {
      *((_DWORD *)this + 88) += v11;
      if ( CProcess::GetActiveRenderStreamCount(this, 3u) || CProcess::GetActiveRenderStreamCount(this, 8u) )
      {
        *((_DWORD *)this + 90) = 0;
      }
      else if ( CProcess::GetActiveRenderStreamCount(this, 2u) )
      {
        *((_DWORD *)this + 90) = 1;
      }
      else if ( CProcess::GetActiveRenderStreamCount(this, 0xBu)
             || CProcess::GetActiveRenderStreamCount(this, 0xAu)
             || CProcess::GetActiveRenderStreamCount(this, 1u) )
      {
        *((_DWORD *)this + 90) = 2;
      }
      else
      {
        *((_DWORD *)this + 90) = 4 - (CProcess::GetActiveRenderStreamCount(this, 7u) != 0);
      }
    }
    v13 = *((_DWORD *)this + 88) + *((_DWORD *)this + 89);
    if ( a4 )
    {
      if ( v13 == 1 )
      {
        v14 = (struct _TP_TIMER *)*((_QWORD *)this + 77);
        if ( v14 )
        {
          SetThreadpoolTimer(v14, 0LL, 0, 0);
          WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 77), 1);
        }
        v18 = 0;
        lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 568);
        ATL::CCritSecLock::Lock(&lpCriticalSection);
        if ( !*((_QWORD *)this + 76) )
          NtAcquireProcessActivityReference((char *)this + 608, *((_QWORD *)this + 26), 0LL);
        if ( v18 )
          LeaveCriticalSection(lpCriticalSection);
      }
    }
    else if ( !v13 )
    {
      if ( !*((_QWORD *)this + 77) )
        *((_QWORD *)this + 77) = CreateThreadpoolTimer(
                                   lambda_5ce815ae0cdec547ed542fdaed3a7314_::_lambda_invoker_cdecl_,
                                   this,
                                   0LL);
      v15 = (struct _TP_TIMER *)*((_QWORD *)this + 77);
      if ( v15 )
      {
        pftDueTime.dwHighDateTime = -1;
        pftDueTime.dwLowDateTime = -200000000;
        SetThreadpoolTimer(v15, &pftDueTime, 0, 0);
      }
    }
  }
  if ( a7 )
    *(_DWORD *)a7 = v7;
  if ( a6 )
  {
    LOBYTE(v12) = (_DWORD)v7 != *((_DWORD *)this + 90);
    *a6 = v12;
  }
  v16 = *((int *)this + 90);
  if ( (_DWORD)v7 != (_DWORD)v16
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dSS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      (__int64)&WPP_GLOBAL_Control,
      (__int64)off_18002B0A8,
      *((_DWORD *)this + 54),
      off_18002B0A8[v7],
      off_18002B0A8[v16]);
  }
}
