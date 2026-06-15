/*
 * XREFs of ?CreateInstance@HostedAppStateChangedContext@@SAJPEBGKHPEAPEAV1@@Z @ 0x18001FED4
 * Callers:
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z @ 0x1800176CC (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180011518 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall HostedAppStateChangedContext::CreateInstance(
        const unsigned __int16 *a1,
        int a2,
        int a3,
        struct HostedAppStateChangedContext **a4)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  int v13; // edi
  unsigned __int64 v14; // r9
  __int64 v16; // [rsp+20h] [rbp-38h]

  ProcessHeap = GetProcessHeap();
  v9 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
  v12 = v9;
  if ( v9 )
    *v9 = 0LL;
  else
    v12 = 0LL;
  if ( v12 )
  {
    *((_DWORD *)v12 + 2) = a2;
    v14 = -1LL;
    *((_DWORD *)v12 + 3) = a3;
    do
      ++v14;
    while ( a1[v14] );
    v13 = _AllocStringWorker<CTCoAllocPolicy>(v11, v10, a1, v14, v16, (unsigned __int16 **)v12);
    if ( v13 >= 0 )
    {
      *a4 = (struct HostedAppStateChangedContext *)v12;
      v12 = 0LL;
    }
  }
  else
  {
    v13 = -2147024882;
  }
  if ( v12 )
  {
    if ( *v12 )
    {
      CoTaskMemFree((LPVOID)*v12);
      *v12 = 0LL;
    }
    operator delete(v12, (const struct std::nothrow_t *)0x10);
  }
  if ( v13 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, &WPP_b248cfb32be6365c2b37d8015b37b144_Traceguids, v13);
    }
    AudPolicyLogError("HostedAppStateChangedContext::CreateInstance", 933, v13);
  }
  return (unsigned int)v13;
}
