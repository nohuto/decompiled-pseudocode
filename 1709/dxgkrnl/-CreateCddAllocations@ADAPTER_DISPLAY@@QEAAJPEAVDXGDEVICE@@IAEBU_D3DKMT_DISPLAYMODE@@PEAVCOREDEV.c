/*
 * XREFs of ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00AE140
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C007B478 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C007DCE0 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BB5F0 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0007644 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00833BC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009D810 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009DD6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00ADF10 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00AEBD0 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C00AF5B8 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCddAllocations(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const struct _D3DKMT_DISPLAYMODE *a4,
        PERESOURCE **a5)
{
  PERESOURCE **v5; // r15
  __int64 v6; // rdi
  const struct _D3DKMT_DISPLAYMODE *v9; // rsi
  int v10; // r13d
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct DXGPROCESS *Current; // rax
  PERESOURCE *v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGPROCESS *v19; // rax
  __int64 v20; // r8
  struct _LIST_ENTRY *Flink; // rcx
  PERESOURCE *v22; // rax
  UINT Width; // edx
  UINT Height; // r8d
  __int64 v25; // rax
  __int64 v26; // rcx
  int StandardAllocation; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r15
  PERESOURCE *v32; // rax
  unsigned int v33; // eax
  __int64 v34; // rsi
  unsigned int *v35; // rdi
  unsigned int v36; // r12d
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // ecx
  struct _ERESOURCE *v40; // r15
  ADAPTER_RENDER *v41; // r8
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r15
  UINT v47; // eax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  unsigned int v52; // r14d
  int v53; // ecx
  __int64 v54; // rax
  __int64 v55; // rdx
  int v56; // r8d
  struct _ERESOURCE *v57; // r14
  __int64 v58; // rcx
  PERESOURCE *v60; // rcx
  PERESOURCE *v61; // rax
  PERESOURCE *v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  ERESOURCE_THREAD OwnerThread; // rdx
  ADAPTER_RENDER *v68; // rcx
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r15
  _QWORD *v74; // rax
  int v75; // eax
  __int64 v76; // rcx
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  PERESOURCE *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  ERESOURCE_THREAD v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  _QWORD *v86; // rax
  _QWORD *v87; // rax
  PERESOURCE *v88; // rax
  unsigned int v89; // eax
  __int64 v90; // rdi
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  int v96; // [rsp+34h] [rbp-CCh]
  struct DXGPROCESS *v97; // [rsp+40h] [rbp-C0h]
  __int64 v98; // [rsp+48h] [rbp-B8h] BYREF
  struct _ERESOURCE *v99; // [rsp+50h] [rbp-B0h]
  __int64 v100; // [rsp+58h] [rbp-A8h]
  __int64 v101; // [rsp+60h] [rbp-A0h]
  const struct _D3DKMT_DISPLAYMODE *v102; // [rsp+68h] [rbp-98h]
  struct _DXGKARG_DESCRIBEALLOCATION v103; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v104[54]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v105; // [rsp+250h] [rbp+150h] BYREF
  __int64 v106; // [rsp+258h] [rbp+158h]
  UINT v107; // [rsp+260h] [rbp+160h] BYREF
  __int64 v108; // [rsp+264h] [rbp+164h]
  D3DDDI_RATIONAL RefreshRate; // [rsp+26Ch] [rbp+16Ch]
  int v110; // [rsp+274h] [rbp+174h]

  v5 = a5;
  v6 = a3;
  v98 = 0LL;
  v99 = 0LL;
  v9 = a4;
  v102 = a4;
  memset(v104, 0, 0x134uLL);
  memset(&v104[39], 0, 120);
  memset(&v103, 0, sizeof(v103));
  v10 = 0;
  v96 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2])
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v63 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v63 + 24) = 723LL;
    WdLogEvent5_WdAssertion(v63);
  }
  Current = DXGPROCESS::GetCurrent(v11, v12);
  v14 = this[14];
  v15 = v6;
  v105 = v6;
  v16 = 3760 * v6;
  v97 = Current;
  v101 = v16;
  if ( !DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)((char *)v14 + v16)) )
  {
    v64 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v64 + 24) = this[2];
    *(_QWORD *)(v64 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v64);
    return 3221225485LL;
  }
  v19 = DXGPROCESS::GetCurrent(v18, v17);
  Flink = (*(PERESOURCE *)((char *)this[14] + v16 + 24))->SystemResourcesList.Flink;
  if ( (struct _LIST_ENTRY *)*((_QWORD *)v19 + 6) != Flink[1162].Flink )
  {
    v65 = WdLogNewEntry5_WdAssertion(Flink);
    *(_QWORD *)(v65 + 24) = 743LL;
    WdLogEvent5_WdAssertion(v65);
  }
  v22 = this[14];
  if ( !*(PERESOURCE *)((char *)v22 + v16 + 88) )
    goto LABEL_7;
  if ( !*(PERESOURCE *)((char *)v22 + v16 + 600) )
  {
    v66 = WdLogNewEntry5_WdAssertion(Flink);
    *(_QWORD *)(v66 + 24) = 754LL;
    WdLogEvent5_WdAssertion(v66);
  }
  OwnerThread = (*(PERESOURCE *)((char *)this[14] + v16 + 88))->OwnerEntry.OwnerThread;
  if ( (*(_DWORD *)(OwnerThread + 4) & 0x10) == 0 )
  {
    v68 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
    v103.hAllocation = *(HANDLE *)(OwnerThread + 16);
    v69 = ADAPTER_RENDER::DdiDescribeAllocation(v68, &v103, v20);
    v73 = v69;
    if ( v69 >= 0 )
    {
      if ( v103.Width == v9->Width
        && v103.Height == v9->Height
        && v103.Format == D3DDDIFMT_A8R8G8B8
        && v103.RefreshRate.Numerator == v9->RefreshRate.Numerator
        && v103.RefreshRate.Denominator == v9->RefreshRate.Denominator
        && *(_DWORD *)((char *)this[14] + v16 + 1040) == v9->DisplayOrientation )
      {
        return 0LL;
      }
    }
    else
    {
      v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v71, v70, v72);
      v74[3] = a2;
      v74[4] = *(PERESOURCE *)((char *)this[14] + v16 + 88);
      v74[5] = v15;
      v74[6] = v73;
      WdLogEvent5_WdWarning(v74);
    }
  }
  v75 = ADAPTER_DISPLAY::DestroyCddAllocations((ADAPTER_DISPLAY *)this, a2, v15);
  v31 = v75;
  if ( v75 >= 0 )
  {
    v79 = this[14];
    if ( *(PERESOURCE *)((char *)v79 + v16 + 88) || *(PERESOURCE *)((char *)v79 + v16 + 600) )
    {
      v80 = WdLogNewEntry5_WdAssertion(v76);
      *(_QWORD *)(v80 + 24) = 807LL;
      WdLogEvent5_WdAssertion(v80);
    }
    v5 = a5;
LABEL_7:
    Width = v9->Width;
    Height = v9->Height;
    v108 = 0LL;
    RefreshRate = v9->RefreshRate;
    v104[3] = &v107;
    v25 = *((_QWORD *)a2 + 2);
    v110 = v15;
    v107 = Width;
    v108 = Height | 0x1500000000LL;
    v26 = *(_QWORD *)(v25 + 16);
    v104[1] = 0LL;
    v104[0] = 2049LL;
    LODWORD(v104[2]) = 1;
    if ( *((_QWORD *)a2 + 209) != v26 && !*((_BYTE *)a2 + 1693) )
    {
      if ( *((_BYTE *)this + 132) || ((v9->DisplayOrientation - 2) & 0xFFFFFFFD) != 0 )
      {
        v10 = 4 * Width;
        HIDWORD(v98) = 4 * Width * Height;
      }
      else
      {
        v10 = 4 * Height;
        HIDWORD(v98) = 4 * Height * Width;
      }
      v96 = v10;
      v104[4] = DxgkCreateDoDPrimarySection;
      v104[5] = &v98;
    }
    StandardAllocation = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v104, v5);
    v31 = StandardAllocation;
    if ( StandardAllocation < 0 )
    {
      v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
      v78[3] = v9->Width;
      v78[4] = v9->Height;
      v78[5] = a2;
      v78[6] = v15;
      v78[7] = v31;
      WdLogEvent5_WdWarning(v78);
    }
    else
    {
      if ( !LODWORD(v104[1]) )
      {
        v81 = WdLogNewEntry5_WdAssertion(v29);
        *(_QWORD *)(v81 + 24) = 877LL;
        WdLogEvent5_WdAssertion(v81);
      }
      if ( !HIDWORD(v104[1]) )
      {
        v82 = WdLogNewEntry5_WdAssertion(v29);
        *(_QWORD *)(v82 + 24) = 879LL;
        WdLogEvent5_WdAssertion(v82);
      }
      v32 = this[2];
      if ( *((int *)v32 + 492) < 0x2000 )
        v33 = 1;
      else
        v33 = *((_DWORD *)v32 + 62);
      if ( v33 )
      {
        v34 = v16 + 88;
        v35 = (unsigned int *)&v104[6] + 1;
        v100 = v33;
        do
        {
          v36 = *v35;
          DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v97 + 200));
          v37 = (v36 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v37 < *((_DWORD *)v97 + 60)
            && (v38 = *((_QWORD *)v97 + 28),
                v39 = *(_DWORD *)(v38 + 16 * v37 + 8),
                ((v36 >> 25) & 0x60) == (*(_BYTE *)(v38 + 16 * v37 + 8) & 0x60))
            && (v39 & 0x2000) == 0
            && (v39 & 0x1F) != 0
            && (*(_BYTE *)(v38 + 16LL * (unsigned int)v37 + 8) & 0x1F) == 5 )
          {
            v40 = *(struct _ERESOURCE **)(v38 + 16LL * (unsigned int)v37);
          }
          else
          {
            v40 = 0LL;
          }
          ExReleasePushLockSharedEx((char *)v97 + 200, 0LL);
          KeLeaveCriticalRegion();
          *(PERESOURCE *)((char *)this[14] + v34) = v40;
          if ( *((_BYTE *)a2 + 1693) )
          {
            v83 = (*(PERESOURCE *)((char *)this[14] + v34))->OwnerEntry.OwnerThread;
            *(_DWORD *)(v83 + 4) |= 2u;
          }
          v34 += 8LL;
          ++v35;
          --v100;
        }
        while ( v100 );
        v16 = v101;
        v9 = v102;
        v10 = v96;
        v15 = v105;
      }
      v41 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
      if ( *((_QWORD *)a2 + 209) != *((_QWORD *)v41 + 2) && !*((_BYTE *)a2 + 1693) )
      {
        *(_DWORD *)((char *)this[14] + v16 + 612) = v98;
        v60 = this[14];
        *(PERESOURCE *)((char *)v60 + v16 + 616) = v99;
        v61 = this[14];
        if ( !*(_DWORD *)((char *)v61 + v16 + 612) || !*(PERESOURCE *)((char *)v61 + v16 + 616) )
        {
          v84 = WdLogNewEntry5_WdAssertion(v60);
          *(_QWORD *)(v84 + 24) = 1017LL;
          WdLogEvent5_WdAssertion(v84);
        }
        v62 = this[14];
        *(PERESOURCE *)((char *)v62 + v16 + 600) = *(PERESOURCE *)((char *)v62 + v16 + 88);
        if ( !v10 )
        {
          v85 = WdLogNewEntry5_WdAssertion(v62);
          *(_QWORD *)(v85 + 24) = 1028LL;
          WdLogEvent5_WdAssertion(v85);
        }
        *(_DWORD *)((char *)this[14] + v16 + 608) = v10;
        *(_DWORD *)((char *)this[14] + v16 + 1056) = 1;
        *(_DWORD *)((char *)this[14] + v16 + 1060) = 1;
        *(_DWORD *)((char *)this[14] + v16 + 1064) = 0;
LABEL_46:
        if ( *(_DWORD *)((char *)this[14] + v16 + 696) == 1 )
          ADAPTER_DISPLAY::RemoveVidPnOwnership((ADAPTER_DISPLAY *)this, a3);
        ADAPTER_DISPLAY::SetCddDisplayMode(this, a3, v9);
        return 0LL;
      }
      v105 = 0LL;
      v106 = 0LL;
      v103.hAllocation = *(HANDLE *)((*(PERESOURCE *)((char *)this[14] + v16 + 88))->OwnerEntry.OwnerThread + 16);
      v42 = ADAPTER_RENDER::DdiDescribeAllocation(v41, &v103, (__int64)v41);
      v46 = v42;
      if ( v42 < 0 )
      {
        v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v43, v45);
        v86[3] = a2;
        v86[4] = *(PERESOURCE *)((char *)this[14] + v16 + 88);
        v86[5] = v15;
        v86[6] = v46;
        WdLogEvent5_WdWarning(v86);
        *(_DWORD *)((char *)this[14] + v16 + 1056) = 1;
        *(_DWORD *)((char *)this[14] + v16 + 1060) = 1;
        *(_DWORD *)((char *)this[14] + v16 + 1064) = 0;
      }
      else
      {
        *(PERESOURCE *)((char *)this[14] + v16 + 1056) = (PERESOURCE)v103.MultisampleMethod;
        *(_DWORD *)((char *)this[14] + v16 + 1064) = v103.PrivateDriverFormatAttribute;
      }
      if ( *((_BYTE *)this + 132) || ((v9->DisplayOrientation - 2) & 0xFFFFFFFD) != 0 )
      {
        LODWORD(v105) = v9->Width;
        v47 = v9->Height;
      }
      else
      {
        LODWORD(v105) = v9->Height;
        v47 = v9->Width;
      }
      HIDWORD(v105) = v47;
      LODWORD(v106) = v9->Format;
      v104[3] = &v105;
      v104[0] = 0LL;
      LODWORD(v104[2]) = 2;
      v48 = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v104, a5);
      v31 = v48;
      if ( v48 >= 0 )
      {
        v52 = HIDWORD(v104[6]);
        if ( !HIDWORD(v104[6]) || !LODWORD(v104[1]) )
        {
          v92 = WdLogNewEntry5_WdAssertion(v50);
          *(_QWORD *)(v92 + 24) = 994LL;
          WdLogEvent5_WdAssertion(v92);
        }
        v53 = HIDWORD(v106);
        if ( !HIDWORD(v106) )
        {
          v93 = WdLogNewEntry5_WdAssertion(0LL);
          *(_QWORD *)(v93 + 24) = 999LL;
          WdLogEvent5_WdAssertion(v93);
          v53 = HIDWORD(v106);
        }
        *(_DWORD *)((char *)this[14] + v16 + 608) = v53;
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v97 + 200));
        v54 = (v52 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v54 < *((_DWORD *)v97 + 60)
          && (v55 = *((_QWORD *)v97 + 28),
              v56 = *(_DWORD *)(v55 + 16 * v54 + 8),
              ((v52 >> 25) & 0x60) == (*(_BYTE *)(v55 + 16 * v54 + 8) & 0x60))
          && (v56 & 0x2000) == 0
          && (v56 & 0x1F) != 0
          && (*(_BYTE *)(v55 + 16LL * (unsigned int)v54 + 8) & 0x1F) == 5 )
        {
          v57 = *(struct _ERESOURCE **)(v55 + 16LL * (unsigned int)v54);
        }
        else
        {
          v57 = 0LL;
        }
        ExReleasePushLockSharedEx((char *)v97 + 200, 0LL);
        KeLeaveCriticalRegion();
        *(PERESOURCE *)((char *)this[14] + v16 + 600) = v57;
        if ( !*(PERESOURCE *)((char *)this[14] + v16 + 600) )
        {
          v94 = WdLogNewEntry5_WdAssertion(v58);
          *(_QWORD *)(v94 + 24) = 1003LL;
          WdLogEvent5_WdAssertion(v94);
        }
        *(_DWORD *)((char *)this[14] + v16 + 612) = 0;
        *(PERESOURCE *)((char *)this[14] + v16 + 616) = 0LL;
        goto LABEL_46;
      }
      v87 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v49, v51);
      v87[3] = (unsigned int)v105;
      v87[4] = HIDWORD(v105);
      v87[5] = a2;
      v87[6] = v15;
      v87[7] = v31;
      WdLogEvent5_WdWarning(v87);
      DXGDEVICE::DestroyAllocationInternal(
        a2,
        0,
        0LL,
        (struct DXGRESOURCE *)(*(PERESOURCE *)((char *)this[14] + v16 + 88))->ExclusiveWaiters,
        0LL,
        DXGDEVICE::DestroyFlagsDefault);
      v88 = this[2];
      if ( *((int *)v88 + 492) < 0x2000 )
        v89 = 1;
      else
        v89 = *((_DWORD *)v88 + 62);
      if ( v89 )
      {
        v90 = v16 + 88;
        v91 = v89;
        do
        {
          *(PERESOURCE *)((char *)this[14] + v90) = 0LL;
          v90 += 8LL;
          --v91;
        }
        while ( v91 );
      }
    }
    return (unsigned int)v31;
  }
  v77 = (_QWORD *)WdLogNewEntry5_WdError(v76);
  v77[3] = a2;
  v77[4] = v15;
  v77[5] = v31;
  WdLogEvent5_WdError(v77);
  return (unsigned int)v31;
}
