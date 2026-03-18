/*
 * XREFs of ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E8A44
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00887D8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C008ACA0 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     DmmEnablePathsFromVidPnSource @ 0x1C0099FDC (DmmEnablePathsFromVidPnSource.c)
 * Callees:
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C0003A18 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C000B3F8 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C9C30 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00CA174 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00CFC9C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00E8858 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E8F9C (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C00E96E0 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCddAllocations(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const struct _D3DKMT_DISPLAYMODE *a4,
        PERESOURCE **a5)
{
  PERESOURCE **v5; // r12
  __int64 v6; // rdi
  const struct _D3DKMT_DISPLAYMODE *v9; // rsi
  unsigned int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGPROCESS *Current; // rax
  PERESOURCE *v16; // rcx
  __int64 v17; // r13
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct DXGPROCESS *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  PERESOURCE *v26; // rax
  UINT Width; // edx
  UINT Height; // r8d
  int Format; // r9d
  __int64 v30; // rax
  __int64 v31; // rcx
  int StandardAllocation; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r12
  PERESOURCE *v38; // rax
  unsigned int v39; // eax
  __int64 v40; // rsi
  __int64 v41; // rdi
  unsigned int *v42; // r13
  unsigned int v43; // r12d
  unsigned int v44; // ecx
  __int64 v45; // r8
  int v46; // edx
  struct _ERESOURCE *v47; // r12
  ADAPTER_RENDER *v48; // r8
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r15
  UINT v55; // eax
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r15
  unsigned int v62; // r14d
  int v63; // ecx
  unsigned int v64; // ecx
  __int64 v65; // r8
  int v66; // edx
  struct _ERESOURCE *v67; // r14
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  ERESOURCE_THREAD OwnerThread; // rdx
  ADAPTER_RENDER *v78; // rcx
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // r12
  _QWORD *v85; // rax
  int v86; // eax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  _QWORD *v91; // rax
  _QWORD *v92; // rax
  PERESOURCE *v93; // rax
  __int64 v94; // rax
  unsigned int v95; // eax
  int v96; // r8d
  int v97; // edx
  unsigned int BitsPerPixel; // eax
  int v99; // edx
  int v100; // r8d
  __int64 v101; // rax
  __int64 v102; // rax
  ERESOURCE_THREAD v103; // rax
  PERESOURCE *v104; // rcx
  PERESOURCE *v105; // rax
  __int64 v106; // rax
  PERESOURCE *v107; // rcx
  __int64 v108; // rax
  _QWORD *v109; // rax
  _QWORD *v110; // rax
  PERESOURCE *v111; // rax
  unsigned int v112; // eax
  __int64 v113; // rdi
  __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  unsigned int v119; // [rsp+34h] [rbp-CCh]
  struct DXGPROCESS *v120; // [rsp+40h] [rbp-C0h]
  __int64 v121; // [rsp+48h] [rbp-B8h] BYREF
  struct _ERESOURCE *v122; // [rsp+50h] [rbp-B0h]
  __int64 v123; // [rsp+58h] [rbp-A8h]
  const struct _D3DKMT_DISPLAYMODE *v124; // [rsp+60h] [rbp-A0h]
  struct _DXGKARG_DESCRIBEALLOCATION v125; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v126[52]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v127; // [rsp+240h] [rbp+140h] BYREF
  __int64 v128; // [rsp+248h] [rbp+148h]
  UINT v129; // [rsp+250h] [rbp+150h] BYREF
  unsigned __int64 v130; // [rsp+254h] [rbp+154h]
  D3DDDI_RATIONAL RefreshRate; // [rsp+25Ch] [rbp+15Ch]
  int v132; // [rsp+264h] [rbp+164h]

  v5 = a5;
  v6 = a3;
  v121 = 0LL;
  v122 = 0LL;
  v9 = a4;
  v124 = a4;
  memset(v126, 0, 0x198uLL);
  memset(&v125, 0, sizeof(v125));
  v10 = 0;
  v119 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2])
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v73 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v73 + 24) = 278LL;
    WdLogEvent5_WdAssertion(v73);
  }
  Current = DXGPROCESS::GetCurrent(v12);
  v16 = this[14];
  v17 = v6;
  v127 = v6;
  v18 = 3208 * v6;
  v120 = Current;
  v123 = v18;
  if ( !DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)((char *)v16 + v18)) )
  {
    v74 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v74 + 24) = this[2];
    *(_QWORD *)(v74 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v74);
    return 3221225485LL;
  }
  v21 = DXGPROCESS::GetCurrent(v20);
  Flink = (*(PERESOURCE *)((char *)this[14] + v18 + 24))->SystemResourcesList.Flink;
  Blink = Flink[1161].Blink;
  if ( *((struct _LIST_ENTRY **)v21 + 6) != Blink )
  {
    v75 = WdLogNewEntry5_WdAssertion(Flink, Blink, v22, v23);
    *(_QWORD *)(v75 + 24) = 298LL;
    WdLogEvent5_WdAssertion(v75);
  }
  v26 = this[14];
  if ( *(PERESOURCE *)((char *)v26 + v18 + 88) )
  {
    if ( !*(PERESOURCE *)((char *)v26 + v18 + 600) )
    {
      v76 = WdLogNewEntry5_WdAssertion(Flink, Blink, v22, v23);
      *(_QWORD *)(v76 + 24) = 309LL;
      WdLogEvent5_WdAssertion(v76);
    }
    OwnerThread = (*(PERESOURCE *)((char *)this[14] + v18 + 88))->OwnerEntry.OwnerThread;
    if ( (*(_DWORD *)(OwnerThread + 4) & 0x10) == 0 )
    {
      v78 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
      v125.hAllocation = *(HANDLE *)(OwnerThread + 16);
      v79 = ADAPTER_RENDER::DdiDescribeAllocation(v78, &v125, v22);
      v84 = v79;
      if ( v79 >= 0 )
      {
        if ( v125.Width == v9->Width
          && v125.Height == v9->Height
          && v125.Format == v9->Format
          && v125.RefreshRate.Numerator == v9->RefreshRate.Numerator
          && v125.RefreshRate.Denominator == v9->RefreshRate.Denominator
          && *(_DWORD *)((char *)this[14] + v18 + 1000) == v9->DisplayOrientation )
        {
          return 0LL;
        }
      }
      else
      {
        v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v81, v80, v82, v83);
        v85[3] = a2;
        v85[4] = *(PERESOURCE *)((char *)this[14] + v18 + 88);
        v85[5] = v17;
        v85[6] = v84;
        WdLogEvent5_WdWarning(v85);
      }
    }
    v86 = ADAPTER_DISPLAY::DestroyCddAllocations((ADAPTER_DISPLAY *)this, a2, v17);
    v37 = v86;
    if ( v86 < 0 )
    {
      v91 = (_QWORD *)WdLogNewEntry5_WdError(v88, v87);
      v91[3] = a2;
      v91[4] = v17;
      v91[5] = v37;
      WdLogEvent5_WdError(v91);
      return (unsigned int)v37;
    }
    v93 = this[14];
    if ( *(PERESOURCE *)((char *)v93 + v18 + 88) || *(PERESOURCE *)((char *)v93 + v18 + 600) )
    {
      v94 = WdLogNewEntry5_WdAssertion(v88, v87, v89, v90);
      *(_QWORD *)(v94 + 24) = 362LL;
      WdLogEvent5_WdAssertion(v94);
    }
    v5 = a5;
  }
  Width = v9->Width;
  Height = v9->Height;
  Format = v9->Format;
  v130 = 0LL;
  RefreshRate = v9->RefreshRate;
  v126[3] = &v129;
  v30 = *((_QWORD *)a2 + 2);
  v132 = v17;
  v129 = Width;
  v130 = __PAIR64__(Format, Height);
  v31 = *(_QWORD *)(v30 + 16);
  v126[1] = 0LL;
  v126[0] = 2049LL;
  LODWORD(v126[2]) = 1;
  if ( *((_QWORD *)a2 + 225) != v31 && !*((_BYTE *)a2 + 1821) )
  {
    if ( *((_BYTE *)this + 133) || ((v9->DisplayOrientation - 2) & 0xFFFFFFFD) != 0 )
    {
      BitsPerPixel = GetBitsPerPixel(Format);
      v10 = (v99 * (BitsPerPixel >> 3) + 3) & 0xFFFFFFFC;
      HIDWORD(v121) = v10 * v100;
    }
    else
    {
      v95 = GetBitsPerPixel(Format);
      v10 = (v96 * (v95 >> 3) + 3) & 0xFFFFFFFC;
      HIDWORD(v121) = v10 * v97;
    }
    v119 = v10;
    v126[4] = DxgkCreateDoDPrimarySection;
    v126[5] = &v121;
  }
  StandardAllocation = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v126, v5);
  v37 = StandardAllocation;
  if ( StandardAllocation < 0 )
  {
    v92 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
    v92[3] = v9->Width;
    v92[4] = v9->Height;
    v92[5] = a2;
    v92[6] = v17;
    v92[7] = v37;
    WdLogEvent5_WdWarning(v92);
    return (unsigned int)v37;
  }
  if ( !LODWORD(v126[1]) )
  {
    v101 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
    *(_QWORD *)(v101 + 24) = 432LL;
    WdLogEvent5_WdAssertion(v101);
  }
  if ( !HIDWORD(v126[1]) )
  {
    v102 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
    *(_QWORD *)(v102 + 24) = 434LL;
    WdLogEvent5_WdAssertion(v102);
  }
  v38 = this[2];
  if ( *((int *)v38 + 486) < 0x2000 )
    v39 = 1;
  else
    v39 = *((_DWORD *)v38 + 62);
  if ( v39 )
  {
    v40 = v18 + 88;
    v41 = v39;
    v42 = (unsigned int *)&v126[6] + 1;
    do
    {
      v43 = *v42;
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v120 + 168));
      v44 = (v43 >> 6) & 0xFFFFFF;
      if ( v44 < *((_DWORD *)v120 + 52)
        && (v45 = *((_QWORD *)v120 + 24),
            v46 = *(_DWORD *)(v45 + 16LL * v44 + 8),
            ((v43 >> 26) & 0x30) == (*(_BYTE *)(v45 + 16LL * v44 + 8) & 0x30))
        && (v46 & 0x1000) == 0
        && (v46 & 0xF) != 0
        && (*(_BYTE *)(v45 + 16LL * v44 + 8) & 0xF) == 5 )
      {
        v47 = *(struct _ERESOURCE **)(v45 + 16LL * v44);
      }
      else
      {
        v47 = 0LL;
      }
      ExReleasePushLockSharedEx((char *)v120 + 168, 0LL);
      KeLeaveCriticalRegion();
      *(PERESOURCE *)((char *)this[14] + v40) = v47;
      if ( *((_BYTE *)a2 + 1821) )
      {
        v103 = (*(PERESOURCE *)((char *)this[14] + v40))->OwnerEntry.OwnerThread;
        *(_DWORD *)(v103 + 4) |= 2u;
      }
      v40 += 8LL;
      ++v42;
      --v41;
    }
    while ( v41 );
    v18 = v123;
    v9 = v124;
    v10 = v119;
    v17 = v127;
  }
  v48 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
  if ( *((_QWORD *)a2 + 225) != *((_QWORD *)v48 + 2) && !*((_BYTE *)a2 + 1821) )
  {
    *(_DWORD *)((char *)this[14] + v18 + 612) = v121;
    v104 = this[14];
    *(PERESOURCE *)((char *)v104 + v18 + 616) = v122;
    v105 = this[14];
    if ( !*(_DWORD *)((char *)v105 + v18 + 612) || !*(PERESOURCE *)((char *)v105 + v18 + 616) )
    {
      v106 = WdLogNewEntry5_WdAssertion(v104, v33, v48, v36);
      *(_QWORD *)(v106 + 24) = 572LL;
      WdLogEvent5_WdAssertion(v106);
    }
    v107 = this[14];
    *(PERESOURCE *)((char *)v107 + v18 + 600) = *(PERESOURCE *)((char *)v107 + v18 + 88);
    if ( !v10 )
    {
      v108 = WdLogNewEntry5_WdAssertion(v107, v33, v48, v36);
      *(_QWORD *)(v108 + 24) = 583LL;
      WdLogEvent5_WdAssertion(v108);
    }
    *(_DWORD *)((char *)this[14] + v18 + 608) = v10;
    *(_DWORD *)((char *)this[14] + v18 + 1016) = 1;
    *(_DWORD *)((char *)this[14] + v18 + 1020) = 1;
    *(_DWORD *)((char *)this[14] + v18 + 1024) = 0;
LABEL_46:
    if ( *(_DWORD *)((char *)this[14] + v18 + 696) == 1 )
      ADAPTER_DISPLAY::RemoveVidPnOwnership((ADAPTER_DISPLAY *)this, a3);
    ADAPTER_DISPLAY::SetCddDisplayMode(this, a3, v9);
    return 0LL;
  }
  v127 = 0LL;
  v128 = 0LL;
  v125.hAllocation = *(HANDLE *)((*(PERESOURCE *)((char *)this[14] + v18 + 88))->OwnerEntry.OwnerThread + 16);
  v49 = ADAPTER_RENDER::DdiDescribeAllocation(v48, &v125, (__int64)v48);
  v54 = v49;
  if ( v49 < 0 )
  {
    v109 = (_QWORD *)WdLogNewEntry5_WdWarning(v51, v50, v52, v53);
    v109[3] = a2;
    v109[4] = *(PERESOURCE *)((char *)this[14] + v18 + 88);
    v109[5] = v17;
    v109[6] = v54;
    WdLogEvent5_WdWarning(v109);
    *(_DWORD *)((char *)this[14] + v18 + 1016) = 1;
    *(_DWORD *)((char *)this[14] + v18 + 1020) = 1;
    *(_DWORD *)((char *)this[14] + v18 + 1024) = 0;
  }
  else
  {
    *(PERESOURCE *)((char *)this[14] + v18 + 1016) = (PERESOURCE)v125.MultisampleMethod;
    *(_DWORD *)((char *)this[14] + v18 + 1024) = v125.PrivateDriverFormatAttribute;
  }
  if ( *((_BYTE *)this + 133) || ((v9->DisplayOrientation - 2) & 0xFFFFFFFD) != 0 )
  {
    LODWORD(v127) = v9->Width;
    v55 = v9->Height;
  }
  else
  {
    LODWORD(v127) = v9->Height;
    v55 = v9->Width;
  }
  v126[0] = 0LL;
  HIDWORD(v127) = v55;
  LODWORD(v128) = v9->Format;
  v126[3] = &v127;
  LODWORD(v126[2]) = 2;
  v56 = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v126, a5);
  v61 = v56;
  if ( v56 >= 0 )
  {
    v62 = HIDWORD(v126[6]);
    if ( !HIDWORD(v126[6]) || !LODWORD(v126[1]) )
    {
      v115 = WdLogNewEntry5_WdAssertion(v58, v57, v59, v60);
      *(_QWORD *)(v115 + 24) = 549LL;
      WdLogEvent5_WdAssertion(v115);
    }
    v63 = HIDWORD(v128);
    if ( !HIDWORD(v128) )
    {
      v116 = WdLogNewEntry5_WdAssertion(0LL, v57, v59, v60);
      *(_QWORD *)(v116 + 24) = 554LL;
      WdLogEvent5_WdAssertion(v116);
      v63 = HIDWORD(v128);
    }
    *(_DWORD *)((char *)this[14] + v18 + 608) = v63;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v120 + 168));
    v64 = (v62 >> 6) & 0xFFFFFF;
    if ( v64 < *((_DWORD *)v120 + 52)
      && (v65 = *((_QWORD *)v120 + 24),
          v66 = *(_DWORD *)(v65 + 16LL * v64 + 8),
          ((v62 >> 26) & 0x30) == (*(_BYTE *)(v65 + 16LL * v64 + 8) & 0x30))
      && (v66 & 0x1000) == 0
      && (v66 & 0xF) != 0
      && (*(_BYTE *)(v65 + 16LL * v64 + 8) & 0xF) == 5 )
    {
      v67 = *(struct _ERESOURCE **)(v65 + 16LL * v64);
    }
    else
    {
      v67 = 0LL;
    }
    ExReleasePushLockSharedEx((char *)v120 + 168, 0LL);
    KeLeaveCriticalRegion();
    *(PERESOURCE *)((char *)this[14] + v18 + 600) = v67;
    if ( !*(PERESOURCE *)((char *)this[14] + v18 + 600) )
    {
      v117 = WdLogNewEntry5_WdAssertion(v69, v68, v70, v71);
      *(_QWORD *)(v117 + 24) = 558LL;
      WdLogEvent5_WdAssertion(v117);
    }
    *(_DWORD *)((char *)this[14] + v18 + 612) = 0;
    *(PERESOURCE *)((char *)this[14] + v18 + 616) = 0LL;
    goto LABEL_46;
  }
  v110 = (_QWORD *)WdLogNewEntry5_WdWarning(v58, v57, v59, v60);
  v110[3] = (unsigned int)v127;
  v110[4] = HIDWORD(v127);
  v110[5] = a2;
  v110[6] = v17;
  v110[7] = v61;
  WdLogEvent5_WdWarning(v110);
  DXGDEVICE::DestroyAllocationInternal(
    a2,
    0,
    0LL,
    (struct DXGRESOURCE *)(*(PERESOURCE *)((char *)this[14] + v18 + 88))->ExclusiveWaiters,
    0LL,
    DXGDEVICE::DestroyFlagsDefault);
  v111 = this[2];
  if ( *((int *)v111 + 486) < 0x2000 )
    v112 = 1;
  else
    v112 = *((_DWORD *)v111 + 62);
  if ( v112 )
  {
    v113 = v18 + 88;
    v114 = v112;
    do
    {
      *(PERESOURCE *)((char *)this[14] + v113) = 0LL;
      v113 += 8LL;
      --v114;
    }
    while ( v114 );
  }
  return (unsigned int)v61;
}
