/*
 * XREFs of ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0106688
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0116864 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00089FC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     DpiSetSchedulerCallbackState @ 0x1C0011A50 (DpiSetSchedulerCallbackState.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C01055C8 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 *     ?Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z @ 0x1C0106F50 (-Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z.c)
 *     ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z @ 0x1C0107264 (-AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z.c)
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0107378 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C01076E4 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 *     MonitorCreateMonitorManager @ 0x1C010778C (MonitorCreateMonitorManager.c)
 *     DpiReadPnpRegistryValue @ 0x1C0110A74 (DpiReadPnpRegistryValue.c)
 *     ?AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C01A99DC (-AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z.c)
 *     ?ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ @ 0x1C01AA98C (-ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::Initialize(ADAPTER_DISPLAY *this)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rax
  bool v5; // cf
  SIZE_T v6; // rax
  char *v7; // rax
  __int64 v8; // rcx
  char *v9; // rbx
  _QWORD *v10; // rax
  unsigned int v11; // ebx
  __int64 result; // rax
  unsigned int v13; // ebx
  char v14; // si
  __int64 v15; // rcx
  _QWORD *v16; // rbx
  struct _LUID v17; // rcx
  __int64 v18; // rax
  int OutputDuplManager; // r14d
  __int64 v20; // r8
  __int128 v21; // rcx
  DXGGLOBAL *Global; // rax
  _DWORD *v23; // r12
  unsigned int *v24; // rbx
  unsigned int *v25; // r14
  int RegistryValues; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // rax
  __int64 v37; // r8
  _QWORD *v38; // rdx
  _QWORD *v39; // rax
  bool v40; // zf
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  struct DXGGLOBAL *v44; // rax
  __int64 v45; // rax
  struct DXGDODPRESENT *DodPresent; // rax
  __int64 v47; // rcx
  int (__fastcall *v48)(_QWORD, struct _LUID *); // rax
  char *v49; // rbx
  __int64 v50; // rcx
  _DWORD *v51; // rdx
  int v52; // eax
  __int64 v53; // rcx
  unsigned int i; // r11d
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  int v61; // ebx
  __int64 v62; // rdi
  struct DXGGLOBAL *v63; // rsi
  __int64 v64; // rcx
  __int64 v65; // rax
  struct _LUID v66; // [rsp+30h] [rbp-D0h] BYREF
  int v67; // [rsp+38h] [rbp-C8h] BYREF
  struct _LUID v68; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v69[36]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = *(unsigned int *)(*((_QWORD *)this + 2) + 1184LL);
  *((_DWORD *)this + 20) = v2;
  v3 = (unsigned int)v2;
  v4 = 3760 * v2;
  if ( !is_mul_ok(v2, 0xEB0uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  v7 = (char *)operator new[](v6, 0x4B677844u, (POOL_TYPE)512);
  if ( v7 )
  {
    v9 = v7 + 8;
    *(_QWORD *)v7 = v3;
    `vector constructor iterator'(
      v7 + 8,
      3760LL,
      (unsigned int)v3,
      (void (__fastcall *)(char *))DISPLAY_SOURCE::DISPLAY_SOURCE);
  }
  else
  {
    v9 = 0LL;
  }
  *((_QWORD *)this + 14) = v9;
  if ( !v9 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdLowResource(v8);
    v11 = -1073741801;
    v10[3] = *((unsigned int *)this + 20);
    v10[4] = *((_QWORD *)this + 2);
    v10[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v10);
    return v11;
  }
  v13 = 0;
  v14 = 1;
  if ( !*((_DWORD *)this + 20) )
  {
LABEL_14:
    result = MonitorCreateMonitorManager(this);
    if ( (int)result < 0 )
      return result;
    result = VIDPN_MGR_CLASSFACTORY::CreateVidPnMgr(this, (struct VIDPN_MGR **)this + 11);
    if ( (int)result <= -1071774937 )
      return result;
    v15 = (unsigned int)(result + 1071774934);
    if ( (unsigned int)v15 <= 0x3FE1FCD5 )
      return result;
    if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 300LL) & 0x100) != 0 )
    {
      v16 = (_QWORD *)((char *)this + 104);
      v17 = (struct _LUID)*((_QWORD *)DXGGLOBAL::GetGlobal(v15) + 77);
      v18 = *((_QWORD *)this + 2);
      v68 = v17;
      v66 = *(struct _LUID *)(v18 + 268);
      OutputDuplManager = CreateOutputDuplManager(
                            *((_DWORD *)this + 20),
                            0LL,
                            &v68,
                            &v66,
                            (struct OUTPUTDUPL_MGR **)this + 13);
      if ( OutputDuplManager < 0 )
        return (unsigned int)OutputDuplManager;
      v20 = *v16 - 24LL;
      v21 = -(__int128)(unsigned __int64)*v16;
      *((_QWORD *)&v21 + 1) &= v20;
      Global = DXGGLOBAL::GetGlobal(v21);
      DXGGLOBAL::AddIndirectOutputDuplMgr(Global, *((struct OUTPUTDUPL_MGR_INDIRECT **)&v21 + 1));
    }
    else
    {
      OutputDuplManager = CreateOutputDuplManager(
                            *((_DWORD *)this + 20),
                            this,
                            0LL,
                            0LL,
                            (struct OUTPUTDUPL_MGR **)this + 13);
    }
    if ( OutputDuplManager < 0 )
      return (unsigned int)OutputDuplManager;
    v67 = 1;
    *((_QWORD *)this + 49) = (char *)this + 384;
    v23 = (_DWORD *)((char *)this + 320);
    *((_QWORD *)this + 48) = (char *)this + 384;
    v24 = (unsigned int *)((char *)this + 324);
    v25 = (unsigned int *)((char *)this + 328);
    *((_DWORD *)this + 80) = 0;
    *((_DWORD *)this + 81) = 200;
    *((_DWORD *)this + 82) = 1000;
    memset(v69, 0, 0x118uLL);
    v69[0] = 0LL;
    LODWORD(v69[4]) = 0x4000000;
    LODWORD(v69[1]) = 288;
    v69[2] = L"ModeListCaching";
    LODWORD(v69[8]) = 288;
    v69[3] = &v67;
    LODWORD(v69[11]) = 0x4000000;
    v69[9] = L"SetTimingsFlags";
    v69[16] = L"ShortLinkTrainingTimeout";
    LODWORD(v69[15]) = 288;
    LODWORD(v69[18]) = 0x4000000;
    LODWORD(v69[22]) = 288;
    LODWORD(v69[25]) = 0x4000000;
    v69[23] = L"LongLinkTrainingTimeout";
    v69[5] = 0LL;
    LODWORD(v69[6]) = 0;
    v69[7] = 0LL;
    v69[10] = (char *)this + 320;
    v69[12] = 0LL;
    LODWORD(v69[13]) = 0;
    v69[14] = 0LL;
    v69[17] = (char *)this + 324;
    v69[19] = 0LL;
    LODWORD(v69[20]) = 0;
    v69[21] = 0LL;
    v69[24] = (char *)this + 328;
    v69[26] = 0LL;
    LODWORD(v69[27]) = 0;
    RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v69, 0LL, 0LL);
    v31 = RegistryValues;
    if ( RegistryValues >= 0 )
    {
      v34 = v67;
    }
    else
    {
      v32 = WdLogNewEntry5_WdEvent(v28, v27, v29, v30);
      *(_QWORD *)(v32 + 24) = v31;
      WdLogEvent5_WdEvent(v32);
      if ( (_DWORD)v31 != -1073741772 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v28);
        *(_QWORD *)(v33 + 24) = 4308LL;
        WdLogEvent5_WdAssertion(v33);
      }
      v34 = 1;
      *v23 = 0;
      v67 = 1;
      LODWORD(v31) = 0;
      *v24 = 200;
      *v25 = 1000;
    }
    *((_BYTE *)this + 135) = v34 == 1;
    v35 = *v25;
    if ( !*v25 || *v24 >= v35 || v35 >= 0x7530 )
    {
      v36 = WdLogNewEntry5_WdError(v28);
      v37 = 2LL;
      v38 = (_QWORD *)(v36 + 24);
      do
      {
        *v38++ = *v24;
        --v37;
      }
      while ( v37 );
      *(_QWORD *)(v36 + 40) = *((_QWORD *)this + 2);
      WdLogEvent5_WdError(v36);
      *v24 = 200;
      *v25 = 1000;
    }
    if ( (*v23 & 1) != 0 && !*(_QWORD *)(*((_QWORD *)this + 2) + 512LL) )
    {
LABEL_36:
      v39 = (_QWORD *)WdLogNewEntry5_WdError(v28);
      v11 = -1073741735;
      v39[3] = *(int *)(*((_QWORD *)this + 2) + 272LL);
      v39[4] = *(unsigned int *)(*((_QWORD *)this + 2) + 268LL);
      v39[5] = -1073741735LL;
      WdLogEvent5_WdError(v39);
      return v11;
    }
    v28 = *((_QWORD *)this + 2);
    if ( (*(_DWORD *)(v28 + 300) & 0x400) != 0 )
    {
      if ( g_IsMobileCore )
      {
        *((_WORD *)this + 66) = 257;
      }
      else
      {
        v66.LowPart = (*(unsigned __int8 *)(v28 + 2208) >> 1) & 1;
        memset(v69, 0, 0x118uLL);
        v69[0] = 0LL;
        v69[2] = L"ForceEnableDWMClone";
        LODWORD(v69[1]) = 288;
        LODWORD(v69[4]) = 67108868;
        v69[3] = &v66;
        LODWORD(v69[6]) = 4;
        v69[5] = &v66;
        RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v69, 0LL, 0LL);
        v40 = v66.LowPart == 0;
        *((_BYTE *)this + 132) = v66.LowPart != 0;
        *((_BYTE *)this + 133) = !v40;
      }
    }
    else
    {
      if ( g_IsMobileCore )
      {
        v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27, v29);
        v41[3] = 275LL;
        v41[4] = 27LL;
        v41[5] = *((_QWORD *)this + 2);
        v41[6] = 0LL;
        v41[7] = 0LL;
        WdLogEvent5_WdCriticalError(v41);
      }
      else
      {
        if ( (*(_DWORD *)(v28 + 2208) & 2) != 0 )
          goto LABEL_36;
        v42 = WdLogNewEntry5_WdEvent(v28, v27, v29, v30);
        *(_QWORD *)(v42 + 24) = *(int *)(*((_QWORD *)this + 2) + 272LL);
        *(_QWORD *)(v42 + 32) = *(unsigned int *)(*((_QWORD *)this + 2) + 268LL);
        WdLogEvent5_WdEvent(v42);
      }
      *((_WORD *)this + 66) = 0;
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*((DXGADAPTER **)this + 2)) < 2000
      && (int)DpiReadPnpRegistryValue(*(_QWORD *)(v43 + 192), L"EnableVirtualTopologySupport", &v66, 4LL) >= 0
      && v66.LowPart )
    {
      if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 300LL) & 0x800) == 0 )
        goto LABEL_36;
      *((_BYTE *)this + 133) = 1;
      v44 = DXGGLOBAL::GetGlobal(v28);
      DXGADAPTERSOURCEHASH::ForceReducedHashSize((struct DXGGLOBAL *)((char *)v44 + 840));
    }
    v45 = *((_QWORD *)this + 2);
    if ( !*(_QWORD *)(v45 + 2312) )
    {
      DodPresent = DxgkpCreateDodPresent(this, *(_QWORD *)(v45 + 560) != 0LL);
      v47 = *((_QWORD *)this + 2);
      *((_QWORD *)this + 33) = DodPresent;
      if ( !DodPresent )
        LODWORD(v31) = -1073741801;
      if ( (*(_DWORD *)(v47 + 300) & 0x20) != 0 || *(_DWORD *)(v47 + 296) == 4 )
      {
        v49 = (char *)this + 244;
        *((_DWORD *)this + 61) = 0;
      }
      else
      {
        v66 = 0LL;
        v48 = *(int (__fastcall **)(_QWORD, struct _LUID *))(v47 + 1616);
        if ( v48 && v48(*(_QWORD *)(v47 + 1544), &v66) >= 0 )
        {
          v49 = (char *)this + 244;
          v50 = 0LL;
          v51 = (_DWORD *)((char *)this + 244);
          do
          {
            v52 = *((unsigned __int8 *)&v66.LowPart + v50++);
            *v51++ = v52;
          }
          while ( v50 < 4 );
        }
        else
        {
          v49 = (char *)this + 244;
          *((_DWORD *)this + 61) = 1;
        }
      }
      memset(v69, 0, 0x118uLL);
      v69[0] = 0LL;
      LODWORD(v69[1]) = 288;
      v69[2] = L"DODPreferredPresentMoveRegeionsOverride";
      v69[3] = v49;
      LODWORD(v69[4]) = 67108868;
      v69[5] = v49;
      LODWORD(v69[6]) = 4;
      RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v69, 0LL, 0LL);
      v53 = *(_QWORD *)(*((_QWORD *)this + 2) + 192LL);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v53 + 64) + 40LL) + 28LL) >= 0x3007u )
        DpiSetSchedulerCallbackState(v53, 3);
    }
    if ( *((_QWORD *)this + 33) )
    {
      for ( i = 0;
            i < *((_DWORD *)this + 20);
            *(_QWORD *)(2704 * v55 + *(_QWORD *)(*((_QWORD *)this + 33) + 8LL) + 224) = *(_QWORD *)(3760 * v55
                                                                                                  + *((_QWORD *)this + 14)
                                                                                                  + 936) )
      {
        v55 = i++;
      }
    }
    v56 = *((_QWORD *)this + 2);
    v66.LowPart = 0;
    if ( (int)DpiReadPnpRegistryValue(*(_QWORD *)(v56 + 192), L"NeedToSuspendVidSchBeforeSetGammaRamp", &v66, 4LL) >= 0
      && v66.LowPart )
    {
      v60 = WdLogNewEntry5_WdWarning(v58, v57, v59);
      *(_QWORD *)(v60 + 24) = *((_QWORD *)this + 2);
      WdLogEvent5_WdWarning(v60);
    }
    else
    {
      v14 = 0;
    }
    v61 = *((unsigned __int8 *)this + 133);
    *((_BYTE *)this + 134) = v14;
    v62 = *((_QWORD *)this + 2);
    v63 = DXGGLOBAL::GetGlobal(v58);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v68, (struct DXGGLOBAL *)((char *)v63 + 840));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v68);
    if ( DXGADAPTERSOURCEHASH::AddEntry(
           (struct DXGGLOBAL *)((char *)v63 + 840),
           (const struct _LUID *)(v62 + 268),
           0,
           v61) )
    {
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v68);
    }
    else
    {
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v68);
      v65 = WdLogNewEntry5_WdAssertion(v64);
      *(_QWORD *)(v65 + 24) = 4581LL;
      WdLogEvent5_WdAssertion(v65);
    }
    return (unsigned int)v31;
  }
  while ( 1 )
  {
    result = DISPLAY_SOURCE::Initialize((DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 3760LL * v13), this, v13);
    if ( (int)result < 0 )
      return result;
    if ( ++v13 >= *((_DWORD *)this + 20) )
      goto LABEL_14;
  }
}
