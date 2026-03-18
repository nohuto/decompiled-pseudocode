/*
 * XREFs of ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C01B60AC
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00958D4 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0095E9C (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0174E48 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B5610 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenCddPrimaryHandle(DXGDEVICE *this, unsigned int a2, char a3, int a4)
{
  int v4; // r12d
  char v5; // r15
  __int64 v7; // r14
  DXGADAPTER **v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int CddPrimaryShareResourceHandle; // r15d
  __int64 v21; // r12
  int v22; // r13d
  unsigned int v23; // eax
  __int64 v24; // rsi
  __int64 v25; // rcx
  char *v26; // r14
  _BYTE *PoolWithTag; // rcx
  __int64 v28; // rsi
  struct _EX_RUNDOWN_REF *v29; // r9
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  _QWORD *v44; // rdx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rsi
  __int64 v51; // rax
  unsigned int v52; // [rsp+20h] [rbp-E0h]
  unsigned int v53; // [rsp+30h] [rbp-D0h]
  _DWORD v56[10]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v57[14]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v58; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v59[320]; // [rsp+F8h] [rbp-8h] BYREF
  int v60; // [rsp+238h] [rbp+138h]

  v4 = a4;
  v5 = a3;
  v7 = a2;
  v8 = *(DXGADAPTER ***)(*((_QWORD *)this + 209) + 2304LL);
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 8520LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 8521LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v8[2]) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v14 + 24) = 8522LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *((_QWORD *)this + v7 + 58);
  v16 = v7;
  if ( v15 && *((_DWORD *)this + 82) == 1 )
  {
    if ( (*(_DWORD *)(v15 + 4) & 1) == 0 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v17 + 24) = 8531LL;
      WdLogEvent5_WdAssertion(v17);
    }
    v18 = *(_QWORD *)(*((_QWORD *)this + v7 + 58) + 24LL);
    if ( !*(_DWORD *)(v18 + 16) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v19 + 24) = 8532LL;
      WdLogEvent5_WdAssertion(v19);
    }
    v13 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + v7 + 58) + 24LL) + 48LL) + 4LL);
    if ( (v13 & 0x10) != 0 )
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
  }
  if ( !*((_QWORD *)this + v7 + 58) )
  {
    CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(v8, v7);
    if ( !CddPrimaryShareResourceHandle )
      goto LABEL_41;
    memset(v56, 0, 0x20uLL);
    v56[1] = CddPrimaryShareResourceHandle;
    if ( (int)DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>((__int64)this, v56, CddPrimaryShareResourceHandle) < 0 )
      goto LABEL_41;
    v21 = v56[5];
    v22 = v56[6];
    v23 = v56[5] + v56[6];
    if ( (unsigned int)(v56[5] + v56[6]) >= v56[5] )
    {
      v24 = v23;
      v26 = (char *)operator new(v23, 0x4B677844u, PagedPool);
      if ( v26 )
      {
        memset(v57, 0, 0x48uLL);
        v58 = 0LL;
        v60 = 0;
        v28 = v56[7];
        if ( v56[7] <= 4u )
        {
          PoolWithTag = v59;
          v58 = v59;
        }
        else
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / v56[7] < 0x50 )
            goto LABEL_37;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 80LL * v56[7], 0x4B677844u);
          v58 = PoolWithTag;
        }
        v60 = v28;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 80 * v28);
          if ( v58 )
          {
            LODWORD(v57[0]) = 0;
            HIDWORD(v57[0]) = CddPrimaryShareResourceHandle;
            LODWORD(v57[1]) = v28;
            v57[2] = v58;
            if ( v22 )
              v57[5] = &v26[v21];
            else
              v57[5] = 0LL;
            LODWORD(v57[6]) = v22;
            v57[7] = v26;
            LODWORD(v57[8]) = v21;
            if ( v56[4] )
            {
              v30 = WdLogNewEntry5_WdAssertion(PoolWithTag);
              *(_QWORD *)(v30 + 24) = 8595LL;
              WdLogEvent5_WdAssertion(v30);
            }
            if ( (int)DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                        this,
                        (__int64)v57,
                        CddPrimaryShareResourceHandle,
                        v29,
                        0,
                        0LL,
                        v53,
                        0LL,
                        0LL,
                        0LL) < 0 )
            {
              v36 = WdLogNewEntry5_WdEvent(v32, v31, v33, v34);
              *(_QWORD *)(v36 + 24) = this;
              *(_QWORD *)(v36 + 32) = v16;
              WdLogEvent5_WdEvent(v36);
            }
            else
            {
              *((_BYTE *)this + v16 + 448) = 1;
              if ( !*((_QWORD *)this + v16 + 58) )
              {
                v35 = WdLogNewEntry5_WdAssertion(v32);
                *(_QWORD *)(v35 + 24) = 8606LL;
                WdLogEvent5_WdAssertion(v35);
              }
            }
            ExFreePoolWithTag(v26, 0);
            PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v58);
            goto LABEL_40;
          }
        }
LABEL_37:
        v37 = WdLogNewEntry5_WdLowResource(PoolWithTag);
        *(_QWORD *)(v37 + 24) = 8573LL;
        WdLogEvent5_WdLowResource(v37);
        ExFreePoolWithTag(v26, 0);
        PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v58);
        return 0LL;
      }
      v39 = WdLogNewEntry5_WdLowResource(v25);
      *(_QWORD *)(v39 + 24) = this;
      *(_QWORD *)(v39 + 32) = v24;
      WdLogEvent5_WdLowResource(v39);
    }
LABEL_40:
    v4 = a4;
LABEL_41:
    v5 = a3;
  }
  v40 = *((_QWORD *)this + v16 + 58);
  if ( !v40 )
    return 0LL;
  if ( (*(_DWORD *)(v40 + 4) & 1) == 0 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v41 + 24) = 8626LL;
    WdLogEvent5_WdAssertion(v41);
  }
  v42 = *(_QWORD *)(*((_QWORD *)this + v16 + 58) + 24LL);
  if ( !*(_DWORD *)(v42 + 16) )
  {
    v43 = WdLogNewEntry5_WdAssertion(v42);
    *(_QWORD *)(v43 + 24) = 8627LL;
    WdLogEvent5_WdAssertion(v43);
  }
  if ( v5 )
  {
    memset(v57, 0, 0x68uLL);
    v57[7] |= 1uLL;
    v44 = (_QWORD *)*((_QWORD *)this + 2);
    LOBYTE(v52) = 0;
    v57[2] = *(_QWORD *)(v44[2] + 2184LL);
    v45 = *((_QWORD *)this + v16 + 58);
    v57[3] = *(_QWORD *)(v44[2] + 2192LL);
    v46 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, unsigned int, int))(*(_QWORD *)(v44[66] + 8LL)
                                                                                         + 792LL))(
            v44[67],
            0LL,
            *(_QWORD *)(*(_QWORD *)(v45 + 24) + 24LL),
            v57,
            v52,
            v4);
    v50 = v46;
    if ( v46 < 0 )
    {
      v51 = WdLogNewEntry5_WdWarning(v48, v47, v49);
      *(_QWORD *)(v51 + 24) = v50;
      WdLogEvent5_WdWarning(v51);
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
      return 0LL;
    }
  }
  return *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + v16 + 58) + 24LL) + 16LL);
}
