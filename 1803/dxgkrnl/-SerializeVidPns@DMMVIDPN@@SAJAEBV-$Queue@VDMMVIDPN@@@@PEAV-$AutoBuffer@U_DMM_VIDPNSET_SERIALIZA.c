/*
 * XREFs of ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0222C1C
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C020FEC4 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02107F0 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ??1?$auto_ptr@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0024EF0 (--1-$auto_ptr@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0044668 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0045A8C (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C0045E60 (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C022277C (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 */

__int64 __fastcall DMMVIDPN::SerializeVidPns(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rsi
  __int64 (__fastcall ***v11)(_QWORD, __int64); // rax
  __int64 v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, __int64); // rbx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  SIZE_T v19; // r8
  _QWORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int8 v27; // di
  __int64 v28; // rcx
  char *v29; // rdx
  char v30; // r8
  unsigned __int8 *v31; // rsi
  __int64 v32; // rbx
  _QWORD *v33; // rax
  __int64 v34; // rax
  _QWORD v35[2]; // [rsp+20h] [rbp-40h] BYREF
  int v36; // [rsp+30h] [rbp-30h]
  _QWORD v37[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-18h]
  int v39; // [rsp+50h] [rbp-10h]
  __int64 v40; // [rsp+58h] [rbp-8h]
  __int64 (__fastcall ***v41)(_QWORD, __int64); // [rsp+98h] [rbp+38h] BYREF

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(a2 + 32) )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v6);
  }
  v36 = 0;
  v35[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
  v7 = a1 + 24;
  v8 = *(_QWORD *)(a1 + 24);
  v35[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  v9 = v37;
  v38 = 0LL;
  v37[1] = v37;
  v37[0] = v37;
  v10 = 0LL;
  v39 = 2;
  if ( v8 != a1 + 24 )
    v10 = v8 - 8;
  v40 = 0LL;
  if ( !v10 )
    goto LABEL_17;
  do
  {
    v11 = (__int64 (__fastcall ***)(_QWORD, __int64))operator new[](0x38uLL, 0x4E506456u, PagedPool);
    v13 = v11;
    if ( v11 )
    {
      v11[1] = 0LL;
      v11[2] = 0LL;
      *v11 = (__int64 (__fastcall **)(_QWORD, __int64))&DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
      v11[3] = (__int64 (__fastcall **)(_QWORD, __int64))&DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
      v11[4] = 0LL;
      v11[5] = 0LL;
      *((_DWORD *)v11 + 12) = 3;
    }
    else
    {
      v13 = 0LL;
    }
    v41 = v13;
    if ( !v13 )
    {
      v22 = WdLogNewEntry5_WdLowResource(v12);
      *(_QWORD *)(v22 + 24) = 56LL;
      *(_QWORD *)(v22 + 32) = v10;
      WdLogEvent5_WdLowResource(v22);
      LODWORD(v16) = -1073741801;
      goto LABEL_22;
    }
    v14 = DMMVIDPN::Serialize(v10, (__int64)v13);
    v16 = v14;
    if ( v14 < 0 )
    {
      v21 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v21 + 24) = v10;
      *(_QWORD *)(v21 + 32) = v16;
      WdLogEvent5_WdError(v21);
LABEL_22:
      auto_ptr<VIDPN_MGR>::~auto_ptr<VIDPN_MGR>(&v41);
      goto LABEL_41;
    }
    v41 = 0LL;
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v35, v13);
    auto_ptr<VIDPN_MGR>::~auto_ptr<VIDPN_MGR>(&v41);
    v17 = *(_QWORD *)(v10 + 8);
    v10 = v17 - 8;
    if ( v17 == v7 )
      v10 = 0LL;
  }
  while ( v10 );
  v18 = v38;
  v9 = (_QWORD *)v37[0];
  if ( v38 > 1 )
    goto LABEL_18;
LABEL_17:
  v18 = 1LL;
LABEL_18:
  v19 = 4 * v18 + 4;
  if ( v9 != v37 )
  {
    v20 = v9 - 1;
    while ( v20 )
    {
      v23 = (_QWORD *)v20[1];
      v19 += v20[5];
      v20 = v23 - 1;
      if ( v23 == v37 )
        v20 = 0LL;
    }
  }
  v24 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v19);
  v16 = v24;
  if ( v24 >= 0 )
  {
    v27 = 0;
    **(_BYTE **)(a2 + 32) = v38;
    v28 = 1LL;
    v29 = *(char **)(a2 + 32);
    v30 = *v29;
    if ( (unsigned __int8)*v29 > 1u )
      v28 = (unsigned __int8)*v29;
    v31 = (unsigned __int8 *)&v29[4 * (unsigned __int8)v28 + 4];
    if ( (_QWORD *)v37[0] == v37 )
      v32 = 0LL;
    else
      v32 = v37[0] - 8LL;
    if ( v32 )
    {
      do
      {
        *(_DWORD *)(*(_QWORD *)(a2 + 32) + 4LL * v27 + 4) = (_DWORD)v31 - *(_DWORD *)(a2 + 32);
        memmove(v31, *(const void **)(v32 + 32), *(_QWORD *)(v32 + 40));
        v31 += *(_QWORD *)(v32 + 40);
        v28 = (__int64)v37;
        v33 = *(_QWORD **)(v32 + 8);
        v32 = (__int64)(v33 - 1);
        if ( v33 == v37 )
          v32 = 0LL;
        ++v27;
      }
      while ( v32 );
      v30 = **(_BYTE **)(a2 + 32);
    }
    if ( v27 != v30 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v28);
      WdLogEvent5_WdAssertion(v34);
    }
    LODWORD(v16) = 0;
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v26 + 24) = v16;
    WdLogEvent5_WdError(v26);
  }
LABEL_41:
  Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v35);
  return (unsigned int)v16;
}
