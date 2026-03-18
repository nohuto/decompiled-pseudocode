/*
 * XREFs of ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00BC600
 * Callers:
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA1BC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 * Callees:
 *     ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C00036F0 (--0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 *     ??0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C0003D70 (--0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C00042C8 (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C00043FC (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0004D30 (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C000707C (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@@Z @ 0x1C0009AD4 (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDeleter@.c)
 *     ??0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C0009B50 (--0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x1C000B2E4 (-SetAggregator@-$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??1?$auto_ptr@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0024EF0 (--1-$auto_ptr@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1C00BB41C (-AddTarget@DMMVIDPNTARGETSET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGET@@@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00BB648 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00BB6AC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1C00D440C (-AddSource@DMMVIDPNSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCE@@@@@Z.c)
 */

DMMVIDPN *__fastcall DMMVIDPN::DMMVIDPN(DMMVIDPN *this, struct VIDPN_MGR *const a2)
{
  struct DMMVIDEOPRESENTSOURCE *v2; // r14
  char *v3; // rbx
  DMMVIDPNTOPOLOGY *v4; // r15
  struct VIDPN_MGR *v6; // rsi
  __int64 v7; // rcx
  struct DMMVIDPNSOURCESET *const *v8; // r12
  struct DMMVIDPNTARGETSET *const *v9; // r13
  __int64 v10; // rcx
  DMMVIDPNSOURCESET *v11; // rax
  DMMVIDPNSOURCESET *v12; // rax
  struct DMMVIDPNTARGETSET *v13; // rcx
  __int64 v14; // rcx
  DMMVIDPNTARGETSET *v15; // rax
  DMMVIDPNTARGETSET *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rcx
  DMMVIDPNSOURCE *v20; // rsi
  DMMVIDPNSOURCE *v21; // rax
  __int64 v22; // rcx
  struct DMMVIDPNSOURCESET *v23; // rcx
  __int64 v24; // rcx
  int v25; // esi
  __int64 v26; // rax
  DMMVIDPNTARGET *v27; // rsi
  struct DMMVIDEOPRESENTTARGET *v28; // r14
  __int64 v29; // rcx
  DMMVIDPNTARGET *v30; // rax
  __int64 v31; // rcx
  struct DMMVIDPNTARGETSET *v32; // rcx
  __int64 v33; // rcx
  int v34; // esi
  __int64 v35; // rax
  unsigned __int8 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rax
  struct DMMVIDPNSOURCESET *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // [rsp+20h] [rbp-48h]
  DMMVIDPNTARGET *v58; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v59[32]; // [rsp+48h] [rbp-20h] BYREF
  DMMVIDPNSOURCE *v60; // [rsp+B0h] [rbp+48h] BYREF
  struct VIDPN_MGR *v61; // [rsp+B8h] [rbp+50h]
  DMMVIDPNTARGET *v62; // [rsp+C0h] [rbp+58h] BYREF
  DMMVIDPNSOURCE *v63; // [rsp+C8h] [rbp+60h] BYREF

  v61 = a2;
  v2 = 0LL;
  v3 = (char *)this + 40;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  v4 = (DMMVIDPN *)((char *)this + 96);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = &ReferenceCounted::`vftable';
  v6 = a2;
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
  v8 = (struct DMMVIDPNSOURCESET *const *)((char *)this + 304);
  *((_QWORD *)this + 38) = 0LL;
  v9 = (struct DMMVIDPNTARGETSET *const *)((char *)this + 312);
  *((_QWORD *)this + 39) = 0LL;
  if ( !v6 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v43);
  }
  *((_DWORD *)this + 22) = 1;
  AggregatedBy<VIDPN_MGR>::SetAggregator((__int64)v3, (__int64)v6);
  if ( !(**(unsigned __int8 (__fastcall ***)(DMMVIDPNTOPOLOGY *))v4)(v4) )
  {
    v44 = WdLogNewEntry5_WdDmmEvent(v10);
    *(_QWORD *)(v44 + 24) = this;
    WdLogEvent5_WdDmmEvent(v44);
    v45 = *((_DWORD *)v4 + 4);
    if ( v45 >= 0 )
      v45 = *((_DWORD *)v4 + 16);
    *((_DWORD *)this + 20) = v45;
    return this;
  }
  v11 = (DMMVIDPNSOURCESET *)operator new[](0x60uLL, 0x4E506456u, PagedPool);
  if ( v11 )
    v12 = DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(v11, this);
  else
    v12 = 0LL;
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>>::reset(
    (__int64 *)this + 38,
    (__int64)v12);
  v13 = *v8;
  if ( !*v8 )
    goto LABEL_44;
  if ( !(**(unsigned __int8 (__fastcall ***)(struct DMMVIDPNTARGETSET *))v13)(v13) )
  {
    v47 = WdLogNewEntry5_WdDmmEvent(v14);
    *(_QWORD *)(v47 + 24) = this;
    WdLogEvent5_WdDmmEvent(v47);
    v48 = *v8;
LABEL_47:
    *((_DWORD *)this + 20) = *((_DWORD *)v48 + 4);
    return this;
  }
  v15 = (DMMVIDPNTARGETSET *)operator new[](0x60uLL, 0x4E506456u, PagedPool);
  v16 = v15 ? DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(v15, this) : 0LL;
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>>::reset(
    (__int64 *)this + 39,
    (__int64)v16);
  v13 = *v9;
  if ( !*v9 )
  {
LABEL_44:
    v46 = WdLogNewEntry5_WdLowResource(v13);
    WdLogEvent5_WdLowResource(v46);
    *((_DWORD *)this + 20) = -1073741801;
    return this;
  }
  if ( !(**(unsigned __int8 (__fastcall ***)(struct DMMVIDPNTARGETSET *))v13)(v13) )
  {
    v49 = WdLogNewEntry5_WdDmmEvent(v17);
    *(_QWORD *)(v49 + 24) = this;
    WdLogEvent5_WdDmmEvent(v49);
    v48 = *v9;
    goto LABEL_47;
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v6 + 9) + 72LL), 1u);
  v18 = *((_QWORD *)v6 + 9);
  v19 = *(_QWORD *)(v18 + 24);
  if ( v19 != v18 + 24 )
    v2 = (struct DMMVIDEOPRESENTSOURCE *)(v19 - 8);
  if ( v2 )
  {
    v20 = 0LL;
    while ( 1 )
    {
      v21 = (DMMVIDPNSOURCE *)operator new[](0xB8uLL, 0x4E506456u, PagedPool);
      if ( v21 )
        v20 = DMMVIDPNSOURCE::DMMVIDPNSOURCE(v21, *v8, v2);
      v60 = v20;
      if ( !v20 )
        break;
      if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v20 + 8))((__int64)v20 + 64) )
      {
        v51 = WdLogNewEntry5_WdDmmEvent(0LL);
        *(_QWORD *)(v51 + 24) = this;
        WdLogEvent5_WdDmmEvent(v51);
        *((_DWORD *)this + 20) = *((_DWORD *)v20 + 18);
        goto LABEL_52;
      }
      v60 = 0LL;
      v23 = *v8;
      v63 = v20;
      v25 = DMMVIDPNSOURCESET::AddSource(v23, &v63);
      if ( v25 < 0 )
      {
        v50 = WdLogNewEntry5_WdError(v24);
        WdLogEvent5_WdError(v50);
        *((_DWORD *)this + 20) = v25;
        goto LABEL_52;
      }
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v60);
      v26 = *((_QWORD *)v2 + 1);
      v20 = 0LL;
      v2 = (struct DMMVIDEOPRESENTSOURCE *)(v26 - 8);
      if ( v26 == v18 + 24 )
        v2 = 0LL;
      if ( !v2 )
      {
        v6 = v61;
        goto LABEL_25;
      }
    }
    v52 = WdLogNewEntry5_WdLowResource(v22);
    WdLogEvent5_WdLowResource(v52);
    *((_DWORD *)this + 20) = -1073741801;
LABEL_52:
    auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v60);
LABEL_55:
    ReferenceCounted::Release((ReferenceCounted *)(v18 + 64));
  }
  else
  {
LABEL_25:
    ReferenceCounted::Release((ReferenceCounted *)(v18 + 64));
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v6 + 10) + 72LL), 1u);
    v18 = *((_QWORD *)v6 + 10);
    v27 = 0LL;
    v28 = 0LL;
    v29 = *(_QWORD *)(v18 + 24);
    if ( v29 != v18 + 24 )
      v28 = (struct DMMVIDEOPRESENTTARGET *)(v29 - 8);
    while ( v28 )
    {
      v30 = (DMMVIDPNTARGET *)operator new[](0x80uLL, 0x4E506456u, PagedPool);
      if ( v30 )
        v27 = DMMVIDPNTARGET::DMMVIDPNTARGET(v30, *v9, v28);
      v62 = v27;
      if ( !v27 )
      {
        v53 = WdLogNewEntry5_WdLowResource(v31);
        WdLogEvent5_WdLowResource(v53);
        *((_DWORD *)this + 20) = -1073741801;
LABEL_54:
        auto_ptr<VIDPN_MGR>::~auto_ptr<VIDPN_MGR>((__int64 (__fastcall ****)(_QWORD, __int64))&v62);
        goto LABEL_55;
      }
      if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v27 + 8))((__int64)v27 + 64) )
      {
        v55 = WdLogNewEntry5_WdDmmEvent(0LL);
        *(_QWORD *)(v55 + 24) = this;
        WdLogEvent5_WdDmmEvent(v55);
        *((_DWORD *)this + 20) = *((_DWORD *)v27 + 18);
        goto LABEL_54;
      }
      v62 = 0LL;
      v32 = *v9;
      v58 = v27;
      v34 = DMMVIDPNTARGETSET::AddTarget(v32, (__int64 *)&v58);
      if ( v34 < 0 )
      {
        v54 = WdLogNewEntry5_WdError(v33);
        WdLogEvent5_WdError(v54);
        *((_DWORD *)this + 20) = v34;
        goto LABEL_54;
      }
      v35 = *((_QWORD *)v28 + 1);
      v27 = 0LL;
      v28 = (struct DMMVIDEOPRESENTTARGET *)(v35 - 8);
      if ( v35 == v18 + 24 )
        v28 = 0LL;
    }
    ReferenceCounted::Release((ReferenceCounted *)(v18 + 64));
    LOBYTE(v37) = *((_BYTE *)this + 172);
    if ( ((unsigned __int16)((2 << v37) - 1) & *((_WORD *)this + 87)) != 0 )
    {
      v56 = WdLogNewEntry5_WdAssertion(v37);
      WdLogEvent5_WdAssertion(v56);
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v59,
      ((unsigned __int64)v4 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)v4 >> 64),
      0,
      v36,
      v57,
      1uLL);
    DMMVIDPNTOPOLOGY::_SetContainingVidPn(v4, this);
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v59);
    *((_DWORD *)this + 22) = 2;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v39, v38, v40, v41) + 24) = this;
  }
  return this;
}
