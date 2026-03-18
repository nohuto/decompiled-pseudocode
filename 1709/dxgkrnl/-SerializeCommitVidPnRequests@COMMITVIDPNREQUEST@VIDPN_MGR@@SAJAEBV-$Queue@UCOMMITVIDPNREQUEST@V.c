/*
 * XREFs of ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01EF704
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01EA0A8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C01EAA78 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C001E180 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C00356D0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x1C0035940 (-Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZ.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C0035D5C (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C00364C8 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  _QWORD *v7; // r8
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 (__fastcall ***v10)(_QWORD, __int64); // rax
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, __int64); // rbx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int8 v26; // dl
  unsigned __int8 v27; // di
  unsigned __int8 *v28; // r8
  _QWORD *v29; // rcx
  unsigned __int8 *v30; // rsi
  __int64 v31; // rbx
  _QWORD *v32; // rax
  __int64 v33; // rax
  _QWORD v34[2]; // [rsp+20h] [rbp-40h] BYREF
  int v35; // [rsp+30h] [rbp-30h]
  _QWORD v36[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v37; // [rsp+48h] [rbp-18h]
  int v38; // [rsp+50h] [rbp-10h]
  __int64 v39; // [rsp+58h] [rbp-8h]
  __int64 (__fastcall ***v40)(_QWORD, __int64); // [rsp+98h] [rbp+38h] BYREF

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v6);
    }
    v35 = 0;
    v34[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v7 = v36;
    v37 = 0LL;
    v34[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    v36[1] = v36;
    v8 = *(_QWORD *)(a1 + 24);
    v36[0] = v36;
    v38 = 2;
    v39 = 0LL;
    if ( v8 == a1 + 24 || (v9 = v8 - 8) == 0 )
    {
LABEL_16:
      v17 = 1LL;
      if ( *(_QWORD *)(a1 + 40) > 1uLL )
        v17 = *(_QWORD *)(a1 + 40);
      v18 = 28 * v17 - 20;
      if ( v7 != v36 )
      {
        v19 = v7 - 1;
        while ( v19 )
        {
          v22 = (_QWORD *)v19[1];
          v18 += v19[5];
          v19 = v22 - 1;
          if ( v22 == v36 )
            v19 = 0LL;
        }
      }
      v23 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v18);
      v15 = v23;
      if ( v23 >= 0 )
      {
        v26 = 1;
        v27 = 0;
        **(_BYTE **)(a2 + 32) = v37;
        v28 = *(unsigned __int8 **)(a2 + 32);
        v29 = (_QWORD *)*v28;
        if ( (unsigned __int8)v29 > 1u )
          v26 = *v28;
        v30 = &v28[4 * v26 + 4];
        if ( (_QWORD *)v36[0] != v36 )
        {
          v31 = v36[0] - 8LL;
          if ( v36[0] != 8LL )
          {
            do
            {
              *(_DWORD *)(*(_QWORD *)(a2 + 32) + 4LL * v27 + 4) = (_DWORD)v30 - *(_DWORD *)(a2 + 32);
              memmove(v30, *(const void **)(v31 + 32), *(_QWORD *)(v31 + 40));
              v30 += *(_QWORD *)(v31 + 40);
              v29 = v36;
              v32 = *(_QWORD **)(v31 + 8);
              v31 = (__int64)(v32 - 1);
              if ( v32 == v36 )
                v31 = 0LL;
              ++v27;
            }
            while ( v31 );
          }
        }
        if ( v27 != **(_BYTE **)(a2 + 32) )
        {
          v33 = WdLogNewEntry5_WdAssertion(v29);
          WdLogEvent5_WdAssertion(v33);
        }
        LODWORD(v15) = 0;
      }
      else
      {
        v25 = WdLogNewEntry5_WdError(v24);
        *(_QWORD *)(v25 + 24) = v15;
        WdLogEvent5_WdError(v25);
      }
    }
    else
    {
      while ( 1 )
      {
        v10 = (__int64 (__fastcall ***)(_QWORD, __int64))operator new(0x38uLL, 0x4E506456u, PagedPool);
        v12 = v10;
        if ( v10 )
        {
          v10[1] = 0LL;
          v10[2] = 0LL;
          *v10 = (__int64 (__fastcall **)(_QWORD, __int64))&DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `SetElement'};
          v10[3] = (__int64 (__fastcall **)(_QWORD, __int64))&DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
          v10[4] = 0LL;
          v10[5] = 0LL;
          *((_DWORD *)v10 + 12) = 3;
        }
        else
        {
          v12 = 0LL;
        }
        v40 = v12;
        if ( !v12 )
          break;
        v13 = VIDPN_MGR::COMMITVIDPNREQUEST::Serialize(v9, (__int64)v12);
        v15 = v13;
        if ( v13 < 0 )
        {
          v20 = WdLogNewEntry5_WdError(v14);
          *(_QWORD *)(v20 + 24) = v9;
          *(_QWORD *)(v20 + 32) = v15;
          WdLogEvent5_WdError(v20);
          goto LABEL_22;
        }
        v40 = 0LL;
        Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v34, v12);
        auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v40);
        v16 = *(_QWORD *)(v9 + 8);
        v9 = v16 - 8;
        if ( v16 == a1 + 24 )
          v9 = 0LL;
        if ( !v9 )
        {
          v7 = (_QWORD *)v36[0];
          goto LABEL_16;
        }
      }
      v21 = WdLogNewEntry5_WdLowResource(v11);
      *(_QWORD *)(v21 + 24) = 56LL;
      *(_QWORD *)(v21 + 32) = v9;
      WdLogEvent5_WdLowResource(v21);
      LODWORD(v15) = -1073741801;
LABEL_22:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v40);
    }
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v34);
    return (unsigned int)v15;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
