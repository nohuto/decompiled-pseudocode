/*
 * XREFs of ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C01B1F48
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00E9BB8 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00EA198 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0154690 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B1460 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
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
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int CddPrimaryShareResourceHandle; // r12d
  __int64 v21; // r15
  int v22; // r13d
  unsigned int v23; // eax
  __int64 v24; // r14
  __int64 v25; // rcx
  char *v26; // rsi
  _BYTE *PoolWithTag; // rcx
  __int64 v28; // r14
  struct _EX_RUNDOWN_REF *v29; // r9
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rdx
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rsi
  __int64 v48; // rax
  unsigned int v49; // [rsp+20h] [rbp-E0h]
  unsigned int v50; // [rsp+30h] [rbp-D0h]
  _DWORD v53[10]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v54[14]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v55; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v56[320]; // [rsp+F8h] [rbp-8h] BYREF
  int v57; // [rsp+238h] [rbp+138h]

  v4 = a4;
  v5 = a3;
  v7 = a2;
  v8 = *(DXGADAPTER ***)(*((_QWORD *)this + 211) + 2456LL);
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 8674LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 8675LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v8[2]) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v14 + 24) = 8676LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *((_QWORD *)this + v7 + 60);
  v16 = v7;
  v17 = v15;
  if ( v15 && *((_DWORD *)this + 82) == 1 )
  {
    if ( (*(_DWORD *)(v15 + 4) & 1) == 0 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v18 + 24) = 8685LL;
      WdLogEvent5_WdAssertion(v18);
      v17 = *((_QWORD *)this + v7 + 60);
    }
    if ( !*(_DWORD *)(*(_QWORD *)(v17 + 24) + 16LL) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v19 + 24) = 8686LL;
      WdLogEvent5_WdAssertion(v19);
      v17 = *((_QWORD *)this + v7 + 60);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 24) + 48LL) + 4LL) & 0x10) != 0 )
    {
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
      v17 = *((_QWORD *)this + v7 + 60);
    }
  }
  if ( !v17 )
  {
    CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(v8, v7);
    if ( !CddPrimaryShareResourceHandle )
      goto LABEL_41;
    memset(v53, 0, 0x20uLL);
    v53[1] = CddPrimaryShareResourceHandle;
    if ( (int)DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>((__int64)this, v53, CddPrimaryShareResourceHandle) < 0 )
      goto LABEL_41;
    v21 = v53[5];
    v22 = v53[6];
    v23 = v53[5] + v53[6];
    if ( (unsigned int)(v53[5] + v53[6]) >= v53[5] )
    {
      v24 = v23;
      v26 = (char *)operator new[](v23, 0x4B677844u, PagedPool);
      if ( v26 )
      {
        memset(v54, 0, 0x48uLL);
        v55 = 0LL;
        v57 = 0;
        v28 = v53[7];
        if ( v53[7] <= 4u )
        {
          PoolWithTag = v56;
          v55 = v56;
        }
        else
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / v53[7] < 0x50 )
            goto LABEL_37;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 80LL * v53[7], 0x4B677844u);
          v55 = PoolWithTag;
        }
        v57 = v28;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 80 * v28);
          if ( v55 )
          {
            LODWORD(v54[0]) = 0;
            HIDWORD(v54[0]) = CddPrimaryShareResourceHandle;
            LODWORD(v54[1]) = v28;
            v54[2] = v55;
            if ( v22 )
              v54[5] = &v26[v21];
            else
              v54[5] = 0LL;
            LODWORD(v54[6]) = v22;
            v54[7] = v26;
            LODWORD(v54[8]) = v21;
            if ( v53[4] )
            {
              v30 = WdLogNewEntry5_WdAssertion(PoolWithTag);
              *(_QWORD *)(v30 + 24) = 8749LL;
              WdLogEvent5_WdAssertion(v30);
            }
            if ( (int)DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                        this,
                        (__int64)v54,
                        CddPrimaryShareResourceHandle,
                        v29,
                        0,
                        0LL,
                        v50,
                        0LL,
                        0LL,
                        0LL) < 0 )
            {
              v34 = WdLogNewEntry5_WdEvent(v32, v31);
              *(_QWORD *)(v34 + 24) = this;
              *(_QWORD *)(v34 + 32) = v16;
              WdLogEvent5_WdEvent(v34);
            }
            else
            {
              *((_BYTE *)this + v16 + 464) = 1;
              if ( !*((_QWORD *)this + v16 + 60) )
              {
                v33 = WdLogNewEntry5_WdAssertion(v32);
                *(_QWORD *)(v33 + 24) = 8760LL;
                WdLogEvent5_WdAssertion(v33);
              }
            }
            operator delete[](v26);
            PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v55);
            goto LABEL_40;
          }
        }
LABEL_37:
        v35 = WdLogNewEntry5_WdLowResource(PoolWithTag);
        *(_QWORD *)(v35 + 24) = 8727LL;
        WdLogEvent5_WdLowResource(v35);
        operator delete[](v26);
        PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v55);
        return 0LL;
      }
      v37 = WdLogNewEntry5_WdLowResource(v25);
      *(_QWORD *)(v37 + 24) = this;
      *(_QWORD *)(v37 + 32) = v24;
      WdLogEvent5_WdLowResource(v37);
    }
LABEL_40:
    v5 = a3;
LABEL_41:
    v4 = a4;
  }
  v38 = *((_QWORD *)this + v16 + 60);
  if ( !v38 )
    return 0LL;
  if ( (*(_DWORD *)(v38 + 4) & 1) == 0 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v38);
    *(_QWORD *)(v39 + 24) = 8780LL;
    WdLogEvent5_WdAssertion(v39);
    v38 = *((_QWORD *)this + v16 + 60);
  }
  if ( !*(_DWORD *)(*(_QWORD *)(v38 + 24) + 16LL) )
  {
    v40 = WdLogNewEntry5_WdAssertion(v38);
    *(_QWORD *)(v40 + 24) = 8781LL;
    WdLogEvent5_WdAssertion(v40);
  }
  if ( v5 )
  {
    memset(v54, 0, 0x68uLL);
    v41 = (_QWORD *)*((_QWORD *)this + 2);
    v54[7] = 1LL;
    LOBYTE(v49) = 0;
    v54[2] = *(_QWORD *)(v41[2] + 2320LL);
    v42 = *((_QWORD *)this + v16 + 60);
    v54[3] = *(_QWORD *)(v41[2] + 2328LL);
    v43 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, unsigned int, int))(*(_QWORD *)(v41[68] + 8LL)
                                                                                         + 792LL))(
            v41[69],
            0LL,
            *(_QWORD *)(*(_QWORD *)(v42 + 24) + 24LL),
            v54,
            v49,
            v4);
    v47 = v43;
    if ( v43 < 0 )
    {
      v48 = WdLogNewEntry5_WdWarning(v45, v44, v46);
      *(_QWORD *)(v48 + 24) = v47;
      WdLogEvent5_WdWarning(v48);
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
      return 0LL;
    }
  }
  return *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + v16 + 60) + 24LL) + 16LL);
}
