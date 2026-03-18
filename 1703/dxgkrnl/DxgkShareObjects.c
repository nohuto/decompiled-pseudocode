/*
 * XREFs of DxgkShareObjects @ 0x1C009D2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00054A0 (-AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0006F78 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006FB8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000701C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C00138F0 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?VmBusSendCreateNtSharedObject@@YAIPEAVDXGPROCESS@@PEAVDXGSYNCOBJECT@@@Z @ 0x1C002F684 (-VmBusSendCreateNtSharedObject@@YAIPEAVDXGPROCESS@@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0038578 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00385A8 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0087220 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00CADD0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00D7318 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00D81F0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00FEC20 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 */

__int64 __fastcall DxgkShareObjects(__int64 a1, const void *a2, __int64 a3, ACCESS_MASK a4, ULONG64 a5)
{
  __int64 v7; // rsi
  DXGKEYEDMUTEX *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // r14
  ULONG64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r12
  char *v16; // r14
  unsigned int v17; // ebx
  unsigned int v18; // edx
  int EntryType; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r9
  struct DXGRESOURCE **ResourceUnsafe; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct DXGPROCESS *v33; // r8
  __int64 v34; // r9
  struct DXGRESOURCE *v35; // rbx
  __int64 v36; // r14
  signed __int32 v37; // eax
  signed __int32 v38; // ett
  __int64 v39; // rcx
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rbx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // r12
  _QWORD *v46; // rax
  _QWORD *v47; // rbx
  struct DXGPROCESS *v48; // r13
  NTSTATUS inserted; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  _QWORD *v55; // rax
  struct DXGGLOBAL *v57; // rax
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rsi
  __int64 v67; // r9
  __int64 v68; // rcx
  _DWORD *v69; // r14
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rsi
  __int64 v73; // rsi
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  int NtSharedObject; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  _QWORD *v80; // rax
  __int64 v81; // rax
  DXGGLOBAL *v82; // rax
  __int64 v83; // rbx
  __int64 v84; // r10
  _QWORD *v85; // rax
  __int64 v86; // rax
  struct DXGRESOURCE *v87; // [rsp+50h] [rbp-108h] BYREF
  _BYTE v88[8]; // [rsp+58h] [rbp-100h] BYREF
  char v89; // [rsp+60h] [rbp-F8h]
  unsigned int v90; // [rsp+68h] [rbp-F0h]
  PVOID Object; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v92[8]; // [rsp+78h] [rbp-E0h] BYREF
  char v93; // [rsp+80h] [rbp-D8h]
  unsigned int v94; // [rsp+88h] [rbp-D0h]
  struct DXGPROCESS *v95; // [rsp+90h] [rbp-C8h]
  HANDLE Handle; // [rsp+98h] [rbp-C0h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+A0h] [rbp-B8h]
  int v98; // [rsp+A4h] [rbp-B4h]
  _BYTE v99[24]; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v100; // [rsp+C0h] [rbp-98h]
  _BYTE v101[8]; // [rsp+C8h] [rbp-90h] BYREF
  ULONG64 v102; // [rsp+D0h] [rbp-88h]
  _BYTE v103[24]; // [rsp+D8h] [rbp-80h] BYREF
  _BYTE v104[24]; // [rsp+F0h] [rbp-68h] BYREF
  unsigned int v105; // [rsp+108h] [rbp-50h] BYREF
  unsigned int v106; // [rsp+10Ch] [rbp-4Ch]
  unsigned int v107; // [rsp+110h] [rbp-48h]

  DesiredAccess = a4;
  v100 = a3;
  v7 = (unsigned int)a1;
  v90 = a1;
  v102 = a5;
  v98 = 2074;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2074);
  Object = 0LL;
  v8 = 0LL;
  Handle = 0LL;
  Current = DXGPROCESS::GetCurrent();
  v95 = Current;
  if ( !Current )
    goto LABEL_62;
  if ( (unsigned int)(v7 - 1) > 2 )
  {
    v86 = WdLogNewEntry5_WdError(v10, v9);
    LODWORD(v42) = -1073741811;
    *(_QWORD *)(v86 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v86);
    goto LABEL_39;
  }
  v12 = (ULONG64)a2 + 4 * v7;
  if ( v12 < (unsigned __int64)a2 || v12 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(&v105, a2, 4 * v7);
  if ( !a3 || (v15 = v105) == 0 )
  {
LABEL_62:
    v70 = WdLogNewEntry5_WdError(v10, v9);
    LODWORD(v42) = -1073741811;
    *(_QWORD *)(v70 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v70);
    goto LABEL_122;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v104, Current, v13, v14);
  v16 = (char *)Current + 192;
  v17 = ((unsigned int)v15 >> 6) & 0xFFFFFF;
  v94 = (unsigned int)v15 >> 30;
  if ( v17 < *((_DWORD *)v16 + 4)
    && (v18 = *(_DWORD *)(*(_QWORD *)v16 + 16LL * v17 + 8), (unsigned int)v15 >> 30 == ((v18 >> 4) & 3))
    && (v18 & 0x1000) == 0
    && (v18 & 0xF) != 0 )
  {
    EntryType = HMGRTABLE::GetEntryType(v16, v17);
  }
  else
  {
    EntryType = 0;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v104);
  if ( EntryType == 4 )
  {
    v24 = 0LL;
    v87 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v88, Global, v26, v27);
    if ( v90 > 1 )
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v88);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v99, v95, v28, v29);
    ResourceUnsafe = (struct DXGRESOURCE **)DXGPROCESS::GetResourceUnsafe(
                                              (__int64)v95,
                                              (DXGRESOURCEREFERENCE *)v101,
                                              v15);
    DXGRESOURCEREFERENCE::MoveAssign(&v87, ResourceUnsafe);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v101);
    v35 = v87;
    if ( !v87 )
      goto LABEL_83;
    if ( (*((_DWORD *)v87 + 1) & 1) == 0 )
      goto LABEL_83;
    v36 = *((_QWORD *)v87 + 7);
    if ( !v36 )
      goto LABEL_83;
    if ( (*(_DWORD *)(v36 + 12) & 8) == 0 )
    {
      v80 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
      v80[3] = *((_QWORD *)v35 + 7);
      goto LABEL_85;
    }
    if ( v90 <= 1 )
      goto LABEL_22;
    if ( v90 == 3 )
    {
      v83 = v106;
      v32 = (v106 >> 6) & 0xFFFFFF;
      v34 = v106 >> 30;
      v33 = v95;
      if ( (unsigned int)v32 < *((_DWORD *)v95 + 52)
        && (v84 = *((_QWORD *)v95 + 24),
            v31 = *(unsigned int *)(v84 + 16LL * (unsigned int)v32 + 8),
            (_DWORD)v34 == ((*(_DWORD *)(v84 + 16LL * (unsigned int)v32 + 8) >> 4) & 3))
        && (v31 & 0x1000) == 0
        && (v31 & 0xF) != 0
        && (*(_BYTE *)(v84 + 16LL * (unsigned int)v32 + 8) & 0xF) == 9 )
      {
        v8 = *(DXGKEYEDMUTEX **)(v84 + 16LL * (unsigned int)v32);
      }
      else
      {
        v8 = 0LL;
      }
      if ( v8 )
      {
        if ( (*((_DWORD *)v8 + 37) & 1) == 0 )
        {
          _InterlockedAdd(&dword_1C006FF8C, 1u);
          v81 = WdLogNewEntry5_WdError(v32, v31);
          *(_QWORD *)(v81 + 24) = v8;
LABEL_87:
          LODWORD(v42) = -1073741811;
          *(_QWORD *)(v81 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v81);
          goto LABEL_88;
        }
        v83 = v107;
        v32 = (v107 >> 6) & 0xFFFFFF;
        v34 = v107 >> 30;
        if ( (unsigned int)v32 < *((_DWORD *)v95 + 52)
          && (v33 = (struct DXGPROCESS *)*((_QWORD *)v95 + 24),
              v31 = *((unsigned int *)v33 + 4 * (unsigned int)v32 + 2),
              (_DWORD)v34 == ((*((_DWORD *)v33 + 4 * (unsigned int)v32 + 2) >> 4) & 3))
          && (v31 & 0x1000) == 0
          && (v31 & 0xF) != 0
          && (*((_BYTE *)v33 + 16 * (unsigned int)v32 + 8) & 0xF) == 8 )
        {
          v24 = *((_QWORD *)v33 + 2 * (unsigned int)v32);
        }
        else
        {
          v24 = 0LL;
        }
        if ( v24 )
        {
          if ( (*(_DWORD *)(v24 + 148) & 2) != 0 )
          {
LABEL_22:
            _m_prefetchw((const void *)(v36 + 60));
            v37 = *(_DWORD *)(v36 + 60);
            do
            {
              if ( !v37 )
              {
                v80 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
                v80[3] = v105;
                v80[5] = 243LL;
                goto LABEL_85;
              }
              v32 = (unsigned int)(v37 + 1);
              v38 = v37;
              v37 = _InterlockedCompareExchange((volatile signed __int32 *)(v36 + 60), v32, v37);
            }
            while ( v38 != v37 );
            if ( v8 )
              DXGKEYEDMUTEX::AcquireReference(v8, v31, (__int64)v33, v34);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v99);
            if ( v24 )
              _InterlockedAdd((volatile signed __int32 *)(v24 + 24), 1u);
            LOBYTE(v40) = 1;
            LOBYTE(v39) = 1;
            LODWORD(v42) = ObCreateObject(v39, g_pDxgkSharedAllocationObjectType, v100, v40, 0LL, 40, 0, 0, &Object);
            if ( (int)v42 >= 0 )
            {
              v45 = Object;
              ADAPTER_RENDER::AddNtSharedAllocObject(*(ADAPTER_RENDER **)(v36 + 72), (struct _LIST_ENTRY *)Object);
              v46 = (_QWORD *)(v36 + 128);
              v47 = *(_QWORD **)(v36 + 128);
              while ( v47 != v46 )
              {
                if ( (*((_DWORD *)v47 - 11) & 0x4000) != 0 )
                  _guard_dispatch_icall_fptr();
                v47 = (_QWORD *)*v47;
                v46 = (_QWORD *)(v36 + 128);
              }
              v45[2] = v36;
              _InterlockedAdd((volatile signed __int32 *)(v36 + 56), 1u);
              v45[3] = v8;
              v45[4] = v24;
              if ( v89 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v88);
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v87);
              v48 = v95;
LABEL_35:
              inserted = ObInsertObject(Object, 0LL, DesiredAccess, 0, 0LL, &Handle);
              v42 = inserted;
              if ( inserted < 0 )
              {
                v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v51, v50, v52, v53);
                v85[3] = Object;
                v85[4] = v48;
                v85[5] = v42;
                WdLogEvent5_WdWarning(v85);
              }
              else
              {
                v54 = MmUserProbeAddress;
                v55 = (_QWORD *)v102;
                if ( v102 >= MmUserProbeAddress )
                  v55 = (_QWORD *)MmUserProbeAddress;
                *v55 = Handle;
              }
              goto LABEL_39;
            }
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v36 + 60), 0xFFFFFFFF) == 1 )
              DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v36, 0LL, 0);
            if ( v8 )
              DXGKEYEDMUTEX::ReleaseReference(v8, v41, v43, v44);
            if ( v24 )
            {
              v82 = DXGGLOBAL::GetGlobal();
              DXGGLOBAL::DestroySyncObject(v82, (struct DXGSYNCOBJECT *)v24, 0);
            }
            goto LABEL_89;
          }
          _InterlockedAdd(&dword_1C006FF8C, 1u);
          v81 = WdLogNewEntry5_WdError(v32, v31);
          *(_QWORD *)(v81 + 24) = v24;
          goto LABEL_87;
        }
      }
      v80 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
      v80[3] = v83;
    }
    else
    {
LABEL_83:
      v80 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
      v80[3] = v15;
    }
