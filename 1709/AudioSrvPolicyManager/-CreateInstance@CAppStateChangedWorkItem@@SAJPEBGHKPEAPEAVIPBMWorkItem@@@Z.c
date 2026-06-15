/*
 * XREFs of ?CreateInstance@CAppStateChangedWorkItem@@SAJPEBGHKPEAPEAVIPBMWorkItem@@@Z @ 0x18001F574
 * Callers:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18001642C (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180011518 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CAppStateChangedWorkItem::CreateInstance(
        const unsigned __int16 *a1,
        int a2,
        int a3,
        struct IPBMWorkItem **a4)
{
  HANDLE ProcessHeap; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  LPVOID v11; // rbx
  int v12; // edi
  unsigned __int64 v13; // r9
  int v14; // eax
  void *v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-38h]

  ProcessHeap = GetProcessHeap();
  v11 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  if ( v11 )
  {
    *(_QWORD *)v11 = &CAppStateChangedWorkItem::`vftable';
    *((_QWORD *)v11 + 1) = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    *((_DWORD *)v11 + 4) = a2;
    *((_DWORD *)v11 + 5) = a3;
    v13 = -1LL;
    do
      ++v13;
    while ( a1[v13] );
    v14 = _AllocStringWorker<CTCoAllocPolicy>(v10, v9, a1, v13, v17, (unsigned __int16 **)v11 + 1);
    v12 = v14;
    if ( v14 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, &WPP_b248cfb32be6365c2b37d8015b37b144_Traceguids, v14);
      }
      AudPolicyLogError("CAppStateChangedWorkItem::Initialize", 534, v12);
    }
    if ( v12 >= 0 )
    {
      *a4 = (struct IPBMWorkItem *)v11;
      v11 = 0LL;
    }
  }
  else
  {
    v12 = -2147024882;
  }
  if ( v11 )
  {
    v15 = (void *)*((_QWORD *)v11 + 1);
    *(_QWORD *)v11 = &CAppStateChangedWorkItem::`vftable';
    if ( v15 )
    {
      CoTaskMemFree(v15);
      *((_QWORD *)v11 + 1) = 0LL;
    }
    *(_QWORD *)v11 = &WORKER_THREAD_EVENT::`vftable';
    operator delete(v11, (const struct std::nothrow_t *)0x18);
  }
  if ( v12 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, &WPP_b248cfb32be6365c2b37d8015b37b144_Traceguids, v12);
    }
    AudPolicyLogError("CAppStateChangedWorkItem::CreateInstance", 514, v12);
  }
  return (unsigned int)v12;
}
