/*
 * XREFs of ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C01DA204
 * Callers:
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C01D4630 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CBB8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C00213E0 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C0043D18 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0044A68 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0045218 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C00454D0 (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00DF3C8 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E05D4 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00E15B4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV?$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C01DDC48 (-Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV-$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::SerializeCofuncPathsModalityFromPinnedSource(
        DMMVIDPNTOPOLOGY *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rax
  __int64 v9; // rax
  int NumPathsFromSource; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 Container; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r9
  _QWORD *v38; // rax
  __int64 v39; // rdx
  unsigned __int8 *v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  unsigned int v46; // r12d
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  DMMVIDPNSOURCEMODESET *v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  size_t v66; // rbx
  _QWORD *v67; // rax
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdi
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  __int64 v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  unsigned __int8 v81; // di
  _QWORD *v82; // rcx
  unsigned __int8 *v83; // rsi
  __int64 v84; // rbx
  _QWORD *v85; // rax
  __int64 v86; // rax
  unsigned __int64 v87; // [rsp+20h] [rbp-79h] BYREF
  __int64 (__fastcall ***v88)(_QWORD, __int64); // [rsp+28h] [rbp-71h] BYREF
  unsigned __int64 v89; // [rsp+30h] [rbp-69h]
  _QWORD v90[2]; // [rsp+40h] [rbp-59h] BYREF
  int v91; // [rsp+50h] [rbp-49h]
  _QWORD v92[2]; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v93; // [rsp+68h] [rbp-31h]
  int v94; // [rsp+70h] [rbp-29h]
  __int64 v95; // [rsp+78h] [rbp-21h]
  __int64 v96; // [rsp+80h] [rbp-19h] BYREF
  void **v97; // [rsp+88h] [rbp-11h] BYREF
  __int128 v98; // [rsp+90h] [rbp-9h]
  void **v99; // [rsp+A0h] [rbp+7h]
  void *Src; // [rsp+A8h] [rbp+Fh]
  size_t Size; // [rsp+B0h] [rbp+17h]
  int v102; // [rsp+B8h] [rbp+1Fh]
  unsigned int v103; // [rsp+110h] [rbp+77h] BYREF
  DMMVIDPNSOURCEMODESET *v104; // [rsp+118h] [rbp+7Fh] BYREF

  v4 = (unsigned int)a2;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(a3 + 32) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v9);
  }
  v87 = 0LL;
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(this, (unsigned int)v4, &v87);
  v15 = NumPathsFromSource;
  if ( NumPathsFromSource == -1071774919 )
  {
    v16 = WdLogNewEntry5_WdDmmEvent(v12, v11, v13, v14);
    *(_QWORD *)(v16 + 24) = v4;
    *(_QWORD *)(v16 + 32) = this;
    WdLogEvent5_WdDmmEvent(v16);
    return 3223192377LL;
  }
  if ( NumPathsFromSource < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
    v17[3] = v4;
    v17[4] = this;
    v17[5] = v15;
    WdLogEvent5_WdError(v17);
    return (unsigned int)v15;
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  v19 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(Container + 304), v4);
  v23 = *(_QWORD *)(v19 + 104);
  if ( v23 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v23 + 96));
    v24 = *(_QWORD *)(v19 + 104);
  }
  else
  {
    v24 = 0LL;
  }
  v96 = v24;
  if ( !*(_QWORD *)(v24 + 144) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v23, v20, v21, v22);
    WdLogEvent5_WdAssertion(v25);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v96, 0LL);
  v91 = 0;
  v28 = v92;
  v90[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
  v93 = 0LL;
  v90[1] = &DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  v92[1] = v92;
  v29 = 0LL;
  v89 = 0LL;
  v92[0] = v92;
  v94 = 2;
  v95 = 0LL;
  if ( !v87 )
    goto LABEL_15;
  do
  {
    v103 = -1;
    if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, (unsigned int)v4, v29, &v103) < 0 )
    {
      v45 = WdLogNewEntry5_WdAssertion(v42, v41, v43, v44);
      WdLogEvent5_WdAssertion(v45);
    }
    v46 = v103;
    Path = DMMVIDPNTOPOLOGY::FindPath(this, v4, v103);
    if ( !Path )
    {
      v52 = WdLogNewEntry5_WdAssertion(v48, v47, v49, v50);
      WdLogEvent5_WdAssertion(v52);
    }
    Src = 0LL;
    v97 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    Size = 0LL;
    v99 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v98 = 0LL;
    v102 = 3;
    v53 = *((_QWORD *)Path + 12);
    v104 = 0LL;
    v54 = *(_QWORD *)(v53 + 104);
    if ( v54 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v54 + 96));
      v55 = *(_QWORD *)(v53 + 104);
      v46 = v103;
    }
    else
    {
      v55 = 0LL;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v104, v55);
    v60 = v104;
    if ( !v104 )
    {
      v61 = WdLogNewEntry5_WdAssertion(v57, v56, v58, v59);
      WdLogEvent5_WdAssertion(v61);
    }
    if ( *((_QWORD *)v60 + 18) )
    {
      v62 = WdLogNewEntry5_WdAssertion(v57, v56, v58, v59);
      WdLogEvent5_WdAssertion(v62);
    }
    v63 = DMMVIDPNTARGETMODESET::Serialize(v60);
    v15 = v63;
    if ( v63 < 0 )
    {
      v80 = (_QWORD *)WdLogNewEntry5_WdError(v65, v64);
      v80[4] = v46;
      v80[3] = v4;
      v80[5] = this;
      v80[6] = v15;
      WdLogEvent5_WdError(v80);
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v104, 0LL);
      goto LABEL_51;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v104, 0LL);
    v66 = Size;
    v67 = operator new(0x38uLL, 0x4E506456u, PagedPool);
    v70 = (__int64)v67;
    if ( v67 )
    {
      v67[1] = 0LL;
      v67[2] = 0LL;
      *v67 = &DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `SetElement'};
      v67[3] = &DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
      v67[4] = 0LL;
      v67[5] = 0LL;
      *((_DWORD *)v67 + 12) = 3;
    }
    else
    {
      v70 = 0LL;
    }
    v88 = (__int64 (__fastcall ***)(_QWORD, __int64))v70;
    if ( !v70 )
    {
      v79 = (_QWORD *)WdLogNewEntry5_WdLowResource(0LL);
      v79[5] = v46;
      v79[3] = 56LL;
      v79[4] = v4;
      WdLogEvent5_WdLowResource(v79);
      LODWORD(v15) = -1073741801;
      goto LABEL_49;
    }
    v71 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v70, v66 + 360, v68, v69);
    v15 = v71;
    if ( v71 < 0 )
    {
      v78 = (_QWORD *)WdLogNewEntry5_WdError(v73, v72);
      v78[4] = v46;
      v78[3] = v4;
      v78[5] = this;
      v78[6] = v15;
      WdLogEvent5_WdError(v78);
LABEL_49:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v88);
LABEL_51:
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v97);
      goto LABEL_62;
    }
    if ( *((_DWORD *)Path + 28) != 254 )
    {
      v76 = WdLogNewEntry5_WdAssertion(v73, v72, v74, v75);
      WdLogEvent5_WdAssertion(v76);
    }
    if ( *((_DWORD *)Path + 29) != 254 )
    {
      v77 = WdLogNewEntry5_WdAssertion(v73, v72, v74, v75);
      WdLogEvent5_WdAssertion(v77);
    }
    DMMVIDPNPRESENTPATH::Serialize(Path, *(struct _D3DKMDT_VIDPN_PRESENT_PATH *const *)(v70 + 32), v74, v75);
    memmove((void *)(*(_QWORD *)(v70 + 32) + 360LL), Src, Size);
    v88 = 0LL;
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v90, (_QWORD *)v70);
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v88);
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v97);
    v29 = v89 + 1;
    v89 = v29;
  }
  while ( v29 < v87 );
  v30 = v93;
  v28 = (_QWORD *)v92[0];
  if ( v93 > 1 )
    goto LABEL_16;
LABEL_15:
  v30 = 1LL;
LABEL_16:
  v31 = 4 * v30 + 4;
  if ( v28 != v92 )
  {
    v32 = v28 - 1;
    while ( v32 )
    {
      v31 += v32[5];
      v26 = v92;
      v33 = (_QWORD *)v32[1];
      v32 = v33 - 1;
      if ( v33 == v92 )
        v32 = 0LL;
    }
  }
  v34 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a3, v31, (__int64)v26, v27);
  v15 = v34;
  if ( v34 >= 0 )
  {
    v39 = 1LL;
    v81 = 0;
    **(_BYTE **)(a3 + 32) = v93;
    v40 = *(unsigned __int8 **)(a3 + 32);
    v82 = (_QWORD *)*v40;
    if ( (unsigned __int8)v82 > 1u )
      v39 = *v40;
    v83 = &v40[4 * (unsigned __int8)v39 + 4];
    if ( (_QWORD *)v92[0] != v92 )
    {
      v84 = v92[0] - 8LL;
      if ( v92[0] != 8LL )
      {
        do
        {
          *(_DWORD *)(*(_QWORD *)(a3 + 32) + 4LL * v81 + 4) = (_DWORD)v83 - *(_DWORD *)(a3 + 32);
          memmove(v83, *(const void **)(v84 + 32), *(_QWORD *)(v84 + 40));
          v83 += *(_QWORD *)(v84 + 40);
          v82 = v92;
          v85 = *(_QWORD **)(v84 + 8);
          v84 = (__int64)(v85 - 1);
          if ( v85 == v92 )
            v84 = 0LL;
          ++v81;
        }
        while ( v84 );
      }
    }
    if ( v81 != **(_BYTE **)(a3 + 32) )
    {
      v86 = WdLogNewEntry5_WdAssertion(v82, v39, v40, v37);
      WdLogEvent5_WdAssertion(v86);
    }
    LODWORD(v15) = 0;
  }
  else
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35);
    v38[3] = a3;
    v38[4] = v4;
    v38[5] = this;
    v38[6] = v15;
    WdLogEvent5_WdError(v38);
  }
LABEL_62:
  Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(
    v90,
    v39,
    (__int64)v40,
    v37);
  return (unsigned int)v15;
}
