/*
 * XREFs of ?OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z @ 0x180021524
 * Callers:
 *     PbmReportAppClosing @ 0x180021980 (PbmReportAppClosing.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180017D14 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPlaybackManager::OnAppClosed(
        CPlaybackManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4)
{
  LPVOID v5; // rsi
  HANDLE ProcessHeap; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  LPVOID v11; // rdi
  int v12; // ebx
  unsigned __int64 v13; // r9
  int v14; // eax
  __int64 v16; // [rsp+20h] [rbp-28h]

  v5 = 0LL;
  ProcessHeap = GetProcessHeap();
  v11 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  if ( v11 )
  {
    *((_QWORD *)v11 + 1) = 0LL;
    *(_QWORD *)v11 = &CAppClosedWorkItem::`vftable';
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    *((_DWORD *)v11 + 4) = a4;
    v12 = 0;
    *((_QWORD *)v11 + 3) = a3;
    if ( a2 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a2[v13] );
      v14 = _AllocStringWorker<CTCoAllocPolicy>(v10, v9, a2, v13, v16, (unsigned __int16 **)v11 + 1);
      v12 = v14;
      if ( v14 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids, v14);
        }
        AudPolicyLogError("CAppClosedWorkItem::Initialize", 881, v12);
      }
    }
    if ( v12 >= 0 )
    {
      v5 = v11;
      v11 = 0LL;
    }
  }
  else
  {
    v12 = -2147024882;
  }
  if ( v11 )
    (*(void (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v11 + 8LL))(v11, 1LL);
  if ( v12 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v12 >= 0 )
      v5 = 0LL;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids, v12);
    }
    AudPolicyLogError("CAppClosedWorkItem::CreateInstance", 856, v12);
  }
  if ( v5 )
    (*(void (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v5 + 8LL))(v5, 1LL);
  if ( v12 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_1f870d16066833bfd0de78f1b1f0ec8d_Traceguids, v12);
    }
    AudPolicyLogError("CPlaybackManager::OnAppClosed", 252, v12);
  }
  return (unsigned int)v12;
}
