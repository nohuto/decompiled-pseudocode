/*
 * XREFs of ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0190B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00087FC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008830 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0008CE8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008DD0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C007982C (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00BFD00 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C01707C4 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C0182AE8 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEEIPEAPEAE@Z @ 0x1C0190308 (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEEIPEAPEAE@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCddGdiCommand(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned int v5; // edx
  unsigned __int64 v6; // rax
  unsigned int v7; // r14d
  unsigned int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct DXGDEVICE *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rsi
  __int64 v25; // r13
  struct DXGALLOCATION *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  char *v29; // rdi
  char *v30; // r12
  char *v31; // r14
  unsigned int v32; // esi
  __int64 v33; // r10
  char *v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  unsigned int v39; // eax
  char *v40; // r9
  __int64 v41; // r11
  __int64 v42; // r8
  unsigned int v43; // eax
  int v44; // edx
  unsigned int v45; // eax
  LONG v46; // ecx
  int v47; // edx
  unsigned __int64 v48; // rax
  char v49; // al
  unsigned int v50; // eax
  char *v51; // r9
  __int64 v52; // rdx
  __int64 v53; // r8
  unsigned int v54; // eax
  __int64 v55; // rcx
  unsigned int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rcx
  unsigned int v59; // eax
  char *v60; // r9
  __int64 v61; // rdx
  __int64 v62; // r8
  unsigned __int16 v63; // ax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rcx
  __int64 v67; // rax
  unsigned int v69; // [rsp+58h] [rbp-B0h]
  unsigned __int8 v70; // [rsp+60h] [rbp-A8h]
  char v71; // [rsp+68h] [rbp-A0h]
  unsigned int v72; // [rsp+78h] [rbp-90h]
  unsigned int v73; // [rsp+78h] [rbp-90h]
  unsigned __int8 **v74; // [rsp+80h] [rbp-88h]
  struct DXGCONTEXT *v75[2]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v76[16]; // [rsp+98h] [rbp-70h] BYREF
  int v77; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v78; // [rsp+ACh] [rbp-5Ch] BYREF
  struct DXGALLOCATION **Elements; // [rsp+B0h] [rbp-58h]
  struct tagRECT v80; // [rsp+B8h] [rbp-50h] BYREF
  struct DXGADAPTER_VMBUS_PACKET *v81; // [rsp+C8h] [rbp-40h]
  PVOID v82[33]; // [rsp+D8h] [rbp-30h] BYREF
  int v83; // [rsp+1E0h] [rbp+D8h]
  _D3DKMT_RENDER v84; // [rsp+1E8h] [rbp+E0h] BYREF
  PVOID P; // [rsp+358h] [rbp+250h] BYREF
  char v86; // [rsp+360h] [rbp+258h] BYREF
  int v87; // [rsp+460h] [rbp+358h]

  v1 = *((_QWORD *)a1 + 9);
  v77 = -1073741811;
  v82[0] = 0LL;
  v83 = 0;
  P = 0LL;
  v87 = 0;
  v3 = *(unsigned int *)(v1 + 32);
  v81 = a1;
  Elements = 0LL;
  v78 = 0;
  if ( (unsigned int)v3 > 0x100 )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v4 + 24) = 1494LL;
LABEL_3:
    WdLogEvent5_WdAssertion(v4);
    goto LABEL_95;
  }
  v5 = *(_DWORD *)(v1 + 28);
  if ( v5 > 0x10000 )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v4 + 24) = 1499LL;
    goto LABEL_3;
  }
  v6 = 8 * v3;
  if ( v6 > 0xFFFFFFFF )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v4 + 24) = 1504LL;
    goto LABEL_3;
  }
  v7 = v6;
  if ( (unsigned int)v6 >= 0xFFFFFFC8 )
  {
    v4 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL);
    *(_QWORD *)(v4 + 24) = 1509LL;
    goto LABEL_3;
  }
  v8 = v6 + 56;
  v9 = v7 + 56;
  if ( v5 + v9 < v9 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v4 + 24) = 1514LL;
    goto LABEL_3;
  }
  if ( v5 + v9 > *((_DWORD *)a1 + 20) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v4 + 24) = 1519LL;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(v1 + 48) & 0x20) == 0 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v4 + 24) = 1524LL;
    goto LABEL_3;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v76,
    *(_DWORD *)(v1 + 24),
    *((struct DXGPROCESS **)a1 + 6),
    v75,
    0);
  if ( !v75[0] )
  {
    v11 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v11 + 24) = *(unsigned int *)(v1 + 24);
    WdLogEvent5_WdError(v11);
LABEL_20:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v76);
    goto LABEL_95;
  }
  v12 = (struct DXGDEVICE *)*((_QWORD *)v75[0] + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v75, v12);
  Elements = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                        v82,
                                        *(_DWORD *)(v1 + 32));
  if ( !Elements )
  {
    v16 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v16 + 24) = 1543LL;
LABEL_23:
    WdLogEvent5_WdWarning(v16);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v75);
    goto LABEL_20;
  }
  v20 = PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(&P, *(_DWORD *)(v1 + 32));
  if ( !v20 )
  {
    v16 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v16 + 24) = 1549LL;
    goto LABEL_23;
  }
  v78 = *(_DWORD *)(v1 + 32);
  v77 = DxgkReferenceAllocationList(&v78, (struct _D3DDDI_ALLOCATIONLIST *)(v1 + 56), Elements, v12);
  if ( v77 < 0 )
  {
    v16 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v16 + 24) = 1556LL;
    goto LABEL_23;
  }
  v24 = 0LL;
  v25 = *(_QWORD *)(*((_QWORD *)v12 + 2) + 536LL);
  if ( *(_DWORD *)(v1 + 32) )
  {
    while ( 1 )
    {
      v26 = Elements[v24];
      if ( *((struct DXGDEVICE **)v26 + 1) != v12 )
      {
        v28 = WdLogNewEntry5_WdError(v22);
        *(_QWORD *)(v28 + 24) = 1565LL;
        goto LABEL_35;
      }
      if ( !*((_QWORD *)v26 + 3) )
        break;
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 528LL) + 8LL)
                                                       + 624LL))(
              v25,
              *((_QWORD *)v26 + 3));
      *(_QWORD *)(v20 + 8 * v24) = v27;
      if ( !v27 )
      {
        v28 = WdLogNewEntry5_WdError(v22);
        *(_QWORD *)(v28 + 24) = 1578LL;
LABEL_35:
        WdLogEvent5_WdError(v28);
        goto LABEL_36;
      }
      v24 = (unsigned int)(v24 + 1);
      if ( (unsigned int)v24 >= *(_DWORD *)(v1 + 32) )
        goto LABEL_39;
    }
    v28 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v28 + 24) = 1570LL;
    goto LABEL_35;
  }
LABEL_39:
  v29 = (char *)(v7 + v1 + 56);
  v30 = &v29[*(unsigned int *)(v1 + 28)];
  v31 = v29;
  v32 = *(_DWORD *)(v1 + 28);
  if ( !v32 )
  {
LABEL_93:
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v75);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v76);
    memset(&v84, 0, sizeof(v84));
    v84.hDevice = *(_DWORD *)(v1 + 24);
    v84.CommandLength = *(_DWORD *)(v1 + 28);
    v84.pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)(v1 + 56);
    v84.AllocationCount = *(_DWORD *)(v1 + 32);
    v84.Flags = *(D3DKMT_RENDERFLAGS *)(v1 + 48);
    v84.pNewCommandBuffer = v29;
    v77 = DxgkCddGdiCommand(&v84, v64, v65);
    if ( v77 < 0 )
    {
      v67 = WdLogNewEntry5_WdAssertion(v66);
      *(_QWORD *)(v67 + 24) = v77;
      WdLogEvent5_WdAssertion(v67);
    }
    goto LABEL_95;
  }
  while ( v32 >= 8 )
  {
    v33 = *((unsigned int *)v31 + 1);
    v34 = v31;
    if ( v32 < (unsigned int)v33 )
    {
      v57 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v57 + 24) = 1601LL;
      goto LABEL_80;
    }
    v32 -= v33;
    v31 += v33;
    if ( v31 > v30 || (unsigned int)v33 > *(_DWORD *)(v1 + 28) )
    {
      v57 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v57 + 24) = 1608LL;
      goto LABEL_80;
    }
    v35 = (unsigned int)(*(_DWORD *)v34 - 1);
    if ( *(_DWORD *)v34 == 1 )
    {
      v59 = *(_DWORD *)(v1 + 32);
      v60 = v34 + 8;
      v61 = *((unsigned int *)v34 + 10);
      if ( (unsigned int)v61 >= v59 || (v62 = *((unsigned int *)v60 + 9), (unsigned int)v62 >= v59) )
      {
        v57 = WdLogNewEntry5_WdAssertion(v35);
        *(_QWORD *)(v57 + 24) = 1619LL;
        goto LABEL_80;
      }
      v63 = *((_WORD *)v60 + 28);
      if ( !v63 || v63 > 5u )
      {
        v57 = WdLogNewEntry5_WdAssertion(v35);
        *(_QWORD *)(v57 + 24) = 1624LL;
        goto LABEL_80;
      }
      v49 = ValidateGdiCommand(
              72LL,
              v33,
              (const unsigned __int8 *)v29,
              (unsigned __int8 *)v60,
              *(const unsigned __int8 **)(v1 + 40),
              *(_QWORD *)(v20 + 8 * v62),
              *(_QWORD *)(v20 + 8 * v61),
              (const struct tagRECT *)v60 + 1,
              (const struct tagRECT *)v60,
              *((_DWORD *)v60 + 16),
              *((_DWORD *)v60 + 15),
              v70,
              0,
              0,
              *((_DWORD *)v60 + 10),
              (unsigned __int8 **)v60 + 6);
    }
    else if ( *(_DWORD *)v34 == 2 )
    {
      v58 = *((unsigned int *)v34 + 6);
      if ( (unsigned int)v58 >= *(_DWORD *)(v1 + 32) )
      {
        v57 = WdLogNewEntry5_WdAssertion(v58);
        *(_QWORD *)(v57 + 24) = 1650LL;
        goto LABEL_80;
      }
      v49 = ValidateGdiCommand(
              40LL,
              v33,
              (const unsigned __int8 *)v29,
              (unsigned __int8 *)v34 + 8,
              *(const unsigned __int8 **)(v1 + 40),
              *(_QWORD *)(v20 + 8 * v58),
              0LL,
              (const struct tagRECT *)(v34 + 8),
              0LL,
              0,
              0,
              v70,
              0,
              0,
              *((_DWORD *)v34 + 7),
              (unsigned __int8 **)v34 + 4);
    }
    else
    {
      v36 = (unsigned int)(*(_DWORD *)v34 - 3);
      if ( *(_DWORD *)v34 == 3 )
      {
        v56 = *(_DWORD *)(v1 + 32);
        v51 = v34 + 8;
        v52 = *((unsigned int *)v34 + 10);
        if ( (unsigned int)v52 >= v56 || (v53 = *((unsigned int *)v51 + 9), (unsigned int)v53 >= v56) )
        {
          v57 = WdLogNewEntry5_WdAssertion(v36);
          *(_QWORD *)(v57 + 24) = 1676LL;
          goto LABEL_80;
        }
LABEL_65:
        v74 = (unsigned __int8 **)(v51 + 48);
        v73 = *((_DWORD *)v51 + 10);
        v71 = 1;
LABEL_61:
        v49 = ValidateGdiCommand(
                64LL,
                v33,
                (const unsigned __int8 *)v29,
                (unsigned __int8 *)v51,
                *(const unsigned __int8 **)(v1 + 40),
                *(_QWORD *)(v20 + 8 * v53),
                *(_QWORD *)(v20 + 8 * v52),
                (const struct tagRECT *)v51 + 1,
                (const struct tagRECT *)v51,
                0,
                *((_DWORD *)v51 + 15),
                v70,
                v71,
                1,
                v73,
                v74);
        goto LABEL_76;
      }
      v37 = (unsigned int)(*(_DWORD *)v34 - 4);
      if ( *(_DWORD *)v34 == 4 )
      {
        v54 = *(_DWORD *)(v1 + 32);
        v51 = v34 + 8;
        v52 = *((unsigned int *)v34 + 11);
        if ( (unsigned int)v52 >= v54 || (v53 = *((unsigned int *)v51 + 8), (unsigned int)v53 >= v54) )
        {
          v57 = WdLogNewEntry5_WdAssertion(v37);
          *(_QWORD *)(v57 + 24) = 1702LL;
          goto LABEL_80;
        }
        v55 = (unsigned int)(unsigned __int16)*((_DWORD *)v51 + 14) - 2;
        if ( (unsigned int)v55 > 1 )
        {
          v57 = WdLogNewEntry5_WdAssertion(v55);
          *(_QWORD *)(v57 + 24) = 1707LL;
          goto LABEL_80;
        }
        goto LABEL_65;
      }
      v38 = (unsigned int)(*(_DWORD *)v34 - 6);
      if ( *(_DWORD *)v34 == 6 )
      {
        v50 = *(_DWORD *)(v1 + 32);
        v51 = v34 + 8;
        v52 = *((unsigned int *)v34 + 10);
        if ( (unsigned int)v52 >= v50 || (v53 = *((unsigned int *)v51 + 9), (unsigned int)v53 >= v50) )
        {
          v57 = WdLogNewEntry5_WdAssertion(v38);
          *(_QWORD *)(v57 + 24) = 1733LL;
          goto LABEL_80;
        }
        v74 = (unsigned __int8 **)(v51 + 48);
        v73 = *((_DWORD *)v51 + 11);
        v71 = 0;
        goto LABEL_61;
      }
      if ( *(_DWORD *)v34 != 7 )
      {
        v57 = WdLogNewEntry5_WdAssertion(v38);
        *(_QWORD *)(v57 + 24) = 1802LL;
        goto LABEL_80;
      }
      v39 = *(_DWORD *)(v1 + 32);
      v40 = v34 + 8;
      v41 = *((unsigned int *)v34 + 8);
      if ( (unsigned int)v41 >= v39
        || *((_DWORD *)v34 + 7) >= v39
        || (v38 = *((unsigned int *)v34 + 6), (unsigned int)v38 >= v39)
        || (v42 = *((unsigned int *)v34 + 9), (unsigned int)v42 >= v39) )
      {
        v57 = WdLogNewEntry5_WdAssertion(v38);
        *(_QWORD *)(v57 + 24) = 1761LL;
        goto LABEL_80;
      }
      v43 = *((_DWORD *)v34 + 13);
      if ( v43 != -1 )
      {
        if ( v43 > 0xF )
        {
          v57 = WdLogNewEntry5_WdAssertion(v38);
          *(_QWORD *)(v57 + 24) = 1768LL;
          goto LABEL_80;
        }
        if ( *(_QWORD *)(v20 + 8 * v38) < 0x2000uLL )
        {
          v57 = WdLogNewEntry5_WdAssertion(v38);
          *(_QWORD *)(v57 + 24) = 1773LL;
          goto LABEL_80;
        }
      }
      v44 = *((_DWORD *)v34 + 10);
      v72 = *((_DWORD *)v40 + 12);
      v45 = *((_DWORD *)v40 + 16);
      v80.left = v44 + *(_DWORD *)v40;
      v46 = v44 + *((_DWORD *)v40 + 2);
      v47 = *((_DWORD *)v40 + 9);
      v80.right = v46;
      v69 = v45;
      v80.top = v47 + *((_DWORD *)v40 + 1);
      v48 = *(_QWORD *)(v20 + 8 * v41);
      v80.bottom = v47 + *((_DWORD *)v40 + 3);
      v49 = ValidateGdiCommand(
              72LL,
              v33,
              (const unsigned __int8 *)v29,
              (unsigned __int8 *)v40,
              *(const unsigned __int8 **)(v1 + 40),
              *(_QWORD *)(v20 + 8 * v42),
              v48,
              (const struct tagRECT *)v40,
              &v80,
              0,
              v69,
              v70,
              0,
              0,
              v72,
              (unsigned __int8 **)v40 + 7);
    }
LABEL_76:
    if ( !v49 )
      goto LABEL_36;
    if ( !v32 )
      goto LABEL_93;
  }
  v57 = WdLogNewEntry5_WdAssertion(v22);
  *(_QWORD *)(v57 + 24) = 1595LL;
LABEL_80:
  WdLogEvent5_WdAssertion(v57);
LABEL_36:
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v75);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v76);
LABEL_95:
  DxgkUnreferenceAllocationList(v78, (struct _EX_RUNDOWN_REF **)Elements);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v81 + 8), &v77, 4u);
  if ( P != &v86 && P )
    ExFreePoolWithTag(P, 0);
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v82);
  return 1;
}
