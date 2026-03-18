/*
 * XREFs of ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01DCA60
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01D0C74 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C01D1550 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C00213E0 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0044A68 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0045218 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C00454D0 (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     MonitorSerializeMonitor @ 0x1C01E43C0 (MonitorSerializeMonitor.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  _QWORD *v34; // rcx
  _QWORD *v35; // rax
  int v36; // eax
  __int64 v37; // rdx
  _QWORD *v38; // rcx
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rdx
  _QWORD *v44; // rsi
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rcx
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  _BYTE *v52; // r15
  unsigned __int8 v53; // di
  char *v54; // rsi
  __int64 v55; // rbx
  _QWORD *v56; // rax
  __int64 v57; // rax
  _QWORD v58[2]; // [rsp+20h] [rbp-40h] BYREF
  int v59; // [rsp+30h] [rbp-30h]
  _QWORD v60[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v61; // [rsp+48h] [rbp-18h]
  int v62; // [rsp+50h] [rbp-10h]
  __int64 v63; // [rsp+58h] [rbp-8h]
  unsigned __int64 v64; // [rsp+A8h] [rbp+48h] BYREF
  __int64 (__fastcall ***v65)(_QWORD, __int64); // [rsp+B0h] [rbp+50h] BYREF

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v8);
    }
    v59 = 0;
    v58[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v9 = v60;
    v61 = 0LL;
    v58[1] = &DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
    v60[1] = v60;
    v10 = *(_QWORD *)(a1 + 24);
    v60[0] = v60;
    v62 = 2;
    v63 = 0LL;
    if ( v10 != a1 + 24 )
    {
      v11 = v10 - 8;
      if ( v11 )
      {
        do
        {
          if ( *(_QWORD *)(v11 + 104) )
          {
            v12 = operator new(0x38uLL, 0x4E506456u, PagedPool);
            v17 = (__int64)v12;
            if ( v12 )
            {
              v12[1] = 0LL;
              v12[2] = 0LL;
              *v12 = &DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `SetElement'};
              v12[3] = &DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
              v12[4] = 0LL;
              v12[5] = 0LL;
              *((_DWORD *)v12 + 12) = 3;
            }
            else
            {
              v17 = 0LL;
            }
            v65 = (__int64 (__fastcall ***)(_QWORD, __int64))v17;
            if ( !v17 )
            {
              v51 = WdLogNewEntry5_WdLowResource(v14);
              *(_QWORD *)(v51 + 24) = 56LL;
              *(_QWORD *)(v51 + 32) = v11;
              WdLogEvent5_WdLowResource(v51);
              LODWORD(v25) = -1073741801;
              goto LABEL_39;
            }
            v18 = *(_QWORD *)(v11 + 104);
            if ( !v18 )
            {
              v19 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
              WdLogEvent5_WdAssertion(v19);
            }
            v64 = 0LL;
            v20 = MonitorSerializeMonitor(v18, &v64, 0LL);
            v24 = 0x80000000LL;
            v25 = v20;
            if ( (int)(v20 + 0x80000000) >= 0 && v20 != -1073741789 )
            {
LABEL_33:
              v44 = (_QWORD *)WdLogNewEntry5_WdError(v24, v21);
              v44[3] = *(_QWORD *)(v11 + 104);
              v47 = *(unsigned int *)(v11 + 24);
              v44[4] = v47;
              v48 = *(_QWORD *)(a1 + 88);
              if ( !*(_QWORD *)(v48 + 8) )
              {
                v49 = WdLogNewEntry5_WdAssertion(v47, v43, v45, v46);
                WdLogEvent5_WdAssertion(v49);
              }
              v44[5] = *(_QWORD *)(*(_QWORD *)(v48 + 8) + 16LL);
              v50 = (__int64)v44;
              v44[6] = v25;
LABEL_36:
              WdLogEvent5_WdError(v50);
LABEL_39:
              auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v65);
              goto LABEL_50;
            }
            if ( v20 != -1073741789 )
            {
              v26 = WdLogNewEntry5_WdAssertion(0x80000000LL, v21, v22, v23);
              WdLogEvent5_WdAssertion(v26);
            }
            v27 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v17, v64, v22, v23);
            v25 = v27;
            if ( v27 < 0 )
            {
              v50 = WdLogNewEntry5_WdError(v29, v28);
              *(_QWORD *)(v50 + 24) = v25;
              goto LABEL_36;
            }
            v30 = MonitorSerializeMonitor(v18, &v64, *(_QWORD *)(v17 + 32));
            v25 = v30;
            if ( v30 < 0 )
              goto LABEL_33;
            v65 = 0LL;
            Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v58, (_QWORD *)v17);
            auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v65);
          }
          v31 = *(_QWORD *)(v11 + 8);
          v11 = v31 - 8;
          if ( v31 == a1 + 24 )
            v11 = 0LL;
        }
        while ( v11 );
        v32 = v61;
        v9 = (_QWORD *)v60[0];
        if ( v61 > 1 )
          goto LABEL_26;
      }
    }
    v32 = 1LL;
LABEL_26:
    v33 = 4 * v32 + 4;
    if ( v9 != v60 )
    {
      v34 = v9 - 1;
      while ( v34 )
      {
        v33 += v34[5];
        a3 = v60;
        v35 = (_QWORD *)v34[1];
        v34 = v35 - 1;
        if ( v35 == v60 )
          v34 = 0LL;
      }
    }
    v36 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v33, (__int64)a3, a4);
    v25 = v36;
    if ( v36 >= 0 )
    {
      v41 = 1LL;
      v52 = *(_BYTE **)(a2 + 32);
      v53 = 0;
      *v52 = v61;
      if ( (unsigned __int8)v61 > 1u )
        v41 = (unsigned __int8)v61;
      v42 = *(_QWORD *)(a2 + 32) + 8LL;
      v54 = (char *)(v42 + 4LL * ((unsigned __int8)v41 - 1));
      if ( (_QWORD *)v60[0] != v60 )
      {
        v55 = v60[0] - 8LL;
        if ( v60[0] != 8LL )
        {
          do
          {
            *(_DWORD *)&v52[4 * v53 + 4] = (_DWORD)v54 - (_DWORD)v52;
            memmove(v54, *(const void **)(v55 + 32), *(_QWORD *)(v55 + 40));
            v54 += *(_QWORD *)(v55 + 40);
            v38 = v60;
            v56 = *(_QWORD **)(v55 + 8);
            v55 = (__int64)(v56 - 1);
            if ( v56 == v60 )
              v55 = 0LL;
            ++v53;
          }
          while ( v55 );
        }
      }
      if ( v53 != **(_BYTE **)(a2 + 32) )
      {
        v57 = WdLogNewEntry5_WdAssertion(v38, v41, v42, v39);
        WdLogEvent5_WdAssertion(v57);
      }
      LODWORD(v25) = 0;
    }
    else
    {
      v40 = WdLogNewEntry5_WdError(v38, v37);
      *(_QWORD *)(v40 + 24) = v25;
      WdLogEvent5_WdError(v40);
    }
LABEL_50:
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(
      v58,
      v41,
      v42,
      v39);
    return (unsigned int)v25;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(a1, 0LL);
    *(_QWORD *)(v6 + 24) = 0LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
}
