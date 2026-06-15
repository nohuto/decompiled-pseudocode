/*
 * XREFs of ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x1800193A0
 * Callers:
 *     ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x180019890 (-AcquireReference@CPlaybackNotifier@@QEAA-AV-$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z.c)
 *     ?_Destroy@?$_Ref_count_obj@VCPlaybackReference@@@std@@EEAAXXZ @ 0x180048F40 (-_Destroy@-$_Ref_count_obj@VCPlaybackReference@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180016CB0 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800174E4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@1@@Z @ 0x180017764 (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEN.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18001790C (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$basic_string@GU-$char_t_ea_18001790C.c)
 *     TraceLoggingRegisterEx @ 0x180017D54 (TraceLoggingRegisterEx.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _alloca_probe @ 0x180065740 (_alloca_probe.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall CPlaybackNotifier::UpdateAudioPlaybackStatus(__int64 a1, int a2, _WORD *a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // r15
  size_t v9; // rbx
  __int64 v10; // rdx
  __int64 **v11; // r12
  __int64 *v12; // rbx
  __int64 *v13; // r10
  __int64 *v14; // rdi
  unsigned __int64 v15; // r14
  char *v16; // rax
  __int64 *v17; // r9
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rax
  const char *v22; // r9
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  HANDLE ProcessHeap; // rax
  bool v27; // zf
  unsigned int v28; // r11d
  unsigned int v29; // ebx
  __int64 *v30; // r10
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r10
  char *v34; // rax
  size_t v35; // rbx
  TLG_PENABLECALLBACK v36; // rdx
  PVOID v37; // r8
  WINBOOL fPending; // [rsp+30h] [rbp-10C8h] BYREF
  int v40; // [rsp+34h] [rbp-10C4h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-10C0h] BYREF
  __int64 v42; // [rsp+40h] [rbp-10B8h] BYREF
  _QWORD *v43; // [rsp+48h] [rbp-10B0h] BYREF
  __int64 *v44; // [rsp+50h] [rbp-10A8h] BYREF
  _DWORD v45[2]; // [rsp+58h] [rbp-10A0h] BYREF
  __int64 v46; // [rsp+60h] [rbp-1098h]
  __int64 v47; // [rsp+68h] [rbp-1090h]
  _QWORD v48[2]; // [rsp+70h] [rbp-1088h] BYREF
  unsigned __int64 v49; // [rsp+80h] [rbp-1078h]
  unsigned __int64 v50; // [rsp+88h] [rbp-1070h]
  unsigned __int16 *v51; // [rsp+90h] [rbp-1068h] BYREF
  int v52; // [rsp+98h] [rbp-1060h]
  int v53; // [rsp+9Ch] [rbp-105Ch]
  void *v54; // [rsp+A0h] [rbp-1058h]
  int v55; // [rsp+A8h] [rbp-1050h]
  int v56; // [rsp+ACh] [rbp-104Ch]
  int *v57; // [rsp+B0h] [rbp-1048h]
  __int64 v58; // [rsp+B8h] [rbp-1040h]
  _DWORD v59[1024]; // [rsp+C0h] [rbp-1038h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+10F8h] [rbp+0h]

  v47 = -2LL;
  try
  {
    v49 = 0LL;
    v50 = 7LL;
    LOWORD(v48[0]) = 0;
    v6 = -1LL;
    do
      ++v6;
    while ( a3[v6] );
    if ( v6 <= 7 )
    {
      v49 = v6;
      v35 = 2 * v6;
      memmove(v48, a3, v35);
      *(_WORD *)((char *)v48 + v35) = 0;
      v8 = v48[0];
    }
    else
    {
      v7 = 0x7FFFFFFFFFFFFFFELL;
      if ( v6 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlength_error("string too long");
      if ( (v6 | 7) <= 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v6 | 7) < 0xA )
          v7 = 10LL;
        else
          v7 = v6 | 7;
      }
      v8 = std::_Allocate<std::_Default_allocate_traits<1>>(v7 + 1, 2uLL);
      v49 = v6;
      v50 = v7;
      v9 = 2 * v6;
      memcpy_0((void *)v8, a3, v9);
      *(_WORD *)(v9 + v8) = 0;
      v48[0] = v8;
    }
    v11 = (__int64 **)(a1 + 80);
    v12 = *(__int64 **)(a1 + 80);
    v13 = (__int64 *)v12[1];
    v14 = v12;
    v15 = v50;
    while ( !*((_BYTE *)v13 + 25) )
    {
      v16 = (char *)v48;
      if ( v50 >= 8 )
        v16 = (char *)v8;
      v17 = v13 + 4;
      if ( (unsigned __int64)v13[7] >= 8 )
        v17 = (__int64 *)v13[4];
      v18 = v13[6];
      if ( v49 < v18 )
        v19 = v49;
      else
        v19 = v13[6];
      if ( v19 )
      {
        v20 = (char *)v17 - v16;
        while ( 1 )
        {
          v10 = *(unsigned __int16 *)&v16[v20];
          if ( (_WORD)v10 != *(_WORD *)v16 )
            break;
          v16 += 2;
          if ( !--v19 )
            goto LABEL_20;
        }
        if ( (unsigned __int16)v10 < *(_WORD *)v16 )
        {
LABEL_64:
          v13 = (__int64 *)v13[2];
          continue;
        }
      }
      else
      {
LABEL_20:
        if ( v18 < v49 )
          goto LABEL_64;
      }
      v12 = v13;
      v13 = (__int64 *)*v13;
    }
    if ( v12 != v14 )
    {
      v21 = (__int64)(v12 + 4);
      if ( (unsigned __int64)v12[7] >= 8 )
        v21 = v12[4];
      v22 = (const char *)v48;
      if ( v50 >= 8 )
        v22 = (const char *)v8;
      v23 = v12[6];
      if ( v23 < v49 )
        v24 = v12[6];
      else
        v24 = v49;
      if ( v24 )
      {
        v22 -= v21;
        while ( 1 )
        {
          v10 = *(unsigned __int16 *)&v22[v21];
          if ( (_WORD)v10 != *(_WORD *)v21 )
            break;
          v21 += 2LL;
          if ( !--v24 )
            goto LABEL_34;
        }
        if ( (unsigned __int16)v10 >= *(_WORD *)v21 )
          goto LABEL_35;
      }
      else
      {
LABEL_34:
        if ( v49 >= v23 )
        {
LABEL_35:
          if ( v15 >= 8 )
          {
            v25 = v8;
            if ( v15 + 1 > 0x7FFFFFFFFFFFFFFFLL
              || 2 * (v15 + 1) >= 0x1000
              && ((v8 & 0x1F) != 0 || (v8 = *(_QWORD *)(v8 - 8), v8 >= v25) || (v25 = v25 - v8 - 8, v25 > 0x1F)) )
            {
              _o__invalid_parameter_noinfo_noreturn(v25);
              JUMPOUT(0x18007F3AALL);
            }
            ProcessHeap = GetProcessHeap();
            LODWORD(v21) = HeapFree(ProcessHeap, 0, (LPVOID)v8);
          }
          v49 = 0LL;
          v50 = 7LL;
          LOWORD(v48[0]) = 0;
          if ( a2 )
          {
            if ( a2 != 1 )
              return v21;
            LODWORD(v21) = *((_DWORD *)v12 + 16);
            if ( !(_DWORD)v21 )
              return v21;
            LODWORD(v21) = v21 - 1;
            v27 = (_DWORD)v21 == 0;
            *((_DWORD *)v12 + 16) = v21;
          }
          else
          {
            v27 = ++*((_DWORD *)v12 + 16) == 1;
          }
          if ( v27 )
          {
            memset_0(v59, 0, sizeof(v59));
            v28 = 0;
            v29 = 2;
            v59[0] = 1;
            v30 = *v11;
            v31 = **v11;
            v42 = v31;
            while ( (__int64 *)v31 != v30 )
            {
              v32 = v31 + 32;
              if ( *(_DWORD *)(v31 + 64) )
              {
                if ( v28 >= 0x24 )
                  break;
                if ( *(_QWORD *)(v31 + 56) >= 8uLL )
                  v32 = *(_QWORD *)v32;
                *(_OWORD *)&v59[v29] = *(_OWORD *)v32;
                *(_OWORD *)&v59[v29 + 4] = *(_OWORD *)(v32 + 16);
                *(_OWORD *)&v59[v29 + 8] = *(_OWORD *)(v32 + 32);
                *(_OWORD *)&v59[v29 + 12] = *(_OWORD *)(v32 + 48);
                *(_OWORD *)&v59[v29 + 16] = *(_OWORD *)(v32 + 64);
                *(_OWORD *)&v59[v29 + 20] = *(_OWORD *)(v32 + 80);
                *(_OWORD *)&v59[v29 + 24] = *(_OWORD *)(v32 + 96);
                v29 += 28;
              }
              std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>,std::_Iterator_base0>::operator++(&v42);
              v31 = v42;
            }
            v59[1] = v28;
            v40 = RtlPublishWnfStateData(WNF_AUDC_RENDER, 0LL, v59, 4096LL, 0LL);
            Context = 0LL;
            if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
              && fPending )
            {
              Context = &qword_18018A2A0;
              qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
              qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
              atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
              qword_18018A2A8 = (__int64)qword_18018A2B8;
              byte_18018A2B0 = 1;
              TraceLoggingRegisterEx(qword_18018A2B8, v36, v37);
              dword_18018A2B4 = 1;
              (*(void (__fastcall **)(void *))(qword_18018A2A0 + 8LL))(&qword_18018A2A0);
              InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_18018A2A0);
            }
            LODWORD(v21) = (_DWORD)Context;
            v33 = *((_QWORD *)Context + 1);
            if ( *(_DWORD *)v33 > 4u )
            {
              v57 = &v40;
              v58 = 4LL;
              v45[0] = ((unsigned int)&unk_18014726A - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
              v45[1] = 4;
              v46 = 0LL;
              v51 = *(unsigned __int16 **)(v33 + 8);
              v52 = *v51;
              v53 = 2;
              v54 = &unk_180147275;
              v55 = 57;
              v56 = 1;
              LODWORD(v21) = EtwEventWriteTransfer(*(_QWORD *)(v33 + 32), v45, 0LL, 0LL, 3, &v51, fPending);
            }
          }
          return v21;
        }
      }
    }
    v43 = v48;
    v34 = (char *)std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::wstring &&>,std::tuple<>>(
                    v11,
                    v10,
                    (__int64 *)&v43);
    LODWORD(v21) = (unsigned int)std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Insert_hint<std::pair<std::wstring const,ENDPOINT_REF_DATA> &,std::_Tree_node<std::pair<std::wstring const,ENDPOINT_REF_DATA>,void *> *>(
                                   (__int64)v11,
                                   &v44,
                                   v12,
                                   v34 + 32,
                                   (__int64)v34);
    v12 = v44;
    v15 = v50;
    v8 = v48[0];
    goto LABEL_35;
  }
  catch ( ... )
  {
    LODWORD(v21) = wil::details::in1diag3::Log_CaughtException(
                     retaddr,
                     (void *)0x15E,
                     (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
                     v22);
  }
  return v21;
}
