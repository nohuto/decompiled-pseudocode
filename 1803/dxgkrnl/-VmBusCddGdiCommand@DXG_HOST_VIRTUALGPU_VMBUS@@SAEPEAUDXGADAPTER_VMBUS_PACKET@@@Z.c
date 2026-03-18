/*
 * XREFs of ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017C130
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0009964 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009998 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0016BF4 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0016D0C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D40C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C0096138 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAA@XZ @ 0x1C0099C98 (--1-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAA@XZ.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@@Z @ 0x1C00CE9F0 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C0147588 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C016AD48 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEEIPEAPEAE@Z @ 0x1C017B8C0 (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEEIPEAPEAE@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCddGdiCommand(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  struct DXGADAPTER_VMBUS_PACKET *v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  struct DXGALLOCATION **v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned __int64 v10; // rax
  unsigned int v11; // r14d
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct DXGDEVICE *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int v28; // esi
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r15
  __int64 v35; // rcx
  __int64 v36; // rax
  const unsigned __int8 *v37; // rdi
  const unsigned __int8 *v38; // rax
  const unsigned __int8 *v39; // r14
  int v40; // esi
  unsigned int v41; // esi
  __int64 v42; // r10
  const unsigned __int8 *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  unsigned int v47; // eax
  unsigned __int8 *v48; // r9
  __int64 v49; // r11
  __int64 v50; // r8
  unsigned int v51; // eax
  int v52; // edx
  unsigned int v53; // eax
  LONG v54; // ecx
  int v55; // edx
  char v56; // al
  unsigned int v57; // eax
  unsigned __int8 *v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r8
  unsigned int v61; // eax
  __int64 v62; // rcx
  unsigned int v63; // eax
  __int64 v64; // rax
  unsigned __int8 *v65; // r9
  __int64 v66; // r8
  __int64 v67; // rcx
  unsigned __int64 v68; // rdx
  _BYTE *v69; // rcx
  unsigned int v70; // eax
  unsigned __int8 *v71; // r9
  __int64 v72; // r11
  __int64 v73; // r8
  __int64 v74; // rcx
  unsigned __int64 v75; // rdx
  _BYTE *v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // rax
  unsigned __int8 v81; // [rsp+60h] [rbp-A8h]
  char v82; // [rsp+68h] [rbp-A0h]
  unsigned int v83; // [rsp+78h] [rbp-90h]
  unsigned int v84; // [rsp+78h] [rbp-90h]
  unsigned __int8 **v85; // [rsp+80h] [rbp-88h]
  struct DXGCONTEXT *Elements; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v88[16]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v89[16]; // [rsp+A8h] [rbp-60h] BYREF
  int v90; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v91; // [rsp+BCh] [rbp-4Ch] BYREF
  struct tagRECT v92; // [rsp+C0h] [rbp-48h] BYREF
  const unsigned __int8 *v93; // [rsp+D0h] [rbp-38h]
  PVOID v94[33]; // [rsp+D8h] [rbp-30h] BYREF
  int v95; // [rsp+1E0h] [rbp+D8h]
  _QWORD v96[48]; // [rsp+1E8h] [rbp+E0h] BYREF
  PVOID P; // [rsp+368h] [rbp+260h] BYREF
  char v98; // [rsp+370h] [rbp+268h] BYREF
  int v99; // [rsp+470h] [rbp+368h]

  v1 = a1;
  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU>((__int64)a1);
  v4 = v2;
  if ( !v2 )
    return v2;
  v90 = -1073741811;
  v94[0] = 0LL;
  v5 = 0LL;
  v95 = 0;
  P = 0LL;
  v99 = 0;
  v6 = *(unsigned int *)(v2 + 32);
  v91 = 0;
  if ( (unsigned int)v6 > 0x100 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v7 + 24) = 1620LL;
LABEL_4:
    WdLogEvent5_WdAssertion(v7);
    goto LABEL_119;
  }
  v9 = *(_DWORD *)(v4 + 28);
  if ( v9 > 0x10000 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v7 + 24) = 1625LL;
    goto LABEL_4;
  }
  v10 = 8 * v6;
  if ( v10 > 0xFFFFFFFF )
  {
    v7 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v7 + 24) = 1630LL;
    goto LABEL_4;
  }
  v11 = v10;
  if ( (unsigned int)v10 >= 0xFFFFFFC8 )
  {
    v7 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL);
    *(_QWORD *)(v7 + 24) = 1635LL;
    goto LABEL_4;
  }
  v12 = v10 + 56;
  v13 = v11 + 56;
  if ( v9 + v13 < v13 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v7 + 24) = 1640LL;
    goto LABEL_4;
  }
  if ( v9 + v13 > *((_DWORD *)v1 + 20) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v7 + 24) = 1645LL;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v4 + 48) & 0x20) == 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v7 + 24) = 1650LL;
    goto LABEL_4;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v88,
    *(_DWORD *)(v4 + 24),
    *((struct _KTHREAD ***)v1 + 6),
    &Elements,
    0);
  if ( !Elements )
  {
    v15 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v15 + 24) = *(unsigned int *)(v4 + 24);
    WdLogEvent5_WdError(v15);
LABEL_21:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v88);
LABEL_118:
    v1 = a1;
    goto LABEL_119;
  }
  v16 = (struct DXGDEVICE *)*((_QWORD *)Elements + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v89, v16);
  Elements = (struct DXGCONTEXT *)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(v94, *(_DWORD *)(v4 + 32));
  v5 = (struct DXGALLOCATION **)Elements;
  if ( !Elements )
  {
    v20 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v20 + 24) = 1669LL;
LABEL_24:
    WdLogEvent5_WdWarning(v20);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v89);
    goto LABEL_21;
  }
  v24 = PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(&P, *(_DWORD *)(v4 + 32));
  if ( !v24 )
  {
    v20 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v20 + 24) = 1675LL;
    goto LABEL_24;
  }
  v91 = *(_DWORD *)(v4 + 32);
  v90 = DxgkReferenceAllocationList(&v91, (struct _D3DDDI_ALLOCATIONLIST *)(v4 + 56), v5, v16);
  if ( v90 < 0 )
  {
    v20 = WdLogNewEntry5_WdWarning(v26, v25, v27);
    *(_QWORD *)(v20 + 24) = 1682LL;
    goto LABEL_24;
  }
  v28 = 0;
  v29 = *((_QWORD *)v16 + 2);
  v30 = *(_QWORD *)(v29 + 552);
  if ( !*(_DWORD *)(v4 + 32) )
    goto LABEL_35;
  do
  {
    v31 = *((_QWORD *)Elements + v28);
    if ( *(struct DXGDEVICE **)(v31 + 8) != v16 )
    {
      v36 = WdLogNewEntry5_WdError(v26);
      *(_QWORD *)(v36 + 24) = 1691LL;
      goto LABEL_38;
    }
    v32 = *(_QWORD *)(v31 + 24);
    if ( !v32 )
    {
      v36 = WdLogNewEntry5_WdError(v26);
      *(_QWORD *)(v36 + 24) = 1696LL;
      goto LABEL_38;
    }
    v33 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 544LL)
                                                                          + 8LL)
                                                              + 624LL))(
            v30,
            v32,
            0LL);
    v24[v28] = v33;
    if ( !v33 )
    {
      v36 = WdLogNewEntry5_WdError(v26);
      *(_QWORD *)(v36 + 24) = 1705LL;
LABEL_38:
      WdLogEvent5_WdError(v36);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v89);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v88);
LABEL_117:
      v5 = (struct DXGALLOCATION **)Elements;
      goto LABEL_118;
    }
    ++v28;
  }
  while ( v28 < *(_DWORD *)(v4 + 32) );
  v29 = *((_QWORD *)v16 + 2);
LABEL_35:
  v34 = *(_QWORD *)(v29 + 16);
  v35 = 4LL;
  if ( (*(_DWORD *)(v34 + 1820) & 4) == 0 )
  {
    v36 = WdLogNewEntry5_WdError(4LL);
    *(_QWORD *)(v36 + 24) = 1713LL;
    goto LABEL_38;
  }
  v37 = (const unsigned __int8 *)(v4 + v11 + 56LL);
  v38 = &v37[*(unsigned int *)(v4 + 28)];
  v39 = v37;
  v40 = (_DWORD)v37 + *(_DWORD *)(v4 + 28);
  v93 = v38;
  v41 = v40 - (_DWORD)v37;
  if ( !v41 )
  {
LABEL_116:
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v89);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v88);
    memset(v96, 0, sizeof(v96));
    LODWORD(v96[2]) = *(_DWORD *)(v4 + 24);
    LODWORD(v96[3]) = *(_DWORD *)(v4 + 28);
    v96[7] = v4 + 56;
    HIDWORD(v96[3]) = *(_DWORD *)(v4 + 32);
    HIDWORD(v96[10]) = *(_DWORD *)(v4 + 48);
    v96[5] = v37;
    v90 = DxgkCddGdiCommand((struct _DXGKCDD_SUBMITRENDERTOHWQUEUE *)v96, v77, v78);
    goto LABEL_117;
  }
  while ( 2 )
  {
    if ( v41 >= 8 )
    {
      v42 = *((unsigned int *)v39 + 1);
      v43 = v39;
      if ( v41 < (unsigned int)v42 )
      {
        v64 = WdLogNewEntry5_WdAssertion(v35);
        *(_QWORD *)(v64 + 24) = 1735LL;
        goto LABEL_96;
      }
      v41 -= v42;
      v39 += v42;
      if ( v39 > v38 || (unsigned int)v42 > *(_DWORD *)(v4 + 28) )
      {
        v64 = WdLogNewEntry5_WdAssertion(v35);
        *(_QWORD *)(v64 + 24) = 1742LL;
        goto LABEL_96;
      }
      if ( *(_DWORD *)v43 == 1 )
      {
        v70 = *(_DWORD *)(v4 + 32);
        v71 = (unsigned __int8 *)(v43 + 8);
        v72 = *((unsigned int *)v43 + 10);
        if ( (unsigned int)v72 >= v70 || (v73 = *((unsigned int *)v43 + 11), (unsigned int)v73 >= v70) )
        {
          v64 = WdLogNewEntry5_WdAssertion((unsigned int)(*(_DWORD *)v43 - 1));
          *(_QWORD *)(v64 + 24) = 1753LL;
          goto LABEL_96;
        }
        v74 = *((unsigned __int16 *)v43 + 32);
        if ( (unsigned __int16)(v74 - 1) > 4u )
        {
          v64 = WdLogNewEntry5_WdAssertion(v74);
          *(_QWORD *)(v64 + 24) = 1758LL;
          goto LABEL_96;
        }
        if ( (_WORD)v74 == 5 )
        {
          if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 113LL) || (*(_DWORD *)(v34 + 1820) & 0x100000) == 0 )
          {
            v64 = WdLogNewEntry5_WdAssertion(0LL);
            *(_QWORD *)(v64 + 24) = 1765LL;
            goto LABEL_96;
          }
          v76 = gajRop3;
          v75 = *((unsigned __int16 *)v43 + 33);
          LOBYTE(v76) = gajRop3[(unsigned __int8)v75];
          if ( (((unsigned __int8)v76 | gajRop3[v75 >> 8]) & 0xE8) != 0 )
          {
            v64 = WdLogNewEntry5_WdAssertion(v76);
            *(_QWORD *)(v64 + 24) = 1770LL;
            goto LABEL_96;
          }
        }
        else if ( *((_WORD *)v43 + 33) )
        {
          v64 = WdLogNewEntry5_WdAssertion(0LL);
          *(_QWORD *)(v64 + 24) = 1778LL;
          goto LABEL_96;
        }
        v56 = ValidateGdiCommand(
                72LL,
                v42,
                v37,
                v71,
                *(const unsigned __int8 **)(v4 + 40),
                v24[v73],
                v24[v72],
                (const struct tagRECT *)v71 + 1,
                (const struct tagRECT *)v71,
                *((_DWORD *)v71 + 16),
                *((_DWORD *)v71 + 15),
                v81,
                0,
                0,
                *((_DWORD *)v71 + 10),
                (unsigned __int8 **)v71 + 6);
        goto LABEL_92;
      }
      if ( *(_DWORD *)v43 == 2 )
      {
        v65 = (unsigned __int8 *)(v43 + 8);
        v66 = *((unsigned int *)v43 + 6);
        if ( (unsigned int)v66 >= *(_DWORD *)(v4 + 32) )
        {
          v64 = WdLogNewEntry5_WdAssertion((unsigned int)(*(_DWORD *)v43 - 2));
          *(_QWORD *)(v64 + 24) = 1805LL;
          goto LABEL_96;
        }
        v67 = *((unsigned __int16 *)v43 + 22);
        if ( (unsigned __int16)(v67 - 1) > 6u )
        {
          v64 = WdLogNewEntry5_WdAssertion(v67);
          *(_QWORD *)(v64 + 24) = 1810LL;
          goto LABEL_96;
        }
        if ( (_WORD)v67 == 7 )
        {
          if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 113LL) || (*(_DWORD *)(v34 + 1820) & 0x100000) == 0 )
          {
            v64 = WdLogNewEntry5_WdAssertion(v67);
            *(_QWORD *)(v64 + 24) = 1817LL;
            goto LABEL_96;
          }
          v69 = gajRop3;
          v68 = *((unsigned __int16 *)v43 + 23);
          LOBYTE(v69) = gajRop3[(unsigned __int8)v68];
          if ( (((unsigned __int8)v69 | gajRop3[v68 >> 8]) & 0xFC) != 0 )
          {
            v64 = WdLogNewEntry5_WdAssertion(v69);
            *(_QWORD *)(v64 + 24) = 1823LL;
            goto LABEL_96;
          }
        }
        else if ( *((_WORD *)v43 + 23) )
        {
          v64 = WdLogNewEntry5_WdAssertion(v67);
          *(_QWORD *)(v64 + 24) = 1831LL;
          goto LABEL_96;
        }
        v56 = ValidateGdiCommand(
                40LL,
                v42,
                v37,
                v65,
                *(const unsigned __int8 **)(v4 + 40),
                v24[v66],
                0LL,
                (const struct tagRECT *)v65,
                0LL,
                0,
                0,
                v81,
                0,
                0,
                *((_DWORD *)v65 + 5),
                (unsigned __int8 **)v65 + 3);
        goto LABEL_92;
      }
      v44 = (unsigned int)(*(_DWORD *)v43 - 3);
      if ( *(_DWORD *)v43 == 3 )
      {
        v63 = *(_DWORD *)(v4 + 32);
        v58 = (unsigned __int8 *)(v43 + 8);
        v59 = *((unsigned int *)v43 + 10);
        if ( (unsigned int)v59 >= v63 || (v60 = *((unsigned int *)v58 + 9), (unsigned int)v60 >= v63) )
        {
          v64 = WdLogNewEntry5_WdAssertion(v44);
          *(_QWORD *)(v64 + 24) = 1858LL;
          goto LABEL_96;
        }
      }
      else
      {
        v45 = (unsigned int)(*(_DWORD *)v43 - 4);
        if ( *(_DWORD *)v43 != 4 )
        {
          v46 = (unsigned int)(*(_DWORD *)v43 - 6);
          if ( *(_DWORD *)v43 != 6 )
          {
            if ( *(_DWORD *)v43 != 7 )
            {
              v64 = WdLogNewEntry5_WdAssertion(v46);
              *(_QWORD *)(v64 + 24) = 1990LL;
              goto LABEL_96;
            }
            v47 = *(_DWORD *)(v4 + 32);
            v48 = (unsigned __int8 *)(v43 + 8);
            v49 = *((unsigned int *)v43 + 8);
            if ( (unsigned int)v49 >= v47
              || *((_DWORD *)v43 + 7) >= v47
              || (v46 = *((unsigned int *)v43 + 6), (unsigned int)v46 >= v47)
              || (v50 = *((unsigned int *)v43 + 9), (unsigned int)v50 >= v47) )
            {
              v64 = WdLogNewEntry5_WdAssertion(v46);
              *(_QWORD *)(v64 + 24) = 1949LL;
              goto LABEL_96;
            }
            v51 = *((_DWORD *)v43 + 13);
            if ( v51 != -1 )
            {
              if ( v51 > 0xF )
              {
                v64 = WdLogNewEntry5_WdAssertion(v46);
                *(_QWORD *)(v64 + 24) = 1956LL;
                goto LABEL_96;
              }
              if ( v24[v46] < 0x2000uLL )
              {
                v64 = WdLogNewEntry5_WdAssertion(v46);
                *(_QWORD *)(v64 + 24) = 1961LL;
                goto LABEL_96;
              }
            }
            v52 = *((_DWORD *)v43 + 10);
            v83 = *((_DWORD *)v48 + 12);
            v53 = *((_DWORD *)v48 + 16);
            v92.left = v52 + *(_DWORD *)v48;
            v54 = v52 + *((_DWORD *)v48 + 2);
            v55 = *((_DWORD *)v48 + 9);
            v92.right = v54;
            v92.top = v55 + *((_DWORD *)v48 + 1);
            v92.bottom = v55 + *((_DWORD *)v48 + 3);
            v56 = ValidateGdiCommand(
                    72LL,
                    v42,
                    v37,
                    v48,
                    *(const unsigned __int8 **)(v4 + 40),
                    v24[v50],
                    v24[v49],
                    (const struct tagRECT *)v48,
                    &v92,
                    0,
                    v53,
                    v81,
                    0,
                    0,
                    v83,
                    (unsigned __int8 **)v48 + 7);
            goto LABEL_92;
          }
          v57 = *(_DWORD *)(v4 + 32);
          v58 = (unsigned __int8 *)(v43 + 8);
          v59 = *((unsigned int *)v43 + 10);
          if ( (unsigned int)v59 >= v57 || (v60 = *((unsigned int *)v58 + 9), (unsigned int)v60 >= v57) )
          {
            v64 = WdLogNewEntry5_WdAssertion(v46);
            *(_QWORD *)(v64 + 24) = 1921LL;
            goto LABEL_96;
          }
          v85 = (unsigned __int8 **)(v58 + 48);
          v84 = *((_DWORD *)v58 + 11);
          v82 = 0;
LABEL_63:
          v56 = ValidateGdiCommand(
                  64LL,
                  v42,
                  v37,
                  v58,
                  *(const unsigned __int8 **)(v4 + 40),
                  v24[v60],
                  v24[v59],
                  (const struct tagRECT *)v58 + 1,
                  (const struct tagRECT *)v58,
                  0,
                  *((_DWORD *)v58 + 15),
                  v81,
                  v82,
                  1,
                  v84,
                  v85);
LABEL_92:
          if ( !v56 )
            goto LABEL_97;
          if ( !v41 )
            goto LABEL_116;
          v38 = v93;
          continue;
        }
        v61 = *(_DWORD *)(v4 + 32);
        v58 = (unsigned __int8 *)(v43 + 8);
        v59 = *((unsigned int *)v43 + 11);
        if ( (unsigned int)v59 >= v61 || (v60 = *((unsigned int *)v58 + 8), (unsigned int)v60 >= v61) )
        {
          v64 = WdLogNewEntry5_WdAssertion(v45);
          *(_QWORD *)(v64 + 24) = 1884LL;
          goto LABEL_96;
        }
        v62 = *((unsigned int *)v58 + 14);
        if ( (_WORD)v62 != 3 )
        {
          v64 = WdLogNewEntry5_WdAssertion(v62);
          *(_QWORD *)(v64 + 24) = 1889LL;
          goto LABEL_96;
        }
        if ( (v62 & 0x30000) != 0 && (*(_DWORD *)(v34 + 1820) & 0x200000) == 0 )
        {
          v64 = WdLogNewEntry5_WdAssertion(v62);
          *(_QWORD *)(v64 + 24) = 1895LL;
          goto LABEL_96;
        }
      }
      v85 = (unsigned __int8 **)(v58 + 48);
      v84 = *((_DWORD *)v58 + 10);
      v82 = 1;
      goto LABEL_63;
    }
    break;
  }
  v64 = WdLogNewEntry5_WdAssertion(v35);
  *(_QWORD *)(v64 + 24) = 1729LL;
LABEL_96:
  WdLogEvent5_WdAssertion(v64);
LABEL_97:
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v89);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v88);
  v5 = (struct DXGALLOCATION **)Elements;
  v1 = a1;
LABEL_119:
  if ( v90 < 0 )
  {
    v79 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v79 + 24) = v90;
    WdLogEvent5_WdAssertion(v79);
  }
  DxgkUnreferenceAllocationList(v91, (struct _EX_RUNDOWN_REF **)v5);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v1 + 8), &v90, 4u);
  if ( P != &v98 && P )
    ExFreePoolWithTag(P, 0);
  PagedPoolZeroedArray<DXGALLOCATION *,32>::~PagedPoolZeroedArray<DXGALLOCATION *,32>(v94);
  LOBYTE(v2) = 1;
  return v2;
}
