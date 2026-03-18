/*
 * XREFs of ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C021F108
 * Callers:
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C0218754 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C00035B0 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ??1?$auto_ptr@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0024EF0 (--1-$auto_ptr@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C0043668 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0044668 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0045A8C (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C0045E60 (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00BC204 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00BC348 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00BEEAC (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV?$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0223B4C (-Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV-$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::SerializeCofuncPathsModalityFromPinnedSource(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v8; // rax
  int NumPathsFromSource; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 Container; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // r12d
  __int64 v24; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  DMMVIDPNSOURCEMODESET *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  size_t v36; // rbx
  _QWORD *v37; // rax
  __int64 v38; // rdi
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  SIZE_T v44; // rdx
  _QWORD *v45; // rcx
  _QWORD *v46; // rax
  int v47; // eax
  __int64 v48; // rcx
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  unsigned __int8 v53; // di
  __int64 v54; // rcx
  char *v55; // rdx
  char v56; // r8
  unsigned __int8 *v57; // rsi
  __int64 v58; // rbx
  _QWORD *v59; // rax
  __int64 v60; // rax
  unsigned __int64 v61; // [rsp+20h] [rbp-79h] BYREF
  __int64 (__fastcall ***v62)(_QWORD, __int64); // [rsp+28h] [rbp-71h] BYREF
  unsigned __int64 v63; // [rsp+30h] [rbp-69h]
  _QWORD v64[2]; // [rsp+40h] [rbp-59h] BYREF
  int v65; // [rsp+50h] [rbp-49h]
  _QWORD v66[2]; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v67; // [rsp+68h] [rbp-31h]
  int v68; // [rsp+70h] [rbp-29h]
  __int64 v69; // [rsp+78h] [rbp-21h]
  __int64 v70; // [rsp+80h] [rbp-19h] BYREF
  void **v71; // [rsp+88h] [rbp-11h] BYREF
  __int128 v72; // [rsp+90h] [rbp-9h]
  void **v73; // [rsp+A0h] [rbp+7h]
  void *Src; // [rsp+A8h] [rbp+Fh]
  size_t Size; // [rsp+B0h] [rbp+17h]
  int v76; // [rsp+B8h] [rbp+1Fh]
  unsigned int v77; // [rsp+110h] [rbp+77h] BYREF
  DMMVIDPNSOURCEMODESET *v78; // [rsp+118h] [rbp+7Fh] BYREF

  v3 = a2;
  if ( !a3 )
  {
    v6 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v6 + 24) = 0LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(a3 + 32) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  v61 = 0LL;
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(this, v3, &v61);
  v11 = NumPathsFromSource;
  if ( NumPathsFromSource == -1071774919 )
  {
    v12 = WdLogNewEntry5_WdDmmEvent(v10);
    *(_QWORD *)(v12 + 24) = v3;
    *(_QWORD *)(v12 + 32) = this;
    WdLogEvent5_WdDmmEvent(v12);
    return 3223192377LL;
  }
  if ( NumPathsFromSource < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v13[3] = v3;
    v13[4] = this;
    v13[5] = v11;
    WdLogEvent5_WdError(v13);
    return (unsigned int)v11;
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  v15 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v3);
  v16 = *(_QWORD *)(v15 + 104);
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 96));
    v17 = *(_QWORD *)(v15 + 104);
  }
  else
  {
    v17 = 0LL;
  }
  v70 = v17;
  if ( !*(_QWORD *)(v17 + 144) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v16);
    WdLogEvent5_WdAssertion(v18);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v70, 0LL);
  v65 = 0;
  v19 = v66;
  v64[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
  v67 = 0LL;
  v64[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  v66[1] = v66;
  v20 = 0LL;
  v63 = 0LL;
  v66[0] = v66;
  v68 = 2;
  v69 = 0LL;
  if ( !v61 )
    goto LABEL_38;
  do
  {
    v77 = -1;
    if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, v3, v20, &v77) < 0 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v22);
    }
    v23 = v77;
    Path = DMMVIDPNTOPOLOGY::FindPath(this, v3, v77);
    if ( !Path )
    {
      v26 = WdLogNewEntry5_WdAssertion(v24);
      WdLogEvent5_WdAssertion(v26);
    }
    Src = 0LL;
    v71 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    Size = 0LL;
    v73 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v72 = 0LL;
    v76 = 3;
    v27 = *((_QWORD *)Path + 12);
    v78 = 0LL;
    v28 = *(_QWORD *)(v27 + 104);
    if ( v28 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v28 + 96));
      v29 = *(_QWORD *)(v27 + 104);
      v23 = v77;
    }
    else
    {
      v29 = 0LL;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v78, v29);
    v31 = v78;
    if ( !v78 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v30);
      WdLogEvent5_WdAssertion(v32);
    }
    if ( *((_QWORD *)v31 + 18) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v30);
      WdLogEvent5_WdAssertion(v33);
    }
    v34 = DMMVIDPNTARGETMODESET::Serialize(v31);
    v11 = v34;
    if ( v34 < 0 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v35);
      v52[4] = v23;
      v52[3] = v3;
      v52[5] = this;
      v52[6] = v11;
      WdLogEvent5_WdError(v52);
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v78, 0LL);
      goto LABEL_50;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v78, 0LL);
    v36 = Size;
    v37 = operator new[](0x38uLL, 0x4E506456u, PagedPool);
    v38 = (__int64)v37;
    if ( v37 )
    {
      v37[1] = 0LL;
      v37[2] = 0LL;
      *v37 = &DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `SetElement'};
      v37[3] = &DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
      v37[4] = 0LL;
      v37[5] = 0LL;
      *((_DWORD *)v37 + 12) = 3;
    }
    else
    {
      v38 = 0LL;
    }
    v62 = (__int64 (__fastcall ***)(_QWORD, __int64))v38;
    if ( !v38 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdLowResource(0LL);
      v51[5] = v23;
      v51[3] = 56LL;
      v51[4] = v3;
      WdLogEvent5_WdLowResource(v51);
      LODWORD(v11) = -1073741801;
      goto LABEL_48;
    }
    v39 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v38, v36 + 360);
    v11 = v39;
    if ( v39 < 0 )
    {
      v50 = (_QWORD *)WdLogNewEntry5_WdError(v40);
      v50[4] = v23;
      v50[3] = v3;
      v50[5] = this;
      v50[6] = v11;
      WdLogEvent5_WdError(v50);
LABEL_48:
      auto_ptr<VIDPN_MGR>::~auto_ptr<VIDPN_MGR>(&v62);
LABEL_50:
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v71);
      goto LABEL_64;
    }
    if ( *((_DWORD *)Path + 28) != 254 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v40);
      WdLogEvent5_WdAssertion(v41);
    }
    if ( *((_DWORD *)Path + 29) != 254 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v40);
      WdLogEvent5_WdAssertion(v42);
    }
    DMMVIDPNPRESENTPATH::Serialize(Path, *(struct _D3DKMDT_VIDPN_PRESENT_PATH *const *)(v38 + 32));
    memmove((void *)(*(_QWORD *)(v38 + 32) + 360LL), Src, Size);
    v62 = 0LL;
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v64, (_QWORD *)v38);
    auto_ptr<VIDPN_MGR>::~auto_ptr<VIDPN_MGR>(&v62);
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v71);
    v20 = v63 + 1;
    v63 = v20;
  }
  while ( v20 < v61 );
  v43 = v67;
  v19 = (_QWORD *)v66[0];
  if ( v67 > 1 )
    goto LABEL_39;
LABEL_38:
  v43 = 1LL;
LABEL_39:
  v44 = 4 * v43 + 4;
  if ( v19 != v66 )
  {
    v45 = v19 - 1;
    while ( v45 )
    {
      v44 += v45[5];
      v46 = (_QWORD *)v45[1];
      v45 = v46 - 1;
      if ( v46 == v66 )
        v45 = 0LL;
    }
  }
  v47 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a3, v44);
  v11 = v47;
  if ( v47 >= 0 )
  {
    v53 = 0;
    **(_BYTE **)(a3 + 32) = v67;
    v54 = 1LL;
    v55 = *(char **)(a3 + 32);
    v56 = *v55;
    if ( (unsigned __int8)*v55 > 1u )
      v54 = (unsigned __int8)*v55;
    v57 = (unsigned __int8 *)&v55[4 * (unsigned __int8)v54 + 4];
    if ( (_QWORD *)v66[0] == v66 )
      v58 = 0LL;
    else
      v58 = v66[0] - 8LL;
    if ( v58 )
    {
      do
      {
        *(_DWORD *)(*(_QWORD *)(a3 + 32) + 4LL * v53 + 4) = (_DWORD)v57 - *(_DWORD *)(a3 + 32);
        memmove(v57, *(const void **)(v58 + 32), *(_QWORD *)(v58 + 40));
        v57 += *(_QWORD *)(v58 + 40);
        v54 = (__int64)v66;
        v59 = *(_QWORD **)(v58 + 8);
        v58 = (__int64)(v59 - 1);
        if ( v59 == v66 )
          v58 = 0LL;
        ++v53;
      }
      while ( v58 );
      v56 = **(_BYTE **)(a3 + 32);
    }
    if ( v53 != v56 )
    {
      v60 = WdLogNewEntry5_WdAssertion(v54);
      WdLogEvent5_WdAssertion(v60);
    }
    LODWORD(v11) = 0;
  }
  else
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdError(v48);
    v49[3] = a3;
    v49[4] = v3;
    v49[5] = this;
    v49[6] = v11;
    WdLogEvent5_WdError(v49);
  }
LABEL_64:
  Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v64);
  return (unsigned int)v11;
}
