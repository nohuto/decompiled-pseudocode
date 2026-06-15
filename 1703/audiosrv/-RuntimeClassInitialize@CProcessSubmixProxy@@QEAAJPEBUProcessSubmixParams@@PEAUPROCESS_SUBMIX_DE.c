/*
 * XREFs of ?RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@K@Z @ 0x180008200
 * Callers:
 *     ??$MakeAndInitialize@VCProcessSubmixProxy@@UIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@$$QEAPEAUPROCESS_SUBMIX_DESCRIPTOR@@$$QEAPEAUIStreamGroupProxy@@AEAK@Z @ 0x18002DC64 (--$MakeAndInitialize@VCProcessSubmixProxy@@UIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@PEA.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180004334 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??$out_param@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@0@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@Z @ 0x1800043C8 (--$out_param@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@wil@.c)
 *     ?GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z @ 0x180009730 (-GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memset @ 0x180049B8A (memset.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProcessSubmixProxy::RuntimeClassInitialize(
        CProcessSubmixProxy *this,
        const struct ProcessSubmixParams *a2,
        struct PROCESS_SUBMIX_DESCRIPTOR *a3,
        struct IStreamGroupProxy *a4)
{
  __int64 v7; // r10
  HRESULT Instance; // eax
  int v9; // esi
  HRESULT v10; // eax
  int v11; // eax
  __int64 v12; // r12
  unsigned __int16 *v13; // r14
  __int64 v14; // rsi
  void *v15; // rax
  void *v16; // rdi
  void *v17; // rdi
  void **v18; // r14
  void *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  _WORD *v22; // r9
  __int64 v23; // rsi
  const WCHAR *v24; // rbx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // r14
  _WORD *v27; // rax
  unsigned __int64 v28; // rcx
  _WORD *v29; // rdx
  int v30; // r10d
  unsigned __int64 v31; // rdi
  signed __int64 v32; // rbx
  __int16 v33; // ax
  _WORD *v34; // rcx
  unsigned __int64 v35; // r14
  __int64 v36; // r14
  _QWORD *v37; // rdi
  void *v38; // r12
  CSaDeviceProxy *v39; // rdi
  __int64 (__fastcall *v40)(CSaDeviceProxy *__hidden, struct IAudioDeviceGraph **); // rax
  int DeviceGraph; // eax
  int v42; // eax
  __int64 v43; // rbx
  IUnknown *v44; // rcx
  __int64 v45; // rbx
  DWORD LastError; // ebx
  int ppv; // [rsp+20h] [rbp-E0h]
  int ppva; // [rsp+20h] [rbp-E0h]
  char v50; // [rsp+40h] [rbp-C0h] BYREF
  IUnknown *pProxy; // [rsp+48h] [rbp-B8h] BYREF
  int v52; // [rsp+50h] [rbp-B0h] BYREF
  struct IAudioDeviceGraph *v53; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v54; // [rsp+60h] [rbp-A0h]
  CSaDeviceProxy *v55; // [rsp+68h] [rbp-98h]
  _DWORD v56[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v57; // [rsp+78h] [rbp-88h]
  void **v58; // [rsp+80h] [rbp-80h] BYREF
  void *v59; // [rsp+88h] [rbp-78h]
  char v60; // [rsp+90h] [rbp-70h]
  _QWORD v61[2]; // [rsp+98h] [rbp-68h] BYREF
  char v62; // [rsp+A8h] [rbp-58h]
  __int64 v63; // [rsp+B0h] [rbp-50h]
  __int64 v64; // [rsp+B8h] [rbp-48h]
  unsigned __int16 *v65; // [rsp+C0h] [rbp-40h]
  int v66; // [rsp+C8h] [rbp-38h]
  int v67; // [rsp+CCh] [rbp-34h]
  void *v68; // [rsp+D0h] [rbp-30h]
  int v69; // [rsp+D8h] [rbp-28h]
  int v70; // [rsp+DCh] [rbp-24h]
  int *v71; // [rsp+E0h] [rbp-20h]
  __int64 v72; // [rsp+E8h] [rbp-18h]
  char *v73; // [rsp+F0h] [rbp-10h]
  __int64 v74; // [rsp+F8h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v63 = -2LL;
  v55 = a4;
  v7 = *((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                     (__int64)this,
                     lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    if ( a2 )
      v52 = *(_DWORD *)a2;
    else
      v52 = 0;
    v71 = &v52;
    v72 = 4LL;
    if ( a2 )
      v50 = *((_BYTE *)a2 + 20);
    else
      v50 = 0;
    v73 = &v50;
    v74 = 1LL;
    v56[0] = ((unsigned int)&unk_1800F92F0 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v56[1] = 5;
    v57 = 0LL;
    v65 = *(unsigned __int16 **)(v7 + 8);
    v66 = *v65;
    v67 = 2;
    v68 = &unk_1800F92FB;
    v69 = 39;
    v70 = 1;
    EtwEventWriteTransfer(*(_QWORD *)(v7 + 32), v56, 0LL, 0LL);
  }
  pProxy = 0LL;
  Instance = CoCreateInstance(
               &GUID_9db0b5d8_7db4_445f_a896_38636dc7c07a,
               0LL,
               0x17u,
               &GUID_5d857e80_f074_4ad8_a9ce_0ddca68d8212,
               (LPVOID *)&pProxy);
  v9 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xA66,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)Instance,
      ppv);
  }
  else
  {
    v10 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
    v9 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xA6C,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v10,
        ppva);
    }
    else
    {
      v11 = ((__int64 (__fastcall *)(IUnknown *, struct PROCESS_SUBMIX_DESCRIPTOR *))pProxy->lpVtbl[2].Release)(
              pProxy,
              a3);
      v9 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xA6E,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v11,
          ppva);
      }
      else
      {
        *((_DWORD *)this + 27) = *(_DWORD *)a2;
        *((_BYTE *)this + 112) = *((_BYTE *)a2 + 20);
        *((_DWORD *)this + 32) = *((_DWORD *)a2 + 4);
        v12 = wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)&v58, (__int64)this + 168);
        v13 = (unsigned __int16 *)*((_QWORD *)a3 + 6);
        v14 = v13[8];
        v15 = CoTaskMemAlloc(v14 + 18);
        v16 = v15;
        if ( v15 )
        {
          memcpy_0(v15, v13, v14 + 18);
          v9 = 0;
        }
        else
        {
          v9 = -2147024882;
        }
        *(_QWORD *)(v12 + 8) = v16;
        if ( v60 )
        {
          v17 = v59;
          v18 = v58;
          v19 = *v58;
          if ( v59 != *v58 )
          {
            if ( v19 )
              CoTaskMemFree(v19);
            *v18 = v17;
          }
        }
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xA73,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v9,
            ppva);
        }
        else
        {
          v20 = wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)v61, (__int64)this + 120);
          v23 = v20;
          v24 = (const WCHAR *)*((_QWORD *)a2 + 1);
          v25 = -1LL;
          do
            ++v25;
          while ( v24[v25] );
          *(_QWORD *)(v20 + 8) = 0LL;
          v26 = v25 + 1;
          if ( v25 + 1 >= v25
            && (*(_QWORD *)(v20 + 8) = 0LL, v64 = (v26 * (unsigned __int128)2uLL) >> 64, is_mul_ok(v26, 2uLL)) )
          {
            v27 = CoTaskMemAlloc(2 * v26);
            v22 = v27;
            *(_QWORD *)(v23 + 8) = v27;
            if ( v27 )
            {
              v9 = 0;
              v54 = v25;
              if ( v26 > 0x7FFFFFFF || v25 >= 0x7FFFFFFF )
              {
                if ( v25 != -1LL )
                  *v27 = 0;
              }
              else
              {
                if ( !v24 )
                {
                  v24 = &word_1800EAD74;
                  v25 = 0LL;
                  v54 = 0LL;
                }
                if ( v26 )
                {
                  v28 = v26;
                  v29 = v27;
                  v30 = 0;
                  v21 = 0LL;
                  v31 = v25 - v26;
                  v32 = (char *)v24 - (char *)v27;
                  while ( v31 + v28 )
                  {
                    v33 = *(_WORD *)((char *)v29 + v32);
                    if ( !v33 )
                      break;
                    *v29++ = v33;
                    ++v21;
                    if ( !--v28 )
                    {
                      --v29;
                      --v21;
                      v30 = -2147024774;
                      break;
                    }
                  }
                  *v29 = 0;
                  v34 = &v22[v21 + 1];
                  v35 = v26 - v21;
                  if ( v30 >= 0 && v35 > 1 )
                  {
                    v21 = 2 * v35;
                    if ( 2 * v35 > 2 )
                      memset(v34, 0, v21 - 2);
                  }
                }
              }
            }
            else
            {
              v9 = -2147024882;
            }
          }
          else
          {
            v9 = -2147024362;
          }
          if ( v62 )
          {
            v36 = v61[1];
            v37 = (_QWORD *)v61[0];
            v38 = *(void **)v61[0];
            if ( *(_QWORD *)v61[0] )
            {
              LastError = GetLastError();
              CoTaskMemFree(v38);
              SetLastError(LastError);
            }
            *v37 = v36;
          }
          if ( v9 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0xA74,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
              (const char *)(unsigned int)v9,
              ppva);
          }
          else
          {
            v53 = 0LL;
            v39 = v55;
            v40 = *(__int64 (__fastcall **)(CSaDeviceProxy *__hidden, struct IAudioDeviceGraph **))(*(_QWORD *)v55
                                                                                                  + 272LL);
            if ( v40 == CSaDeviceProxy::GetDeviceGraph )
              DeviceGraph = CSaDeviceProxy::GetDeviceGraph(v55, &v53);
            else
              DeviceGraph = ((__int64 (__fastcall *)(CSaDeviceProxy *, struct IAudioDeviceGraph **, __int64, _WORD *))v40)(
                              v55,
                              &v53,
                              v21,
                              v22);
            v9 = DeviceGraph;
            if ( DeviceGraph < 0 )
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0xA78,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                (const char *)(unsigned int)DeviceGraph,
                ppva);
            }
            else
            {
              v42 = ((__int64 (__fastcall *)(IUnknown *, struct IAudioDeviceGraph *))pProxy->lpVtbl[3].QueryInterface)(
                      pProxy,
                      v53);
              v9 = v42;
              if ( v42 < 0 )
              {
                wil::details::in1diag3::Return_Hr_NoOriginate(
                  retaddr,
                  (void *)0xA79,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                  (const char *)(unsigned int)v42,
                  ppva);
              }
              else
              {
                v43 = *((_QWORD *)this + 6);
                v44 = pProxy;
                *((_QWORD *)this + 6) = pProxy;
                if ( v44 )
                  ((void (__fastcall *)(IUnknown *))v44->lpVtbl->AddRef)(v44);
                if ( v43 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
                v45 = *((_QWORD *)this + 20);
                *((_QWORD *)this + 20) = v39;
                (*(void (__fastcall **)(CSaDeviceProxy *))(*(_QWORD *)v39 + 8LL))(v39);
                if ( v45 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
                *((_QWORD *)this + 22) = _InterlockedIncrement64(&CProcessSubmixProxy::s_processSubmixId);
                v9 = 0;
              }
            }
            if ( v53 )
              (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v53 + 16LL))(v53);
          }
        }
      }
    }
  }
  if ( pProxy )
    ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->Release)(pProxy);
  return (unsigned int)v9;
}
