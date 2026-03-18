/*
 * XREFs of ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0222170
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C020FEC4 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02107F0 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00029B4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ??1?$auto_ptr@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0024EF0 (--1-$auto_ptr@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0044668 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0045A8C (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C0045E60 (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?_SerializeMonitor@DXGMONITOR@@QEAAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x1C02380A4 (-_SerializeMonitor@DXGMONITOR@@QEAAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  struct HDXGMONITOR__ *v14; // r12
  __int64 v15; // rax
  SIZE_T v16; // rbx
  __int64 v17; // rcx
  struct DXGMONITOR *v18; // rdi
  __int64 v19; // rax
  int v20; // eax
  struct _ERESOURCE *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  struct _DMM_MONITOR_SERIALIZATION *v25; // r13
  __int64 v26; // rax
  int v27; // eax
  struct _ERESOURCE *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  SIZE_T v31; // r8
  _QWORD *v32; // rcx
  _QWORD *v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  _QWORD *v40; // rax
  int v41; // eax
  _QWORD *v42; // rcx
  __int64 v43; // rax
  unsigned __int8 v44; // dl
  _BYTE *v45; // r14
  unsigned __int8 v46; // di
  _BYTE *v47; // r8
  char *v48; // rsi
  __int64 v49; // rbx
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // [rsp+20h] [rbp-58h]
  _QWORD v53[2]; // [rsp+30h] [rbp-48h] BYREF
  int v54; // [rsp+40h] [rbp-38h]
  _QWORD v55[2]; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v56; // [rsp+58h] [rbp-20h]
  int v57; // [rsp+60h] [rbp-18h]
  __int64 v58; // [rsp+68h] [rbp-10h]
  unsigned __int64 v60; // [rsp+C8h] [rbp+50h] BYREF
  __int64 (__fastcall ***v61)(_QWORD, __int64); // [rsp+D0h] [rbp+58h] BYREF
  struct DXGMONITOR *v62; // [rsp+D8h] [rbp+60h] BYREF

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v6);
    }
    v7 = a1 + 24;
    v54 = 0;
    v8 = *(_QWORD *)(a1 + 24);
    v53[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v9 = v55;
    v56 = 0LL;
    v53[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    v55[0] = v55;
    v55[1] = v55;
    v10 = 0LL;
    v57 = 2;
    if ( v8 != a1 + 24 )
      v10 = v8 - 8;
    v58 = 0LL;
    v52 = a1 + 24;
    if ( v10 )
    {
      do
      {
        if ( *(_QWORD *)(v10 + 104) )
        {
          v11 = operator new[](0x38uLL, 0x4E506456u, PagedPool);
          v13 = (__int64)v11;
          if ( v11 )
          {
            v11[1] = 0LL;
            v11[2] = 0LL;
            *v11 = &DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `SetElement'};
            v11[3] = &DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
            v11[4] = 0LL;
            v11[5] = 0LL;
            *((_DWORD *)v11 + 12) = 3;
          }
          else
          {
            v13 = 0LL;
          }
          v61 = (__int64 (__fastcall ***)(_QWORD, __int64))v13;
          if ( !v13 )
          {
            v39 = WdLogNewEntry5_WdLowResource(v12);
            *(_QWORD *)(v39 + 24) = 56LL;
            *(_QWORD *)(v39 + 32) = v10;
            WdLogEvent5_WdLowResource(v39);
            LODWORD(v18) = -1073741801;
            goto LABEL_47;
          }
          v14 = *(struct HDXGMONITOR__ **)(v10 + 104);
          if ( !v14 )
          {
            v15 = WdLogNewEntry5_WdAssertion(v12);
            WdLogEvent5_WdAssertion(v15);
          }
          v16 = 0LL;
          v60 = 0LL;
          if ( v14 )
          {
            v62 = 0LL;
            LODWORD(v18) = MONITOR_MGR::_GetMonitorFromHandle(v14, &v62);
            if ( (int)v18 >= 0 )
            {
              v18 = v62;
              if ( !v62 )
              {
                v19 = WdLogNewEntry5_WdAssertion(v17);
                WdLogEvent5_WdAssertion(v19);
              }
              KeEnterCriticalRegion();
              ExAcquireResourceSharedLite((PERESOURCE)((char *)v18 + 296), 1u);
              v20 = DXGMONITOR::_SerializeMonitor(v18, &v60, 0LL);
              v21 = (struct _ERESOURCE *)((char *)v18 + 296);
              LODWORD(v18) = v20;
              ExReleaseResourceLite(v21);
              KeLeaveCriticalRegion();
              v16 = v60;
            }
          }
          else
          {
            LODWORD(v18) = -1073741811;
          }
          v22 = 0x80000000LL;
          if ( (int)((_DWORD)v18 + 0x80000000) >= 0 && (_DWORD)v18 != -1073741789 )
          {
LABEL_41:
            v33 = (_QWORD *)WdLogNewEntry5_WdError(v22);
            v33[3] = *(_QWORD *)(v10 + 104);
            v34 = *(unsigned int *)(v10 + 24);
            v33[4] = v34;
            v35 = *(_QWORD *)(a1 + 88);
            v36 = *(_QWORD *)(v35 + 8);
            if ( !v36 )
            {
              v37 = WdLogNewEntry5_WdAssertion(v34);
              WdLogEvent5_WdAssertion(v37);
              v36 = *(_QWORD *)(v35 + 8);
            }
            v38 = (__int64)v33;
            v33[5] = *(_QWORD *)(v36 + 16);
            v33[6] = (int)v18;
LABEL_44:
            WdLogEvent5_WdError(v38);
LABEL_47:
            auto_ptr<VIDPN_MGR>::~auto_ptr<VIDPN_MGR>(&v61);
            goto LABEL_66;
          }
          if ( (_DWORD)v18 != -1073741789 )
          {
            v23 = WdLogNewEntry5_WdAssertion(0x80000000LL);
            WdLogEvent5_WdAssertion(v23);
          }
          v24 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v13, v16);
          v18 = (struct DXGMONITOR *)v24;
          if ( v24 < 0 )
          {
            v38 = WdLogNewEntry5_WdError(v22);
            *(_QWORD *)(v38 + 24) = v18;
            goto LABEL_44;
          }
          v25 = *(struct _DMM_MONITOR_SERIALIZATION **)(v13 + 32);
          if ( v14 )
          {
            v62 = 0LL;
            LODWORD(v18) = MONITOR_MGR::_GetMonitorFromHandle(v14, &v62);
            if ( (int)v18 >= 0 )
            {
              v18 = v62;
              if ( !v62 )
              {
                v26 = WdLogNewEntry5_WdAssertion(v22);
                WdLogEvent5_WdAssertion(v26);
              }
              KeEnterCriticalRegion();
              ExAcquireResourceSharedLite((PERESOURCE)((char *)v18 + 296), 1u);
              v27 = DXGMONITOR::_SerializeMonitor(v18, &v60, v25);
              v28 = (struct _ERESOURCE *)((char *)v18 + 296);
              LODWORD(v18) = v27;
              ExReleaseResourceLite(v28);
              KeLeaveCriticalRegion();
            }
          }
          else
          {
            LODWORD(v18) = -1073741811;
          }
          if ( (int)v18 < 0 )
            goto LABEL_41;
          v61 = 0LL;
          Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v53, (_QWORD *)v13);
          auto_ptr<VIDPN_MGR>::~auto_ptr<VIDPN_MGR>(&v61);
          v7 = v52;
        }
        v29 = *(_QWORD *)(v10 + 8);
        v10 = v29 - 8;
        if ( v29 == v7 )
          v10 = 0LL;
      }
      while ( v10 );
      v30 = v56;
      v9 = (_QWORD *)v55[0];
      if ( v56 > 1 )
        goto LABEL_39;
    }
    v30 = 1LL;
LABEL_39:
    v31 = 4 * v30 + 4;
    if ( v9 != v55 )
    {
      v32 = v9 - 1;
      while ( v32 )
      {
        v40 = (_QWORD *)v32[1];
        v31 += v32[5];
        v32 = v40 - 1;
        if ( v40 == v55 )
          v32 = 0LL;
      }
    }
    v41 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v31);
    v18 = (struct DXGMONITOR *)v41;
    if ( v41 >= 0 )
    {
      v44 = 1;
      v45 = *(_BYTE **)(a2 + 32);
      v46 = 0;
      *v45 = v56;
      v47 = *(_BYTE **)(a2 + 32);
      if ( (unsigned __int8)v56 > 1u )
        v44 = v56;
      v48 = &v47[4 * v44 + 4];
      if ( (_QWORD *)v55[0] == v55 )
        v49 = 0LL;
      else
        v49 = v55[0] - 8LL;
      if ( v49 )
      {
        do
        {
          *(_DWORD *)&v45[4 * v46 + 4] = (_DWORD)v48 - (_DWORD)v45;
          memmove(v48, *(const void **)(v49 + 32), *(_QWORD *)(v49 + 40));
          v48 += *(_QWORD *)(v49 + 40);
          v42 = v55;
          v50 = *(_QWORD **)(v49 + 8);
          v49 = (__int64)(v50 - 1);
          if ( v50 == v55 )
            v49 = 0LL;
          ++v46;
        }
        while ( v49 );
        v47 = *(_BYTE **)(a2 + 32);
      }
      if ( v46 != *v47 )
      {
        v51 = WdLogNewEntry5_WdAssertion(v42);
        WdLogEvent5_WdAssertion(v51);
      }
      LODWORD(v18) = 0;
    }
    else
    {
      v43 = WdLogNewEntry5_WdError(v42);
      *(_QWORD *)(v43 + 24) = v18;
      WdLogEvent5_WdError(v43);
    }
LABEL_66:
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v53);
    return (unsigned int)v18;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