LABEL_85:
    LODWORD(v42) = -1073741811;
    v80[4] = -1073741811LL;
    WdLogEvent5_WdWarning(v80);
LABEL_88:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v99);
LABEL_89:
    if ( v89 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v88);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v87);
    goto LABEL_39;
  }
  if ( EntryType == 8 || EntryType == 11 )
  {
    if ( v90 != 1 )
    {
      v71 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
      LODWORD(v42) = -1073741811;
      v71[4] = -1073741811LL;
      goto LABEL_67;
    }
    v57 = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v92, v57, v58, v59);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v92);
    v48 = v95;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v103, v95, v60, v61);
    if ( EntryType == 11 )
    {
      if ( v17 >= *((_DWORD *)v16 + 4) )
        goto LABEL_75;
      v72 = *(_QWORD *)v16;
      v63 = *(unsigned int *)(*(_QWORD *)v16 + 16LL * v17 + 8);
      if ( v94 != ((*(_DWORD *)(*(_QWORD *)v16 + 16LL * v17 + 8) >> 4) & 3) )
        goto LABEL_75;
      if ( (v63 & 0x1000) != 0 )
        goto LABEL_75;
      if ( (v63 & 0xF) == 0 )
        goto LABEL_75;
      v63 = 2LL * v17;
      if ( (*(_BYTE *)(v72 + 16LL * v17 + 8) & 0xF) != 0xB )
        goto LABEL_75;
      v73 = *(_QWORD *)(v72 + 16LL * v17);
      if ( !v73 )
        goto LABEL_75;
      v66 = *(_QWORD *)(v73 + 32);
    }
    else if ( v17 < *((_DWORD *)v16 + 4)
           && (v62 = *(_QWORD *)v16,
               v63 = *(unsigned int *)(*(_QWORD *)v16 + 16LL * v17 + 8),
               v94 == ((*(_DWORD *)(*(_QWORD *)v16 + 16LL * v17 + 8) >> 4) & 3))
           && (v63 & 0x1000) == 0
           && (v63 & 0xF) != 0
           && (v63 = 2LL * v17, EntryType == (*(_DWORD *)(v62 + 16LL * v17 + 8) & 0xF)) )
    {
      v66 = *(_QWORD *)(v62 + 16LL * v17);
    }
    else
    {
      v66 = 0LL;
    }
    if ( v66 )
    {
      if ( (*(_DWORD *)(v66 + 148) & 2) != 0 )
      {
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v103);
        LOBYTE(v67) = 1;
        LOBYTE(v68) = 1;
        LODWORD(v42) = ObCreateObject(v68, g_pDxgkSharedSyncObjectType, v100, v67, 0LL, 16, 0, 0, &Object);
        if ( (int)v42 >= 0 )
        {
          v69 = Object;
          _InterlockedAdd((volatile signed __int32 *)(v66 + 24), 1u);
          *(_QWORD *)v69 = v66;
          v69[2] = 0;
          if ( !*(_BYTE *)(v66 + 225)
            || (NtSharedObject = VmBusSendCreateNtSharedObject(v48, (struct DXGSYNCOBJECT *)v66),
                (v69[2] = NtSharedObject) != 0) )
          {
            if ( v93 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v92);
            goto LABEL_35;
          }
          v76 = WdLogNewEntry5_WdError(v79, v78);
          *(_QWORD *)(v76 + 24) = 420LL;
          WdLogEvent5_WdError(v76);
        }
        goto LABEL_78;
      }
      _InterlockedAdd(&dword_1C006FF8C, 1u);
      v75 = WdLogNewEntry5_WdError(v63, v62);
      *(_QWORD *)(v75 + 24) = v66;
      LODWORD(v42) = -1073741811;
      *(_QWORD *)(v75 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v75);
LABEL_77:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v103);
LABEL_78:
      if ( v93 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v92);
LABEL_39:
      if ( (int)v42 >= 0 )
        goto LABEL_40;
      goto LABEL_122;
    }
LABEL_75:
    v74 = WdLogNewEntry5_WdWarning(v63, v62, v64, v65);
    *(_QWORD *)(v74 + 24) = v15;
    LODWORD(v42) = -1073741811;
    *(_QWORD *)(v74 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v74);
    goto LABEL_77;
  }
  v71 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
  v71[4] = EntryType;
  LODWORD(v42) = -1073741811;
  v71[5] = -1073741811LL;
LABEL_67:
  v71[3] = v15;
  WdLogEvent5_WdWarning(v71);
LABEL_122:
  v54 = (__int64)Handle;
  if ( Handle )
    NtClose(Handle);
LABEL_40:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v54, &EventProfilerExit, v52, 2074);
  return (unsigned int)v42;
}
