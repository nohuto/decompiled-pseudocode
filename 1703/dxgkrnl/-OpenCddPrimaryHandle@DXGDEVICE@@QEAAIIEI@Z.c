/*
 * XREFs of ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C019F49C
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0097FE0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00C2264 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00C27FC (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0171294 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C019ECA4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenCddPrimaryHandle(DXGDEVICE *this, unsigned int a2, char a3, int a4)
{
  int v4; // r12d
  char v5; // r15
  __int64 v7; // rsi
  DXGADAPTER **v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned int CddPrimaryShareResourceHandle; // r15d
  __int64 v30; // r12
  int v31; // r13d
  unsigned int v32; // eax
  __int64 v33; // rsi
  __int64 v34; // rcx
  char *v35; // r14
  _BYTE *PoolWithTag; // rcx
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  _QWORD *v55; // rdx
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rsi
  __int64 v63; // rax
  unsigned int v64; // [rsp+20h] [rbp-E0h]
  int v65; // [rsp+30h] [rbp-D0h]
  _DWORD v68[10]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v69[14]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v70; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v71[320]; // [rsp+F8h] [rbp-8h] BYREF
  int v72; // [rsp+238h] [rbp+138h]

  v4 = a4;
  v5 = a3;
  v7 = a2;
  v8 = *(DXGADAPTER ***)(*((_QWORD *)this + 225) + 2280LL);
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v13 + 24) = 7807LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    *(_QWORD *)(v18 + 24) = 7808LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v8[2]) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
    *(_QWORD *)(v23 + 24) = 7809LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v24 = *((_QWORD *)this + v7 + 58);
  v25 = v7;
  if ( v24 && *((_DWORD *)this + 82) == 1 )
  {
    if ( (*(_DWORD *)(v24 + 4) & 1) == 0 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
      *(_QWORD *)(v26 + 24) = 7818LL;
      WdLogEvent5_WdAssertion(v26);
    }
    v27 = *(_QWORD *)(*((_QWORD *)this + v7 + 58) + 24LL);
    if ( !*(_DWORD *)(v27 + 16) )
    {
      v28 = WdLogNewEntry5_WdAssertion(v27, v19, v21, v22);
      *(_QWORD *)(v28 + 24) = 7819LL;
      WdLogEvent5_WdAssertion(v28);
    }
    v20 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + v7 + 58) + 24LL) + 48LL) + 4LL);
    if ( (v20 & 0x10) != 0 )
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
  }
  if ( !*((_QWORD *)this + v7 + 58) )
  {
    CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(v8, (unsigned int)v7, v21, v22);
    if ( !CddPrimaryShareResourceHandle )
      goto LABEL_41;
    memset(v68, 0, 0x20uLL);
    v68[1] = CddPrimaryShareResourceHandle;
    if ( (int)DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>((__int64)this, v68, CddPrimaryShareResourceHandle) < 0 )
      goto LABEL_41;
    v30 = v68[5];
    v31 = v68[6];
    v32 = v68[5] + v68[6];
    if ( (unsigned int)(v68[5] + v68[6]) >= v68[5] )
    {
      v33 = v32;
      v35 = (char *)operator new(v32, 0x4B677844u, PagedPool);
      if ( v35 )
      {
        memset(v69, 0, 0x48uLL);
        v70 = 0LL;
        v72 = 0;
        v37 = v68[7];
        if ( v68[7] <= 4u )
        {
          PoolWithTag = v71;
          v70 = v71;
        }
        else
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / v68[7] < 0x50 )
            goto LABEL_37;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 80LL * v68[7], 0x4B677844u);
          v70 = PoolWithTag;
        }
        v72 = v37;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 80 * v37);
          if ( v70 )
          {
            LODWORD(v69[0]) = 0;
            HIDWORD(v69[0]) = CddPrimaryShareResourceHandle;
            LODWORD(v69[1]) = v37;
            v69[2] = v70;
            if ( v31 )
              v69[5] = &v35[v30];
            else
              v69[5] = 0LL;
            LODWORD(v69[6]) = v31;
            v69[7] = v35;
            LODWORD(v69[8]) = v30;
            if ( v68[4] )
            {
              v41 = WdLogNewEntry5_WdAssertion(PoolWithTag, v38, v39, v40);
              *(_QWORD *)(v41 + 24) = 7882LL;
              WdLogEvent5_WdAssertion(v41);
            }
            if ( (int)DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                        this,
                        (__int64)v69,
                        CddPrimaryShareResourceHandle,
                        v40,
                        0,
                        0LL,
                        v65,
                        0LL,
                        0LL,
                        0LL) < 0 )
            {
              v47 = WdLogNewEntry5_WdEvent(v43);
              *(_QWORD *)(v47 + 24) = this;
              *(_QWORD *)(v47 + 32) = v25;
              WdLogEvent5_WdEvent(v47);
            }
            else
            {
              *((_BYTE *)this + v25 + 448) = 1;
              if ( !*((_QWORD *)this + v25 + 58) )
              {
                v46 = WdLogNewEntry5_WdAssertion(v43, v42, v44, v45);
                *(_QWORD *)(v46 + 24) = 7893LL;
                WdLogEvent5_WdAssertion(v46);
              }
            }
            ExFreePoolWithTag(v35, 0);
            PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v70);
            goto LABEL_40;
          }
        }
LABEL_37:
        v48 = WdLogNewEntry5_WdLowResource(PoolWithTag);
        *(_QWORD *)(v48 + 24) = 7860LL;
        WdLogEvent5_WdLowResource(v48);
        ExFreePoolWithTag(v35, 0);
        PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v70);
        return 0LL;
      }
      v50 = WdLogNewEntry5_WdLowResource(v34);
      *(_QWORD *)(v50 + 24) = this;
      *(_QWORD *)(v50 + 32) = v33;
      WdLogEvent5_WdLowResource(v50);
    }
LABEL_40:
    v4 = a4;
LABEL_41:
    v5 = a3;
  }
  v51 = *((_QWORD *)this + v25 + 58);
  if ( !v51 )
    return 0LL;
  if ( (*(_DWORD *)(v51 + 4) & 1) == 0 )
  {
    v52 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
    *(_QWORD *)(v52 + 24) = 7913LL;
    WdLogEvent5_WdAssertion(v52);
  }
  v53 = *(_QWORD *)(*((_QWORD *)this + v25 + 58) + 24LL);
  if ( !*(_DWORD *)(v53 + 16) )
  {
    v54 = WdLogNewEntry5_WdAssertion(v53, v19, v21, v22);
    *(_QWORD *)(v54 + 24) = 7914LL;
    WdLogEvent5_WdAssertion(v54);
  }
  if ( v5 )
  {
    memset(v69, 0, 0x68uLL);
    v69[7] |= 1uLL;
    v55 = (_QWORD *)*((_QWORD *)this + 2);
    LOBYTE(v64) = 0;
    v69[2] = *(_QWORD *)(v55[2] + 2160LL);
    v56 = *((_QWORD *)this + v25 + 58);
    v69[3] = *(_QWORD *)(v55[2] + 2168LL);
    v57 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, unsigned int, int))(*(_QWORD *)(v55[54] + 8LL)
                                                                                         + 792LL))(
            v55[55],
            0LL,
            *(_QWORD *)(*(_QWORD *)(v56 + 24) + 24LL),
            v69,
            v64,
            v4);
    v62 = v57;
    if ( v57 < 0 )
    {
      v63 = WdLogNewEntry5_WdWarning(v59, v58, v60, v61);
      *(_QWORD *)(v63 + 24) = v62;
      WdLogEvent5_WdWarning(v63);
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
      return 0LL;
    }
  }
  return *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + v25 + 58) + 24LL) + 16LL);
}
