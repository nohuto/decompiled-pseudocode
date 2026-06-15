/*
 * XREFs of ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18002CBE0
 * Callers:
 *     ?AcquirePowerReference@CVADServer@@QEAAXXZ @ 0x180025CF0 (-AcquirePowerReference@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x18000F638 (-AcquireReference@CPlaybackNotifier@@QEAA-AV-$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z.c)
 *     ?IsCaptureStream@CAudioStream@@UEAAHXZ @ 0x18001B050 (-IsCaptureStream@CAudioStream@@UEAAHXZ.c)
 *     ??4?$shared_ptr@VCPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800296B8 (--4-$shared_ptr@VCPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0$$V@?$_Ref_count_obj@VCPowerReference@@@std@@QEAA@XZ @ 0x18002A62C (--$-0$$V@-$_Ref_count_obj@VCPowerReference@@@std@@QEAA@XZ.c)
 *     ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x18002B618 (-AcquireSebReference@CSebNotifier@@QEAA-AV-$shared_ptr@VCSebReference@@@std@@XZ.c)
 *     ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x18002C3E4 (-AcquirePdcTimerActivation@CPdcActivationClient@@QEAA-AV-$shared_ptr@VCPdcTimerActivation@@@std@.c)
 *     ??4?$shared_ptr@VCPdcTimerActivation@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18002CB04 (--4-$shared_ptr@VCPdcTimerActivation@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireReference@CCaptureNotifier@@QEAA?AV?$shared_ptr@VCCaptureReference@@@std@@K@Z @ 0x18009D55C (-AcquireReference@CCaptureNotifier@@QEAA-AV-$shared_ptr@VCCaptureReference@@@std@@K@Z.c)
 */

// Hidden C++ exception states: #wind=2
const char **__fastcall CPowerReferenceManager::AcquirePowerReferenceForStream(__int64 a1, const char **a2, __int64 a3)
{
  const char **v4; // rbx
  int v6; // esi
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v8; // rax
  __int64 *v9; // rax
  volatile signed __int32 **v10; // rax
  const char *v11; // r9
  volatile signed __int32 *v12; // r8
  volatile signed __int32 *v13; // rdx
  std::_Ref_count_base *v14; // rcx
  __int64 v15; // rax
  CAudioStream *v16; // rcx
  _BOOL8 (__fastcall *v17)(CAudioStream *); // rax
  int IsCaptureStream; // eax
  __int64 *v19; // rax
  const char *v20; // r9
  __int64 v21; // r8
  __int64 v22; // rdx
  std::_Ref_count_base *v23; // rcx
  __int64 *v25; // rax
  __int64 v26; // rdx
  volatile signed __int32 *v27; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v28; // [rsp+38h] [rbp-20h]
  __int128 v29; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = 1;
  try
  {
    ProcessHeap = GetProcessHeap();
    v8 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, 0x50uLL);
    if ( v8 )
      v8 = (volatile signed __int32 *)std::_Ref_count_obj<CPowerReference>::_Ref_count_obj<CPowerReference>((__int64)v8);
    v28 = (std::_Ref_count_base *)v8;
    v27 = v8 + 4;
    std::shared_ptr<CPowerReference>::operator=(v4, (__int64 *)&v27);
    if ( v28 )
      std::_Ref_count_base::_Decref(v28);
    v29 = 0LL;
    if ( !g_ADGProcess || LODWORD(g_ADGProcess[2].OwningThread) != *(_DWORD *)(a3 + 64) )
    {
      if ( *(_DWORD *)(a3 + 256) || (*(_BYTE *)(a3 + 260) & 1) == 0 )
        v6 = 0;
      if ( !v6 || *(_DWORD *)(a3 + 264) )
      {
        v9 = CPdcActivationClient::AcquirePdcTimerActivation(a1, &v27, a3);
        std::shared_ptr<CPdcTimerActivation>::operator=(*v4, v9);
        if ( v28 )
          std::_Ref_count_base::_Decref(v28);
      }
    }
    v10 = CSebNotifier::AcquireSebReference((CSebNotifier *)(a1 + 112), &v27);
    v11 = *v4;
    v12 = *v10;
    v13 = v10[1];
    *v10 = 0LL;
    v10[1] = 0LL;
    v14 = (std::_Ref_count_base *)*((_QWORD *)v11 + 3);
    *((_QWORD *)v11 + 3) = v13;
    *((_QWORD *)v11 + 2) = v12;
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    if ( v28 )
      std::_Ref_count_base::_Decref(v28);
    v15 = *(_QWORD *)(a3 + 192);
    if ( v15
      && ((v16 = (CAudioStream *)(v15 + 8),
           v17 = *(_BOOL8 (__fastcall **)(CAudioStream *))(*(_QWORD *)(v15 + 8) + 64LL),
           v17 != CAudioStream::IsCaptureStream)
        ? (IsCaptureStream = ((__int64 (__fastcall *)(CAudioStream *, _BOOL8 (__fastcall *)(CAudioStream *)))v17)(
                               v16,
                               CAudioStream::IsCaptureStream))
        : (IsCaptureStream = CAudioStream::IsCaptureStream(v16)),
          IsCaptureStream) )
    {
      v25 = (__int64 *)CCaptureNotifier::AcquireReference((_Mtx_t)(a1 + 312));
      v20 = *v4;
      v21 = *v25;
      v26 = v25[1];
      *v25 = 0LL;
      v25[1] = 0LL;
      v23 = (std::_Ref_count_base *)*((_QWORD *)v20 + 7);
      *((_QWORD *)v20 + 7) = v26;
      *((_QWORD *)v20 + 6) = v21;
    }
    else
    {
      v19 = CPlaybackNotifier::AcquireReference((_Mtx_t)(a1 + 216), &v27, *(_WORD **)(a3 + 200));
      v20 = *v4;
      v21 = *v19;
      v22 = v19[1];
      *v19 = 0LL;
      v19[1] = 0LL;
      v23 = (std::_Ref_count_base *)*((_QWORD *)v20 + 5);
      *((_QWORD *)v20 + 5) = v22;
      *((_QWORD *)v20 + 4) = v21;
    }
    if ( v23 )
      std::_Ref_count_base::_Decref(v23);
    if ( v28 )
      std::_Ref_count_base::_Decref(v28);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(retaddr, (void *)0x3D, v21, v20);
    return a2;
  }
  return v4;
}
