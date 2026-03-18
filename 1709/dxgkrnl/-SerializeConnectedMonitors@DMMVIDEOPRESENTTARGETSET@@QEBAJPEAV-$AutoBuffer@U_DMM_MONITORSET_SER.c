/*
 * XREFs of ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01F5390
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01EA0A8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C01EAA78 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C001E180 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C00356D0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C0035D5C (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C00364C8 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_SerializeMonitor@DXGMONITOR@@QEAAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x1C0201D64 (-_SerializeMonitor@DXGMONITOR@@QEAAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rax
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  struct HDXGMONITOR__ *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  struct DXGMONITOR *v17; // rdi
  __int64 v18; // rax
  int v19; // eax
  struct _ERESOURCE *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  int v25; // eax
  struct _ERESOURCE *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  int v32; // eax
  _QWORD *v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned __int8 v41; // dl
  _BYTE *v42; // r14
  unsigned __int8 v43; // di
  char *v44; // rsi
  __int64 v45; // rbx
  _QWORD *v46; // rax
  __int64 v47; // rax
  struct _DMM_MONITOR_SERIALIZATION *v48; // [rsp+20h] [rbp-50h]
  _QWORD v49[2]; // [rsp+30h] [rbp-40h] BYREF
  int v50; // [rsp+40h] [rbp-30h]
  _QWORD v51[2]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v52; // [rsp+58h] [rbp-18h]
  int v53; // [rsp+60h] [rbp-10h]
  __int64 v54; // [rsp+68h] [rbp-8h]
  unsigned __int64 v55; // [rsp+B8h] [rbp+48h] BYREF
  __int64 (__fastcall ***v56)(_QWORD, __int64); // [rsp+C0h] [rbp+50h] BYREF
  struct DXGMONITOR *v57; // [rsp+C8h] [rbp+58h] BYREF

  v2 = 0LL;
  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v7 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v7);
    }
    v50 = 0;
    v49[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v8 = v51;
    v52 = 0LL;
    v49[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    v51[1] = v51;
    v9 = *(_QWORD *)(a1 + 24);
    v51[0] = v51;
    v53 = 2;
    v54 = 0LL;
    if ( v9 != a1 + 24 )
    {
      v10 = v9 - 8;
      if ( v10 )
      {
        do
        {
          if ( *(_QWORD *)(v10 + 104) )
          {
            v11 = operator new(0x38uLL, 0x4E506456u, PagedPool);
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
            v56 = (__int64 (__fastcall ***)(_QWORD, __int64))v13;
            if ( !v13 )
            {
              v40 = WdLogNewEntry5_WdLowResource(v12);
              *(_QWORD *)(v40 + 24) = 56LL;
              *(_QWORD *)(v40 + 32) = v10;
              WdLogEvent5_WdLowResource(v40);
              LODWORD(v17) = -1073741801;
              goto LABEL_51;
            }
            v14 = *(struct HDXGMONITOR__ **)(v10 + 104);
            if ( !v14 )
            {
              v15 = WdLogNewEntry5_WdAssertion(v12);
              WdLogEvent5_WdAssertion(v15);
            }
            v55 = 0LL;
            if ( v14 )
            {
              v57 = 0LL;
              LODWORD(v17) = MONITOR_MGR::_GetMonitorFromHandle(v14, &v57);
              if ( (int)v17 >= 0 )
              {
                v17 = v57;
                if ( !v57 )
                {
                  v18 = WdLogNewEntry5_WdAssertion(v16);
                  WdLogEvent5_WdAssertion(v18);
                }
                KeEnterCriticalRegion();
                ExAcquireResourceSharedLite((PERESOURCE)((char *)v17 + 280), 1u);
                v19 = DXGMONITOR::_SerializeMonitor(v17, &v55, 0LL);
                v20 = (struct _ERESOURCE *)((char *)v17 + 280);
                LODWORD(v17) = v19;
                ExReleaseResourceLite(v20);
                KeLeaveCriticalRegion();
                v2 = v55;
              }
            }
            else
            {
              LODWORD(v17) = -1073741811;
            }
            v21 = 0x80000000LL;
            if ( (int)((_DWORD)v17 + 0x80000000) >= 0 && (_DWORD)v17 != -1073741789 )
            {
LABEL_45:
              v35 = (_QWORD *)WdLogNewEntry5_WdError(v21);
              v35[3] = *(_QWORD *)(v10 + 104);
              v36 = *(unsigned int *)(v10 + 24);
              v35[4] = v36;
              v37 = *(_QWORD *)(a1 + 88);
              if ( !*(_QWORD *)(v37 + 8) )
              {
                v38 = WdLogNewEntry5_WdAssertion(v36);
                WdLogEvent5_WdAssertion(v38);
              }
              v35[5] = *(_QWORD *)(*(_QWORD *)(v37 + 8) + 16LL);
              v39 = (__int64)v35;
              v35[6] = (int)v17;
LABEL_48:
              WdLogEvent5_WdError(v39);
LABEL_51:
              auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v56);
              goto LABEL_62;
            }
            if ( (_DWORD)v17 != -1073741789 )
            {
              v22 = WdLogNewEntry5_WdAssertion(0x80000000LL);
              WdLogEvent5_WdAssertion(v22);
            }
            v23 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v13, v2);
            v2 = 0LL;
            v17 = (struct DXGMONITOR *)v23;
            if ( v23 < 0 )
            {
              v39 = WdLogNewEntry5_WdError(v21);
              *(_QWORD *)(v39 + 24) = v17;
              goto LABEL_48;
            }
            v48 = *(struct _DMM_MONITOR_SERIALIZATION **)(v13 + 32);
            if ( v14 )
            {
              v57 = 0LL;
              LODWORD(v17) = MONITOR_MGR::_GetMonitorFromHandle(v14, &v57);
              if ( (int)v17 >= 0 )
              {
                v17 = v57;
                if ( !v57 )
                {
                  v24 = WdLogNewEntry5_WdAssertion(v21);
                  WdLogEvent5_WdAssertion(v24);
                }
                KeEnterCriticalRegion();
                ExAcquireResourceSharedLite((PERESOURCE)((char *)v17 + 280), 1u);
                v25 = DXGMONITOR::_SerializeMonitor(v17, &v55, v48);
                v26 = (struct _ERESOURCE *)((char *)v17 + 280);
                LODWORD(v17) = v25;
                ExReleaseResourceLite(v26);
                KeLeaveCriticalRegion();
                v2 = 0LL;
              }
            }
            else
            {
              LODWORD(v17) = -1073741811;
            }
            if ( (int)v17 < 0 )
              goto LABEL_45;
            v56 = 0LL;
            Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v49, (_QWORD *)v13);
            auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v56);
          }
          v27 = *(_QWORD *)(v10 + 8);
          v10 = v27 - 8;
          if ( v27 == a1 + 24 )
            v10 = 0LL;
        }
        while ( v10 );
        v28 = v52;
        v8 = (_QWORD *)v51[0];
        if ( v52 > 1 )
          goto LABEL_38;
      }
    }
    v28 = 1LL;
LABEL_38:
    v29 = 4 * v28 + 4;
    if ( v8 != v51 )
    {
      v30 = v8 - 1;
      while ( v30 )
      {
        v29 += v30[5];
        v31 = (_QWORD *)v30[1];
        v30 = v31 - 1;
        if ( v31 == v51 )
          v30 = 0LL;
      }
    }
    v32 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v29);
    v17 = (struct DXGMONITOR *)v32;
    if ( v32 >= 0 )
    {
      v41 = 1;
      v42 = *(_BYTE **)(a2 + 32);
      v43 = 0;
      *v42 = v52;
      if ( (unsigned __int8)v52 > 1u )
        v41 = v52;
      v44 = (char *)(*(_QWORD *)(a2 + 32) + 4 * (v41 + 1LL));
      if ( (_QWORD *)v51[0] != v51 )
      {
        v45 = v51[0] - 8LL;
        if ( v51[0] != 8LL )
        {
          do
          {
            *(_DWORD *)&v42[4 * v43 + 4] = (_DWORD)v44 - (_DWORD)v42;
            memmove(v44, *(const void **)(v45 + 32), *(_QWORD *)(v45 + 40));
            v44 += *(_QWORD *)(v45 + 40);
            v33 = v51;
            v46 = *(_QWORD **)(v45 + 8);
            v45 = (__int64)(v46 - 1);
            if ( v46 == v51 )
              v45 = 0LL;
            ++v43;
          }
          while ( v45 );
        }
      }
      if ( v43 != **(_BYTE **)(a2 + 32) )
      {
        v47 = WdLogNewEntry5_WdAssertion(v33);
        WdLogEvent5_WdAssertion(v47);
      }
      LODWORD(v17) = 0;
    }
    else
    {
      v34 = WdLogNewEntry5_WdError(v33);
      *(_QWORD *)(v34 + 24) = v17;
      WdLogEvent5_WdError(v34);
    }
LABEL_62:
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v49);
    return (unsigned int)v17;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v5 + 24) = 0LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
}
