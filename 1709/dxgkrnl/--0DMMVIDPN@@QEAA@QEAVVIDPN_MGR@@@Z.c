/*
 * XREFs of ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00A4C10
 * Callers:
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8950 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 * Callees:
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C000450C (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C00055E8 (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C0005814 (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@@Z @ 0x1C000A41C (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDeleter@.c)
 *     ??0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C000A498 (--0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C000A634 (--0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C000A97C (--0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C000B628 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x1C000EA6C (-SetAggregator@-$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C001E180 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A56CC (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5730 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1C00D6C20 (-AddSource@DMMVIDPNSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCE@@@@@Z.c)
 */

DMMVIDPN *__fastcall DMMVIDPN::DMMVIDPN(DMMVIDPN *this, struct VIDPN_MGR *const a2)
{
  char *v2; // rsi
  __int64 v5; // rcx
  struct DMMVIDPNSOURCESET *const *v6; // r15
  struct DMMVIDPNTARGETSET *const *v7; // r12
  __int64 v8; // rcx
  DMMVIDPNSOURCESET *v9; // rax
  DMMVIDPNSOURCESET *v10; // rax
  struct DMMVIDPNTARGETSET *v11; // rcx
  __int64 v12; // rcx
  DMMVIDPNTARGETSET *v13; // rax
  DMMVIDPNTARGETSET *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdi
  struct DMMVIDEOPRESENTSOURCE *v18; // rdi
  DMMVIDPNSOURCE *v19; // rax
  __int64 v20; // rcx
  DMMVIDPNSOURCE *v21; // rbp
  __int64 v22; // rcx
  struct DMMVIDPNSOURCESET *v23; // rcx
  __int64 v24; // rcx
  int v25; // ebp
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rcx
  struct DMMVIDEOPRESENTTARGET *v29; // r14
  DMMVIDPNTARGET *PoolWithTag; // rax
  __int64 v31; // rcx
  DMMVIDPNTARGET *v32; // rdi
  struct DMMVIDPNTARGETSET *v33; // rcx
  struct DMMVIDPNTARGETSET *v34; // rbp
  struct DMMVIDPNTARGETSET *v35; // r9
  __int64 v36; // rax
  int v37; // r8d
  DMMVIDPNTARGET *v38; // rdx
  __int64 v39; // rdx
  struct DMMVIDPNTARGETSET *v40; // rdx
  DMMVIDPNTARGET *v41; // rax
  char **v42; // rax
  char *v43; // rdi
  __int64 v44; // rcx
  void (__fastcall ***v45)(_QWORD, __int64); // rcx
  int v46; // ebx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // esi
  _QWORD *v62; // rax
  __int64 v63; // rcx
  int v64; // edi
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  void (__fastcall ***v69)(_QWORD, __int64); // rcx
  int v70; // ebx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  _BYTE v74[40]; // [rsp+40h] [rbp-68h] BYREF
  DMMVIDPNSOURCE *v75; // [rsp+B0h] [rbp+8h] BYREF
  DMMVIDPNTARGET *v76; // [rsp+B8h] [rbp+10h] BYREF
  DMMVIDPNTARGET *v77; // [rsp+C0h] [rbp+18h] BYREF
  DMMVIDPNSOURCE *v78; // [rsp+C8h] [rbp+20h] BYREF

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
  v6 = (struct DMMVIDPNSOURCESET *const *)((char *)this + 304);
  *((_QWORD *)this + 38) = 0LL;
  v7 = (struct DMMVIDPNTARGETSET *const *)((char *)this + 312);
  *((_QWORD *)this + 39) = 0LL;
  if ( !a2 )
  {
    v51 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v51);
  }
  *((_DWORD *)this + 22) = 1;
  AggregatedBy<VIDPN_MGR>::SetAggregator((__int64)this + 40, (__int64)a2);
  if ( (**((unsigned __int8 (__fastcall ***)(char *))this + 12))((char *)this + 96) )
  {
    v9 = (DMMVIDPNSOURCESET *)operator new(0x60uLL, 0x4E506456u, PagedPool);
    if ( v9 )
      v10 = DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(v9, this);
    else
      v10 = 0LL;
    auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>>::reset(
      (__int64 *)this + 38,
      (__int64)v10);
    v11 = *v6;
    if ( !*v6 )
      goto LABEL_68;
    if ( !(**(unsigned __int8 (__fastcall ***)(struct DMMVIDPNTARGETSET *))v11)(v11) )
    {
      v55 = WdLogNewEntry5_WdDmmEvent(v12);
      *(_QWORD *)(v55 + 24) = this;
      WdLogEvent5_WdDmmEvent(v55);
      *((_DWORD *)this + 20) = *((_DWORD *)*v6 + 4);
      return this;
    }
    v13 = (DMMVIDPNTARGETSET *)operator new(0x60uLL, 0x4E506456u, PagedPool);
    v14 = v13 ? DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(v13, this) : 0LL;
    auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>>::reset(
      (__int64 *)this + 39,
      (__int64)v14);
    v11 = *v7;
    if ( *v7 )
    {
      if ( (**(unsigned __int8 (__fastcall ***)(struct DMMVIDPNTARGETSET *))v11)(v11) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a2 + 9) + 72LL));
        v16 = *((_QWORD *)a2 + 9);
        v17 = *(_QWORD *)(v16 + 24);
        if ( v17 == v16 + 24 || (v18 = (struct DMMVIDEOPRESENTSOURCE *)(v17 - 8)) == 0LL )
        {
LABEL_22:
          if ( v16 )
            ReferenceCounted::Release((ReferenceCounted *)(v16 + 64));
          _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a2 + 10) + 72LL));
          v27 = *((_QWORD *)a2 + 10);
          v28 = *(_QWORD *)(v27 + 24);
          if ( v28 == v27 + 24 || (v29 = (struct DMMVIDEOPRESENTTARGET *)(v28 - 8), v28 == 8) )
          {
LABEL_54:
            if ( v27 )
            {
              v45 = (void (__fastcall ***)(_QWORD, __int64))(v27 + 64);
              v46 = _InterlockedDecrement((volatile signed __int32 *)(v27 + 72));
              if ( v46 )
              {
                if ( v46 < 0 )
                {
                  v72 = WdLogNewEntry5_WdError(v45);
                  *(_QWORD *)(v72 + 24) = v46;
                  WdLogEvent5_WdError(v72);
                }
              }
              else if ( v45 )
              {
                (**v45)(v45, 1LL);
              }
            }
            v47 = *((unsigned __int8 *)this + 172);
            if ( ((unsigned __int16)((2 << v47) - 1) & *((_WORD *)this + 87)) != 0 )
            {
              v73 = WdLogNewEntry5_WdAssertion(v47);
              WdLogEvent5_WdAssertion(v73);
            }
            if ( this != (DMMVIDPN *)-96LL )
              v2 = (char *)this + 152;
            ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v74, v2, 0LL);
            DMMVIDPNTOPOLOGY::_SetContainingVidPn((DMMVIDPN *)((char *)this + 96), this);
            ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v74);
            *((_DWORD *)this + 22) = 2;
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v49, v48) + 24) = this;
          }
          else
          {
            while ( 1 )
            {
              PoolWithTag = (DMMVIDPNTARGET *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x4E506456u);
              if ( PoolWithTag )
                v32 = DMMVIDPNTARGET::DMMVIDPNTARGET(PoolWithTag, *v7, v29);
              else
                v32 = 0LL;
              v76 = v32;
              if ( !v32 )
              {
                v68 = WdLogNewEntry5_WdLowResource(v31);
                WdLogEvent5_WdLowResource(v68);
                *((_DWORD *)this + 20) = -1073741801;
                goto LABEL_92;
              }
              if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v32 + 8))((__int64)v32 + 64) )
              {
                v67 = WdLogNewEntry5_WdDmmEvent(v33);
                *(_QWORD *)(v67 + 24) = this;
                WdLogEvent5_WdDmmEvent(v67);
                *((_DWORD *)this + 20) = *((_DWORD *)v32 + 18);
                goto LABEL_92;
              }
              v34 = *v7;
              v35 = (struct DMMVIDPNTARGETSET *)*((_QWORD *)*v7 + 3);
              v36 = (__int64)*v7 + 24;
              v37 = *((_DWORD *)v32 + 6);
              v76 = 0LL;
              v77 = v32;
              if ( v35 != (struct DMMVIDPNTARGETSET *)v36 )
              {
                v38 = (struct DMMVIDPNTARGETSET *)((char *)v35 - 8);
                if ( v35 != (struct DMMVIDPNTARGETSET *)8 )
                  break;
              }
