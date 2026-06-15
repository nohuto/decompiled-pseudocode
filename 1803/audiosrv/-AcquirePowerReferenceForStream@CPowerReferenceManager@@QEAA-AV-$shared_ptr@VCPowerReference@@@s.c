/*
 * XREFs of ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x1800260A0
 * Callers:
 *     ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180023500 (-StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 * Callees:
 *     ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x180019890 (-AcquireReference@CPlaybackNotifier@@QEAA-AV-$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z.c)
 *     ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x180029990 (-AcquireSebReference@CSebNotifier@@QEAA-AV-$shared_ptr@VCSebReference@@@std@@XZ.c)
 *     ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x180029BA0 (-AcquirePdcTimerActivation@CPdcActivationClient@@QEAA-AV-$shared_ptr@VCPdcTimerActivation@@@std@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireReference@CCaptureNotifier@@QEAA?AV?$shared_ptr@VCCaptureReference@@@std@@K@Z @ 0x1800D4DFC (-AcquireReference@CCaptureNotifier@@QEAA-AV-$shared_ptr@VCCaptureReference@@@std@@K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CPowerReferenceManager::AcquirePowerReferenceForStream(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v6; // esi
  HANDLE ProcessHeap; // rax
  _DWORD *v8; // rax
  std::_Ref_count_base *v9; // rcx
  __int64 *v10; // rax
  _QWORD *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  std::_Ref_count_base *v14; // rcx
  __int64 *v15; // rax
  _QWORD *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  std::_Ref_count_base *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  bool (__fastcall *v22)(CAudioStream *__hidden); // rax
  volatile signed __int32 **v23; // rax
  const char *v24; // r9
  _QWORD *v25; // r8
  volatile signed __int32 *v26; // rcx
  volatile signed __int32 *v27; // rdx
  std::_Ref_count_base *v28; // rcx
  std::_Ref_count_base *v29; // rcx
  __int64 *v31; // rax
  _QWORD *v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rdx
  std::_Ref_count_base *v35; // rcx
  volatile signed __int32 *v36; // [rsp+30h] [rbp-38h] BYREF
  std::_Ref_count_base *v37; // [rsp+38h] [rbp-30h]
  __int128 v38; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = 1;
  try
  {
    ProcessHeap = GetProcessHeap();
    v8 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
    if ( v8 )
    {
      v8[2] = 1;
      v8[3] = 1;
      *(_QWORD *)v8 = &std::_Ref_count_obj<CPowerReference>::`vftable';
      *((_QWORD *)v8 + 2) = 0LL;
      *((_QWORD *)v8 + 3) = 0LL;
      *((_QWORD *)v8 + 4) = 0LL;
      *((_QWORD *)v8 + 5) = 0LL;
      *((_QWORD *)v8 + 6) = 0LL;
      *((_QWORD *)v8 + 7) = 0LL;
      *((_QWORD *)v8 + 8) = 0LL;
      *((_QWORD *)v8 + 9) = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    *a2 = v8 + 4;
    v9 = (std::_Ref_count_base *)a2[1];
    a2[1] = v8;
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    v38 = 0LL;
    if ( !g_ADGProcess || LODWORD(g_ADGProcess[2].OwningThread) != *(_DWORD *)(a3 + 64) )
    {
      if ( *(_DWORD *)(a3 + 264) || (*(_BYTE *)(a3 + 268) & 1) == 0 )
        v6 = 0;
      if ( !v6 || *(_DWORD *)(a3 + 272) )
      {
        v10 = (__int64 *)CPdcActivationClient::AcquirePdcTimerActivation(a1, &v36, a3);
        v11 = (_QWORD *)*a2;
        v12 = *v10;
        v13 = v10[1];
        *v10 = 0LL;
        v10[1] = 0LL;
        *v11 = v12;
        v14 = (std::_Ref_count_base *)v11[1];
        v11[1] = v13;
        if ( v14 )
          std::_Ref_count_base::_Decref(v14);
        if ( v37 )
          std::_Ref_count_base::_Decref(v37);
      }
    }
    v15 = (__int64 *)CSebNotifier::AcquireSebReference(a1 + 112, &v36);
    v16 = (_QWORD *)*a2;
    v17 = *v15;
    v18 = v15[1];
    *v15 = 0LL;
    v15[1] = 0LL;
    v16[2] = v17;
    v19 = (std::_Ref_count_base *)v16[3];
    v16[3] = v18;
    if ( v19 )
      std::_Ref_count_base::_Decref(v19);
    if ( v37 )
      std::_Ref_count_base::_Decref(v37);
    v20 = *(_QWORD *)(a3 + 192);
    if ( v20 )
    {
      v21 = v20 + 8;
      v22 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)(v20 + 8) + 64LL);
      if ( v22 == CAudioStream::IsCaptureStream )
      {
        if ( (unsigned int)(*(_DWORD *)(v21 + 548) - 1) > 1 )
          goto LABEL_23;
        goto LABEL_33;
      }
      if ( ((unsigned __int8 (__fastcall *)(__int64, bool (__fastcall *)(CAudioStream *__hidden)))v22)(
             v21,
             CAudioStream::IsCaptureStream) )
      {
LABEL_33:
        v31 = (__int64 *)CCaptureNotifier::AcquireReference((_Mtx_t)(a1 + 312));
        v32 = (_QWORD *)*a2;
        v33 = *v31;
        v34 = v31[1];
        *v31 = 0LL;
        v31[1] = 0LL;
        v32[6] = v33;
        v35 = (std::_Ref_count_base *)v32[7];
        v32[7] = v34;
        if ( v35 )
          std::_Ref_count_base::_Decref(v35);
        v29 = v37;
        if ( v37 )
          goto LABEL_28;
        return a2;
      }
    }
LABEL_23:
    v23 = CPlaybackNotifier::AcquireReference((_Mtx_t)(a1 + 216), &v36, *(_WORD **)(a3 + 208));
    v25 = (_QWORD *)*a2;
    v26 = *v23;
    v27 = v23[1];
    *v23 = 0LL;
    v23[1] = 0LL;
    v25[4] = v26;
    v28 = (std::_Ref_count_base *)v25[5];
    v25[5] = v27;
    if ( v28 )
      std::_Ref_count_base::_Decref(v28);
    v29 = v37;
    if ( !v37 )
      return a2;
LABEL_28:
    std::_Ref_count_base::_Decref(v29);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x3B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      v24);
    return a2;
  }
  return a2;
}
