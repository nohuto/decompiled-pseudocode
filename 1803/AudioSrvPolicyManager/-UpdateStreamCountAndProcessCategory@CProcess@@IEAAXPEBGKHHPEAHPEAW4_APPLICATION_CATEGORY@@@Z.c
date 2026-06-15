/*
 * XREFs of ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180015324
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x180028110 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x180028680 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_dSS @ 0x1800103F0 (WPP_SF_dSS.c)
 *     ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x180014548 (-GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x18001656C (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?EnsureBamExemption@CProcess@@IEAAXXZ @ 0x1800165C4 (-EnsureBamExemption@CProcess@@IEAAXXZ.c)
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
  int v11; // esi
  int v12; // edi
  int v13; // ecx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int64 v15; // rax
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+8h] BYREF

  v7 = *((int *)this + 92);
  v11 = a4 != 0 ? 1 : -1;
  v12 = 0;
  if ( (int)CProcess::GetActiveStreamCountStatsForEndpoint(this, a2, a5, (unsigned int **)&pftDueTime) >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)&pftDueTime + 4LL * a3) += v11;
    if ( a5 )
    {
      *((_DWORD *)this + 91) += v11;
    }
    else
    {
      *((_DWORD *)this + 90) += v11;
      if ( CProcess::GetActiveRenderStreamCount(this, 3u) || CProcess::GetActiveRenderStreamCount(this, 8u) )
      {
        *((_DWORD *)this + 92) = 0;
      }
      else if ( CProcess::GetActiveRenderStreamCount(this, 2u) )
      {
        *((_DWORD *)this + 92) = 1;
      }
      else if ( CProcess::GetActiveRenderStreamCount(this, 0xBu)
             || CProcess::GetActiveRenderStreamCount(this, 0xAu)
             || CProcess::GetActiveRenderStreamCount(this, 1u) )
      {
        *((_DWORD *)this + 92) = 2;
      }
      else
      {
        *((_DWORD *)this + 92) = 4 - (CProcess::GetActiveRenderStreamCount(this, 7u) != 0);
      }
    }
    v13 = *((_DWORD *)this + 90) + *((_DWORD *)this + 91);
    if ( a4 )
    {
      if ( v13 == 1 )
        CProcess::EnsureBamExemption(this);
    }
    else if ( !v13 )
    {
      ThreadpoolTimer = (struct _TP_TIMER *)*((_QWORD *)this + 78);
      if ( ThreadpoolTimer
        || (ThreadpoolTimer = CreateThreadpoolTimer(
                                lambda_5ce815ae0cdec547ed542fdaed3a7314_::_lambda_invoker_cdecl_,
                                this,
                                0LL),
            (*((_QWORD *)this + 78) = ThreadpoolTimer) != 0LL) )
      {
        pftDueTime.dwHighDateTime = -1;
        pftDueTime.dwLowDateTime = -200000000;
        SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, 0, 0);
      }
    }
  }
  if ( a7 )
    *(_DWORD *)a7 = v7;
  if ( a6 )
  {
    LOBYTE(v12) = (_DWORD)v7 != *((_DWORD *)this + 92);
    *a6 = v12;
  }
  v15 = *((int *)this + 92);
  if ( (_DWORD)v7 != (_DWORD)v15
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dSS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      (__int64)&WPP_GLOBAL_Control,
      (__int64)off_18003A6F8,
      *((_DWORD *)this + 54),
      off_18003A6F8[v7],
      off_18003A6F8[v15]);
  }
}
