/*
 * XREFs of DxgkShareObjects @ 0x1C00BEEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00019AC (-AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0003230 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0003270 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00032D4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0014674 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0028734 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0028764 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0079A14 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C008A318 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C008A3F0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008BA68 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C0091444 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateSharedSyncNtObject@@YAJW4_HMGRENTRY_TYPE@@IPEAU_OBJECT_ATTRIBUTES@@PEAPEAX@Z @ 0x1C00BC620 (-CreateSharedSyncNtObject@@YAJW4_HMGRENTRY_TYPE@@IPEAU_OBJECT_ATTRIBUTES@@PEAPEAX@Z.c)
 *     ?CreateSharedProtectedSessionNtObject@@YAJW4_HMGRENTRY_TYPE@@IPEAU_OBJECT_ATTRIBUTES@@PEAPEAX@Z @ 0x1C01AEE28 (-CreateSharedProtectedSessionNtObject@@YAJW4_HMGRENTRY_TYPE@@IPEAU_OBJECT_ATTRIBUTES@@PEAPEAX@Z.c)
 */

__int64 __fastcall DxgkShareObjects(__int64 a1, const void *a2, __int64 a3, ACCESS_MASK a4, ULONG64 a5)
{
  __int64 v7; // r12
  DXGKEYEDMUTEX *v8; // r13
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // r15
  ULONG64 v11; // rcx
  __int64 v12; // r14
  unsigned int v13; // edx
  unsigned int v14; // r8d
  unsigned int EntryType; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rsi
  struct DXGGLOBAL *Global; // rax
  struct DXGRESOURCE **ResourceUnsafe; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct _EX_RUNDOWN_REF *v25; // rbx
  ULONG_PTR Count; // r15
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rbx
  _QWORD *v33; // r14
  _QWORD *i; // rbx
  NTSTATUS inserted; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rax
  PERESOURCE *v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rax
  unsigned int v50; // r9d
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rax
  struct _EX_RUNDOWN_REF *v54; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v55[8]; // [rsp+58h] [rbp-D0h] BYREF
  char v56; // [rsp+60h] [rbp-C8h]
  PVOID Object; // [rsp+68h] [rbp-C0h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+70h] [rbp-B8h]
  HANDLE Handle; // [rsp+78h] [rbp-B0h] BYREF
  struct DXGPROCESS *v60; // [rsp+80h] [rbp-A8h]
  _BYTE v61[24]; // [rsp+88h] [rbp-A0h] BYREF
  struct _EX_RUNDOWN_REF *v62; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-80h]
  ULONG64 v64; // [rsp+B0h] [rbp-78h]
  _BYTE v65[24]; // [rsp+B8h] [rbp-70h] BYREF
  unsigned int v66; // [rsp+D0h] [rbp-58h] BYREF
  unsigned int v67; // [rsp+D4h] [rbp-54h]
  unsigned int v68; // [rsp+D8h] [rbp-50h]

  DesiredAccess = a4;
  v63 = a3;
  v7 = (unsigned int)a1;
  v64 = a5;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2074);
  Object = 0LL;
  v8 = 0LL;
  Handle = 0LL;
  Current = DXGPROCESS::GetCurrent(a1, (__int64)a2);
  v60 = Current;
  if ( !Current )
    goto LABEL_51;
  if ( (unsigned int)(v7 - 1) > 2 )
  {
    v53 = WdLogNewEntry5_WdError(v9);
    LODWORD(v32) = -1073741811;
    *(_QWORD *)(v53 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v53);
    goto LABEL_39;
  }
  v11 = (ULONG64)a2 + 4 * v7;
  if ( v11 < (unsigned __int64)a2 || v11 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(&v66, a2, 4 * v7);
  if ( !a3 || (v12 = v66) == 0 )
  {
LABEL_51:
    v42 = WdLogNewEntry5_WdError(v9);
    LODWORD(v32) = -1073741811;
    *(_QWORD *)(v42 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v42);
    goto LABEL_104;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v65, Current);
  v13 = ((unsigned int)v12 >> 6) & 0xFFFFFF;
  if ( v13 < *((_DWORD *)Current + 60)
    && (v14 = *(_DWORD *)(*((_QWORD *)Current + 28) + 16LL * v13 + 8), (unsigned int)v12 >> 30 == ((v14 >> 5) & 3))
    && (v14 & 0x2000) == 0
    && (v14 & 0x1F) != 0 )
  {
    EntryType = HMGRTABLE::GetEntryType((__int64)Current + 224, v13);
  }
  else
  {
    EntryType = 0;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v65);
  if ( EntryType == 4 )
  {
    v19 = 0LL;
    v54 = 0LL;
    Global = DXGGLOBAL::GetGlobal(v17);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v55, Global);
    if ( (unsigned int)v7 > 1 )
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v55);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v61, Current);
    ResourceUnsafe = (struct DXGRESOURCE **)DXGPROCESS::GetResourceUnsafe(
                                              (__int64)Current,
                                              (DXGRESOURCEREFERENCE *)&v62,
                                              v12);
    DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&v54, ResourceUnsafe);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v62);
    v25 = v54;
    if ( !v54 )
      goto LABEL_65;
    if ( (HIDWORD(v54->Ptr) & 1) == 0 )
      goto LABEL_65;
    Count = v54[7].Count;
    if ( !Count )
      goto LABEL_65;
    if ( (*(_DWORD *)(Count + 12) & 8) == 0 )
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
      v45[3] = v25[7].Count;
      goto LABEL_67;
    }
    if ( (unsigned int)v7 <= 1 )
      goto LABEL_22;
    if ( (_DWORD)v7 == 3 )
    {
      v48 = v67;
      v49 = (v67 >> 6) & 0xFFFFFF;
      v23 = v67 >> 30;
      v50 = *((_DWORD *)v60 + 60);
      if ( (unsigned int)v49 < v50
        && (v24 = *((_QWORD *)v60 + 28),
            v22 = *(unsigned int *)(v24 + 16 * v49 + 8),
            (_DWORD)v23 == ((*(_DWORD *)(v24 + 16 * v49 + 8) >> 5) & 3))
        && (v22 & 0x2000) == 0
        && (v22 & 0x1F) != 0
        && (*(_BYTE *)(v24 + 16LL * (unsigned int)v49 + 8) & 0x1F) == 9 )
      {
        v8 = *(DXGKEYEDMUTEX **)(v24 + 16LL * (unsigned int)v49);
      }
      else
      {
        v8 = 0LL;
      }
      if ( v8 )
      {
        if ( (*((_DWORD *)v8 + 37) & 1) == 0 )
        {
          _InterlockedIncrement(&dword_1C0060E1C);
          v46 = WdLogNewEntry5_WdError(v23);
          *(_QWORD *)(v46 + 24) = v8;
LABEL_69:
          LODWORD(v32) = -1073741811;
          *(_QWORD *)(v46 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v46);
          goto LABEL_70;
        }
        v48 = v68;
        v51 = (v68 >> 6) & 0xFFFFFF;
        v24 = v68 >> 30;
        if ( (unsigned int)v51 < v50
          && (v22 = *((_QWORD *)v60 + 28),
              v23 = *(unsigned int *)(v22 + 16 * v51 + 8),
              (_DWORD)v24 == ((*(_DWORD *)(v22 + 16 * v51 + 8) >> 5) & 3))
          && (v23 & 0x2000) == 0
          && (v23 & 0x1F) != 0
          && (*(_BYTE *)(v22 + 16LL * (unsigned int)v51 + 8) & 0x1F) == 8 )
        {
          v19 = *(_QWORD *)(v22 + 16LL * (unsigned int)v51);
        }
        else
        {
          v19 = 0LL;
        }
        if ( v19 )
        {
          if ( (*(_DWORD *)(v19 + 164) & 2) != 0 )
          {
LABEL_22:
            _m_prefetchw((const void *)(Count + 60));
            v27 = *(_DWORD *)(Count + 60);
            do
            {
              if ( !v27 )
              {
                v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
                v45[3] = v66;
                v45[5] = 469LL;
                goto LABEL_67;
              }
              v23 = (unsigned int)(v27 + 1);
              v28 = v27;
              v27 = _InterlockedCompareExchange((volatile signed __int32 *)(Count + 60), v23, v27);
            }
            while ( v28 != v27 );
            if ( v8 )
              DXGKEYEDMUTEX::AcquireReference(v8);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v61);
            if ( v19 )
              _InterlockedIncrement((volatile signed __int32 *)(v19 + 24));
            LOBYTE(v30) = 1;
            LOBYTE(v29) = 1;
            LODWORD(v32) = ObCreateObject(v29, g_pDxgkSharedAllocationObjectType, v63, v30, 0LL, 40, 0, 0, &Object);
            if ( (int)v32 >= 0 )
            {
              v33 = Object;
              ADAPTER_RENDER::AddNtSharedAllocObject(*(ADAPTER_RENDER **)(Count + 72), (struct _LIST_ENTRY *)Object);
              for ( i = *(_QWORD **)(Count + 128); i != (_QWORD *)(Count + 128); i = (_QWORD *)*i )
              {
                if ( (*((_DWORD *)i - 11) & 0x4000) != 0 )
                  _guard_dispatch_icall_fptr();
              }
              v33[2] = Count;
              _InterlockedIncrement((volatile signed __int32 *)(Count + 56));
              v33[3] = v8;
              v33[4] = v19;
              if ( v56 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v55);
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v54);
              Current = v60;
              goto LABEL_35;
            }
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(Count + 60), 0xFFFFFFFF) == 1 )
              DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)Count, 0LL, 0);
            if ( v8 )
              DXGKEYEDMUTEX::ReleaseReference(v8);
            if ( v19 )
            {
              v47 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v31);
              DXGGLOBAL::DestroySyncObject(v47, (struct DXGSYNCOBJECT *)v19, 0);
            }
