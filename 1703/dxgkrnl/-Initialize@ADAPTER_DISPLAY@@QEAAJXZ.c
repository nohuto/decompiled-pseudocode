/*
 * XREFs of ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0117980
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C01187B4 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002180 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DpiSetSchedulerCallbackState @ 0x1C0012D20 (DpiSetSchedulerCallbackState.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiReadPnpRegistryValue @ 0x1C01147D0 (DpiReadPnpRegistryValue.c)
 *     MonitorCreateMonitorManager @ 0x1C0117404 (MonitorCreateMonitorManager.c)
 *     ?Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z @ 0x1C0117FB4 (-Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z.c)
 *     ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z @ 0x1C0118290 (-AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z.c)
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C011839C (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C0118708 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C011EC00 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 *     ?AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C0194CA8 (-AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z.c)
 *     ?ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ @ 0x1C0195A58 (-ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ.c)
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
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rbx
  unsigned int v12; // ebx
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  int OutputDuplManager; // esi
  _DWORD *v19; // r15
  unsigned int *v20; // rbx
  unsigned int *v21; // rsi
  int RegistryValues; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // r9
  int v29; // eax
  unsigned int v30; // eax
  bool v31; // zf
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  struct DXGDODPRESENT *DodPresent; // rax
  __int64 v36; // rcx
  char *v37; // rbx
  unsigned int i; // r10d
  __int64 v39; // rax
  int v40; // ebx
  __int64 v41; // rdi
  struct DXGGLOBAL *v42; // rsi
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  _QWORD *v50; // rax
  unsigned int v51; // ebx
  _QWORD *v52; // rax
  _QWORD *v53; // rbx
  struct _LUID v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r9
  __int64 v58; // r8
  __int128 v59; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // r8
  _QWORD *v64; // rdx
  _QWORD *v65; // rax
  __int64 v66; // rax
  struct DXGGLOBAL *v67; // rax
  __int64 v68; // rcx
  _DWORD *v69; // rdx
  int v70; // eax
  struct _LUID v71; // [rsp+30h] [rbp-D0h] BYREF
  int v72; // [rsp+38h] [rbp-C8h] BYREF
  struct _LUID v73; // [rsp+40h] [rbp-C0h] BYREF
  char v74; // [rsp+48h] [rbp-B8h]
  _QWORD v75[36]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = *(unsigned int *)(*((_QWORD *)this + 2) + 1160LL);
  *((_DWORD *)this + 20) = v2;
  v3 = (unsigned int)v2;
  v4 = 3208 * v2;
  if ( !is_mul_ok(v2, 0xC88uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  v7 = (char *)operator new[](v6, 0x4B677844u, (POOL_TYPE)512);
  if ( v7 )
  {
    v11 = v7 + 8;
    *(_QWORD *)v7 = v3;
    `vector constructor iterator'(
      v7 + 8,
      3208LL,
      (unsigned int)v3,
      (void (__fastcall *)(char *))DISPLAY_SOURCE::DISPLAY_SOURCE);
  }
  else
  {
    v11 = 0LL;
  }
  *((_QWORD *)this + 14) = v11;
  if ( !v11 )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdLowResource(v8);
    v51 = -1073741801;
    v50[3] = *((unsigned int *)this + 20);
    v50[4] = *((_QWORD *)this + 2);
    v50[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v50);
    return v51;
  }
  v12 = 0;
  if ( !*((_DWORD *)this + 20) )
  {
LABEL_11:
    result = MonitorCreateMonitorManager(this, (MONITOR_MGR **)this + 12, v9, v10);
    if ( (int)result < 0 )
      return result;
    result = VIDPN_MGR_CLASSFACTORY::CreateVidPnMgr(this, (struct VIDPN_MGR **)this + 11);
    if ( (int)result <= -1071774937 )
      return result;
    v17 = (unsigned int)(result + 1071774934);
    if ( (unsigned int)v17 <= 0x3FE1FCD5 )
      return result;
    if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 300LL) & 0x100) != 0 )
    {
      v53 = (_QWORD *)((char *)this + 104);
      v54 = (struct _LUID)*((_QWORD *)DXGGLOBAL::GetGlobal(v17, v14, v15, v16) + 77);
      v55 = *((_QWORD *)this + 2);
      v73 = v54;
      v71 = *(struct _LUID *)(v55 + 268);
      OutputDuplManager = CreateOutputDuplManager(
                            *((_DWORD *)this + 20),
                            0LL,
                            &v73,
                            &v71,
                            (struct OUTPUTDUPL_MGR **)this + 13);
      if ( OutputDuplManager < 0 )
        return (unsigned int)OutputDuplManager;
      v58 = *v53 - 24LL;
      v59 = -(__int128)(unsigned __int64)*v53;
      *((_QWORD *)&v59 + 1) &= v58;
      Global = DXGGLOBAL::GetGlobal(v59, v56, v58, v57);
      DXGGLOBAL::AddIndirectOutputDuplMgr(Global, *((struct OUTPUTDUPL_MGR_INDIRECT **)&v59 + 1));
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
    if ( OutputDuplManager >= 0 )
    {
      v72 = 1;
      *((_QWORD *)this + 49) = (char *)this + 384;
      v19 = (_DWORD *)((char *)this + 320);
      *((_QWORD *)this + 48) = (char *)this + 384;
      v20 = (unsigned int *)((char *)this + 324);
      v21 = (unsigned int *)((char *)this + 328);
      *((_DWORD *)this + 80) = 0;
      *((_DWORD *)this + 81) = 200;
      *((_DWORD *)this + 82) = 1000;
      memset(v75, 0, 0x118uLL);
      v75[0] = 0LL;
      LODWORD(v75[4]) = 0x4000000;
      LODWORD(v75[1]) = 288;
      v75[2] = L"ModeListCaching";
      LODWORD(v75[8]) = 288;
      v75[3] = &v72;
      LODWORD(v75[11]) = 0x4000000;
      v75[9] = L"SetTimingsFlags";
      v75[16] = L"ShortLinkTrainingTimeout";
      LODWORD(v75[15]) = 288;
      LODWORD(v75[18]) = 0x4000000;
      LODWORD(v75[22]) = 288;
      LODWORD(v75[25]) = 0x4000000;
      v75[23] = L"LongLinkTrainingTimeout";
      v75[5] = 0LL;
      LODWORD(v75[6]) = 0;
      v75[7] = 0LL;
      v75[10] = (char *)this + 320;
      v75[12] = 0LL;
      LODWORD(v75[13]) = 0;
      v75[14] = 0LL;
      v75[17] = (char *)this + 324;
      v75[19] = 0LL;
      LODWORD(v75[20]) = 0;
      v75[21] = 0LL;
      v75[24] = (char *)this + 328;
      v75[26] = 0LL;
      LODWORD(v75[27]) = 0;
      RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v75, 0LL, 0LL);
      v26 = RegistryValues;
      if ( RegistryValues >= 0 )
      {
        v29 = v72;
      }
      else
      {
        v27 = WdLogNewEntry5_WdEvent(v24);
        *(_QWORD *)(v27 + 24) = v26;
        WdLogEvent5_WdEvent(v27);
        if ( (_DWORD)v26 != -1073741772 )
        {
          v61 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v28);
          *(_QWORD *)(v61 + 24) = 3771LL;
          WdLogEvent5_WdAssertion(v61);
        }
        v29 = 1;
        *v19 = 0;
        v72 = 1;
        LODWORD(v26) = 0;
        *v20 = 200;
        *v21 = 1000;
      }
      *((_BYTE *)this + 132) = v29 == 1;
      v30 = *v21;
      if ( !*v21 || *v20 >= v30 || v30 >= 0x7530 )
      {
        v62 = WdLogNewEntry5_WdError(v24, v23);
        v63 = 2LL;
        v64 = (_QWORD *)(v62 + 24);
        do
        {
          *v64++ = *v20;
          --v63;
        }
        while ( v63 );
        *(_QWORD *)(v62 + 40) = *((_QWORD *)this + 2);
        WdLogEvent5_WdError(v62);
        *v20 = 200;
        *v21 = 1000;
      }
      if ( (*v19 & 1) != 0 && !*(_QWORD *)(*((_QWORD *)this + 2) + 512LL) )
        goto LABEL_51;
      v24 = *((_QWORD *)this + 2);
      if ( (*(_DWORD *)(v24 + 300) & 0x400) != 0 )
      {
        if ( g_IsMobileCore )
        {
          *(_WORD *)((char *)this + 133) = 257;
        }
        else
        {
          v71.LowPart = (*(unsigned __int8 *)(v24 + 2184) >> 1) & 1;
          memset(v75, 0, 0x118uLL);
          v75[0] = 0LL;
          v75[2] = L"ForceEnableDWMClone";
          LODWORD(v75[1]) = 288;
          v75[3] = &v71;
          LODWORD(v75[4]) = 67108868;
          v75[5] = &v71;
          LODWORD(v75[6]) = 4;
          RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v75, 0LL, 0LL);
          v31 = v71.LowPart == 0;
          *((_BYTE *)this + 133) = v71.LowPart != 0;
          *((_BYTE *)this + 134) = !v31;
        }
      }
      else
      {
        if ( g_IsMobileCore )
        {
          v65 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23, v25);
          v65[3] = 275LL;
          v65[4] = 27LL;
          v65[5] = *((_QWORD *)this + 2);
          v65[6] = 0LL;
          v65[7] = 0LL;
          WdLogEvent5_WdCriticalError(v65);
        }
        else
        {
          if ( (*(_DWORD *)(v24 + 2184) & 2) != 0 )
            goto LABEL_51;
          v66 = WdLogNewEntry5_WdEvent(v24);
          *(_QWORD *)(v66 + 24) = *(int *)(*((_QWORD *)this + 2) + 272LL);
          *(_QWORD *)(v66 + 32) = *(unsigned int *)(*((_QWORD *)this + 2) + 268LL);
          WdLogEvent5_WdEvent(v66);
        }
        *(_WORD *)((char *)this + 133) = 0;
      }
      if ( (int)DXGADAPTER::GetDriverVersion(*((DXGADAPTER **)this + 2)) >= 2000
        || (int)DpiReadPnpRegistryValue(*(_QWORD *)(v24 + 192), L"EnableVirtualTopologySupport", (char *)&v71, 4u, 2u) < 0
        || !v71.LowPart )
      {
        goto LABEL_30;
      }
      if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 300LL) & 0x800) != 0 )
      {
        *((_BYTE *)this + 134) = 1;
        v67 = DXGGLOBAL::GetGlobal(v24, v23, v32, v33);
        DXGADAPTERSOURCEHASH::ForceReducedHashSize((struct DXGGLOBAL *)((char *)v67 + 840));
LABEL_30:
        v34 = *((_QWORD *)this + 2);
        if ( !*(_QWORD *)(v34 + 2288) )
        {
          DodPresent = DxgkpCreateDodPresent(this, *(_QWORD *)(v34 + 560) != 0LL);
          v36 = *((_QWORD *)this + 2);
          *((_QWORD *)this + 33) = DodPresent;
          if ( !DodPresent )
            LODWORD(v26) = -1073741801;
          if ( (*(_DWORD *)(v36 + 300) & 0x20) != 0 || *(_DWORD *)(v36 + 296) == 4 )
          {
            v37 = (char *)this + 244;
            *((_DWORD *)this + 61) = 0;
          }
          else
          {
            v71 = 0LL;
            if ( *(_QWORD *)(v36 + 1592)
              && (*(int (__fastcall **)(_QWORD, struct _LUID *))(v36 + 1592))(*(_QWORD *)(v36 + 1520), &v71) >= 0 )
            {
              v37 = (char *)this + 244;
              v68 = 0LL;
              v69 = (_DWORD *)((char *)this + 244);
              do
              {
                v70 = *((unsigned __int8 *)&v71.LowPart + v68++);
                *v69++ = v70;
              }
              while ( v68 < 4 );
            }
            else
            {
              v37 = (char *)this + 244;
              *((_DWORD *)this + 61) = 1;
            }
          }
          memset(v75, 0, 0x118uLL);
          v75[0] = 0LL;
          LODWORD(v75[1]) = 288;
          v75[2] = L"DODPreferredPresentMoveRegeionsOverride";
          v75[3] = v37;
          LODWORD(v75[4]) = 67108868;
          v75[5] = v37;
          LODWORD(v75[6]) = 4;
          RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v75, 0LL, 0LL);
          v24 = *(_QWORD *)(*((_QWORD *)this + 2) + 192LL);
          v23 = *(_QWORD *)(*(_QWORD *)(v24 + 64) + 40LL);
          if ( *(_DWORD *)(v23 + 28) >= 0x3007u )
            DpiSetSchedulerCallbackState(v24, 3);
        }
        if ( *((_QWORD *)this + 33) )
        {
          for ( i = 0; i < *((_DWORD *)this + 20); *(_QWORD *)(2704 * v39 + v24 + 224) = *(_QWORD *)(3208 * v39 + v23 + 896) )
          {
            v23 = *((_QWORD *)this + 14);
            v39 = i++;
            v32 = 2704 * v39;
            v33 = 3208 * v39;
            v24 = *(_QWORD *)(*((_QWORD *)this + 33) + 8LL);
          }
        }
        v40 = *((unsigned __int8 *)this + 134);
        v41 = *((_QWORD *)this + 2);
        v42 = DXGGLOBAL::GetGlobal(v24, v23, v32, v33);
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v73, (struct DXGGLOBAL *)((char *)v42 + 840), v43, v44);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v73);
        if ( DXGADAPTERSOURCEHASH::AddEntry(
               (struct DXGGLOBAL *)((char *)v42 + 840),
               (const struct _LUID *)(v41 + 268),
               0,
               v40) )
        {
          if ( v74 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v73, v45, v47, v48);
        }
        else
        {
          if ( v74 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v73, v45, v47, v48);
          v49 = WdLogNewEntry5_WdAssertion(v46, v45, v47, v48);
          *(_QWORD *)(v49 + 24) = 4019LL;
          WdLogEvent5_WdAssertion(v49);
        }
        return (unsigned int)v26;
      }
LABEL_51:
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
      v51 = -1073741735;
      v52[3] = *(int *)(*((_QWORD *)this + 2) + 272LL);
      v52[4] = *(unsigned int *)(*((_QWORD *)this + 2) + 268LL);
      v52[5] = -1073741735LL;
      WdLogEvent5_WdError(v52);
      return v51;
    }
    return (unsigned int)OutputDuplManager;
  }
  while ( 1 )
  {
    result = DISPLAY_SOURCE::Initialize((DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 3208LL * v12), this, v12);
    if ( (int)result < 0 )
      return result;
    if ( ++v12 >= *((_DWORD *)this + 20) )
      goto LABEL_11;
  }
}
