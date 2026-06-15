/*
 * XREFs of ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180032BE0
 * Callers:
 *     ?Invoke@CAudioSessionStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800321B0 (-Invoke@CAudioSessionStateChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180017010 (-ForEachEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x1800191E4 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x1800341C0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x180042CC0 (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180046A50 (-DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180047790 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180061852 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18009E954 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     WPP_SF_Sd @ 0x1800ADF18 (WPP_SF_Sd.c)
 *     WPP_SF_qq @ 0x1800AE49C (WPP_SF_qq.c)
 *     WPP_SF_SS @ 0x1800B0B54 (WPP_SF_SS.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall CAudioSessionManager::OnStateChanged(
        CAudioSessionManager *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        enum _AudioSessionState a4)
{
  enum _AudioSessionState v4; // r12d
  __int64 (__fastcall **v6)(CAudioSession *__hidden, const struct _GUID *, void **); // r8
  __int64 (__fastcall *v7)(CAudioSession *__hidden, const struct _GUID *, void **); // rax
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(CAudioSession *__hidden, struct CAudioSession **); // rax
  CAudioSession *v13; // rdi
  _QWORD *v14; // rsi
  char *v15; // rbx
  __int64 v16; // rcx
  __int64 (*v17)(void); // rax
  _QWORD *v18; // rsi
  char *v19; // rbx
  __int64 v20; // rcx
  __int64 (*v21)(void); // rax
  _QWORD *v22; // rsi
  char *v23; // rbx
  __int64 v24; // rcx
  __int64 (*v25)(void); // rax
  _QWORD *v26; // rsi
  char *v27; // rbx
  __int64 v28; // rcx
  __int64 (*v29)(void); // rax
  _QWORD *v30; // rdi
  char *v31; // rbx
  __int64 v32; // rcx
  __int64 (*v33)(void); // rax
  struct ISessionInternalEvents *v34; // rbx
  CAudioSession *v35; // r13
  unsigned int v36; // ebx
  struct _RTL_CRITICAL_SECTION *v37; // r12
  __int64 v38; // rax
  unsigned int v39; // esi
  unsigned int v40; // edi
  unsigned int *v41; // rax
  unsigned int *v42; // r14
  unsigned int v43; // r10d
  _WORD *v44; // rcx
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r8
  __int64 v47; // r9
  __int16 v48; // ax
  _WORD *v49; // rcx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // r11
  signed __int64 v52; // r8
  __int16 v53; // ax
  HANDLE ProcessHeap; // rax
  CAudioSession *v55; // rcx
  void (*v56)(void); // rax
  char *v57; // rdi
  char *v58; // rdx
  char *v59; // rdx
  char *v60; // rdx
  char *v61; // rdx
  char *v62; // rdx
  __int64 (__fastcall *v64)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rax
  __int64 (__fastcall *v65)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rax
  __int64 (__fastcall *v66)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rax
  __int64 v67; // rcx
  LPCGUID v68; // r8
  LPCGUID v69; // r9
  TraceLoggingHProvider v70; // r10
  void (*v71)(void); // rax
  void (__fastcall *v72)(CAudioSession *__hidden); // rax
  CAudioSession *v73; // rcx
  ATL::CAtlException *v74; // rbx
  _DWORD *v75; // r15
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r9
  void *v80; // rcx
  size_t v81; // r8
  _DWORD *v82; // r15
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r9
  void *v87; // rcx
  size_t v88; // r8
  _DWORD *v89; // r15
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r9
  void *v94; // rcx
  size_t v95; // r8
  _DWORD *v96; // r15
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r9
  void *v101; // rcx
  size_t v102; // r8
  _DWORD *v103; // rsi
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r9
  void *v108; // rcx
  size_t v109; // r8
  bool v110; // sf
  CAudioSession *v111; // [rsp+30h] [rbp-148h] BYREF
  struct IAudioSessionInfo *v112; // [rsp+38h] [rbp-140h] BYREF
  struct ISessionInternalEvents *v113; // [rsp+40h] [rbp-138h]
  enum _AudioSessionState v114; // [rsp+48h] [rbp-130h]
  char **v115; // [rsp+50h] [rbp-128h]
  struct ISessionInternalEvents *v116; // [rsp+58h] [rbp-120h]
  __int64 *v117; // [rsp+60h] [rbp-118h]
  LPCRITICAL_SECTION v118; // [rsp+68h] [rbp-110h] BYREF
  char v119; // [rsp+70h] [rbp-108h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+78h] [rbp-100h] BYREF
  char v121; // [rsp+80h] [rbp-F8h]
  void (__fastcall **v122[4])(_QWORD, __int64 *); // [rsp+88h] [rbp-F0h] BYREF
  ATL::CAtlException *v123; // [rsp+A8h] [rbp-D0h] BYREF
  char *v124; // [rsp+B0h] [rbp-C8h] BYREF
  char *v125; // [rsp+B8h] [rbp-C0h] BYREF
  char *v126; // [rsp+C0h] [rbp-B8h] BYREF
  __int128 v127; // [rsp+C8h] [rbp-B0h]
  char *v128; // [rsp+D8h] [rbp-A0h] BYREF
  int v129; // [rsp+E0h] [rbp-98h]
  __int64 v130; // [rsp+E8h] [rbp-90h]
  int v131; // [rsp+F0h] [rbp-88h]
  char *v132; // [rsp+F8h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp-58h] BYREF

  v122[3] = (void (__fastcall **)(_QWORD, __int64 *))-2LL;
  v4 = a4;
  v113 = this;
  v116 = this;
  v114 = a4;
  v112 = 0LL;
  v111 = 0LL;
  v6 = *(__int64 (__fastcall ***)(CAudioSession *__hidden, const struct _GUID *, void **))a2;
  v7 = **(__int64 (__fastcall ***)(CAudioSession *__hidden, const struct _GUID *, void **))a2;
  if ( v7 == CAudioSession::QueryInterface )
  {
    v8 = 0;
    v9 = *(_QWORD *)&GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data1
       - *(_QWORD *)&GUID_5b87d7c9_ae21_4e3d_9e7b_ca3e7822759a.Data1;
    if ( *(_QWORD *)&GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data1 == *(_QWORD *)&GUID_5b87d7c9_ae21_4e3d_9e7b_ca3e7822759a.Data1 )
      v9 = *(_QWORD *)GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data4
         - *(_QWORD *)GUID_5b87d7c9_ae21_4e3d_9e7b_ca3e7822759a.Data4;
    if ( v9 )
    {
      v10 = *(_QWORD *)&GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data1
          - *(_QWORD *)&GUID_d8f0a3ea_c16c_4c58_97bc_5ec84ae597f4.Data1;
      if ( *(_QWORD *)&GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data1 == *(_QWORD *)&GUID_d8f0a3ea_c16c_4c58_97bc_5ec84ae597f4.Data1 )
        v10 = *(_QWORD *)GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data4
            - *(_QWORD *)GUID_d8f0a3ea_c16c_4c58_97bc_5ec84ae597f4.Data4;
      if ( v10 )
      {
        v11 = *(_QWORD *)&GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data1
            - *(_QWORD *)&GUID_69319164_2df0_4e6b_88e7_2cd561a24381.Data1;
        if ( *(_QWORD *)&GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data1 == *(_QWORD *)&GUID_69319164_2df0_4e6b_88e7_2cd561a24381.Data1 )
          v11 = *(_QWORD *)GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data4
              - *(_QWORD *)GUID_69319164_2df0_4e6b_88e7_2cd561a24381.Data4;
        if ( v11 )
          v112 = (struct IAudioSessionInfo *)((char *)a2 + 8);
        else
          v112 = (struct IAudioSessionInfo *)((char *)a2 + 24);
        ((void (__fastcall *)(struct IAudioSessionInfo *, _QWORD))v6[1])(
          a2,
          *(_QWORD *)GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data4);
      }
      else
      {
        v112 = (struct IAudioSessionInfo *)((char *)a2 + 16);
        ((void (__fastcall *)(struct IAudioSessionInfo *, _QWORD))v6[1])(
          a2,
          *(_QWORD *)GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data4);
      }
    }
    else
    {
      v112 = a2;
      ((void (__fastcall *)(struct IAudioSessionInfo *, _QWORD))v6[1])(
        a2,
        *(_QWORD *)GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data4);
    }
  }
  else
  {
    v8 = v7(a2, &GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a, (void **)&v112);
  }
  if ( v8 >= 0 )
  {
    v12 = *(__int64 (__fastcall **)(CAudioSession *__hidden, struct CAudioSession **))(*(_QWORD *)v112 + 24LL);
    if ( v12 == CAudioSession::GetImplementation )
    {
      v111 = (struct IAudioSessionInfo *)((char *)v112 - 8);
      (*(void (__fastcall **)(__int64))(*((_QWORD *)v112 - 1) + 8LL))((__int64)v112 - 8);
LABEL_16:
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          27,
          (unsigned int)&WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids,
          0,
          v4);
      }
      v13 = v111;
      v115 = &v124;
      v117 = (__int64 *)&v124;
      v14 = (_QWORD *)*((_QWORD *)v111 + 82);
      v15 = (char *)(v14 - 3);
      v16 = *(v14 - 3);
      v17 = *(__int64 (**)(void))(*(_QWORD *)v16 + 32LL);
      if ( (char *)v17 != (char *)ATL::CAtlStringMgr::Clone )
        v16 = v17();
      if ( *((int *)v15 + 4) >= 0 && v16 == *(_QWORD *)v15 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v15 + 4);
        goto LABEL_23;
      }
      v75 = v15 + 8;
      v76 = (**(__int64 (__fastcall ***)(__int64, _QWORD, __int64))v16)(v16, *((unsigned int *)v15 + 2), 2LL);
      v15 = (char *)v76;
      if ( !v76 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v78, v77);
      *(_DWORD *)(v76 + 8) = *v75;
      v80 = (void *)(v76 + 24);
      v81 = 2LL * (*v75 + 1);
      if ( v81 )
      {
        if ( v76 != -24 )
        {
          if ( v14 )
          {
            memcpy_0(v80, v14, v81);
            goto LABEL_23;
          }
          memset_0(v80, 0, v81);
        }
        *(_DWORD *)_o__errno(v80, v77, v81, v79) = 22;
        invalid_parameter_noinfo();
      }
LABEL_23:
      v124 = v15 + 24;
      v117 = (__int64 *)&v125;
      v115 = &v125;
      v18 = (_QWORD *)*((_QWORD *)v13 + 83);
      v19 = (char *)(v18 - 3);
      v20 = *(v18 - 3);
      v21 = *(__int64 (**)(void))(*(_QWORD *)v20 + 32LL);
      if ( (char *)v21 != (char *)ATL::CAtlStringMgr::Clone )
        v20 = v21();
      if ( *((int *)v19 + 4) >= 0 && v20 == *(_QWORD *)v19 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v19 + 4);
        goto LABEL_28;
      }
      v82 = v19 + 8;
      v83 = (**(__int64 (__fastcall ***)(__int64, _QWORD, __int64))v20)(v20, *((unsigned int *)v19 + 2), 2LL);
      v19 = (char *)v83;
      if ( !v83 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v85, v84);
      *(_DWORD *)(v83 + 8) = *v82;
      v87 = (void *)(v83 + 24);
      v88 = 2LL * (*v82 + 1);
      if ( v88 )
      {
        if ( v83 != -24 )
        {
          if ( v18 )
          {
            memcpy_0(v87, v18, v88);
            goto LABEL_28;
          }
          memset_0(v87, 0, v88);
        }
        *(_DWORD *)_o__errno(v87, v84, v88, v86) = 22;
        invalid_parameter_noinfo();
      }
LABEL_28:
      v125 = v19 + 24;
      v115 = &v126;
      v22 = (_QWORD *)*((_QWORD *)v13 + 84);
      v23 = (char *)(v22 - 3);
      v24 = *(v22 - 3);
      v25 = *(__int64 (**)(void))(*(_QWORD *)v24 + 32LL);
      if ( (char *)v25 != (char *)ATL::CAtlStringMgr::Clone )
        v24 = v25();
      if ( *((int *)v23 + 4) >= 0 && v24 == *(_QWORD *)v23 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v23 + 4);
        goto LABEL_33;
      }
      v89 = v23 + 8;
      v90 = (**(__int64 (__fastcall ***)(__int64, _QWORD, __int64))v24)(v24, *((unsigned int *)v23 + 2), 2LL);
      v23 = (char *)v90;
      if ( !v90 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v92, v91);
      *(_DWORD *)(v90 + 8) = *v89;
      v94 = (void *)(v90 + 24);
      v95 = 2LL * (*v89 + 1);
      if ( v95 )
      {
        if ( v90 != -24 )
        {
          if ( v22 )
          {
            memcpy_0(v94, v22, v95);
            goto LABEL_33;
          }
          memset_0(v94, 0, v95);
        }
        *(_DWORD *)_o__errno(v94, v91, v95, v93) = 22;
        invalid_parameter_noinfo();
      }
LABEL_33:
      v126 = v23 + 24;
      v127 = *(_OWORD *)((char *)v13 + 680);
      v115 = &v128;
      v26 = (_QWORD *)*((_QWORD *)v13 + 87);
      v27 = (char *)(v26 - 3);
      v28 = *(v26 - 3);
      v29 = *(__int64 (**)(void))(*(_QWORD *)v28 + 32LL);
      if ( (char *)v29 != (char *)ATL::CAtlStringMgr::Clone )
        v28 = v29();
      if ( *((int *)v27 + 4) >= 0 && v28 == *(_QWORD *)v27 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v27 + 4);
        goto LABEL_38;
      }
      v96 = v27 + 8;
      v97 = (**(__int64 (__fastcall ***)(__int64, _QWORD, __int64))v28)(v28, *((unsigned int *)v27 + 2), 2LL);
      v27 = (char *)v97;
      if ( !v97 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v99, v98);
      *(_DWORD *)(v97 + 8) = *v96;
      v101 = (void *)(v97 + 24);
      v102 = 2LL * (*v96 + 1);
      if ( v102 )
      {
        if ( v97 != -24 )
        {
          if ( v26 )
          {
            memcpy_0(v101, v26, v102);
            goto LABEL_38;
          }
          memset_0(v101, 0, v102);
        }
        *(_DWORD *)_o__errno(v101, v98, v102, v100) = 22;
        invalid_parameter_noinfo();
      }
LABEL_38:
      v128 = v27 + 24;
      v129 = *((_DWORD *)v13 + 176);
      v130 = *((_QWORD *)v13 + 89);
      v131 = *((_DWORD *)v13 + 180);
      v117 = (__int64 *)&v132;
      v30 = (_QWORD *)*((_QWORD *)v13 + 91);
      v31 = (char *)(v30 - 3);
      v32 = *(v30 - 3);
      v33 = *(__int64 (**)(void))(*(_QWORD *)v32 + 32LL);
      if ( (char *)v33 != (char *)ATL::CAtlStringMgr::Clone )
        v32 = v33();
      if ( *((int *)v31 + 4) >= 0 && v32 == *(_QWORD *)v31 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v31 + 4);
        goto LABEL_43;
      }
      v103 = v31 + 8;
      v104 = (**(__int64 (__fastcall ***)(__int64, _QWORD, __int64))v32)(v32, *((unsigned int *)v31 + 2), 2LL);
      v31 = (char *)v104;
      if ( !v104 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v106, v105);
      *(_DWORD *)(v104 + 8) = *v103;
      v108 = (void *)(v104 + 24);
      v109 = 2LL * (*v103 + 1);
      if ( v109 )
      {
        if ( v104 != -24 )
        {
          if ( v30 )
          {
            memcpy_0(v108, v30, v109);
            goto LABEL_43;
          }
          memset_0(v108, 0, v109);
        }
        *(_DWORD *)_o__errno(v108, v105, v109, v107) = 22;
        invalid_parameter_noinfo();
      }
LABEL_43:
      v132 = v31 + 24;
      if ( a3 != AudioSessionStateExpired )
      {
        v34 = v113;
        goto LABEL_45;
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          28LL,
          &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids,
          (unsigned int)v4);
      }
      v34 = v113;
      v118 = (LPCRITICAL_SECTION)((char *)v113 + 24);
      v119 = 0;
      ATL::CCritSecLock::Lock(&v118);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_SS(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          29,
          (unsigned int)&WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids,
          0,
          (__int64)v132);
      }
      try
      {
        ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::SetAt(
          (__int64)v34 + 64,
          (const struct CAudioSessionInstanceId *)&v124,
          &v111);
      }
      catch ( ATL::CAtlException *v123 )
      {
        v74 = v123;
        if ( *(_DWORD *)v123 == -1073741571 )
          _o__resetstkoflw();
        LODWORD(v113) = *(_DWORD *)v74;
        v34 = v116;
        v4 = v114;
        v110 = (int)v113 < 0;
        v113 = v116;
        if ( v110 )
          goto LABEL_173;
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          30LL,
          &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids,
          v34,
          v111);
      }
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v111 + 8LL))(v111);
LABEL_173:
      if ( v119 )
      {
        LeaveCriticalSection(v118);
        v119 = 0;
      }
LABEL_45:
      if ( v4 == AudioSessionStateActive )
      {
        v35 = v111;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids, 0LL);
        }
        v36 = 2 * *(_DWORD *)(*((_QWORD *)v35 + 91) - 16LL) + 2;
        v37 = (struct _RTL_CRITICAL_SECTION *)v113;
        v38 = *((_QWORD *)v113 + 38);
        v39 = 2 * *(_DWORD *)(v38 - 16) + 2;
        v40 = v36 + 2 * *(_DWORD *)(v38 - 16) + 74;
        v41 = (unsigned int *)operator new[](v40, (const struct std::nothrow_t *)&std::nothrow);
        v42 = v41;
        if ( v41 )
        {
          *v41 = v40;
          v41[1] = 64;
          v41[6] = v36;
          v41[12] = v39;
          v43 = v36 + 72;
          v41[13] = v36 + 72;
          v44 = v41 + 18;
          v45 = (unsigned __int64)v36 >> 1;
          if ( v45 )
          {
            v46 = 2147483646 - v45;
            v47 = *((_QWORD *)v35 + 91) - (_QWORD)v44;
            while ( v45 + v46 )
            {
              v48 = *(_WORD *)((char *)v44 + v47);
              if ( !v48 )
                break;
              *v44++ = v48;
              if ( !--v45 )
              {
                --v44;
                break;
              }
            }
            *v44 = 0;
            v43 = v42[13];
          }
          v49 = (_WORD *)((char *)v42 + v43);
          v50 = (unsigned __int64)v39 >> 1;
          if ( v50 )
          {
            v51 = 2147483646 - v50;
            v52 = (char *)v37[7].LockSemaphore - (char *)v49;
            while ( v50 + v51 )
            {
              v53 = *(_WORD *)((char *)v49 + v52);
              if ( !v53 )
                break;
              *v49++ = v53;
              if ( !--v50 )
              {
                --v49;
                break;
              }
            }
            *v49 = 0;
          }
          v122[0] = (void (__fastcall **)(_QWORD, __int64 *))&CAudioSessionManagerNotification::`vftable';
          v122[1] = (void (__fastcall **)(_QWORD, __int64 *))v42;
          v122[2] = (void (__fastcall **)(_QWORD, __int64 *))v35;
          CLockedList<CAudioSessionNotificationProcess,1,0>::ForEachEntry(v37 + 5, v122);
        }
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v42);
      }
      else if ( v4 == AudioSessionStateExpired )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids, 0LL);
        }
        lpCriticalSection = (LPCRITICAL_SECTION)((char *)v34 + 24);
        v121 = 0;
        ATL::CCritSecLock::Lock(&lpCriticalSection);
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_SS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            35,
            (unsigned int)&WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids,
            0,
            (__int64)v132);
        }
        if ( (unsigned __int8)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
                                (char *)v34 + 64,
                                &v124) )
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 36LL, &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids);
          }
          v64 = *(__int64 (__fastcall **)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v111 + 192LL);
          if ( v64 == CAudioSession::DeleteSessionNotification )
            CAudioSession::DeleteSessionNotification(v111, v34);
          else
            v64(v111, v34);
          v65 = *(__int64 (__fastcall **)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v111 + 192LL);
          if ( v65 == CAudioSession::DeleteSessionNotification )
            CAudioSession::DeleteSessionNotification(v111, g_PolicyEventsHandler);
          else
            v65(v111, g_PolicyEventsHandler);
          v66 = *(__int64 (__fastcall **)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v111 + 192LL);
          if ( v66 == CAudioSession::DeleteSessionNotification )
            CAudioSession::DeleteSessionNotification(v111, g_TelephonyControlEventsHandler);
          else
            v66(v111, g_TelephonyControlEventsHandler);
          if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                               v67,
                               lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                + 1) > 4u )
          {
            TlgCreateWsz(&pDesc, *((LPCWSTR *)v111 + 91));
            TlgWrite(v70, &unk_1801453EB, v68, v69, 3u, &pData);
          }
          v71 = *(void (**)(void))(*(_QWORD *)v111 + 16LL);
          if ( (char *)v71 == (char *)CAudioSession::Release )
            CAudioSession::Release(v111);
          else
            v71();
        }
        else if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
               && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids, v132);
        }
        if ( v121 )
        {
          LeaveCriticalSection(lpCriticalSection);
          v121 = 0;
        }
      }
      v55 = v111;
      if ( v111 )
      {
        v56 = *(void (**)(void))(*(_QWORD *)v111 + 16LL);
        if ( (char *)v56 == (char *)CAudioSession::Release )
        {
          v57 = (char *)v111 + 32;
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v111 + 10, 0xFFFFFFFF) == 1 )
          {
            v72 = *(void (__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v57 + 32LL);
            v73 = (CAudioSession *)((char *)v55 + 32);
            if ( v72 == CAudioSession::FinalRelease )
              CAudioSession::FinalRelease(v73);
            else
              v72(v73);
            (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v57 + 24LL))(v57, 1LL);
          }
        }
        else
        {
          v56();
        }
        v111 = 0LL;
      }
      v58 = v132 - 24;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v132 - 2, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v58 + 8LL))(*(_QWORD *)v58);
      v59 = v128 - 24;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v128 - 2, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v59 + 8LL))(*(_QWORD *)v59);
      v60 = v126 - 24;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v126 - 2, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v60 + 8LL))(*(_QWORD *)v60);
      v61 = v125 - 24;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v125 - 2, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v61 + 8LL))(*(_QWORD *)v61);
      v62 = v124 - 24;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v124 - 2, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v62 + 8LL))(*(_QWORD *)v62);
      if ( v112 )
        goto LABEL_80;
      return 0LL;
    }
    if ( (int)v12(v112, &v111) >= 0 )
      goto LABEL_16;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids);
  }
  if ( v112 )
LABEL_80:
    (*(void (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v112 + 16LL))(v112);
  return 0LL;
}