LABEL_71:
            if ( v56 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v55);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v54);
LABEL_39:
            if ( (int)v32 >= 0 )
              goto LABEL_40;
            goto LABEL_104;
          }
          _InterlockedIncrement(&dword_1C0060E1C);
          v46 = WdLogNewEntry5_WdError(v23);
          *(_QWORD *)(v46 + 24) = v19;
          goto LABEL_69;
        }
      }
      v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
      v45[3] = v48;
    }
    else
    {
LABEL_65:
      v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
      v45[3] = v12;
    }
LABEL_67:
    LODWORD(v32) = -1073741811;
    v45[4] = -1073741811LL;
    WdLogEvent5_WdWarning(v45);
LABEL_70:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v61);
    goto LABEL_71;
  }
  if ( EntryType == 11 || EntryType == 8 )
  {
    if ( (_DWORD)v7 == 1 )
    {
      LODWORD(v32) = CreateSharedSyncNtObject(EntryType, (unsigned int)v12, a3, &Object);
      if ( (int)v32 < 0 )
      {
        if ( !Object )
          goto LABEL_39;
        v44 = WdLogNewEntry5_WdAssertion(v39);
        *(_QWORD *)(v44 + 24) = 564LL;
        goto LABEL_64;
      }
LABEL_35:
      inserted = ObInsertObject(Object, 0LL, DesiredAccess, 0, 0LL, &Handle);
      v32 = inserted;
      if ( inserted < 0 )
      {
        v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v38);
        v52[3] = Object;
        v52[4] = Current;
        v52[5] = v32;
        WdLogEvent5_WdWarning(v52);
        Object = 0LL;
      }
      else
      {
        v39 = MmUserProbeAddress;
        v40 = (_QWORD *)v64;
        if ( v64 >= MmUserProbeAddress )
          v40 = (_QWORD *)MmUserProbeAddress;
        *v40 = Handle;
      }
      goto LABEL_39;
    }
