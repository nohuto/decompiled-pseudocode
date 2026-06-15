/*
 * XREFs of ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x18002075C
 * Callers:
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180020618 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800209C4 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedA.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180017D14 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CHostedAppInteractivity::CreateInstance(
        const unsigned __int16 *a1,
        __int64 a2,
        int a3,
        struct CHostedAppInteractivity **a4)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _DWORD *v12; // rbx
  int v13; // edi
  unsigned __int64 v14; // r9
  __int64 v16; // [rsp+20h] [rbp-38h]

  ProcessHeap = GetProcessHeap();
  v9 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v12 = v9;
  if ( v9 )
  {
    v9[2] = -1;
    *(_QWORD *)v9 = 0LL;
    v9[3] = 0;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    v12[2] = a3;
    v14 = -1LL;
    *((_QWORD *)v12 + 2) = a2;
    do
      ++v14;
    while ( a1[v14] );
    v13 = _AllocStringWorker<CTCoAllocPolicy>(v11, v10, a1, v14, v16, (unsigned __int16 **)v12);
    if ( v13 >= 0 )
    {
      *a4 = (struct CHostedAppInteractivity *)v12;
      v12 = 0LL;
    }
  }
  else
  {
    v13 = -2147024882;
  }
  if ( v12 )
  {
    if ( *(_QWORD *)v12 )
    {
      CoTaskMemFree(*(LPVOID *)v12);
      *(_QWORD *)v12 = 0LL;
    }
    operator delete(v12, (const struct std::nothrow_t *)0x18);
  }
  if ( v13 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, &WPP_769f1732904936de7b79ce5e0d5d3337_Traceguids, v13);
    }
    AudPolicyLogError("CHostedAppInteractivity::CreateInstance", 322, v13);
  }
  return (unsigned int)v13;
}
