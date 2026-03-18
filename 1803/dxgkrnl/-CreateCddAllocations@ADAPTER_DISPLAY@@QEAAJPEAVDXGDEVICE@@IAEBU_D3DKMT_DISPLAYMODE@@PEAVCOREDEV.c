/*
 * XREFs of ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0151310
 * Callers:
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010F42C (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C0152708 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C021CE80 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0028090 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F1F88 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F2480 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C010D918 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C010DFB4 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C010EEAC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01569C8 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCddAllocations(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const struct _D3DKMT_DISPLAYMODE *a4,
        PERESOURCE **a5)
{
  PERESOURCE **v5; // r15
  __int64 v6; // r12
  const struct _D3DKMT_DISPLAYMODE *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rdi
  DISPLAY_SOURCE *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  struct DXGPROCESS *v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  void *v26; // rax
  ADAPTER_RENDER *v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r15
  _QWORD *v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r15
  _QWORD *v37; // rax
  PERESOURCE *v38; // rax
  __int64 v39; // rax
  UINT Width; // edx
  UINT Height; // r8d
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // eax
  int StandardAllocation; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  _QWORD *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  PERESOURCE *v52; // rax
  unsigned int v53; // eax
  __int64 v54; // r12
  __int64 v55; // r13
  DXGPUSHLOCK *v56; // rdi
  unsigned int *v57; // rsi
  unsigned int v58; // r15d
  __int64 v59; // rax
  __int64 v60; // r8
  int v61; // ecx
  struct _ERESOURCE *v62; // r15
  ERESOURCE_THREAD OwnerThread; // rax
  ADAPTER_RENDER *v64; // r8
  PERESOURCE *v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdi
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r15
  _QWORD *v74; // rax
  UINT v75; // eax
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  _QWORD *v80; // rax
  PERESOURCE *v81; // rax
  unsigned int v82; // eax
  __int64 v83; // rdi
  __int64 v84; // rcx
  unsigned int v85; // r14d
  __int64 v86; // rax
  int v87; // ecx
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // r8
  int v91; // ecx
  struct _ERESOURCE *v92; // r14
  __int64 v93; // rcx
  PERESOURCE *v94; // rax
  __int64 v95; // rax
  int v97; // [rsp+34h] [rbp-CCh]
  struct DXGPROCESS *Current; // [rsp+40h] [rbp-C0h]
  __int64 v99; // [rsp+48h] [rbp-B8h] BYREF
  struct _ERESOURCE *v100; // [rsp+50h] [rbp-B0h]
  __int64 v101; // [rsp+60h] [rbp-A0h]
  const struct _D3DKMT_DISPLAYMODE *v102; // [rsp+68h] [rbp-98h]
  struct _DXGKARG_DESCRIBEALLOCATION v103; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v104[54]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v105; // [rsp+250h] [rbp+150h] BYREF
  __int64 v106; // [rsp+258h] [rbp+158h]
  unsigned __int64 v107; // [rsp+260h] [rbp+160h] BYREF
  __int128 v108; // [rsp+268h] [rbp+168h]

  v5 = a5;
  v6 = a3;
  v99 = 0LL;
  v100 = 0LL;
  v9 = a4;
  v102 = a4;
  memset(v104, 0, 0x134uLL);
  memset(&v104[39], 0, 120);
  memset(&v103, 0, sizeof(v103));
  v97 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2])
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v12 + 24) = 724LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = v6;
  v14 = 3760 * v6;
  Current = DXGPROCESS::GetCurrent(v10, v11);
  v15 = (DISPLAY_SOURCE *)&this[14][470 * v6];
  v105 = v6;
  v101 = 3760 * v6;
  if ( !DISPLAY_SOURCE::CheckSessionOwnership(v15) )
  {
    v18 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v18 + 24) = this[2];
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
  v20 = DXGPROCESS::GetCurrent(v17, v16);
  v21 = (__int64)this[14];
  v22 = *(_QWORD *)(**(_QWORD **)(v21 + v14 + 24) + 18592LL);
  if ( *((_QWORD *)v20 + 7) != v22 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v22);
    *(_QWORD *)(v23 + 24) = 744LL;
    WdLogEvent5_WdAssertion(v23);
    v21 = (__int64)this[14];
  }
  if ( *(_QWORD *)(v21 + v14 + 88) )
  {
    if ( !*(_QWORD *)(v21 + v14 + 600) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v24 + 24) = 755LL;
      WdLogEvent5_WdAssertion(v24);
      v21 = (__int64)this[14];
    }
    v25 = *(_QWORD *)(*(_QWORD *)(v21 + v14 + 88) + 48LL);
    if ( (*(_DWORD *)(v25 + 4) & 0x10) == 0 )
    {
      v26 = *(void **)(v25 + 16);
      v27 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
      v103.hAllocation = v26;
      v28 = ADAPTER_RENDER::DdiDescribeAllocation(v27, &v103, v21);
      v32 = v28;
      if ( v28 >= 0 )
      {
        if ( v103.Width == v9->Width
          && v103.Height == v9->Height
          && v103.Format == D3DDDIFMT_A8R8G8B8
          && v103.RefreshRate.Numerator == v9->RefreshRate.Numerator
          && v103.RefreshRate.Denominator == v9->RefreshRate.Denominator
          && *(_DWORD *)((char *)this[14] + v14 + 1040) == v9->DisplayOrientation )
        {
          return 0LL;
        }
      }
      else
      {
        v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31);
        v33[3] = a2;
        v33[4] = *(PERESOURCE *)((char *)this[14] + v14 + 88);
        v33[5] = v6;
        v33[6] = v32;
        WdLogEvent5_WdWarning(v33);
      }
    }
    v34 = ADAPTER_DISPLAY::DestroyCddAllocations((ADAPTER_DISPLAY *)this, a2, v6);
    v36 = v34;
    if ( v34 < 0 )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdError(v35);
      v37[3] = a2;
      v37[4] = v6;
      v37[5] = v36;
      WdLogEvent5_WdError(v37);
      return (unsigned int)v36;
    }
    v38 = this[14];
    if ( *(PERESOURCE *)((char *)v38 + v14 + 88) || *(PERESOURCE *)((char *)v38 + v14 + 600) )
    {
      v39 = WdLogNewEntry5_WdAssertion(v35);
      *(_QWORD *)(v39 + 24) = 808LL;
      WdLogEvent5_WdAssertion(v39);
    }
    v5 = a5;
  }
  Width = v9->Width;
  Height = v9->Height;
  v104[1] = 0LL;
  v107 = 0LL;
  v108 = 0uLL;
  *(D3DDDI_RATIONAL *)((char *)&v108 + 4) = v9->RefreshRate;
  v104[3] = &v107;
  v42 = *((_QWORD *)a2 + 2);
  HIDWORD(v108) = v6;
  v107 = __PAIR64__(Height, Width);
  LODWORD(v108) = 21;
  v43 = *(_QWORD *)(v42 + 16);
  v104[0] = 2049LL;
  LODWORD(v104[2]) = 1;
  if ( *((_QWORD *)a2 + 211) != v43 && (*((_BYTE *)a2 + 1709) & 1) == 0 )
  {
    if ( *((_BYTE *)this + 132) || ((v9->DisplayOrientation - 2) & 0xFFFFFFFD) != 0 )
    {
      v44 = Height * Width;
      Height = Width;
      HIDWORD(v99) = 4 * v44;
    }
    else
    {
      HIDWORD(v99) = 4 * Height * Width;
    }
    v104[4] = DxgkCreateDoDPrimarySection;
    v104[5] = &v99;
    v97 = 4 * Height;
  }
  StandardAllocation = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v104, v5);
  v36 = StandardAllocation;
  if ( StandardAllocation < 0 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, v46, v48);
    v49[3] = v9->Width;
    v49[4] = v9->Height;
    v49[5] = a2;
    v49[6] = v6;
    v49[7] = v36;
    WdLogEvent5_WdWarning(v49);
    return (unsigned int)v36;
  }
  if ( !LODWORD(v104[1]) )
  {
    v50 = WdLogNewEntry5_WdAssertion(v47);
    *(_QWORD *)(v50 + 24) = 878LL;
    WdLogEvent5_WdAssertion(v50);
  }
  if ( !HIDWORD(v104[1]) )
  {
    v51 = WdLogNewEntry5_WdAssertion(v47);
    *(_QWORD *)(v51 + 24) = 880LL;
    WdLogEvent5_WdAssertion(v51);
  }
  v52 = this[2];
  if ( *((int *)v52 + 526) < 0x2000 )
    v53 = 1;
  else
    v53 = *((_DWORD *)v52 + 62);
  if ( v53 )
  {
    v54 = v14 + 88;
    v55 = v53;
    v56 = (struct DXGPROCESS *)((char *)Current + 208);
    v57 = (unsigned int *)&v104[6] + 1;
    do
    {
      v58 = *v57;
      DXGPUSHLOCK::AcquireShared(v56);
      v59 = (v58 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v59 < *((_DWORD *)Current + 62)
        && (v60 = *((_QWORD *)Current + 29),
            v61 = *(_DWORD *)(v60 + 16 * v59 + 8),
            ((v58 >> 25) & 0x60) == (*(_BYTE *)(v60 + 16 * v59 + 8) & 0x60))
        && (v61 & 0x2000) == 0
        && (v61 & 0x1F) == 5 )
      {
        v62 = *(struct _ERESOURCE **)(v60 + 16LL * (unsigned int)v59);
      }
      else
      {
        v62 = 0LL;
      }
      ExReleasePushLockSharedEx(v56, 0LL);
      KeLeaveCriticalRegion();
      *(PERESOURCE *)((char *)this[14] + v54) = v62;
      if ( (*((_BYTE *)a2 + 1709) & 1) != 0 )
      {
        OwnerThread = (*(PERESOURCE *)((char *)this[14] + v54))->OwnerEntry.OwnerThread;
        *(_DWORD *)(OwnerThread + 4) |= 2u;
      }
      v54 += 8LL;
      ++v57;
      --v55;
    }
    while ( v55 );
    v13 = v105;
    v14 = v101;
    v9 = v102;
    v6 = (unsigned int)v105;
  }
  v64 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
  if ( *((_QWORD *)a2 + 211) == *((_QWORD *)v64 + 2) || (*((_BYTE *)a2 + 1709) & 1) != 0 )
  {
    v105 = 0LL;
    v106 = 0LL;
    v68 = 470 * v13;
    v103.hAllocation = *(HANDLE *)(this[14][470 * v13 + 11]->OwnerEntry.OwnerThread + 16);
    v69 = ADAPTER_RENDER::DdiDescribeAllocation(v64, &v103, (__int64)v64);
    v73 = v69;
    if ( v69 >= 0 )
    {
      this[14][v68 + 132] = (PERESOURCE)v103.MultisampleMethod;
      LODWORD(this[14][v68 + 133]) = v103.PrivateDriverFormatAttribute;
    }
    else
    {
      v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v71, v70, v72);
      v74[3] = a2;
      v74[4] = this[14][v68 + 11];
      v74[5] = v13;
      v74[6] = v73;
      WdLogEvent5_WdWarning(v74);
      v6 = v13;
      LODWORD(this[14][v68 + 132]) = 1;
      HIDWORD(this[14][v68 + 132]) = 1;
      LODWORD(this[14][v68 + 133]) = 0;
    }
    if ( *((_BYTE *)this + 132) || ((v9->DisplayOrientation - 2) & 0xFFFFFFFD) != 0 )
    {
      LODWORD(v105) = v9->Width;
      v75 = v9->Height;
    }
    else
    {
      LODWORD(v105) = v9->Height;
      v75 = v9->Width;
    }
    v104[0] = 0LL;
    HIDWORD(v105) = v75;
    LODWORD(v106) = v9->Format;
    v104[3] = &v105;
    LODWORD(v104[2]) = 2;
    v76 = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v104, a5);
    v36 = v76;
    if ( v76 < 0 )
    {
      v80 = (_QWORD *)WdLogNewEntry5_WdWarning(v78, v77, v79);
      v80[3] = (unsigned int)v105;
      v80[4] = HIDWORD(v105);
      v80[5] = a2;
      v80[6] = v6;
      v80[7] = v36;
      WdLogEvent5_WdWarning(v80);
      DXGDEVICE::DestroyAllocationInternal(
        a2,
        0,
        0LL,
        (struct DXGRESOURCE *)this[14][v68 + 11]->ExclusiveWaiters,
        0LL,
        DXGDEVICE::DestroyFlagsDefault);
      v81 = this[2];
      if ( *((int *)v81 + 526) < 0x2000 )
        v82 = 1;
      else
        v82 = *((_DWORD *)v81 + 62);
      if ( v82 )
      {
        v83 = v68 * 8 + 88;
        v84 = v82;
        do
        {
          *(PERESOURCE *)((char *)this[14] + v83) = 0LL;
          v83 += 8LL;
          --v84;
        }
        while ( v84 );
      }
      return (unsigned int)v36;
    }
    v85 = HIDWORD(v104[6]);
    if ( !HIDWORD(v104[6]) || !LODWORD(v104[1]) )
    {
      v86 = WdLogNewEntry5_WdAssertion(v78);
      *(_QWORD *)(v86 + 24) = 995LL;
      WdLogEvent5_WdAssertion(v86);
    }
    v87 = HIDWORD(v106);
    if ( !HIDWORD(v106) )
    {
      v88 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v88 + 24) = 1000LL;
      WdLogEvent5_WdAssertion(v88);
      v87 = HIDWORD(v106);
    }
    LODWORD(this[14][v68 + 76]) = v87;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
    v89 = (v85 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v89 < *((_DWORD *)Current + 62)
      && (v90 = *((_QWORD *)Current + 29),
          v91 = *(_DWORD *)(v90 + 16 * v89 + 8),
          ((v85 >> 25) & 0x60) == (*(_BYTE *)(v90 + 16 * v89 + 8) & 0x60))
      && (v91 & 0x2000) == 0
      && (v91 & 0x1F) == 5 )
    {
      v92 = *(struct _ERESOURCE **)(v90 + 16LL * (unsigned int)v89);
    }
    else
    {
      v92 = 0LL;
    }
    ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
    KeLeaveCriticalRegion();
    this[14][v68 + 75] = v92;
    v94 = this[14];
    if ( !v94[v68 + 75] )
    {
      v95 = WdLogNewEntry5_WdAssertion(v93);
      *(_QWORD *)(v95 + 24) = 1004LL;
      WdLogEvent5_WdAssertion(v95);
      v94 = this[14];
    }
    HIDWORD(v94[v68 + 76]) = 0;
    this[14][v68 + 77] = 0LL;
  }
  else
  {
    *(_DWORD *)((char *)this[14] + v14 + 612) = v99;
    *(PERESOURCE *)((char *)this[14] + v14 + 616) = v100;
    v65 = this[14];
    if ( !*(_DWORD *)((char *)v65 + v14 + 612) || !*(PERESOURCE *)((char *)v65 + v14 + 616) )
    {
      v66 = WdLogNewEntry5_WdAssertion(v65);
      *(_QWORD *)(v66 + 24) = 1018LL;
      WdLogEvent5_WdAssertion(v66);
      v65 = this[14];
    }
    *(PERESOURCE *)((char *)v65 + v14 + 600) = *(PERESOURCE *)((char *)v65 + v14 + 88);
    if ( !v97 )
    {
      v67 = WdLogNewEntry5_WdAssertion(v65);
      *(_QWORD *)(v67 + 24) = 1029LL;
      WdLogEvent5_WdAssertion(v67);
    }
    *(_DWORD *)((char *)this[14] + v14 + 608) = v97;
    *(_DWORD *)((char *)this[14] + v14 + 1056) = 1;
    *(_DWORD *)((char *)this[14] + v14 + 1060) = 1;
    *(_DWORD *)((char *)this[14] + v14 + 1064) = 0;
  }
  if ( LODWORD(this[14][470 * v13 + 87]) == 1 )
    ADAPTER_DISPLAY::RemoveVidPnOwnership((ADAPTER_DISPLAY *)this, a3);
  ADAPTER_DISPLAY::SetCddDisplayMode(this, a3, v9);
  return 0LL;
}
