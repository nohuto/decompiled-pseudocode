/*
 * XREFs of ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01DD290
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
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C01DCF34 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 */

__int64 __fastcall DMMVIDPN::SerializeVidPns(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 (__fastcall ***v12)(_QWORD, __int64); // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 (__fastcall ***v16)(_QWORD, __int64); // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int8 *v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int8 v35; // di
  _QWORD *v36; // rcx
  unsigned __int8 *v37; // rsi
  __int64 v38; // rbx
  _QWORD *v39; // rax
  __int64 v40; // rax
  _QWORD v41[2]; // [rsp+20h] [rbp-40h] BYREF
  int v42; // [rsp+30h] [rbp-30h]
  _QWORD v43[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v44; // [rsp+48h] [rbp-18h]
  int v45; // [rsp+50h] [rbp-10h]
  __int64 v46; // [rsp+58h] [rbp-8h]
  __int64 (__fastcall ***v47)(_QWORD, __int64); // [rsp+98h] [rbp+38h] BYREF

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdError(a1, 0LL);
    *(_QWORD *)(v6 + 24) = 0LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(a2 + 32) )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  v42 = 0;
  v41[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
  v9 = v43;
  v44 = 0LL;
  v41[1] = &DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  v43[1] = v43;
  v10 = *(_QWORD *)(a1 + 24);
  v43[0] = v43;
  v45 = 2;
  v46 = 0LL;
  if ( v10 == a1 + 24 )
    goto LABEL_16;
  v11 = v10 - 8;
  if ( !v11 )
    goto LABEL_16;
  do
  {
    v12 = (__int64 (__fastcall ***)(_QWORD, __int64))operator new(0x38uLL, 0x4E506456u, PagedPool);
    v16 = v12;
    if ( v12 )
    {
      v12[1] = 0LL;
      v12[2] = 0LL;
      *v12 = (__int64 (__fastcall **)(_QWORD, __int64))&DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
      v12[3] = (__int64 (__fastcall **)(_QWORD, __int64))&DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
      v12[4] = 0LL;
      v12[5] = 0LL;
      *((_DWORD *)v12 + 12) = 3;
    }
    else
    {
      v16 = 0LL;
    }
    v47 = v16;
    if ( !v16 )
    {
      v34 = WdLogNewEntry5_WdLowResource(v13);
      *(_QWORD *)(v34 + 24) = 56LL;
      *(_QWORD *)(v34 + 32) = v11;
      WdLogEvent5_WdLowResource(v34);
      LODWORD(v20) = -1073741801;
      goto LABEL_26;
    }
    v17 = DMMVIDPN::Serialize(v11, (__int64)v16, v14, v15);
    v20 = v17;
    if ( v17 < 0 )
    {
      v33 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v33 + 24) = v11;
      *(_QWORD *)(v33 + 32) = v20;
      WdLogEvent5_WdError(v33);
LABEL_26:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v47);
      goto LABEL_37;
    }
    v47 = 0LL;
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v41, v16);
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v47);
    v21 = *(_QWORD *)(v11 + 8);
    v11 = v21 - 8;
    if ( v21 == a1 + 24 )
      v11 = 0LL;
  }
  while ( v11 );
  v22 = v44;
  v9 = (_QWORD *)v43[0];
  if ( v44 > 1 )
    goto LABEL_17;
LABEL_16:
  v22 = 1LL;
LABEL_17:
  v23 = 4 * v22 + 4;
  if ( v9 != v43 )
  {
    v24 = v9 - 1;
    while ( v24 )
    {
      v23 += v24[5];
      a3 = v43;
      v25 = (_QWORD *)v24[1];
      v24 = v25 - 1;
      if ( v25 == v43 )
        v24 = 0LL;
    }
  }
  v26 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v23, (__int64)a3, a4);
  v20 = v26;
  if ( v26 >= 0 )
  {
    v31 = 1LL;
    v35 = 0;
    **(_BYTE **)(a2 + 32) = v44;
    v32 = *(unsigned __int8 **)(a2 + 32);
    v36 = (_QWORD *)*v32;
    if ( (unsigned __int8)v36 > 1u )
      v31 = *v32;
    v37 = &v32[4 * (unsigned __int8)v31 + 4];
    if ( (_QWORD *)v43[0] != v43 )
    {
      v38 = v43[0] - 8LL;
      if ( v43[0] != 8LL )
      {
        do
        {
          *(_DWORD *)(*(_QWORD *)(a2 + 32) + 4LL * v35 + 4) = (_DWORD)v37 - *(_DWORD *)(a2 + 32);
          memmove(v37, *(const void **)(v38 + 32), *(_QWORD *)(v38 + 40));
          v37 += *(_QWORD *)(v38 + 40);
          v36 = v43;
          v39 = *(_QWORD **)(v38 + 8);
          v38 = (__int64)(v39 - 1);
          if ( v39 == v43 )
            v38 = 0LL;
          ++v35;
        }
        while ( v38 );
      }
    }
    if ( v35 != **(_BYTE **)(a2 + 32) )
    {
      v40 = WdLogNewEntry5_WdAssertion(v36, v31, v32, v29);
      WdLogEvent5_WdAssertion(v40);
    }
    LODWORD(v20) = 0;
  }
  else
  {
    v30 = WdLogNewEntry5_WdError(v28, v27);
    *(_QWORD *)(v30 + 24) = v20;
    WdLogEvent5_WdError(v30);
  }
LABEL_37:
  Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(
    v41,
    v31,
    (__int64)v32,
    v29);
  return (unsigned int)v20;
}
