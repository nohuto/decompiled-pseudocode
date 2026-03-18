/*
 * XREFs of ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00E9EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C0004244 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C00044C0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@V.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C001E180 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ?IsPathFromSourceConnectedToIndirectDisplay@DMMVIDPN@@QEBAEI@Z @ 0x1C01F58DC (-IsPathFromSourceConnectedToIndirectDisplay@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AddMode(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *a2,
        struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *PoolWithTag; // rax
  __int64 v8; // rcx
  int v9; // ebp
  __int64 v10; // rsi
  __int64 v11; // rcx
  void (__fastcall ***v12)(_QWORD, __int64); // rbx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v13; // rcx
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v14; // rdi
  int v15; // eax
  int v16; // eax
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdi
  int v21; // eax
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v22; // rax
  char *v23; // rdx
  char *v24; // rax
  char **v25; // rcx
  char *v26; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rbx
  unsigned int v41; // edi
  __int64 v42; // rax
  DMMVIDPN *Container; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  int v54; // ecx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  _QWORD *v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 (__fastcall ***v76)(_QWORD, __int64); // [rsp+40h] [rbp+8h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 7006);
  v5 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v5 + 24) = a2;
  *(_QWORD *)(v5 + 32) = this;
  if ( !a2 )
  {
    v32 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v32 + 24) = 0LL;
    *(_QWORD *)(v32 + 32) = this;
    WdLogEvent5_WdError(v32);
    v9 = -1071774960;
    goto LABEL_51;
  }
  if ( !this || *((_DWORD *)this + 32) != 1833173004 )
  {
    v75 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v75 + 24) = this;
    WdLogEvent5_WdError(v75);
    v9 = -1071774968;
    goto LABEL_51;
  }
  if ( (unsigned int)(*((_DWORD *)a2 + 1) - 3) <= 1 )
  {
    v33 = *((_QWORD *)this + 14);
    if ( !*(_QWORD *)(v33 + 40) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v34);
    }
    v36 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v33 + 40) + 64LL) + 48);
    if ( !*(_QWORD *)(v36 + 8) )
    {
      v37 = WdLogNewEntry5_WdAssertion(v35);
      WdLogEvent5_WdAssertion(v37);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v36 + 8) + 16LL)) < 1200
      && *(_BYTE *)(v38 + 2228) )
    {
      v39 = WdLogNewEntry5_WdAssertion(v38);
      WdLogEvent5_WdAssertion(v39);
      v9 = -1071774960;
      goto LABEL_51;
    }
    v40 = *((_QWORD *)this + 14);
    v41 = *(_DWORD *)(v40 + 24);
    if ( !*(_QWORD *)(v40 + 40) )
    {
      v42 = WdLogNewEntry5_WdAssertion(v38);
      WdLogEvent5_WdAssertion(v42);
    }
    Container = (DMMVIDPN *)ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v40 + 40) + 64LL);
    if ( DMMVIDPN::IsPathFromSourceConnectedToIndirectDisplay(Container, v41) )
    {
      v45 = WdLogNewEntry5_WdError(v44);
      WdLogEvent5_WdError(v45);
      v9 = -1071774960;
      goto LABEL_51;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x4E506456u);
  v9 = 0;
  v10 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    v11 = *(_DWORD *)a2;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *PoolWithTag = &SetElement::`vftable';
    *((_DWORD *)PoolWithTag + 6) = v11;
    if ( (_DWORD)v11 == -1 )
    {
      v46 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v46 + 24) = 240LL;
      WdLogEvent5_WdAssertion(v46);
    }
    *(_QWORD *)(v10 + 40) = 0LL;
    *(_DWORD *)(v10 + 56) = 1833173006;
    *(_QWORD *)v10 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
    *(_DWORD *)(v10 + 72) = 0;
    *(_QWORD *)(v10 + 32) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
    *(_QWORD *)(v10 + 48) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
    *(_QWORD *)(v10 + 64) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
    memset((void *)(v10 + 76), 0, 0x20uLL);
  }
  else
  {
    v10 = 0LL;
  }
  v12 = (void (__fastcall ***)(_QWORD, __int64))v10;
  if ( !v10 )
  {
    v47 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v47 + 24) = this;
    WdLogEvent5_WdLowResource(v47);
    v9 = -1073741801;
    goto LABEL_112;
  }
  v13 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((unsigned int *)a2 + 1);
  if ( (_DWORD)v13 == 1 )
  {
LABEL_12:
    v14 = a2 + 2;
    if ( *((_DWORD *)a2 + 2) < 0x64u || *((_DWORD *)a2 + 3) < 0x64u )
    {
      v71 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v71[3] = *(_DWORD *)v14;
      v71[4] = *((unsigned int *)a2 + 3);
      v71[5] = v14;
      WdLogEvent5_WdError(v71);
      v9 = -1071774918;
    }
    else if ( *((_DWORD *)a2 + 4) < 0x64u || *((_DWORD *)a2 + 5) < 0x64u )
    {
      v70 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v70[3] = *((unsigned int *)a2 + 4);
      v70[4] = *((unsigned int *)a2 + 5);
      v70[5] = v14;
      WdLogEvent5_WdError(v70);
      v9 = -1071774917;
    }
    else if ( *((_DWORD *)a2 + 6) )
    {
      if ( *((_DWORD *)a2 + 7) )
      {
        v15 = *((_DWORD *)a2 + 8);
        if ( v15 && v15 <= 5 )
        {
          v16 = *((_DWORD *)a2 + 9);
          if ( v16 && v16 <= 3 )
          {
            *(_DWORD *)(v10 + 72) = (_DWORD)v13;
            *(_OWORD *)(v10 + 76) = *(_OWORD *)v14;
            *(_OWORD *)(v10 + 92) = *(_OWORD *)(a2 + 6);
            goto LABEL_23;
          }
          v68 = WdLogNewEntry5_WdError(v13);
          *(_QWORD *)(v68 + 24) = *((int *)a2 + 9);
          *(_QWORD *)(v68 + 32) = v14;
          WdLogEvent5_WdError(v68);
          v9 = -1071774913;
        }
        else
        {
          v69 = WdLogNewEntry5_WdError(v13);
          *(_QWORD *)(v69 + 24) = *((int *)a2 + 8);
          *(_QWORD *)(v69 + 32) = v14;
          WdLogEvent5_WdError(v69);
          v9 = -1071774914;
        }
      }
      else
      {
        v53 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v53 + 24) = *((int *)a2 + 7);
        *(_QWORD *)(v53 + 32) = v14;
        WdLogEvent5_WdError(v53);
        v9 = -1071774915;
      }
    }
    else
    {
      v49 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v49 + 24) = *((unsigned int *)a2 + 6);
      *(_QWORD *)(v49 + 32) = v14;
      WdLogEvent5_WdError(v49);
      v9 = -1071774916;
    }
    v72 = WdLogNewEntry5_WdWarning(v51, v50, v52);
    WdLogEvent5_WdWarning(v72);
    v62 = (_QWORD *)WdLogNewEntry5_WdTrace(v74, v73);
    v62[3] = v10;
    goto LABEL_111;
  }
  if ( (_DWORD)v13 != 2 )
  {
    if ( (int)v13 <= 2 || (int)v13 > 4 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v48[3] = v10;
      v48[4] = this;
      v48[5] = *((int *)a2 + 1);
      WdLogEvent5_WdError(v48);
      v9 = -1071774960;
      goto LABEL_112;
    }
    goto LABEL_12;
  }
  *(_DWORD *)(v10 + 72) = 2;
  *(_DWORD *)(struct D3DKMDT_HVIDPNSOURCEMODESET__ *)(v10 + 76) = a2[2];
LABEL_23:
  v17 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)this + 6);
  v18 = *(unsigned int *)(v10 + 24);
  v12 = 0LL;
  v76 = (__int64 (__fastcall ***)(_QWORD, __int64))v10;
  if ( v17 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
  {
    v19 = 0LL;
  }
  else
  {
    v19 = (__int64)v17 - 8;
    if ( v17 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)8 )
      goto LABEL_29;
    while ( *(_DWORD *)(v19 + 24) != (_DWORD)v18 )
    {
      v13 = *(DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL **)(v19 + 8);
      v19 = (__int64)v13 - 8;
      if ( v13 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
        v19 = 0LL;
      if ( !v19 )
        goto LABEL_29;
    }
  }
  if ( v19 )
  {
    v54 = 2 - (DMMVIDPNSOURCEMODE::operator==(v19, v10) != 0);
    goto LABEL_95;
  }
LABEL_29:
  if ( v17 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)this + 48)
    || (v20 = *((_QWORD *)this + 6) - 8LL, *((_QWORD *)this + 6) == 8LL) )
  {
LABEL_37:
    v22 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)this + 6);
    v23 = (char *)this + 48;
    if ( v22 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
      goto LABEL_44;
    v24 = (char *)v22 - 8;
    if ( !v24 )
      goto LABEL_44;
    do
    {
      if ( v24 == (char *)v10 )
        break;
      v13 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v24 + 1);
      v24 = (char *)v13 - 8;
      if ( v13 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)v23 )
        v24 = 0LL;
    }
    while ( v24 );
    if ( v24 )
    {
      v63 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v63 + 24) = 108LL;
      WdLogEvent5_WdAssertion(v63);
    }
    else
    {
LABEL_44:
      v25 = (char **)*((_QWORD *)this + 7);
      v26 = (char *)(v10 + 8);
      if ( *v25 != v23 )
        __fastfail(3u);
      *(_QWORD *)v26 = v23;
      *(_QWORD *)(v10 + 16) = v25;
      *v25 = v26;
      *((_QWORD *)this + 7) = v26;
      ++*((_QWORD *)this + 8);
    }
    if ( *(_QWORD *)(v10 + 40) )
    {
      v64 = WdLogNewEntry5_WdAssertion(v25);
      WdLogEvent5_WdAssertion(v64);
    }
    v27 = a2 - 4;
    *(_QWORD *)(v10 + 40) = this;
    if ( *((_DWORD *)a2 - 4) == 305419896 )
    {
      v28 = *((_QWORD *)v27 + 1);
      if ( !v28
        || DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::ContainsByReference(
             (__int64)this + 32,
             v28) )
      {
        ExFreePoolWithTag(a2 - 4, 0);
      }
      else
      {
        v67 = WdLogNewEntry5_WdError(v66);
        *(_QWORD *)(v67 + 24) = v27;
        *(_QWORD *)(v67 + 32) = this;
        WdLogEvent5_WdError(v67);
        v9 = -1071774928;
      }
    }
    else
    {
      v65 = WdLogNewEntry5_WdError(v25);
      *(_QWORD *)(v65 + 24) = v27;
      WdLogEvent5_WdError(v65);
      v9 = -1071774960;
    }
    goto LABEL_51;
  }
  while ( 1 )
  {
    v21 = *(_DWORD *)(v20 + 72);
    if ( v21 != *(_DWORD *)(v10 + 72) )
      goto LABEL_34;
    if ( v21 == 1 )
      goto LABEL_33;
    if ( v21 != 2 )
      break;
    if ( *(_DWORD *)(v20 + 76) == *(_DWORD *)(v10 + 76) )
      goto LABEL_94;
LABEL_34:
    v13 = *(DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL **)(v20 + 8);
    v20 = (__int64)v13 - 8;
    if ( v13 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
      v20 = 0LL;
    if ( !v20 )
      goto LABEL_37;
  }
  if ( v21 <= 2 || v21 > 4 )
  {
    if ( (unsigned int)(v21 - 1) <= 3 )
    {
      v55 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v55);
    }
    goto LABEL_34;
  }
LABEL_33:
  if ( *(_DWORD *)(v20 + 76) != *(_DWORD *)(v10 + 76)
    || *(_DWORD *)(v20 + 80) != *(_DWORD *)(v10 + 80)
    || *(_DWORD *)(v20 + 84) != *(_DWORD *)(v10 + 84)
    || *(_DWORD *)(v20 + 88) != *(_DWORD *)(v10 + 88)
    || *(_DWORD *)(v20 + 92) != *(_DWORD *)(v10 + 92)
    || *(_DWORD *)(v20 + 96) != *(_DWORD *)(v10 + 96)
    || *(_DWORD *)(v20 + 100) != *(_DWORD *)(v10 + 100)
    || *(_DWORD *)(v20 + 104) != *(_DWORD *)(v10 + 104) )
  {
    goto LABEL_34;
  }
LABEL_94:
  v54 = 1;
LABEL_95:
  v56 = (unsigned int)(v54 - 1);
  if ( (_DWORD)v56 )
  {
    if ( (_DWORD)v56 == 1 )
    {
      v60 = (_QWORD *)WdLogNewEntry5_WdError(v56);
      v60[3] = *(unsigned int *)(v10 + 24);
      v60[4] = v10;
      v60[5] = this;
      WdLogEvent5_WdError(v60);
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v76);
      v9 = -1071774940;
    }
    else
    {
      v57 = WdLogNewEntry5_WdError(v56);
      WdLogEvent5_WdError(v57);
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v76);
      v9 = -1073741823;
    }
  }
  else
  {
    v61 = WdLogNewEntry5_WdTrace(v56, v18);
    *(_QWORD *)(v61 + 24) = v10;
    *(_QWORD *)(v61 + 32) = this;
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v76);
    v9 = -1071774956;
  }
  v62 = (_QWORD *)WdLogNewEntry5_WdTrace(v59, v58);
  v62[3] = a2;
LABEL_111:
  v29 = v9;
  v62[5] = v9;
  v62[4] = this;
LABEL_112:
  if ( v12 )
    (**v12)(v12, 1LL);
LABEL_51:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, 7006);
  return (unsigned int)v9;
}