LABEL_56:
    v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
    v43[3] = v12;
    LODWORD(v32) = -1073741811;
    v43[4] = -1073741811LL;
    goto LABEL_57;
  }
  v17 = 14LL;
  if ( EntryType == 14 )
  {
    if ( (_DWORD)v7 == 1 )
    {
      LODWORD(v32) = CreateSharedProtectedSessionNtObject(14LL, (unsigned int)v12, a3, &Object);
      if ( (int)v32 < 0 )
      {
        if ( !Object )
          goto LABEL_39;
        v44 = WdLogNewEntry5_WdAssertion(v39);
        *(_QWORD *)(v44 + 24) = 587LL;
LABEL_64:
        WdLogEvent5_WdAssertion(v44);
        goto LABEL_39;
      }
      goto LABEL_35;
    }
    goto LABEL_56;
  }
  v43 = (_QWORD *)WdLogNewEntry5_WdWarning(14LL, v16, v18);
  v43[3] = v12;
  v43[4] = (int)EntryType;
  LODWORD(v32) = -1073741811;
  v43[5] = -1073741811LL;
LABEL_57:
  WdLogEvent5_WdWarning(v43);
LABEL_104:
  v39 = (__int64)Handle;
  if ( Handle )
    NtClose(Handle);
LABEL_40:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v39, &EventProfilerExit, v38, 2074);
  return (unsigned int)v32;
}
