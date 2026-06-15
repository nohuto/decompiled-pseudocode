/*
 * XREFs of ?GetSubmixesForApplication@CDeviceGraphStore@@UEAAJPEBGKAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800A8F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800A835C (--$emplace_back@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800B10A8 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDeviceGraphStore::GetSubmixesForApplication(__int64 a1, const WCHAR *a2, int a3, __int64 **a4)
{
  __int64 v5; // r14
  __int64 *v6; // rdi
  __int64 *i; // rbx
  const char *v8; // r9
  __int64 *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  __int64 *v12; // rbx
  __int64 *v13; // rsi
  __int64 result; // rax
  __int64 *v15; // rdi
  _QWORD *j; // r14
  __int64 *v17; // rsi
  int v18; // eax
  unsigned int v19; // esi
  __int64 *v20; // rbx
  __int64 *v21; // rdi
  __int64 *v22; // rbx
  __int64 *v23; // rdi
  __int64 *v24; // rdi
  _QWORD *k; // rsi
  __int64 *v26; // r12
  int v27; // eax
  unsigned int v28; // r12d
  __int64 *v29; // rbx
  __int64 *v30; // rdi
  __int64 *v31; // rbx
  __int64 *v32; // rdi
  __int64 *v33; // rbx
  __int64 *v34; // rdi
  __int64 *v35; // r12
  _QWORD *m; // rdi
  __int64 *v37; // r13
  const WCHAR *v38; // rax
  __int64 *v39; // rax
  __int64 *n; // rax
  void *v41[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v42; // [rsp+40h] [rbp-88h]
  void *v43[2]; // [rsp+48h] [rbp-80h] BYREF
  __int64 v44; // [rsp+58h] [rbp-70h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-68h] BYREF
  void *v46[2]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v47; // [rsp+78h] [rbp-50h]
  __int64 v48[9]; // [rsp+80h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v48[1] = -2LL;
  v5 = a1;
  try
  {
    v6 = a4[1];
    for ( i = *a4; i != v6; ++i )
      wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(i);
    a4[1] = *a4;
    Microsoft::WRL::Wrappers::CriticalSection::Lock(v5 + 16, (__int64)&lpCriticalSection);
    v9 = **(__int64 ***)(v5 + 56);
    while ( v9 != *(__int64 **)(v5 + 56) )
    {
      *(_OWORD *)v41 = 0LL;
      v42 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v9[8] + 72LL))(v9[8], v41);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x22B,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
          (const char *)(unsigned int)v10);
        v12 = (__int64 *)v41[0];
        if ( v41[0] )
        {
          v13 = (__int64 *)v41[1];
          if ( v41[0] != v41[1] )
          {
            do
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v12++);
            while ( v12 != v13 );
            v12 = (__int64 *)v41[0];
          }
          std::_Deallocate(v12, (v42 - (__int64)v12) >> 3, 8uLL);
          *(_OWORD *)v41 = 0LL;
          v42 = 0LL;
        }
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        return v11;
      }
      v15 = (__int64 *)v41[0];
      for ( j = v41[0]; ; ++j )
      {
        v17 = (__int64 *)v41[1];
        if ( j == v41[1] )
          break;
        *(_OWORD *)v43 = 0LL;
        v44 = 0LL;
        v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v9[8] + 80LL))(v9[8], *j, v43);
        v19 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x232,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
            (const char *)(unsigned int)v18);
          v20 = (__int64 *)v43[0];
          if ( v43[0] )
          {
            v21 = (__int64 *)v43[1];
            if ( v43[0] != v43[1] )
            {
              do
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v20++);
              while ( v20 != v21 );
              v20 = (__int64 *)v43[0];
            }
            std::_Deallocate(v20, (v44 - (__int64)v20) >> 3, 8uLL);
            *(_OWORD *)v43 = 0LL;
            v44 = 0LL;
          }
          v22 = (__int64 *)v41[0];
          if ( v41[0] )
          {
            v23 = (__int64 *)v41[1];
            if ( v41[0] != v41[1] )
            {
              do
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v22++);
              while ( v22 != v23 );
              v22 = (__int64 *)v41[0];
            }
            std::_Deallocate(v22, (v42 - (__int64)v22) >> 3, 8uLL);
            *(_OWORD *)v41 = 0LL;
            v42 = 0LL;
          }
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          return v19;
        }
        v24 = (__int64 *)v43[0];
        for ( k = v43[0]; ; ++k )
        {
          v26 = (__int64 *)v43[1];
          if ( k == v43[1] )
            break;
          *(_OWORD *)v46 = 0LL;
          v47 = 0LL;
          v27 = (*(__int64 (__fastcall **)(_QWORD, void **))(*(_QWORD *)*k + 368LL))(*k, v46);
          v28 = v27;
          if ( v27 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x239,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
              (const char *)(unsigned int)v27);
            v29 = (__int64 *)v46[0];
            if ( v46[0] )
            {
              v30 = (__int64 *)v46[1];
              if ( v46[0] != v46[1] )
              {
                do
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v29++);
                while ( v29 != v30 );
                v29 = (__int64 *)v46[0];
              }
              std::_Deallocate(v29, (v47 - (__int64)v29) >> 3, 8uLL);
              *(_OWORD *)v46 = 0LL;
              v47 = 0LL;
            }
            v31 = (__int64 *)v43[0];
            if ( v43[0] )
            {
              v32 = (__int64 *)v43[1];
              if ( v43[0] != v43[1] )
              {
                do
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v31++);
                while ( v31 != v32 );
                v31 = (__int64 *)v43[0];
              }
              std::_Deallocate(v31, (v44 - (__int64)v31) >> 3, 8uLL);
              *(_OWORD *)v43 = 0LL;
              v44 = 0LL;
            }
            v33 = (__int64 *)v41[0];
            if ( v41[0] )
            {
              v34 = (__int64 *)v41[1];
              if ( v41[0] != v41[1] )
              {
                do
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v33++);
                while ( v33 != v34 );
                v33 = (__int64 *)v41[0];
              }
              std::_Deallocate(v33, (v42 - (__int64)v33) >> 3, 8uLL);
              *(_OWORD *)v41 = 0LL;
              v42 = 0LL;
            }
            if ( lpCriticalSection )
              LeaveCriticalSection(lpCriticalSection);
            return v28;
          }
          v35 = (__int64 *)v46[0];
          for ( m = v46[0]; ; ++m )
          {
            v37 = (__int64 *)v46[1];
            if ( m == v46[1] )
              break;
            v38 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*m + 152LL))(*m);
            if ( CompareStringOrdinal(v38, -1, a2, -1, 1) == 2
              && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*m + 160LL))(*m) == a3 )
            {
              ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(v48, *m);
              std::vector<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>(
                (__int64)a4,
                v48);
              wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(v48);
            }
            v35 = (__int64 *)v46[0];
          }
          if ( v35 )
          {
            if ( v35 != v46[1] )
            {
              do
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v35++);
              while ( v35 != v37 );
              v35 = (__int64 *)v46[0];
            }
            std::_Deallocate(v35, (v47 - (__int64)v35) >> 3, 8uLL);
          }
          v24 = (__int64 *)v43[0];
        }
        if ( v24 )
        {
          if ( v24 != v43[1] )
          {
            do
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v24++);
            while ( v24 != v26 );
            v24 = (__int64 *)v43[0];
          }
          std::_Deallocate(v24, (v44 - (__int64)v24) >> 3, 8uLL);
        }
        v15 = (__int64 *)v41[0];
      }
      if ( v15 )
      {
        if ( v15 != v41[1] )
        {
          do
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v15++);
          while ( v15 != v17 );
          v15 = (__int64 *)v41[0];
        }
        std::_Deallocate(v15, (v42 - (__int64)v15) >> 3, 8uLL);
      }
      v5 = a1;
      if ( !*((_BYTE *)v9 + 25) )
      {
        v39 = (__int64 *)v9[2];
        if ( *((_BYTE *)v39 + 25) )
        {
          for ( n = (__int64 *)v9[1]; !*((_BYTE *)n + 25) && v9 == (__int64 *)n[2]; n = (__int64 *)n[1] )
            v9 = n;
          v9 = n;
        }
        else
        {
          do
          {
            v9 = v39;
            v39 = (__int64 *)*v39;
          }
          while ( !*((_BYTE *)v39 + 25) );
        }
        v5 = a1;
      }
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x24B,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           v8);
  }
  return result;
}
