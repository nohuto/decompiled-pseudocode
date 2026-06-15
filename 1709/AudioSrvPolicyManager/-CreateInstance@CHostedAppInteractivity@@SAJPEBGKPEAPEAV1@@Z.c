/*
 * XREFs of ?CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z @ 0x18001729C
 * Callers:
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18001715C (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800174D8 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedApp.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180011518 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CHostedAppInteractivity::CreateInstance(const unsigned __int16 *a1, int a2, unsigned __int16 ***a3)
{
  HANDLE ProcessHeap; // rax
  unsigned __int16 **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int16 **v10; // rbx
  int v11; // edi
  unsigned __int64 v12; // r9
  __int64 v14; // [rsp+20h] [rbp-28h]

  ProcessHeap = GetProcessHeap();
  v7 = (unsigned __int16 **)HeapAlloc(ProcessHeap, 0, 0x10uLL);
  v10 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = -1;
    *v7 = 0LL;
    *((_DWORD *)v7 + 3) = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    *((_DWORD *)v10 + 2) = a2;
    v12 = -1LL;
    do
      ++v12;
    while ( a1[v12] );
    v11 = _AllocStringWorker<CTCoAllocPolicy>(v9, v8, a1, v12, v14, v10);
    if ( v11 >= 0 )
    {
      *a3 = v10;
      v10 = 0LL;
    }
  }
  else
  {
    v11 = -2147024882;
  }
  if ( v10 )
  {
    if ( *v10 )
    {
      CoTaskMemFree(*v10);
      *v10 = 0LL;
    }
    operator delete(v10, (const struct std::nothrow_t *)0x10);
  }
  if ( v11 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, &WPP_396aba38fe233c5efaf9c5dc644ed068_Traceguids, v11);
    }
    AudPolicyLogError("CHostedAppInteractivity::CreateInstance", 316, v11);
  }
  return (unsigned int)v11;
}
