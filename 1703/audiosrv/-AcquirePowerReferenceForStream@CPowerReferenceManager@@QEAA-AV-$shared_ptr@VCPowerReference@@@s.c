/*
 * XREFs of ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180026C54
 * Callers:
 *     ?AcquirePowerReferenceForStream@@YA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180026C28 (-AcquirePowerReferenceForStream@@YA-AV-$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z.c)
 * Callees:
 *     ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x180026EC4 (-AcquireSebReference@CSebNotifier@@QEAA-AV-$shared_ptr@VCSebReference@@@std@@XZ.c)
 *     ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x180027044 (-AcquirePdcTimerActivation@CPdcActivationClient@@QEAA-AV-$shared_ptr@VCPdcTimerActivation@@@std@.c)
 *     ??$make_shared@VCPowerReference@@$$V@std@@YA?AV?$shared_ptr@VCPowerReference@@@0@XZ @ 0x180028430 (--$make_shared@VCPowerReference@@$$V@std@@YA-AV-$shared_ptr@VCPowerReference@@@0@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CPowerReferenceManager::AcquirePowerReferenceForStream(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // rbx
  int v6; // edi
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  std::_Ref_count_base *v10; // rcx
  __int64 *v11; // rax
  _QWORD *v12; // r9
  __int64 v13; // r8
  __int64 v14; // rdx
  std::_Ref_count_base *v15; // rcx
  __int64 *v16; // rax
  _QWORD *v17; // r9
  __int64 v18; // r8
  __int64 v19; // rdx
  std::_Ref_count_base *v20; // rcx
  _BYTE v22[8]; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v23; // [rsp+38h] [rbp-20h]
  __int128 v24; // [rsp+40h] [rbp-18h]

  v4 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = 1;
  try
  {
    v7 = (__int64 *)std::make_shared<CPowerReference,>(v22);
    v8 = *v7;
    v9 = v7[1];
    *v7 = 0LL;
    v7[1] = 0LL;
    v10 = (std::_Ref_count_base *)v4[1];
    v4[1] = v9;
    *v4 = v8;
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
    if ( v23 )
      std::_Ref_count_base::_Decref(v23);
    v24 = 0LL;
    if ( *(_DWORD *)(a3 + 256) || (*(_BYTE *)(a3 + 260) & 1) == 0 )
      v6 = 0;
    if ( !v6 || *(_DWORD *)(a3 + 264) )
    {
      v11 = (__int64 *)CPdcActivationClient::AcquirePdcTimerActivation(a1, v22, a3);
      v12 = (_QWORD *)*v4;
      v13 = *v11;
      v14 = v11[1];
      *v11 = 0LL;
      v11[1] = 0LL;
      v15 = (std::_Ref_count_base *)v12[1];
      v12[1] = v14;
      *v12 = v13;
      if ( v15 )
        std::_Ref_count_base::_Decref(v15);
      if ( v23 )
        std::_Ref_count_base::_Decref(v23);
    }
    v16 = (__int64 *)CSebNotifier::AcquireSebReference((CSebNotifier *)(a1 + 112));
    v17 = (_QWORD *)*v4;
    v18 = *v16;
    v19 = v16[1];
    *v16 = 0LL;
    v16[1] = 0LL;
    v20 = (std::_Ref_count_base *)v17[3];
    v17[3] = v19;
    v17[2] = v18;
    if ( v20 )
      std::_Ref_count_base::_Decref(v20);
    if ( v23 )
      std::_Ref_count_base::_Decref(v23);
  }
  catch ( std::bad_alloc )
  {
    AudSrvTraceLoggingErrorHelper("CPowerReferenceManager::AcquirePowerReferenceForStream", 0x2Du, -2147024882);
    return a2;
  }
  return v4;
}
