/*
 * XREFs of ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C01F3158
 * Callers:
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C01EFD44 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000A2B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000A36C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000BCBC (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C001E180 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C003497C (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C00356D0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C0035D5C (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C00364C8 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00A38D4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00A4154 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00A5CC0 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV?$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C01F6670 (-Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV-$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@.c)
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
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // r12d
  __int64 v31; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  DMMVIDPNSOURCEMODESET *v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rcx
  size_t v43; // rbx
  _QWORD *v44; // rax
  __int64 v45; // rdi
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  unsigned __int8 v53; // dl
  unsigned __int8 v54; // di
  unsigned __int8 *v55; // r8
  _QWORD *v56; // rcx
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
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v70, 0LL);
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
    goto LABEL_15;
  do
  {
    v77 = -1;
    if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, (_QWORD *)(unsigned int)v3, v20, &v77) < 0 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v28);
      WdLogEvent5_WdAssertion(v29);
    }
    v30 = v77;
    Path = DMMVIDPNTOPOLOGY::FindPath(this, v3, v77);
    if ( !Path )
    {
      v33 = WdLogNewEntry5_WdAssertion(v31);
      WdLogEvent5_WdAssertion(v33);
    }
    Src = 0LL;
    v71 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    Size = 0LL;
    v73 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v72 = 0LL;
    v76 = 3;
    v34 = *((_QWORD *)Path + 12);
    v78 = 0LL;
    v35 = *(_QWORD *)(v34 + 104);
    if ( v35 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v35 + 96));
      v36 = *(_QWORD *)(v34 + 104);
      v30 = v77;
    }
    else
    {
      v36 = 0LL;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v78, v36);
    v38 = v78;
    if ( !v78 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v37);
      WdLogEvent5_WdAssertion(v39);
    }
    if ( *((_QWORD *)v38 + 18) )
    {
      v40 = WdLogNewEntry5_WdAssertion(v37);
      WdLogEvent5_WdAssertion(v40);
    }
    v41 = DMMVIDPNTARGETMODESET::Serialize(v38);
    v11 = v41;
    if ( v41 < 0 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v42);
      v52[4] = v30;
      v52[3] = v3;
      v52[5] = this;
      v52[6] = v11;
      WdLogEvent5_WdError(v52);
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v78, 0LL);
      goto LABEL_51;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v78, 0LL);
    v43 = Size;
    v44 = operator new(0x38uLL, 0x4E506456u, PagedPool);
    v45 = (__int64)v44;
    if ( v44 )
    {
      v44[1] = 0LL;
      v44[2] = 0LL;
      *v44 = &DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `SetElement'};
      v44[3] = &DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
      v44[4] = 0LL;
      v44[5] = 0LL;
      *((_DWORD *)v44 + 12) = 3;
    }
    else
    {
      v45 = 0LL;
    }
    v62 = (__int64 (__fastcall ***)(_QWORD, __int64))v45;
    if ( !v45 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdLowResource(0LL);
      v51[5] = v30;
      v51[3] = 56LL;
      v51[4] = v3;
      WdLogEvent5_WdLowResource(v51);
      LODWORD(v11) = -1073741801;
      goto LABEL_49;
    }
    v46 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v45, v43 + 360);
    v11 = v46;
    if ( v46 < 0 )
    {
      v50 = (_QWORD *)WdLogNewEntry5_WdError(v47);
      v50[4] = v30;
      v50[3] = v3;
      v50[5] = this;
      v50[6] = v11;
      WdLogEvent5_WdError(v50);
LABEL_49:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v62);
LABEL_51:
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v71);
      goto LABEL_62;
    }
    if ( *((_DWORD *)Path + 28) != 254 )
    {
      v48 = WdLogNewEntry5_WdAssertion(v47);
      WdLogEvent5_WdAssertion(v48);
    }
    if ( *((_DWORD *)Path + 29) != 254 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v47);
      WdLogEvent5_WdAssertion(v49);
    }
    DMMVIDPNPRESENTPATH::Serialize(Path, *(struct _D3DKMDT_VIDPN_PRESENT_PATH *const *)(v45 + 32));
    memmove((void *)(*(_QWORD *)(v45 + 32) + 360LL), Src, Size);
    v62 = 0LL;
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v64, (_QWORD *)v45);
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v62);
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v71);
    v20 = v63 + 1;
    v63 = v20;
  }
  while ( v20 < v61 );
  v21 = v67;
  v19 = (_QWORD *)v66[0];
  if ( v67 > 1 )
    goto LABEL_16;
LABEL_15:
  v21 = 1LL;
LABEL_16:
  v22 = 4 * v21 + 4;
  if ( v19 != v66 )
  {
    v23 = v19 - 1;
    while ( v23 )
    {
      v22 += v23[5];
      v24 = (_QWORD *)v23[1];
      v23 = v24 - 1;
      if ( v24 == v66 )
        v23 = 0LL;
    }
  }
  v25 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a3, v22);
  v11 = v25;
  if ( v25 >= 0 )
  {
    v53 = 1;
    v54 = 0;
    **(_BYTE **)(a3 + 32) = v67;
    v55 = *(unsigned __int8 **)(a3 + 32);
    v56 = (_QWORD *)*v55;
    if ( (unsigned __int8)v56 > 1u )
      v53 = *v55;
    v57 = &v55[4 * v53 + 4];
    if ( (_QWORD *)v66[0] != v66 )
    {
      v58 = v66[0] - 8LL;
      if ( v66[0] != 8LL )
      {
        do
        {
          *(_DWORD *)(*(_QWORD *)(a3 + 32) + 4LL * v54 + 4) = (_DWORD)v57 - *(_DWORD *)(a3 + 32);
          memmove(v57, *(const void **)(v58 + 32), *(_QWORD *)(v58 + 40));
          v57 += *(_QWORD *)(v58 + 40);
          v56 = v66;
          v59 = *(_QWORD **)(v58 + 8);
          v58 = (__int64)(v59 - 1);
          if ( v59 == v66 )
            v58 = 0LL;
          ++v54;
        }
        while ( v58 );
      }
    }
    if ( v54 != **(_BYTE **)(a3 + 32) )
    {
      v60 = WdLogNewEntry5_WdAssertion(v56);
      WdLogEvent5_WdAssertion(v60);
    }
    LODWORD(v11) = 0;
  }
  else
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v26);
    v27[3] = a3;
    v27[4] = v3;
    v27[5] = this;
    v27[6] = v11;
    WdLogEvent5_WdError(v27);
  }
LABEL_62:
  Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v64);
  return (unsigned int)v11;
}
