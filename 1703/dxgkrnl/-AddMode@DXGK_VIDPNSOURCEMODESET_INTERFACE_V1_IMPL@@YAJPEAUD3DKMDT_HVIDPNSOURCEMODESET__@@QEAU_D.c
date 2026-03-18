/*
 * XREFs of ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0091900
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C00074CC (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C0007780 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C00213E0 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ?IsPathFromSourceConnectedToIndirectDisplay@DMMVIDPN@@QEBAEI@Z @ 0x1C01DCEDC (-IsPathFromSourceConnectedToIndirectDisplay@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AddMode(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *a2,
        struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *PoolWithTag; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ebp
  __int64 v17; // rsi
  __int64 v18; // rcx
  void (__fastcall ***v19)(_QWORD, __int64); // rbx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v20; // rcx
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v21; // rdi
  int v22; // eax
  int v23; // eax
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v27; // rdi
  char *v28; // rdi
  int v29; // eax
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v30; // rax
  char *v31; // rdx
  char *v32; // rax
  char **v33; // rcx
  char *v34; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rbx
  unsigned int v55; // edi
  __int64 v56; // rax
  DMMVIDPN *Container; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  int v70; // ecx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  _QWORD *v78; // rax
  __int64 v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rax
  __int64 (__fastcall ***v97)(_QWORD, __int64); // [rsp+40h] [rbp+8h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7006);
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( !a2 )
  {
    v40 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v40 + 24) = 0LL;
    *(_QWORD *)(v40 + 32) = this;
    WdLogEvent5_WdError(v40);
    v16 = -1071774960;
    goto LABEL_51;
  }
  if ( !this || *((_DWORD *)this + 32) != 1833173004 )
  {
    v96 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v96 + 24) = this;
    WdLogEvent5_WdError(v96);
    v16 = -1071774968;
    goto LABEL_51;
  }
  if ( (unsigned int)(*((_DWORD *)a2 + 1) - 3) <= 1 )
  {
    v41 = *((_QWORD *)this + 14);
    if ( !*(_QWORD *)(v41 + 40) )
    {
      v42 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      WdLogEvent5_WdAssertion(v42);
    }
    v45 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v41 + 40) + 64LL) + 48);
    if ( !*(_QWORD *)(v45 + 8) )
    {
      v48 = WdLogNewEntry5_WdAssertion(v44, v43, v46, v47);
      WdLogEvent5_WdAssertion(v48);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v45 + 8) + 16LL)) < 1200
      && *(_BYTE *)(v50 + 2204) )
    {
      v53 = WdLogNewEntry5_WdAssertion(v50, v49, v51, v52);
      WdLogEvent5_WdAssertion(v53);
      v16 = -1071774960;
      goto LABEL_51;
    }
    v54 = *((_QWORD *)this + 14);
    v55 = *(_DWORD *)(v54 + 24);
    if ( !*(_QWORD *)(v54 + 40) )
    {
      v56 = WdLogNewEntry5_WdAssertion(v50, v49, v51, v52);
      WdLogEvent5_WdAssertion(v56);
    }
    Container = (DMMVIDPN *)ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v54 + 40) + 64LL);
    if ( DMMVIDPN::IsPathFromSourceConnectedToIndirectDisplay(Container, v55) )
    {
      v60 = WdLogNewEntry5_WdError(v59, v58);
      WdLogEvent5_WdError(v60);
      v16 = -1071774960;
      goto LABEL_51;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x4E506456u);
  v16 = 0;
  v17 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    v18 = *(_DWORD *)a2;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *PoolWithTag = &SetElement::`vftable';
    *((_DWORD *)PoolWithTag + 6) = v18;
    if ( (_DWORD)v18 == -1 )
    {
      v61 = WdLogNewEntry5_WdAssertion(v18, v12, v14, v15);
      WdLogEvent5_WdAssertion(v61);
    }
    *(_QWORD *)(v17 + 40) = 0LL;
    *(_DWORD *)(v17 + 56) = 1833173006;
    *(_QWORD *)v17 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
    *(_DWORD *)(v17 + 72) = 0;
    *(_QWORD *)(v17 + 32) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
    *(_QWORD *)(v17 + 48) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
    *(_QWORD *)(v17 + 64) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
    memset((void *)(v17 + 76), 0, 0x20uLL);
  }
  else
  {
    v17 = 0LL;
  }
  v19 = (void (__fastcall ***)(_QWORD, __int64))v17;
  if ( !v17 )
  {
    v62 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v62 + 24) = this;
    WdLogEvent5_WdLowResource(v62);
    v16 = -1073741801;
    goto LABEL_112;
  }
  v20 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((unsigned int *)a2 + 1);
  if ( (_DWORD)v20 == 1 )
  {
LABEL_12:
    v21 = a2 + 2;
    if ( *((_DWORD *)a2 + 2) < 0x64u || *((_DWORD *)a2 + 3) < 0x64u )
    {
      v90 = (_QWORD *)WdLogNewEntry5_WdError(v20, v12);
      v90[3] = *(_DWORD *)v21;
      v90[4] = *((unsigned int *)a2 + 3);
      v90[5] = v21;
      WdLogEvent5_WdError(v90);
      v16 = -1071774918;
    }
    else if ( *((_DWORD *)a2 + 4) < 0x64u || *((_DWORD *)a2 + 5) < 0x64u )
    {
      v89 = (_QWORD *)WdLogNewEntry5_WdError(v20, v12);
      v89[3] = *((unsigned int *)a2 + 4);
      v89[4] = *((unsigned int *)a2 + 5);
      v89[5] = v21;
      WdLogEvent5_WdError(v89);
      v16 = -1071774917;
    }
    else if ( *((_DWORD *)a2 + 6) )
    {
      if ( *((_DWORD *)a2 + 7) )
      {
        v22 = *((_DWORD *)a2 + 8);
        if ( v22 < 6 && v22 )
        {
          v23 = *((_DWORD *)a2 + 9);
          if ( v23 < 4 && v23 )
          {
            *(_DWORD *)(v17 + 72) = (_DWORD)v20;
            *(_OWORD *)(v17 + 76) = *(_OWORD *)v21;
            *(_OWORD *)(v17 + 92) = *(_OWORD *)(a2 + 6);
            goto LABEL_23;
          }
          v87 = WdLogNewEntry5_WdError(v20, v12);
          *(_QWORD *)(v87 + 24) = *((int *)a2 + 9);
          *(_QWORD *)(v87 + 32) = v21;
          WdLogEvent5_WdError(v87);
          v16 = -1071774913;
        }
        else
        {
          v88 = WdLogNewEntry5_WdError(v20, v12);
          *(_QWORD *)(v88 + 24) = *((int *)a2 + 8);
          *(_QWORD *)(v88 + 32) = v21;
          WdLogEvent5_WdError(v88);
          v16 = -1071774914;
        }
      }
      else
      {
        v69 = WdLogNewEntry5_WdError(v20, v12);
        *(_QWORD *)(v69 + 24) = *((int *)a2 + 7);
        *(_QWORD *)(v69 + 32) = v21;
        WdLogEvent5_WdError(v69);
        v16 = -1071774915;
      }
    }
    else
    {
      v64 = WdLogNewEntry5_WdError(v20, v12);
      *(_QWORD *)(v64 + 24) = *((unsigned int *)a2 + 6);
      *(_QWORD *)(v64 + 32) = v21;
      WdLogEvent5_WdError(v64);
      v16 = -1071774916;
    }
    v91 = WdLogNewEntry5_WdWarning(v66, v65, v67, v68);
    WdLogEvent5_WdWarning(v91);
    v80 = (_QWORD *)WdLogNewEntry5_WdTrace(v93, v92, v94, v95);
    v80[3] = v17;
    goto LABEL_111;
  }
  if ( (_DWORD)v20 != 2 )
  {
    if ( (int)v20 <= 2 || (int)v20 > 4 )
    {
      v63 = (_QWORD *)WdLogNewEntry5_WdError(v20, v12);
      v63[3] = v17;
      v63[4] = this;
      v63[5] = *((int *)a2 + 1);
      WdLogEvent5_WdError(v63);
      v16 = -1071774960;
      goto LABEL_112;
    }
    goto LABEL_12;
  }
  *(_DWORD *)(v17 + 72) = 2;
  *(_DWORD *)(struct D3DKMDT_HVIDPNSOURCEMODESET__ *)(v17 + 76) = a2[2];
LABEL_23:
  v24 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)this + 6);
  v25 = *(unsigned int *)(v17 + 24);
  v19 = 0LL;
  v97 = (__int64 (__fastcall ***)(_QWORD, __int64))v17;
  if ( v24 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
  {
    v26 = 0LL;
  }
  else
  {
    v26 = (__int64)v24 - 8;
    if ( !v26 )
      goto LABEL_29;
    while ( *(_DWORD *)(v26 + 24) != (_DWORD)v25 )
    {
      v20 = *(DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL **)(v26 + 8);
      v26 = (__int64)v20 - 8;
      if ( v20 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
        v26 = 0LL;
      if ( !v26 )
        goto LABEL_29;
    }
  }
  if ( v26 )
  {
    v70 = 2 - DMMVIDPNSOURCEMODE::operator==(v26, v17, v26, v15);
    goto LABEL_95;
  }
LABEL_29:
  v27 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)this + 6);
  if ( v27 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) || (v28 = (char *)v27 - 8) == 0LL )
  {
LABEL_37:
    v30 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)this + 6);
    v31 = (char *)this + 48;
    if ( v30 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
      goto LABEL_44;
    v32 = (char *)v30 - 8;
    if ( !v32 )
      goto LABEL_44;
    do
    {
      if ( v32 == (char *)v17 )
        break;
      v20 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v32 + 1);
      v32 = (char *)v20 - 8;
      if ( v20 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)v31 )
        v32 = 0LL;
    }
    while ( v32 );
    if ( v32 )
    {
      v81 = WdLogNewEntry5_WdAssertion(v20, v31, v26, v15);
      WdLogEvent5_WdAssertion(v81);
    }
    else
    {
LABEL_44:
      v33 = (char **)*((_QWORD *)this + 7);
      v34 = (char *)(v17 + 8);
      if ( *v33 != v31 )
        __fastfail(3u);
      *(_QWORD *)v34 = v31;
      *(_QWORD *)(v17 + 16) = v33;
      *v33 = v34;
      *((_QWORD *)this + 7) = v34;
      ++*((_QWORD *)this + 8);
    }
    if ( *(_QWORD *)(v17 + 40) )
    {
      v82 = WdLogNewEntry5_WdAssertion(v33, v31, v26, v15);
      WdLogEvent5_WdAssertion(v82);
    }
    v35 = a2 - 4;
    *(_QWORD *)(v17 + 40) = this;
    if ( *((_DWORD *)a2 - 4) == 305419896 )
    {
      v36 = *((_QWORD *)v35 + 1);
      if ( !v36 || DoublyLinkedList<DMMVIDPNSOURCEMODE>::ContainsByReference((__int64)this + 32, v36) )
      {
        ExFreePoolWithTag(a2 - 4, 0);
      }
      else
      {
        v86 = WdLogNewEntry5_WdError(v85, v84);
        *(_QWORD *)(v86 + 24) = v35;
        *(_QWORD *)(v86 + 32) = this;
        WdLogEvent5_WdError(v86);
        v16 = -1071774928;
      }
    }
    else
    {
      v83 = WdLogNewEntry5_WdError(v33, v31);
      *(_QWORD *)(v83 + 24) = v35;
      WdLogEvent5_WdError(v83);
      v16 = -1071774960;
    }
    goto LABEL_51;
  }
  while ( 1 )
  {
    v29 = *((_DWORD *)v28 + 18);
    if ( v29 != *(_DWORD *)(v17 + 72) )
      goto LABEL_34;
    if ( v29 == 1 )
      goto LABEL_33;
    if ( v29 != 2 )
      break;
    if ( *((_DWORD *)v28 + 19) == *(_DWORD *)(v17 + 76) )
      goto LABEL_94;
LABEL_34:
    v20 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v28 + 1);
    v28 = (char *)v20 - 8;
    if ( v20 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
      v28 = 0LL;
    if ( !v28 )
      goto LABEL_37;
  }
  if ( v29 <= 2 || v29 > 4 )
  {
    if ( (unsigned int)(v29 - 1) <= 3 )
    {
      v71 = WdLogNewEntry5_WdAssertion(v20, v25, v26, v15);
      WdLogEvent5_WdAssertion(v71);
    }
    goto LABEL_34;
  }
LABEL_33:
  if ( *((_DWORD *)v28 + 19) != *(_DWORD *)(v17 + 76)
    || *((_DWORD *)v28 + 20) != *(_DWORD *)(v17 + 80)
    || *((_DWORD *)v28 + 21) != *(_DWORD *)(v17 + 84)
    || *((_DWORD *)v28 + 22) != *(_DWORD *)(v17 + 88)
    || *((_DWORD *)v28 + 23) != *(_DWORD *)(v17 + 92)
    || *((_DWORD *)v28 + 24) != *(_DWORD *)(v17 + 96)
    || *((_DWORD *)v28 + 25) != *(_DWORD *)(v17 + 100)
    || *((_DWORD *)v28 + 26) != *(_DWORD *)(v17 + 104) )
  {
    goto LABEL_34;
  }
LABEL_94:
  v70 = 1;
LABEL_95:
  v72 = (unsigned int)(v70 - 1);
  if ( (_DWORD)v72 )
  {
    if ( (_DWORD)v72 == 1 )
    {
      v78 = (_QWORD *)WdLogNewEntry5_WdError(v72, v25);
      v78[3] = *(unsigned int *)(v17 + 24);
      v78[4] = v17;
      v78[5] = this;
      WdLogEvent5_WdError(v78);
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v97);
      v16 = -1071774940;
    }
    else
    {
      v73 = WdLogNewEntry5_WdError(v72, v25);
      WdLogEvent5_WdError(v73);
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v97);
      v16 = -1073741823;
    }
  }
  else
  {
    v79 = WdLogNewEntry5_WdTrace(v72, v25, v26, v15);
    *(_QWORD *)(v79 + 24) = v17;
    *(_QWORD *)(v79 + 32) = this;
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v97);
    v16 = -1071774956;
  }
  v80 = (_QWORD *)WdLogNewEntry5_WdTrace(v75, v74, v76, v77);
  v80[3] = a2;
LABEL_111:
  v37 = v16;
  v80[5] = v16;
  v80[4] = this;
LABEL_112:
  if ( v19 )
    (**v19)(v19, 1LL);
LABEL_51:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v37, &EventProfilerExit, v38, 7006);
  return (unsigned int)v16;
}
