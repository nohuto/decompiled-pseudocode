/*
 * XREFs of ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00DE7F0
 * Callers:
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4CB4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 * Callees:
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C00025C4 (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV-$DoublyLinkedList@VD.c)
 *     ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x1C0002860 (-SetAggregator@-$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0007A00 (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0009D14 (--0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C000A508 (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C000A734 (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C000C558 (--0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C000C778 (--0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C00213E0 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E0178 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E01DC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1C00F481C (-AddSource@DMMVIDPNSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCE@@@@@Z.c)
 */

DMMVIDPN *__fastcall DMMVIDPN::DMMVIDPN(DMMVIDPN *this, struct VIDPN_MGR *const a2)
{
  char *v2; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DMMVIDPNSOURCESET *const *v9; // r15
  struct DMMVIDPNTARGETSET *const *v10; // r12
  DMMVIDPNSOURCESET *v11; // rax
  DMMVIDPNSOURCESET *v12; // rax
  struct DMMVIDPNSOURCESET *v13; // rcx
  DMMVIDPNTARGETSET *v14; // rax
  DMMVIDPNTARGETSET *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rdi
  struct DMMVIDEOPRESENTSOURCE *v21; // rdi
  DMMVIDPNSOURCE *PoolWithTag; // rax
  __int64 v23; // rcx
  DMMVIDPNSOURCE *v24; // rax
  DMMVIDPNSOURCE *v25; // r14
  struct DMMVIDPNSOURCESET *v26; // rcx
  __int64 v27; // rcx
  int v28; // r14d
  __int64 v29; // rcx
  __int64 v30; // rcx
  struct DMMVIDEOPRESENTTARGET *v31; // r14
  DMMVIDPNTARGET *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r9
  DMMVIDPNTARGET *v35; // rdi
  struct DMMVIDPNTARGETSET *v36; // rcx
  struct DMMVIDPNTARGETSET *v37; // rbp
  __int64 v38; // rdx
  __int64 v39; // rax
  DMMVIDPNTARGET *v40; // rdx
  struct DMMVIDPNTARGETSET *v41; // rdx
  struct DMMVIDPNTARGETSET *v42; // rax
  DMMVIDPNTARGET *v43; // rax
  __int64 **v44; // rax
  __int64 *v45; // rdi
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  int v66; // edi
  __int64 v67; // rax
  __int64 v68; // rax
  int v69; // esi
  _QWORD *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  _BYTE v74[88]; // [rsp+40h] [rbp-58h] BYREF
  DMMVIDPNTARGET *v75; // [rsp+A0h] [rbp+8h] BYREF
  DMMVIDPNTARGET *v76; // [rsp+A8h] [rbp+10h] BYREF
  DMMVIDPNSOURCE *v77; // [rsp+B0h] [rbp+18h] BYREF

  v2 = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 8) = 1;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 16) = 1833172997;
  *((_DWORD *)this + 20) = 0;
  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPN::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 5) = &DMMVIDPN::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 7) = &DMMVIDPN::`vftable'{for `SignedWithClassSignature<DMMVIDPN>'};
  *((_QWORD *)this + 9) = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  DMMVIDPNTOPOLOGY::DMMVIDPNTOPOLOGY((DMMVIDPN *)((char *)this + 96));
  v9 = (struct DMMVIDPNSOURCESET *const *)((char *)this + 304);
  *((_QWORD *)this + 38) = 0LL;
  v10 = (struct DMMVIDPNTARGETSET *const *)((char *)this + 312);
  *((_QWORD *)this + 39) = 0LL;
  if ( !a2 )
  {
    v53 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    WdLogEvent5_WdAssertion(v53);
  }
  *((_DWORD *)this + 22) = 1;
  AggregatedBy<VIDPN_MGR>::SetAggregator((__int64)this + 40, (__int64)a2);
  if ( !(**((unsigned __int8 (__fastcall ***)(char *))this + 12))((char *)this + 96) )
  {
    v54 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v54 + 24) = this;
    WdLogEvent5_WdDmmEvent(v54);
    v55 = *((_DWORD *)this + 28);
    if ( v55 >= 0 )
      v55 = *((_DWORD *)this + 40);
    *((_DWORD *)this + 20) = v55;
    return this;
  }
  v11 = (DMMVIDPNSOURCESET *)operator new(0x60uLL, 0x4E506456u, PagedPool);
  if ( v11 )
    v12 = DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(v11, this);
  else
    v12 = 0LL;
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET>>::reset((__int64 *)this + 38, (__int64)v12);
  v13 = *v9;
  if ( !*v9 )
    goto LABEL_68;
  if ( !(**(unsigned __int8 (__fastcall ***)(struct DMMVIDPNSOURCESET *))v13)(v13) )
  {
    v57 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v57 + 24) = this;
    WdLogEvent5_WdDmmEvent(v57);
    *((_DWORD *)this + 20) = *((_DWORD *)*v9 + 4);
    return this;
  }
  v14 = (DMMVIDPNTARGETSET *)operator new(0x60uLL, 0x4E506456u, PagedPool);
  v15 = v14 ? DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(v14, this) : 0LL;
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET>>::reset((__int64 *)this + 39, (__int64)v15);
  v13 = *v10;
  if ( !*v10 )
  {
LABEL_68:
    v56 = WdLogNewEntry5_WdLowResource(v13);
    WdLogEvent5_WdLowResource(v56);
    *((_DWORD *)this + 20) = -1073741801;
    return this;
  }
  if ( !(**(unsigned __int8 (__fastcall ***)(struct DMMVIDPNSOURCESET *))v13)(v13) )
  {
    v58 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v58 + 24) = this;
    WdLogEvent5_WdDmmEvent(v58);
    *((_DWORD *)this + 20) = *((_DWORD *)*v10 + 4);
    return this;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a2 + 9) + 72LL));
  v19 = *((_QWORD *)a2 + 9);
  v20 = *(_QWORD *)(v19 + 24);
  if ( v20 != v19 + 24 )
  {
    v21 = (struct DMMVIDEOPRESENTSOURCE *)(v20 - 8);
    while ( v21 )
    {
      PoolWithTag = (DMMVIDPNSOURCE *)ExAllocatePoolWithTag(PagedPool, 0xB8uLL, 0x4E506456u);
      if ( !PoolWithTag || (v24 = DMMVIDPNSOURCE::DMMVIDPNSOURCE(PoolWithTag, *v9, v21), (v25 = v24) == 0LL) )
      {
        v62 = WdLogNewEntry5_WdLowResource(v23);
        WdLogEvent5_WdLowResource(v62);
        *((_DWORD *)this + 20) = -1073741801;
        goto LABEL_77;
      }
      if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v24 + 8))((__int64)v24 + 64) )
      {
        v61 = WdLogNewEntry5_WdDmmEvent();
        *(_QWORD *)(v61 + 24) = this;
        WdLogEvent5_WdDmmEvent(v61);
        *((_DWORD *)this + 20) = *((_DWORD *)v25 + 18);
        (**(void (__fastcall ***)(DMMVIDPNSOURCE *, __int64))v25)(v25, 1LL);
        goto LABEL_77;
      }
      v26 = *v9;
      v77 = v25;
      v28 = DMMVIDPNSOURCESET::AddSource(v26, &v77);
      if ( v28 < 0 )
      {
        v59 = WdLogNewEntry5_WdError(v27, v16);
        WdLogEvent5_WdError(v59);
        *((_DWORD *)this + 20) = v28;
        goto LABEL_77;
      }
      v29 = *((_QWORD *)v21 + 1);
      v21 = (struct DMMVIDEOPRESENTSOURCE *)(v29 - 8);
      if ( v29 == v19 + 24 )
        v21 = 0LL;
    }
  }
  if ( v19 )
    ReferenceCounted::Release((ReferenceCounted *)(v19 + 64), v16);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a2 + 10) + 72LL));
  v19 = *((_QWORD *)a2 + 10);
  v30 = *(_QWORD *)(v19 + 24);
  if ( v30 == v19 + 24 || (v31 = (struct DMMVIDEOPRESENTTARGET *)(v30 - 8), v30 == 8) )
  {
LABEL_53:
    if ( v19 )
      ReferenceCounted::Release((ReferenceCounted *)(v19 + 64), v16);
    v47 = *((unsigned __int8 *)this + 172);
    if ( ((unsigned __int16)((2 << v47) - 1) & *((_WORD *)this + 87)) != 0 )
    {
      v73 = WdLogNewEntry5_WdAssertion(v47, v16, v17, v18);
      WdLogEvent5_WdAssertion(v73);
    }
    if ( this != (DMMVIDPN *)-96LL )
      v2 = (char *)this + 152;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v74, v2, 0LL);
    DMMVIDPNTOPOLOGY::_SetContainingVidPn((DMMVIDPN *)((char *)this + 96), this);
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v74);
    *((_DWORD *)this + 22) = 2;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v49, v48, v50, v51) + 24) = this;
    return this;
  }
  while ( 1 )
  {
    v32 = (DMMVIDPNTARGET *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x4E506456u);
    if ( v32 )
      v35 = DMMVIDPNTARGET::DMMVIDPNTARGET(v32, *v10, v31, v34);
    else
      v35 = 0LL;
    v75 = v35;
    if ( !v35 )
    {
      v72 = WdLogNewEntry5_WdLowResource(v33);
      WdLogEvent5_WdLowResource(v72);
      *((_DWORD *)this + 20) = -1073741801;
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v75);
      goto LABEL_77;
    }
    if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v35 + 8))((__int64)v35 + 64) )
    {
      v71 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v71 + 24) = this;
      WdLogEvent5_WdDmmEvent(v71);
      *((_DWORD *)this + 20) = *((_DWORD *)v35 + 18);
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v75);
      goto LABEL_77;
    }
    v37 = *v10;
    v38 = *((_QWORD *)*v10 + 3);
    v39 = (__int64)*v10 + 24;
    v17 = *((unsigned int *)v35 + 6);
    v75 = 0LL;
    v76 = v35;
    if ( v38 == v39 )
    {
      v40 = 0LL;
    }
    else
    {
      v40 = (DMMVIDPNTARGET *)(v38 - 8);
      if ( !v40 )
        goto LABEL_35;
      while ( *((_DWORD *)v40 + 6) != (_DWORD)v17 )
      {
        v36 = (struct DMMVIDPNTARGETSET *)*((_QWORD *)v40 + 1);
        v40 = (struct DMMVIDPNTARGETSET *)((char *)v36 - 8);
        if ( v36 == (struct DMMVIDPNTARGETSET *)((char *)v37 + 24) )
          v40 = 0LL;
        if ( !v40 )
          goto LABEL_35;
      }
    }
    if ( v40 )
    {
      LOBYTE(v2) = v40 != v35;
      LODWORD(v2) = (_DWORD)v2 + 1;
      goto LABEL_82;
    }
