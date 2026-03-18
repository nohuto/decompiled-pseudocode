/*
 * XREFs of ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00BD6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C0005988 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@V.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?AddMode@DMMVIDPNSOURCEMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@@Z @ 0x1C00BDE30 (-AddMode@DMMVIDPNSOURCEMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@@Z.c)
 *     ?IsPathFromSourceConnectedToIndirectDisplay@DMMVIDPN@@QEBAEI@Z @ 0x1C02226D0 (-IsPathFromSourceConnectedToIndirectDisplay@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AddMode(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *a2,
        struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v11; // r15
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v17; // rsi
  __int64 v18; // rcx
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v19; // rbx
  int v20; // eax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rcx
  unsigned int v47; // edi
  __int64 v48; // rax
  DMMVIDPN *Container; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  int v68; // [rsp+20h] [rbp-28h] BYREF
  __int64 v69; // [rsp+28h] [rbp-20h]
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v70; // [rsp+50h] [rbp+8h] BYREF

  v69 = 0LL;
  v68 = 7006;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 7006);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v68, 7006);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = this;
  if ( !a2 )
  {
    v34 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v34 + 24) = 0LL;
    *(_QWORD *)(v34 + 32) = this;
LABEL_51:
    WdLogEvent5_WdError(v34);
    goto LABEL_52;
  }
  if ( this && *((_DWORD *)this + 32) == 1833173004 )
    v11 = this;
  else
    v11 = 0LL;
  if ( !v11 )
  {
    v35 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v35 + 24) = this;
    WdLogEvent5_WdError(v35);
    LODWORD(v21) = -1071774968;
    goto LABEL_32;
  }
  if ( (unsigned int)(*((_DWORD *)a2 + 1) - 3) <= 1 )
  {
    v36 = *((_QWORD *)v11 + 14);
    v37 = *(_QWORD *)(v36 + 40);
    if ( !v37 )
    {
      v38 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v38);
      v37 = *(_QWORD *)(v36 + 40);
    }
    v40 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(v37 + 64) + 48);
    v41 = *(_QWORD *)(v40 + 8);
    if ( !v41 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v39);
      WdLogEvent5_WdAssertion(v42);
      v41 = *(_QWORD *)(v40 + 8);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v41 + 16)) < 1200 && *(_BYTE *)(v43 + 2372) )
    {
      v44 = WdLogNewEntry5_WdAssertion(v43);
      WdLogEvent5_WdAssertion(v44);
LABEL_52:
      LODWORD(v21) = -1071774960;
      goto LABEL_32;
    }
    v45 = *((_QWORD *)v11 + 14);
    v46 = *(_QWORD *)(v45 + 40);
    v47 = *(_DWORD *)(v45 + 24);
    if ( !v46 )
    {
      v48 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v48);
      v46 = *(_QWORD *)(v45 + 40);
    }
    Container = (DMMVIDPN *)ContainedBy<DMMVIDPN>::GetContainer(v46 + 64);
    if ( DMMVIDPN::IsPathFromSourceConnectedToIndirectDisplay(Container, v47) )
    {
      v34 = WdLogNewEntry5_WdError(v50);
      goto LABEL_51;
    }
  }
  v12 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)operator new[](0x70uLL, 0x4E506456u, PagedPool);
  v17 = v12;
  if ( v12 )
  {
    v18 = *(_DWORD *)a2;
    *((_QWORD *)v12 + 1) = 0LL;
    *((_QWORD *)v12 + 2) = 0LL;
    *(_QWORD *)v12 = &SetElement::`vftable';
    *((_DWORD *)v12 + 6) = v18;
    if ( (_DWORD)v18 == -1 )
    {
      v51 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v51 + 24) = 240LL;
      WdLogEvent5_WdAssertion(v51);
    }
    *((_QWORD *)v17 + 5) = 0LL;
    *((_DWORD *)v17 + 14) = 1833173006;
    *((_DWORD *)v17 + 18) = 0;
    *(_QWORD *)v17 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
    *((_QWORD *)v17 + 4) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
    *((_QWORD *)v17 + 6) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
    *((_QWORD *)v17 + 8) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
    memset(v17 + 19, 0, 0x20uLL);
  }
  else
  {
    v17 = 0LL;
  }
  v19 = v17;
  if ( !v17 )
  {
    v52 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v52 + 24) = this;
    WdLogEvent5_WdLowResource(v52);
    LODWORD(v21) = -1073741801;
    goto LABEL_30;
  }
  v20 = *((_DWORD *)a2 + 1);
  if ( v20 != 1 )
  {
    if ( v20 == 2 )
    {
      *((_DWORD *)v17 + 18) = 2;
      v17[19] = a2[2];
      goto LABEL_26;
    }
    if ( v20 <= 2 || v20 > 4 )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      v53[3] = v17;
      v53[4] = this;
      v53[5] = *((int *)a2 + 1);
      WdLogEvent5_WdError(v53);
      LODWORD(v21) = -1071774960;
      goto LABEL_30;
    }
  }
  v21 = a2 + 2;
  if ( *((_DWORD *)a2 + 2) < 0x64u || *((_DWORD *)a2 + 3) < 0x64u )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v62[3] = *(_DWORD *)v21;
    v62[4] = *((unsigned int *)a2 + 3);
    v62[5] = v21;
    WdLogEvent5_WdError(v62);
    LODWORD(v21) = -1071774918;
  }
  else if ( *((_DWORD *)a2 + 4) < 0x64u || *((_DWORD *)a2 + 5) < 0x64u )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v61[3] = *((unsigned int *)a2 + 4);
    v61[4] = *((unsigned int *)a2 + 5);
    v61[5] = v21;
    WdLogEvent5_WdError(v61);
    LODWORD(v21) = -1071774917;
  }
  else if ( *((_DWORD *)a2 + 6) )
  {
    if ( *((_DWORD *)a2 + 7) )
    {
      v22 = *((unsigned int *)a2 + 8);
      if ( (_DWORD)v22 && (int)v22 <= 5 )
      {
        v23 = *((unsigned int *)a2 + 9);
        if ( (_DWORD)v23 && (int)v23 <= 3 )
        {
          *((_DWORD *)v17 + 18) = v20;
          *(_OWORD *)(v17 + 19) = *(_OWORD *)v21;
          LODWORD(v21) = 0;
          *(_OWORD *)(v17 + 23) = *(_OWORD *)(a2 + 6);
          goto LABEL_25;
        }
        v59 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v59 + 24) = *((int *)a2 + 9);
        *(_QWORD *)(v59 + 32) = v21;
        WdLogEvent5_WdError(v59);
        LODWORD(v21) = -1071774913;
      }
      else
      {
        v60 = WdLogNewEntry5_WdError(v22);
        *(_QWORD *)(v60 + 24) = *((int *)a2 + 8);
        *(_QWORD *)(v60 + 32) = v21;
        WdLogEvent5_WdError(v60);
        LODWORD(v21) = -1071774914;
      }
    }
    else
    {
      v58 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v58 + 24) = *((int *)a2 + 7);
      *(_QWORD *)(v58 + 32) = v21;
      WdLogEvent5_WdError(v58);
      LODWORD(v21) = -1071774915;
    }
  }
  else
  {
    v54 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v54 + 24) = *((unsigned int *)a2 + 6);
    *(_QWORD *)(v54 + 32) = v21;
    WdLogEvent5_WdError(v54);
    LODWORD(v21) = -1071774916;
  }
  v63 = WdLogNewEntry5_WdWarning(v56, v55, v57);
  WdLogEvent5_WdWarning(v63);
LABEL_25:
  if ( (int)v21 < 0 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v13, v15, v16);
    v64[3] = v17;
    v64[4] = this;
    v64[5] = (int)v21;
    goto LABEL_30;
  }
LABEL_26:
  v70 = v17;
  v19 = 0LL;
  v24 = DMMVIDPNSOURCEMODESET::AddMode(v11, &v70);
  v21 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)v24;
  if ( v24 >= 0 )
  {
    v29 = a2 - 4;
    if ( *(_DWORD *)v29 == 305419896 )
    {
      v30 = *((_QWORD *)v29 + 1);
      if ( v30
        && !DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::ContainsByReference(
              (__int64)v11 + 32,
              v30) )
      {
        v67 = WdLogNewEntry5_WdError(v66);
        *(_QWORD *)(v67 + 24) = v29;
        *(_QWORD *)(v67 + 32) = v11;
        WdLogEvent5_WdError(v67);
        LODWORD(v21) = -1071774928;
        goto LABEL_32;
      }
      operator delete(v29);
      LODWORD(v21) = 0;
      goto LABEL_30;
    }
    v34 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v34 + 24) = v29;
    goto LABEL_51;
  }
  v65 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v25, v27, v28);
  v65[3] = a2;
  v65[4] = this;
  v65[5] = v21;
LABEL_30:
  if ( v19 )
    (**(void (__fastcall ***)(struct D3DKMDT_HVIDPNSOURCEMODESET__ *, __int64))v19)(v19, 1LL);
LABEL_32:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v68);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v68);
  return (unsigned int)v21;
}