LABEL_36:
              if ( v35 != (struct DMMVIDPNTARGETSET *)((char *)v34 + 24) )
              {
                v39 = *((_QWORD *)v34 + 3) - 8LL;
                if ( *((_QWORD *)v34 + 3) != 8LL )
                {
                  while ( (DMMVIDPNTARGET *)v39 != v32 )
                  {
                    v33 = *(struct DMMVIDPNTARGETSET **)(v39 + 8);
                    v39 = (__int64)v33 - 8;
                    if ( v33 == (struct DMMVIDPNTARGETSET *)((char *)v34 + 24) )
                      v39 = 0LL;
                    if ( !v39 )
                      goto LABEL_42;
                  }
                  if ( v39 )
                  {
                    LODWORD(v2) = 1;
                    goto LABEL_83;
                  }
                }
              }
LABEL_42:
              v40 = (struct DMMVIDPNTARGETSET *)((char *)v34 + 24);
              if ( v35 == (struct DMMVIDPNTARGETSET *)((char *)v34 + 24) )
                goto LABEL_49;
              v41 = (struct DMMVIDPNTARGETSET *)((char *)v35 - 8);
              if ( v35 == (struct DMMVIDPNTARGETSET *)8 )
                goto LABEL_49;
              do
              {
                if ( v41 == v32 )
                  break;
                v33 = (struct DMMVIDPNTARGETSET *)*((_QWORD *)v41 + 1);
                v41 = (struct DMMVIDPNTARGETSET *)((char *)v33 - 8);
                if ( v33 == v40 )
                  v41 = 0LL;
              }
              while ( v41 );
              if ( !v41 )
              {
LABEL_49:
                v42 = (char **)*((_QWORD *)v34 + 4);
                v43 = (char *)v32 + 8;
                if ( *v42 != (char *)v40 )
                  __fastfail(3u);
                *(_QWORD *)v43 = v40;
                *((_QWORD *)v43 + 1) = v42;
                *v42 = v43;
                *((_QWORD *)v34 + 4) = v43;
                ++*((_QWORD *)v34 + 5);
              }
              else
              {
                v60 = WdLogNewEntry5_WdAssertion(v33);
                *(_QWORD *)(v60 + 24) = 108LL;
                WdLogEvent5_WdAssertion(v60);
              }
              v44 = *((_QWORD *)v29 + 1);
              v29 = (struct DMMVIDEOPRESENTTARGET *)(v44 - 8);
              if ( v44 == v27 + 24 )
                v29 = 0LL;
              if ( !v29 )
                goto LABEL_54;
            }
            while ( *((_DWORD *)v38 + 6) != v37 )
            {
              v33 = (struct DMMVIDPNTARGETSET *)*((_QWORD *)v38 + 1);
              v38 = (struct DMMVIDPNTARGETSET *)((char *)v33 - 8);
              if ( v33 == (struct DMMVIDPNTARGETSET *)((char *)v34 + 24) )
                v38 = 0LL;
              if ( !v38 )
                goto LABEL_36;
            }
            LOBYTE(v2) = v38 != v32;
            LODWORD(v2) = (_DWORD)v2 + 1;