LABEL_35:
    v41 = (struct DMMVIDPNTARGETSET *)*((_QWORD *)v37 + 3);
    if ( v41 != (struct DMMVIDPNTARGETSET *)((char *)v37 + 24) )
    {
      v40 = (struct DMMVIDPNTARGETSET *)((char *)v41 - 8);
      if ( v40 )
        break;
    }
LABEL_41:
    v42 = (struct DMMVIDPNTARGETSET *)*((_QWORD *)v37 + 3);
    v16 = (__int64)v37 + 24;
    if ( v42 == (struct DMMVIDPNTARGETSET *)((char *)v37 + 24) )
      goto LABEL_48;
    v43 = (struct DMMVIDPNTARGETSET *)((char *)v42 - 8);
    if ( !v43 )
      goto LABEL_48;
    do
    {
      if ( v43 == v35 )
        break;
      v36 = (struct DMMVIDPNTARGETSET *)*((_QWORD *)v43 + 1);
      v43 = (struct DMMVIDPNTARGETSET *)((char *)v36 - 8);
      if ( v36 == (struct DMMVIDPNTARGETSET *)v16 )
        v43 = 0LL;
    }
    while ( v43 );
    if ( v43 )
    {
      v68 = WdLogNewEntry5_WdAssertion(v36, v16, v17, v18);
      WdLogEvent5_WdAssertion(v68);
    }
    else
    {
LABEL_48:
      v44 = (__int64 **)*((_QWORD *)v37 + 4);
      v45 = (__int64 *)((char *)v35 + 8);
      if ( *v44 != (__int64 *)v16 )
        __fastfail(3u);
      *v45 = v16;
      v45[1] = (__int64)v44;
      *v44 = v45;
      *((_QWORD *)v37 + 4) = v45;
      ++*((_QWORD *)v37 + 5);
    }
    v46 = *((_QWORD *)v31 + 1);
    v31 = (struct DMMVIDEOPRESENTTARGET *)(v46 - 8);
    if ( v46 == v19 + 24 )
      v31 = 0LL;
    if ( !v31 )
      goto LABEL_53;
  }
  while ( v40 != v35 )
  {
    v36 = (struct DMMVIDPNTARGETSET *)*((_QWORD *)v40 + 1);
    v40 = (struct DMMVIDPNTARGETSET *)((char *)v36 - 8);
    if ( v36 == (struct DMMVIDPNTARGETSET *)((char *)v37 + 24) )
      v40 = 0LL;
    if ( !v40 )
      goto LABEL_41;
  }
  LODWORD(v2) = 1;
LABEL_82:
  v69 = (_DWORD)v2 - 1;
  if ( v69 )
  {
    v70 = (_QWORD *)WdLogNewEntry5_WdError(v36, v40);
    if ( v69 == 1 )
    {
      v70[3] = *((unsigned int *)v35 + 6);
      v70[4] = v35;
      v70[5] = v37;
      WdLogEvent5_WdError(v70);
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v76);
      v66 = -1071774926;
    }
    else
    {
      WdLogEvent5_WdError(v70);
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v76);
      v66 = -1073741823;
    }
  }
  else
  {
    v63 = WdLogNewEntry5_WdError(v36, v40);
    *(_QWORD *)(v63 + 24) = v35;
    *(_QWORD *)(v63 + 32) = v37;
    WdLogEvent5_WdError(v63);
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v76);
    v66 = -1071774952;
  }
  v67 = WdLogNewEntry5_WdError(v65, v64);
  WdLogEvent5_WdError(v67);
  *((_DWORD *)this + 20) = v66;
  auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v75);
LABEL_77:
  if ( v19 )
    ReferenceCounted::Release((ReferenceCounted *)(v19 + 64), v60);
  return this;
}
