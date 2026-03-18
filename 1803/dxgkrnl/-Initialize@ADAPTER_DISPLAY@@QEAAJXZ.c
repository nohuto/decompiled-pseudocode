/*
 * XREFs of ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01550C8
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0151F14 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000A74C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DpiSetSchedulerCallbackState @ 0x1C003A230 (DpiSetSchedulerCallbackState.c)
 *     ?Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z @ 0x1C01558C0 (-Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z.c)
 *     ?AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C019CED0 (-AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z.c)
 *     ?AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z @ 0x1C019CF48 (-AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z.c)
 *     ?ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ @ 0x1C019EAE8 (-ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ.c)
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01C88D4 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C01D4B14 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C01EFEF8 (DpiReadPnpRegistryValue.c)
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C0211BE0 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 *     MonitorCreateMonitorManager @ 0x1C022D548 (MonitorCreateMonitorManager.c)
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
  struct _LUID v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r14
  __int128 v19; // rcx
  DXGGLOBAL *Global; // rax
  _DWORD *v21; // r15
  unsigned int *v22; // rbx
  _DWORD *v23; // r12
  int RegistryValues; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // r8
  _QWORD *v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  bool v35; // al
  bool v36; // zf
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  struct DXGGLOBAL *v40; // rax
  __int64 v41; // rax
  struct DXGDODPRESENT *DodPresent; // rax
  __int64 v43; // rcx
  int (__fastcall *v44)(_QWORD, struct _LUID *); // rax
  char *v45; // rbx
  __int64 v46; // rcx
  _DWORD *v47; // rdx
  int v48; // eax
  __int64 v49; // rcx
  unsigned int i; // r11d
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rax
  int v57; // ebx
  __int64 v58; // rdi
  struct DXGGLOBAL *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  struct _LUID v62; // [rsp+30h] [rbp-D0h] BYREF
  int v63; // [rsp+38h] [rbp-C8h] BYREF
  struct _LUID v64; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v65[36]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = *(unsigned int *)(*((_QWORD *)this + 2) + 1280LL);
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
      v16 = (struct _LUID)*((_QWORD *)DXGGLOBAL::GetGlobal(v15) + 78);
      v17 = *((_QWORD *)this + 2);
      v64 = v16;
      v62 = *(struct _LUID *)(v17 + 268);
      LODWORD(v18) = CreateOutputDuplManager(
                       *((_DWORD *)this + 20),
                       0LL,
                       &v64,
                       &v62,
                       (struct OUTPUTDUPL_MGR **)this + 13);
      if ( (int)v18 < 0 )
        return (unsigned int)v18;
      v19 = -(__int128)*((unsigned __int64 *)this + 13);
      *((_QWORD *)&v19 + 1) &= *((_QWORD *)this + 13) - 24LL;
      Global = DXGGLOBAL::GetGlobal(v19);
      DXGGLOBAL::AddIndirectOutputDuplMgr(Global, *((struct OUTPUTDUPL_MGR_INDIRECT **)&v19 + 1));
    }
    else
    {
      LODWORD(v18) = CreateOutputDuplManager(
                       *((_DWORD *)this + 20),
                       this,
                       0LL,
                       0LL,
                       (struct OUTPUTDUPL_MGR **)this + 13);
    }
    if ( (int)v18 >= 0 )
    {
      v63 = 1;
      *((_QWORD *)this + 49) = (char *)this + 384;
      v21 = (_DWORD *)((char *)this + 320);
      *((_QWORD *)this + 48) = (char *)this + 384;
      v22 = (unsigned int *)((char *)this + 324);
      v23 = (_DWORD *)((char *)this + 328);
      *((_DWORD *)this + 80) = 0;
      *((_DWORD *)this + 81) = 200;
      *((_DWORD *)this + 82) = 1000;
      memset(v65, 0, 0x118uLL);
      v65[0] = 0LL;
      LODWORD(v65[4]) = 0x4000000;
      LODWORD(v65[1]) = 288;
      v65[2] = L"ModeListCaching";
      LODWORD(v65[8]) = 288;
      v65[3] = &v63;
      LODWORD(v65[11]) = 0x4000000;
      v65[9] = L"SetTimingsFlags";
      v65[16] = L"ShortLinkTrainingTimeout";
      LODWORD(v65[15]) = 288;
      LODWORD(v65[18]) = 0x4000000;
      LODWORD(v65[22]) = 288;
      LODWORD(v65[25]) = 0x4000000;
      v65[23] = L"LongLinkTrainingTimeout";
      v65[5] = 0LL;
      LODWORD(v65[6]) = 0;
      v65[7] = 0LL;
      v65[10] = (char *)this + 320;
      v65[12] = 0LL;
      LODWORD(v65[13]) = 0;
      v65[14] = 0LL;
      v65[17] = (char *)this + 324;
      v65[19] = 0LL;
      LODWORD(v65[20]) = 0;
      v65[21] = 0LL;
      v65[24] = (char *)this + 328;
      v65[26] = 0LL;
      LODWORD(v65[27]) = 0;
      RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v65, 0LL, 0LL);
      v18 = RegistryValues;
      if ( RegistryValues >= 0 )
      {
        v29 = *((_DWORD *)this + 82);
        if ( v63 != 1 )
        {
          LOBYTE(v26) = 0;
          goto LABEL_29;
        }
      }
      else
      {
        v27 = WdLogNewEntry5_WdEvent(v26, v25);
        *(_QWORD *)(v27 + 24) = v18;
        WdLogEvent5_WdEvent(v27);
        if ( (_DWORD)v18 != -1073741772 )
        {
          v28 = WdLogNewEntry5_WdAssertion(v26);
          *(_QWORD *)(v28 + 24) = 4321LL;
          WdLogEvent5_WdAssertion(v28);
        }
        v29 = 1000;
        v63 = 1;
        *v23 = 1000;
        LODWORD(v18) = 0;
        *v21 = 0;
        *v22 = 200;
      }
      LOBYTE(v26) = 1;
LABEL_29:
      *((_BYTE *)this + 135) = v26;
      if ( !v29 || *v22 >= v29 || v29 >= 0x7530 )
      {
        v30 = WdLogNewEntry5_WdError(v26);
        v31 = 2LL;
        v32 = (_QWORD *)(v30 + 24);
        do
        {
          *v32++ = *v22;
          --v31;
        }
        while ( v31 );
        *(_QWORD *)(v30 + 40) = *((_QWORD *)this + 2);
        WdLogEvent5_WdError(v30);
        *v22 = 200;
        *v23 = 1000;
      }
      if ( (*v21 & 1) != 0 && !*(_QWORD *)(*((_QWORD *)this + 2) + 512LL) )
        goto LABEL_37;
      v34 = *((_QWORD *)this + 2);
      v26 = *(unsigned int *)(v34 + 276);
      if ( (*(_DWORD *)(v34 + 300) & 0x400) != 0 )
      {
        if ( (_DWORD)v26 == 1297040209
          && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 192) + 64LL) + 40LL) + 28LL) < 0x700Au )
        {
          *((_BYTE *)this + 132) = 1;
          v35 = 1;
        }
        else
        {
          v62.LowPart = (*(_DWORD *)(v34 + 2352) >> 1) & 1;
          memset(v65, 0, 0x118uLL);
          v65[0] = 0LL;
          v65[2] = L"ForceEnableDWMClone";
          LODWORD(v65[1]) = 288;
          LODWORD(v65[4]) = 67108868;
          v65[3] = &v62;
          LODWORD(v65[6]) = 4;
          v65[5] = &v62;
          RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v65, 0LL, 0LL);
          v36 = v62.LowPart == 0;
          *((_BYTE *)this + 132) = v62.LowPart != 0;
          v35 = !v36;
        }
      }
      else
      {
        if ( (_DWORD)v26 == 1297040209 )
        {
          v37 = WdLogNewEntry5_WdAssertion(v26);
          *(_QWORD *)(v37 + 24) = 4419LL;
          WdLogEvent5_WdAssertion(v37);
          v34 = *((_QWORD *)this + 2);
        }
        if ( (*(_DWORD *)(v34 + 2352) & 2) != 0 )
          goto LABEL_37;
        v38 = WdLogNewEntry5_WdEvent(v26, v34);
        *(_QWORD *)(v38 + 24) = *(int *)(*((_QWORD *)this + 2) + 272LL);
        *(_QWORD *)(v38 + 32) = *(unsigned int *)(*((_QWORD *)this + 2) + 268LL);
        WdLogEvent5_WdEvent(v38);
        v35 = 0;
        *((_BYTE *)this + 132) = 0;
      }
      *((_BYTE *)this + 133) = v35;
      if ( (int)DXGADAPTER::GetDriverVersion(*((DXGADAPTER **)this + 2)) >= 2000
        || (int)DpiReadPnpRegistryValue(*(_QWORD *)(v39 + 192), L"EnableVirtualTopologySupport", &v62, 4LL) < 0
        || !v62.LowPart )
      {
        goto LABEL_52;
      }
      if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 300LL) & 0x800) != 0 )
      {
        *((_BYTE *)this + 133) = 1;
        v40 = DXGGLOBAL::GetGlobal(v26);
        DXGADAPTERSOURCEHASH::ForceReducedHashSize((struct DXGGLOBAL *)((char *)v40 + 920));
LABEL_52:
        v41 = *((_QWORD *)this + 2);
        if ( !*(_QWORD *)(v41 + 2464) )
        {
          DodPresent = DxgkpCreateDodPresent(this, *(_QWORD *)(v41 + 560) != 0LL);
          v43 = *((_QWORD *)this + 2);
          *((_QWORD *)this + 33) = DodPresent;
          if ( !DodPresent )
            LODWORD(v18) = -1073741801;
          if ( (*(_DWORD *)(v43 + 300) & 0x20) != 0 || *(_DWORD *)(v43 + 296) == 4 )
          {
            v45 = (char *)this + 244;
            *((_DWORD *)this + 61) = 0;
          }
          else
          {
            v62 = 0LL;
            v44 = *(int (__fastcall **)(_QWORD, struct _LUID *))(v43 + 1752);
            if ( v44 && v44(*(_QWORD *)(v43 + 1680), &v62) >= 0 )
            {
              v45 = (char *)this + 244;
              v46 = 0LL;
              v47 = (_DWORD *)((char *)this + 244);
              do
              {
                v48 = *((unsigned __int8 *)&v62.LowPart + v46++);
                *v47++ = v48;
              }
              while ( v46 < 4 );
            }
            else
            {
              v45 = (char *)this + 244;
              *((_DWORD *)this + 61) = 1;
            }
          }
          memset(v65, 0, 0x118uLL);
          v65[0] = 0LL;
          LODWORD(v65[1]) = 288;
          v65[2] = L"DODPreferredPresentMoveRegeionsOverride";
          v65[3] = v45;
          LODWORD(v65[4]) = 67108868;
          v65[5] = v45;
          LODWORD(v65[6]) = 4;
          RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v65, 0LL, 0LL);
          v49 = *(_QWORD *)(*((_QWORD *)this + 2) + 192LL);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v49 + 64) + 40LL) + 28LL) >= 0x3007u )
            DpiSetSchedulerCallbackState(v49, 3);
        }
        if ( *((_QWORD *)this + 33) )
        {
          for ( i = 0;
                i < *((_DWORD *)this + 20);
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + 8LL) + 2704 * v51 + 224) = *(_QWORD *)(3760 * v51 + *((_QWORD *)this + 14) + 936) )
          {
            v51 = i++;
          }
        }
        v52 = *((_QWORD *)this + 2);
        v62.LowPart = 0;
        if ( (int)DpiReadPnpRegistryValue(*(_QWORD *)(v52 + 192), L"NeedToSuspendVidSchBeforeSetGammaRamp", &v62, 4LL) >= 0
          && v62.LowPart )
        {
          v56 = WdLogNewEntry5_WdWarning(v54, v53, v55);
          *(_QWORD *)(v56 + 24) = *((_QWORD *)this + 2);
          WdLogEvent5_WdWarning(v56);
        }
        else
        {
          v14 = 0;
        }
        v57 = *((unsigned __int8 *)this + 133);
        *((_BYTE *)this + 134) = v14;
        v58 = *((_QWORD *)this + 2);
        v59 = DXGGLOBAL::GetGlobal(v54);
        if ( (int)DXGADAPTERSOURCEHASH::AddNewAdapterEntry(
                    (struct DXGGLOBAL *)((char *)v59 + 920),
                    (const struct _LUID *)(v58 + 268),
                    v57) < 0 )
        {
          v61 = WdLogNewEntry5_WdAssertion(v60);
          *(_QWORD *)(v61 + 24) = 4587LL;
          WdLogEvent5_WdAssertion(v61);
        }
        return (unsigned int)v18;
      }
LABEL_37:
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v26);
      v11 = -1073741735;
      v33[3] = *(int *)(*((_QWORD *)this + 2) + 272LL);
      v33[4] = *(unsigned int *)(*((_QWORD *)this + 2) + 268LL);
      v33[5] = -1073741735LL;
      WdLogEvent5_WdError(v33);
      return v11;
    }
    return (unsigned int)v18;
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