LABEL_83:
            v61 = (_DWORD)v2 - 1;
            if ( v61 )
            {
              v62 = (_QWORD *)WdLogNewEntry5_WdError(v33);
              if ( v61 == 1 )
              {
                v62[3] = *((unsigned int *)v32 + 6);
                v62[4] = v32;
                v62[5] = v34;
                WdLogEvent5_WdError(v62);
                auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v77);
                v64 = -1071774926;
              }
              else
              {
                WdLogEvent5_WdError(v62);
                auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v77);
                v64 = -1073741823;
              }
            }
            else
            {
              v65 = WdLogNewEntry5_WdError(v33);
              *(_QWORD *)(v65 + 24) = v32;
              *(_QWORD *)(v65 + 32) = v34;
              WdLogEvent5_WdError(v65);
              auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v77);
              v64 = -1071774952;
            }
            v66 = WdLogNewEntry5_WdError(v63);
            WdLogEvent5_WdError(v66);
            *((_DWORD *)this + 20) = v64;
LABEL_92:
            auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v76);
            if ( v27 )
            {
              v69 = (void (__fastcall ***)(_QWORD, __int64))(v27 + 64);
              v70 = _InterlockedDecrement((volatile signed __int32 *)(v27 + 72));
              if ( v70 )
              {
                if ( v70 < 0 )
                {
                  v71 = WdLogNewEntry5_WdError(v69);
                  *(_QWORD *)(v71 + 24) = v70;
                  WdLogEvent5_WdError(v71);
                }
              }
              else if ( v69 )
              {
                (**v69)(v69, 1LL);
              }
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v19 = (DMMVIDPNSOURCE *)ExAllocatePoolWithTag(PagedPool, 0xB8uLL, 0x4E506456u);
            v21 = v19 ? DMMVIDPNSOURCE::DMMVIDPNSOURCE(v19, *v6, v18) : 0LL;
            v75 = v21;
            if ( !v21 )
              break;
            if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v21 + 8))((__int64)v21 + 64) )
            {
              v58 = WdLogNewEntry5_WdDmmEvent(v22);
              *(_QWORD *)(v58 + 24) = this;
              WdLogEvent5_WdDmmEvent(v58);
              *((_DWORD *)this + 20) = *((_DWORD *)v21 + 18);
              goto LABEL_76;
            }
            v23 = *v6;
            v75 = 0LL;
            v78 = v21;
            v25 = DMMVIDPNSOURCESET::AddSource(v23, &v78);
            if ( v25 < 0 )
            {
              v57 = WdLogNewEntry5_WdError(v24);
              WdLogEvent5_WdError(v57);
              *((_DWORD *)this + 20) = v25;
              goto LABEL_76;
            }
            auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v75);
            v26 = *((_QWORD *)v18 + 1);
            v18 = (struct DMMVIDEOPRESENTSOURCE *)(v26 - 8);
            if ( v26 == v16 + 24 )
              v18 = 0LL;
            if ( !v18 )
              goto LABEL_22;
          }
          v59 = WdLogNewEntry5_WdLowResource(v20);
          WdLogEvent5_WdLowResource(v59);
          *((_DWORD *)this + 20) = -1073741801;
LABEL_76:
          auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v75);
          if ( v16 )
            ReferenceCounted::Release((ReferenceCounted *)(v16 + 64));
        }
      }
      else
      {
        v56 = WdLogNewEntry5_WdDmmEvent(v15);
        *(_QWORD *)(v56 + 24) = this;
        WdLogEvent5_WdDmmEvent(v56);
        *((_DWORD *)this + 20) = *((_DWORD *)*v7 + 4);
      }
    }
    else
    {
LABEL_68:
      v54 = WdLogNewEntry5_WdLowResource(v11);
      WdLogEvent5_WdLowResource(v54);
      *((_DWORD *)this + 20) = -1073741801;
    }
  }
  else
  {
    v52 = WdLogNewEntry5_WdDmmEvent(v8);
    *(_QWORD *)(v52 + 24) = this;
    WdLogEvent5_WdDmmEvent(v52);
    v53 = *((_DWORD *)this + 28);
    if ( v53 >= 0 )
      v53 = *((_DWORD *)this + 40);
    *((_DWORD *)this + 20) = v53;
  }
  return this;
}
