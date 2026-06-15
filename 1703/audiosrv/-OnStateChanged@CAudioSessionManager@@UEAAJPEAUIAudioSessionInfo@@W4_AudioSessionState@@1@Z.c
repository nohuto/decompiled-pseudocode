/*
 * XREFs of ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180021760
 * Callers:
 *     ?Invoke@CAudioSessionStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180022E30 (-Invoke@CAudioSessionStateChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180004334 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180013D40 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180013E60 (-DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x1800164B0 (-GetProcessId@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?GetImplementation@CAudioSession@@UEAAJPEAPEAV1@@Z @ 0x180016510 (-GetImplementation@CAudioSession@@UEAAJPEAPEAV1@@Z.c)
 *     ?QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800165D0 (-QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x1800215C0 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 *     ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x180022C30 (-Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ.c)
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x1800253FC (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x180025440 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x180049B5A (_invalid_parameter_noinfo.c)
 *     memset @ 0x180049B8A (memset.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800822FC (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     WPP_SF_Sd @ 0x180084A58 (WPP_SF_Sd.c)
 *     WPP_SF_qq @ 0x180090D74 (WPP_SF_qq.c)
 *     WPP_SF_SS @ 0x18009273C (WPP_SF_SS.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioSessionManager::OnStateChanged(
        CAudioSessionManager *this,
        __int64 (__fastcall ***a2)(CAudioSession *this, const struct _GUID *a2, void **a3),
        enum _AudioSessionState a3,
        enum _AudioSessionState a4)
{
  enum _AudioSessionState v4; // r15d
  CAudioSessionManager *v5; // r13
  __int64 (__fastcall *v6)(CAudioSession *, const struct _GUID *, void **); // rax
  int Interface; // eax
  __int64 (__fastcall *v8)(CAudioSession *, struct CAudioSession **); // rax
  int Implementation; // eax
  CAudioSession *v10; // rdi
  _QWORD *v11; // rsi
  char *v12; // rbx
  ATL::CAtlStringMgr *v13; // rcx
  __int64 (*v14)(void); // rax
  struct ATL::IAtlStringMgr *v15; // rax
  _QWORD *v16; // rsi
  char *v17; // rbx
  ATL::CAtlStringMgr *v18; // rcx
  __int64 (*v19)(void); // rax
  struct ATL::IAtlStringMgr *v20; // rax
  _QWORD *v21; // rsi
  char *v22; // rbx
  ATL::CAtlStringMgr *v23; // rcx
  __int64 (*v24)(void); // rax
  struct ATL::IAtlStringMgr *v25; // rax
  _QWORD *v26; // rsi
  char *v27; // rbx
  ATL::CAtlStringMgr *v28; // rcx
  __int64 (*v29)(void); // rax
  struct ATL::IAtlStringMgr *v30; // rax
  _QWORD *v31; // rdi
  char *v32; // rbx
  ATL::CAtlStringMgr *v33; // rcx
  __int64 (*v34)(void); // rax
  struct ATL::IAtlStringMgr *v35; // rax
  void (*v36)(void); // rax
  char *v37; // rdx
  char *v38; // rdx
  char *v39; // rdx
  char *v40; // rdx
  char *v41; // rdx
  CAudioSession *v42; // rcx
  __int64 (__fastcall *v44)(CAudioSession *, struct ISessionInternalEvents *); // rax
  __int64 (__fastcall *v45)(CAudioSession *, struct ISessionInternalEvents *); // rax
  __int64 (__fastcall *v46)(CAudioSession *, unsigned int *); // rax
  int ProcessId; // eax
  __int64 v48; // rcx
  LPCGUID v49; // r8
  LPCGUID v50; // r9
  TraceLoggingHProvider v51; // r10
  void (*v52)(void); // rax
  ATL::CAtlException *v53; // rbx
  _DWORD *v54; // r12
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rcx
  unsigned __int64 v61; // r12
  unsigned __int64 v62; // r13
  _DWORD *v63; // r12
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rcx
  unsigned __int64 v70; // r12
  unsigned __int64 v71; // r13
  _DWORD *v72; // r12
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rcx
  unsigned __int64 v79; // r12
  unsigned __int64 v80; // r13
  _DWORD *v81; // r12
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rcx
  unsigned __int64 v88; // r12
  unsigned __int64 v89; // r13
  _DWORD *v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rcx
  unsigned __int64 v97; // rsi
  unsigned __int64 v98; // r12
  CAudioSession *v100; // [rsp+38h] [rbp-160h] BYREF
  enum _AudioSessionState v101; // [rsp+40h] [rbp-158h]
  enum _AudioSessionState v102; // [rsp+48h] [rbp-150h]
  CAudioSession *v103; // [rsp+50h] [rbp-148h] BYREF
  unsigned int v104[4]; // [rsp+58h] [rbp-140h] BYREF
  CAudioSessionManager *v105; // [rsp+68h] [rbp-130h]
  LPCRITICAL_SECTION v106; // [rsp+70h] [rbp-128h] BYREF
  char v107; // [rsp+78h] [rbp-120h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp-118h] BYREF
  char v109; // [rsp+88h] [rbp-110h]
  __int64 v110; // [rsp+90h] [rbp-108h]
  char **v111; // [rsp+98h] [rbp-100h]
  ATL::CAtlException *v112; // [rsp+A0h] [rbp-F8h] BYREF
  char *v113; // [rsp+B0h] [rbp-E8h] BYREF
  char *v114; // [rsp+B8h] [rbp-E0h] BYREF
  char *v115; // [rsp+C0h] [rbp-D8h]
  __int128 v116; // [rsp+C8h] [rbp-D0h]
  char *v117; // [rsp+D8h] [rbp-C0h]
  int v118; // [rsp+E0h] [rbp-B8h]
  __int64 v119; // [rsp+E8h] [rbp-B0h]
  int v120; // [rsp+F0h] [rbp-A8h]
  char *v121; // [rsp+F8h] [rbp-A0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp-78h] BYREF
  unsigned int *v124; // [rsp+130h] [rbp-68h]
  __int64 v125; // [rsp+138h] [rbp-60h]

  v110 = -2LL;
  v4 = a4;
  v101 = a3;
  v5 = this;
  v105 = this;
  v102 = a4;
  v103 = 0LL;
  v100 = 0LL;
  v6 = **a2;
  if ( v6 == CAudioSession::QueryInterface )
    Interface = CAudioSession::QueryInterface(
                  (CAudioSession *)a2,
                  &GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a,
                  (void **)&v103);
  else
    Interface = v6((CAudioSession *)a2, &GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a, (void **)&v103);
  if ( Interface < 0
    || ((v8 = *(__int64 (__fastcall **)(CAudioSession *, struct CAudioSession **))(*(_QWORD *)v103 + 24LL),
         v8 != CAudioSession::GetImplementation)
      ? (Implementation = v8(v103, &v100))
      : (Implementation = CAudioSession::GetImplementation(v103, &v100)),
        Implementation < 0) )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids);
    }
    v42 = v103;
    if ( v103 )
      goto LABEL_54;
    return 0LL;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      30,
      (unsigned int)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids,
      0,
      v4);
  }
  v10 = v100;
  v11 = (_QWORD *)*((_QWORD *)v100 + 99);
  v12 = (char *)(v11 - 3);
  v13 = (ATL::CAtlStringMgr *)*(v11 - 3);
  v14 = *(__int64 (**)(void))(*(_QWORD *)v13 + 32LL);
  if ( (char *)v14 == (char *)ATL::CAtlStringMgr::Clone )
    v15 = ATL::CAtlStringMgr::Clone(v13);
  else
    v15 = (struct ATL::IAtlStringMgr *)v14();
  if ( *((int *)v12 + 4) >= 0 && v15 == *(struct ATL::IAtlStringMgr **)v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v12 + 4);
    goto LABEL_16;
  }
  v54 = v12 + 8;
  v55 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v15)(
          v15,
          *((unsigned int *)v12 + 2),
          2LL);
  v12 = (char *)v55;
  if ( !v55 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v57);
  *(_DWORD *)(v55 + 8) = *v54;
  v60 = *v54 + 1;
  v61 = 2 * v60;
  v62 = 2 * v60;
  if ( 2 * v60 )
  {
    if ( v55 == -24 )
      goto LABEL_94;
    if ( v11 && v62 >= v61 )
    {
      memcpy_0((void *)(v55 + 24), v11, 2 * v60);
      goto LABEL_99;
    }
    memset((void *)(v55 + 24), 0, 2 * v60);
    if ( !v11 )
    {
LABEL_94:
      *(_DWORD *)_o__errno(v60, v56, v58, v59) = 22;
    }
    else
    {
      if ( v62 >= v61 )
        goto LABEL_99;
      *(_DWORD *)_o__errno(v60, v56, v58, v59) = 34;
    }
    invalid_parameter_noinfo();
  }
LABEL_99:
  v5 = this;
LABEL_16:
  v113 = v12 + 24;
  v111 = &v114;
  v16 = (_QWORD *)*((_QWORD *)v10 + 100);
  v17 = (char *)(v16 - 3);
  v18 = (ATL::CAtlStringMgr *)*(v16 - 3);
  v19 = *(__int64 (**)(void))(*(_QWORD *)v18 + 32LL);
  if ( (char *)v19 == (char *)ATL::CAtlStringMgr::Clone )
    v20 = ATL::CAtlStringMgr::Clone(v18);
  else
    v20 = (struct ATL::IAtlStringMgr *)v19();
  if ( *((int *)v17 + 4) >= 0 && v20 == *(struct ATL::IAtlStringMgr **)v17 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v17 + 4);
    goto LABEL_21;
  }
  v63 = v17 + 8;
  v64 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v20)(
          v20,
          *((unsigned int *)v17 + 2),
          2LL);
  v17 = (char *)v64;
  if ( !v64 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v66);
  *(_DWORD *)(v64 + 8) = *v63;
  v69 = *v63 + 1;
  v70 = 2 * v69;
  v71 = 2 * v69;
  if ( 2 * v69 )
  {
    if ( v64 == -24 )
      goto LABEL_108;
    if ( v16 && v71 >= v70 )
    {
      memcpy_0((void *)(v64 + 24), v16, 2 * v69);
      goto LABEL_113;
    }
    memset((void *)(v64 + 24), 0, 2 * v69);
    if ( !v16 )
    {
LABEL_108:
      *(_DWORD *)_o__errno(v69, v65, v67, v68) = 22;
    }
    else
    {
      if ( v71 >= v70 )
        goto LABEL_113;
      *(_DWORD *)_o__errno(v69, v65, v67, v68) = 34;
    }
    invalid_parameter_noinfo();
  }
LABEL_113:
  v5 = this;
LABEL_21:
  v114 = v17 + 24;
  v21 = (_QWORD *)*((_QWORD *)v10 + 101);
  v22 = (char *)(v21 - 3);
  v23 = (ATL::CAtlStringMgr *)*(v21 - 3);
  v24 = *(__int64 (**)(void))(*(_QWORD *)v23 + 32LL);
  if ( (char *)v24 == (char *)ATL::CAtlStringMgr::Clone )
    v25 = ATL::CAtlStringMgr::Clone(v23);
  else
    v25 = (struct ATL::IAtlStringMgr *)v24();
  if ( *((int *)v22 + 4) >= 0 && v25 == *(struct ATL::IAtlStringMgr **)v22 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v22 + 4);
    goto LABEL_26;
  }
  v72 = v22 + 8;
  v73 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v25)(
          v25,
          *((unsigned int *)v22 + 2),
          2LL);
  v22 = (char *)v73;
  if ( !v73 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v75);
  *(_DWORD *)(v73 + 8) = *v72;
  v78 = *v72 + 1;
  v79 = 2 * v78;
  v80 = 2 * v78;
  if ( 2 * v78 )
  {
    if ( v73 == -24 )
      goto LABEL_122;
    if ( v21 && v80 >= v79 )
    {
      memcpy_0((void *)(v73 + 24), v21, 2 * v78);
      goto LABEL_127;
    }
    memset((void *)(v73 + 24), 0, 2 * v78);
    if ( !v21 )
    {
LABEL_122:
      *(_DWORD *)_o__errno(v78, v74, v76, v77) = 22;
    }
    else
    {
      if ( v80 >= v79 )
        goto LABEL_127;
      *(_DWORD *)_o__errno(v78, v74, v76, v77) = 34;
    }
    invalid_parameter_noinfo();
  }
LABEL_127:
  v5 = this;
LABEL_26:
  v115 = v22 + 24;
  v116 = *((_OWORD *)v10 + 51);
  v26 = (_QWORD *)*((_QWORD *)v10 + 104);
  v27 = (char *)(v26 - 3);
  v28 = (ATL::CAtlStringMgr *)*(v26 - 3);
  v29 = *(__int64 (**)(void))(*(_QWORD *)v28 + 32LL);
  if ( (char *)v29 == (char *)ATL::CAtlStringMgr::Clone )
    v30 = ATL::CAtlStringMgr::Clone(v28);
  else
    v30 = (struct ATL::IAtlStringMgr *)v29();
  if ( *((int *)v27 + 4) >= 0 && v30 == *(struct ATL::IAtlStringMgr **)v27 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v27 + 4);
    goto LABEL_31;
  }
  v81 = v27 + 8;
  v82 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v30)(
          v30,
          *((unsigned int *)v27 + 2),
          2LL);
  v27 = (char *)v82;
  if ( !v82 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v84);
  *(_DWORD *)(v82 + 8) = *v81;
  v87 = *v81 + 1;
  v88 = 2 * v87;
  v89 = 2 * v87;
  if ( 2 * v87 )
  {
    if ( v82 == -24 )
      goto LABEL_136;
    if ( v26 && v89 >= v88 )
    {
      memcpy_0((void *)(v82 + 24), v26, 2 * v87);
      goto LABEL_141;
    }
    memset((void *)(v82 + 24), 0, 2 * v87);
    if ( !v26 )
    {
LABEL_136:
      *(_DWORD *)_o__errno(v87, v83, v85, v86) = 22;
    }
    else
    {
      if ( v89 >= v88 )
        goto LABEL_141;
      *(_DWORD *)_o__errno(v87, v83, v85, v86) = 34;
    }
    invalid_parameter_noinfo();
  }
LABEL_141:
  v5 = this;
LABEL_31:
  v117 = v27 + 24;
  v118 = *((_DWORD *)v10 + 210);
  v119 = *((_QWORD *)v10 + 106);
  v120 = *((_DWORD *)v10 + 214);
  v31 = (_QWORD *)*((_QWORD *)v10 + 108);
  v32 = (char *)(v31 - 3);
  v33 = (ATL::CAtlStringMgr *)*(v31 - 3);
  v34 = *(__int64 (**)(void))(*(_QWORD *)v33 + 32LL);
  if ( (char *)v34 == (char *)ATL::CAtlStringMgr::Clone )
    v35 = ATL::CAtlStringMgr::Clone(v33);
  else
    v35 = (struct ATL::IAtlStringMgr *)v34();
  if ( *((int *)v32 + 4) >= 0 && v35 == *(struct ATL::IAtlStringMgr **)v32 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v32 + 4);
    goto LABEL_36;
  }
  v90 = v32 + 8;
  v91 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v35)(
          v35,
          *((unsigned int *)v32 + 2),
          2LL);
  v32 = (char *)v91;
  if ( !v91 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v93);
  *(_DWORD *)(v91 + 8) = *v90;
  v96 = *v90 + 1;
  v97 = 2 * v96;
  v98 = 2 * v96;
  if ( 2 * v96 )
  {
    if ( v91 == -24 )
      goto LABEL_150;
    if ( v31 && v98 >= v97 )
    {
      memcpy_0((void *)(v91 + 24), v31, 2 * v96);
      goto LABEL_36;
    }
    memset((void *)(v91 + 24), 0, 2 * v96);
    if ( !v31 )
    {
LABEL_150:
      *(_DWORD *)_o__errno(v96, v92, v94, v95) = 22;
    }
    else
    {
      if ( v98 >= v97 )
        goto LABEL_36;
      *(_DWORD *)_o__errno(v96, v92, v94, v95) = 34;
    }
    invalid_parameter_noinfo();
  }
LABEL_36:
  v121 = v32 + 24;
  if ( v101 != AudioSessionStateExpired )
    goto LABEL_37;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      31LL,
      &WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids,
      (unsigned int)v4);
  }
  v106 = (LPCRITICAL_SECTION)((char *)v5 + 24);
  v107 = 0;
  ATL::CCritSecLock::Lock(&v106);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      32,
      (unsigned int)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids,
      0,
      (__int64)v121);
  }
  try
  {
    ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::SetAt(
      (char *)v5 + 64,
      &v113,
      &v100);
  }
  catch ( ATL::CAtlException *v112 )
  {
    v53 = v112;
    if ( *(_DWORD *)v112 == -1073741571 )
      _o__resetstkoflw();
    v101 = *(_DWORD *)v53;
    v5 = v105;
    v4 = v102;
    if ( v101 < AudioSessionStateInactive )
      goto LABEL_170;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids, v5, v100);
  }
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v100 + 8LL))(v100);
LABEL_170:
  if ( v107 )
    LeaveCriticalSection(v106);
LABEL_37:
  if ( v4 == AudioSessionStateActive )
  {
    CAudioSessionManager::NotifyActiveSession(v5, v100);
  }
  else if ( v4 == AudioSessionStateExpired )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 34LL, &WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids, 0LL);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)v5 + 24);
    v109 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        38,
        (unsigned int)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids,
        0,
        (__int64)v121);
    }
    if ( (unsigned __int8)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
                            (char *)v5 + 64,
                            &v113) )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 39LL, &WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids);
      }
      v44 = *(__int64 (__fastcall **)(CAudioSession *, struct ISessionInternalEvents *))(*(_QWORD *)v100 + 192LL);
      if ( v44 == CAudioSession::DeleteSessionNotification )
        CAudioSession::DeleteSessionNotification(v100, v5);
      else
        v44(v100, v5);
      v45 = *(__int64 (__fastcall **)(CAudioSession *, struct ISessionInternalEvents *))(*(_QWORD *)v100 + 192LL);
      if ( v45 == CAudioSession::DeleteSessionNotification )
        CAudioSession::DeleteSessionNotification(v100, g_PolicyEventsHandler);
      else
        v45(v100, g_PolicyEventsHandler);
      v46 = *(__int64 (__fastcall **)(CAudioSession *, unsigned int *))(*(_QWORD *)v100 + 128LL);
      if ( v46 == CAudioSession::GetProcessId )
        ProcessId = CAudioSession::GetProcessId(v100, v104);
      else
        ProcessId = v46(v100, v104);
      if ( ProcessId >= 0
        && **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                           v48,
                           lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
            + 1) > 4u )
      {
        TlgCreateWsz(&pDesc, *((LPCWSTR *)v100 + 108));
        v124 = v104;
        v125 = 4LL;
        TlgWrite(v51, &unk_1800F8EC2, v49, v50, 4u, &pData);
      }
      v52 = *(void (**)(void))(*(_QWORD *)v100 + 16LL);
      if ( (char *)v52 == (char *)CAudioSession::Release )
        CAudioSession::Release(v100);
      else
        v52();
    }
    else if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
           && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids, v121);
    }
    if ( v109 )
      LeaveCriticalSection(lpCriticalSection);
  }
  if ( v100 )
  {
    v36 = *(void (**)(void))(*(_QWORD *)v100 + 16LL);
    if ( (char *)v36 == (char *)CAudioSession::Release )
      CAudioSession::Release(v100);
    else
      v36();
    v100 = 0LL;
  }
  v37 = v121 - 24;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v121 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v37 + 8LL))(*(_QWORD *)v37);
  v38 = v117 - 24;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v117 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v38 + 8LL))(*(_QWORD *)v38);
  v39 = v115 - 24;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v115 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v39 + 8LL))(*(_QWORD *)v39);
  v40 = v114 - 24;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v114 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v40 + 8LL))(*(_QWORD *)v40);
  v41 = v113 - 24;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v113 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v41 + 8LL))(*(_QWORD *)v41);
  v42 = v103;
  if ( v103 )
LABEL_54:
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v42 + 16LL))(v42);
  return 0LL;
}
