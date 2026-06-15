/*
 * XREFs of ?GetSubmixHelper@CDeviceGraphStore@@IEAAJAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$$QEAV?$function@$$A6A_NAEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Z@3@@Z @ 0x1800CD338
 * Callers:
 *     ?GetSubmixesForApplication@CDeviceGraphStore@@UEAAJPEBGKAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800CD960 (-GetSubmixesForApplication@CDeviceGraphStore@@UEAAJPEBGKAEAV-$vector@V-$com_ptr_t@UIProcessSubmi.c)
 *     ?GetSubmixesForPID@CDeviceGraphStore@@UEAAJKW4ProcessSubmixCapture@@AEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800CDA70 (-GetSubmixesForPID@CDeviceGraphStore@@UEAAJKW4ProcessSubmixCapture@@AEAV-$vector@V-$com_ptr_t@UI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180018120 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_back@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800CC0E8 (--$emplace_back@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@PEAU32@@Z @ 0x1800D37BC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU-$.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDeviceGraphStore::GetSubmixHelper(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 v3; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  unsigned int v9; // esi
  __int64 *v10; // rdi
  __int64 *v11; // r14
  __int64 result; // rax
  __int64 *v13; // rsi
  _QWORD *i; // r15
  __int64 *v15; // r14
  int v16; // eax
  unsigned int v17; // r14d
  __int64 *v18; // rdi
  __int64 *v19; // rsi
  __int64 *v20; // rdi
  __int64 *v21; // rsi
  __int64 *v22; // rsi
  _QWORD *j; // r14
  __int64 *v24; // r12
  int v25; // eax
  unsigned int v26; // r12d
  __int64 *v27; // rdi
  __int64 *v28; // rsi
  __int64 *v29; // rdi
  __int64 *v30; // rsi
  __int64 *v31; // rdi
  __int64 *v32; // rsi
  __int64 *v33; // r12
  __int64 *k; // rsi
  __int64 *v35; // r13
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 m; // rax
  __int64 v39; // rdi
  void *v40[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v41; // [rsp+40h] [rbp-78h]
  void *v42[2]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v43; // [rsp+58h] [rbp-60h]
  void *v44[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v45; // [rsp+70h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  __int64 v50; // [rsp+D8h] [rbp+20h] BYREF

  v3 = a1;
  try
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
    v39 = **(_QWORD **)(v3 + 56);
    while ( v39 != *(_QWORD *)(v3 + 56) )
    {
      *(_OWORD *)v40 = 0LL;
      v41 = 0LL;
      v5 = (*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)(v39 + 64) + 80LL))(*(_QWORD *)(v39 + 64), v40);
      v9 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2BA,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
          (const char *)(unsigned int)v5);
        v10 = (__int64 *)v40[0];
        if ( v40[0] )
        {
          v11 = (__int64 *)v40[1];
          if ( v40[0] != v40[1] )
          {
            do
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v10++);
            while ( v10 != v11 );
            v10 = (__int64 *)v40[0];
          }
          std::_Deallocate(v10, (v41 - (__int64)v10) >> 3, 8uLL);
          *(_OWORD *)v40 = 0LL;
          v41 = 0LL;
        }
        if ( v4 )
          LeaveCriticalSection(v4);
        return v9;
      }
      v13 = (__int64 *)v40[0];
      for ( i = v40[0]; ; ++i )
      {
        v15 = (__int64 *)v40[1];
        if ( i == v40[1] )
          break;
        *(_OWORD *)v42 = 0LL;
        v43 = 0LL;
        v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void **))(**(_QWORD **)(v39 + 64) + 104LL))(
                *(_QWORD *)(v39 + 64),
                *i,
                v42);
        v17 = v16;
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2C6,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
            (const char *)(unsigned int)v16);
          v18 = (__int64 *)v42[0];
          if ( v42[0] )
          {
            v19 = (__int64 *)v42[1];
            if ( v42[0] != v42[1] )
            {
              do
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v18++);
              while ( v18 != v19 );
              v18 = (__int64 *)v42[0];
            }
            std::_Deallocate(v18, (v43 - (__int64)v18) >> 3, 8uLL);
            *(_OWORD *)v42 = 0LL;
            v43 = 0LL;
          }
          v20 = (__int64 *)v40[0];
          if ( v40[0] )
          {
            v21 = (__int64 *)v40[1];
            if ( v40[0] != v40[1] )
            {
              do
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v20++);
              while ( v20 != v21 );
              v20 = (__int64 *)v40[0];
            }
            std::_Deallocate(v20, (v41 - (__int64)v20) >> 3, 8uLL);
            *(_OWORD *)v40 = 0LL;
            v41 = 0LL;
          }
          if ( v4 )
            LeaveCriticalSection(v4);
          return v17;
        }
        v22 = (__int64 *)v42[0];
        for ( j = v42[0]; ; ++j )
        {
          v24 = (__int64 *)v42[1];
          if ( j == v42[1] )
            break;
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 144LL))(*j)
            || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 248LL))(*j) )
          {
            *(_OWORD *)v44 = 0LL;
            v45 = 0LL;
            v25 = (*(__int64 (__fastcall **)(_QWORD, void **))(*(_QWORD *)*j + 360LL))(*j, v44);
            v26 = v25;
            if ( v25 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x2D3,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                (const char *)(unsigned int)v25);
              v27 = (__int64 *)v44[0];
              if ( v44[0] )
              {
                v28 = (__int64 *)v44[1];
                if ( v44[0] != v44[1] )
                {
                  do
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v27++);
                  while ( v27 != v28 );
                  v27 = (__int64 *)v44[0];
                }
                std::_Deallocate(v27, (v45 - (__int64)v27) >> 3, 8uLL);
                *(_OWORD *)v44 = 0LL;
                v45 = 0LL;
              }
              v29 = (__int64 *)v42[0];
              if ( v42[0] )
              {
                v30 = (__int64 *)v42[1];
                if ( v42[0] != v42[1] )
                {
                  do
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v29++);
                  while ( v29 != v30 );
                  v29 = (__int64 *)v42[0];
                }
                std::_Deallocate(v29, (v43 - (__int64)v29) >> 3, 8uLL);
                *(_OWORD *)v42 = 0LL;
                v43 = 0LL;
              }
              v31 = (__int64 *)v40[0];
              if ( v40[0] )
              {
                v32 = (__int64 *)v40[1];
                if ( v40[0] != v40[1] )
                {
                  do
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v31++);
                  while ( v31 != v32 );
                  v31 = (__int64 *)v40[0];
                }
                std::_Deallocate(v31, (v41 - (__int64)v31) >> 3, 8uLL);
                *(_OWORD *)v40 = 0LL;
                v41 = 0LL;
              }
              if ( v4 )
                LeaveCriticalSection(v4);
              return v26;
            }
            v33 = (__int64 *)v44[0];
            for ( k = (__int64 *)v44[0]; ; ++k )
            {
              v35 = (__int64 *)v44[1];
              if ( k == v44[1] )
                break;
              v36 = *(_QWORD *)(a3 + 56);
              if ( !v36 )
                std::_Xbad_function_call();
              if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v36 + 16LL))(v36, k) )
              {
                ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
                  &v50,
                  *k);
                std::vector<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>(
                  a2,
                  &v50);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v50);
              }
              v33 = (__int64 *)v44[0];
            }
            if ( v33 )
            {
              if ( v33 != v44[1] )
              {
                do
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v33++);
                while ( v33 != v35 );
                v33 = (__int64 *)v44[0];
              }
              std::_Deallocate(v33, (v45 - (__int64)v33) >> 3, 8uLL);
            }
          }
          v22 = (__int64 *)v42[0];
        }
        if ( v22 )
        {
          if ( v22 != v42[1] )
          {
            do
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v22++);
            while ( v22 != v24 );
            v22 = (__int64 *)v42[0];
          }
          std::_Deallocate(v22, (v43 - (__int64)v22) >> 3, 8uLL);
        }
        v13 = (__int64 *)v40[0];
      }
      if ( v13 )
      {
        if ( v13 != v40[1] )
        {
          do
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13++);
          while ( v13 != v15 );
          v13 = (__int64 *)v40[0];
        }
        std::_Deallocate(v13, (v41 - (__int64)v13) >> 3, 8uLL);
      }
      v3 = a1;
      if ( !*(_BYTE *)(v39 + 25) )
      {
        v37 = *(_QWORD *)(v39 + 16);
        if ( *(_BYTE *)(v37 + 25) )
        {
          for ( m = *(_QWORD *)(v39 + 8); !*(_BYTE *)(m + 25) && v39 == *(_QWORD *)(m + 16); m = *(_QWORD *)(m + 8) )
            v39 = m;
        }
        else
        {
          m = std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min(v37, v6, v7);
        }
        v39 = m;
        v3 = a1;
      }
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2E4,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           v8);
  }
  return result;
}
