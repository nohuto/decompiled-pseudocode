/*
 * XREFs of ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800174D8
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x1800173AC (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCTrackedEndpoint@@V?$CElementTraits@PEAVCTrackedEndpoint@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCTrackedEndpoint@@@Z @ 0x180011208 (-AddHead@-$CAtlList@PEAVCTrackedEndpoint@@V-$CElementTraits@PEAVCTrackedEndpoint@@@ATL@@@ATL@@QE.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z @ 0x18001729C (-CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        int a3,
        struct CHostedAppInteractivity **a4)
{
  struct CHostedAppInteractivity **v4; // r14
  int Instance; // ebx
  _QWORD *v8; // rsi
  struct CHostedAppInteractivity *v9; // rdi
  LPVOID *v10; // rdi
  __int64 result; // rax
  ATL::CAtlException *v12; // rbx
  struct CHostedAppInteractivity *v13[2]; // [rsp+20h] [rbp-48h] BYREF
  ATL::CAtlException *v14; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+70h] [rbp+8h]

  v13[1] = (struct CHostedAppInteractivity *)-2LL;
  v4 = a4;
  Instance = 0;
  v13[0] = 0LL;
  v8 = (_QWORD *)qword_18003AE18;
  while ( v8 )
  {
    v9 = (struct CHostedAppInteractivity *)v8[2];
    v8 = (_QWORD *)*v8;
    v13[0] = v9;
    if ( *((_DWORD *)v9 + 2) == a3 && !(unsigned int)_o__wcsicmp(*(_QWORD *)v9, a2) )
      goto LABEL_10;
  }
  Instance = CHostedAppInteractivity::CreateInstance(a2, a3, (unsigned __int16 ***)v13);
  if ( Instance < 0 )
    goto LABEL_11;
  Instance = 0;
  try
  {
    ATL::CAtlList<CTrackedEndpoint *,ATL::CElementTraits<CTrackedEndpoint *>>::AddHead(&qword_18003AE18, v13);
  }
  catch ( ATL::CAtlException *v14 )
  {
    v12 = v14;
    if ( *(_DWORD *)v14 == -1073741571 )
      _o__resetstkoflw();
    v15 = *(_DWORD *)v12;
    Instance = *(_DWORD *)v12;
    if ( v15 >= 0 )
    {
      v4 = a4;
      goto LABEL_9;
    }
LABEL_11:
    v10 = (LPVOID *)v13[0];
LABEL_12:
    if ( v10 )
    {
      if ( *v10 )
      {
        CoTaskMemFree(*v10);
        *v10 = 0LL;
      }
      operator delete(v10, (const struct std::nothrow_t *)0x10);
    }
    if ( Instance < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_396aba38fe233c5efaf9c5dc644ed068_Traceguids, Instance);
      }
      AudPolicyLogError("CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity", 453, Instance);
    }
    result = (unsigned int)Instance;
  }
LABEL_9:
  v9 = v13[0];
LABEL_10:
  *v4 = v9;
  v10 = 0LL;
  goto LABEL_12;
}
