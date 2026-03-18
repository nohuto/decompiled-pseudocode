/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00C2264
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C008B0E0 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00FDB80 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C019F49C (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C019F968 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C01ADE74 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C000706C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6@Z @ 0x1C00C44B0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
        DXGDEVICE *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        PERESOURCE **a6,
        int a7,
        struct _EPROCESS *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  __int64 v10; // r12
  D3DDDI_ALLOCATIONINFO *v13; // r15
  unsigned int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  bool v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v23; // r9
  __int64 ObjectA; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rbx
  __int64 v30; // rcx
  unsigned int v31; // eax
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  size_t v35; // r8
  __int64 v36; // r9
  D3DKMT_CREATESTANDARDALLOCATION *v37; // r9
  size_t v38; // rcx
  char *v39; // r12
  __int64 v40; // r9
  _QWORD *v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rcx
  const void *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  D3DKMT_HANDLE hResource; // esi
  _DWORD *v53; // r8
  __int64 v54; // r9
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // r10
  __int64 v56; // rdx
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  _QWORD *v64; // rax
  __int64 v65; // rcx
  bool v66; // zf
  _QWORD *v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  bool v74; // zf
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  _BYTE v79[8]; // [rsp+68h] [rbp-59h] BYREF
  char v80; // [rsp+70h] [rbp-51h]
  struct _D3DKMT_CREATEALLOCATION v81; // [rsp+78h] [rbp-49h] BYREF
  int v82; // [rsp+128h] [rbp+67h]

  v10 = a3;
  v13 = 0LL;
  memset(&v81, 0, sizeof(v81));
  v14 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v58 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    *(_QWORD *)(v58 + 24) = 6447LL;
    WdLogEvent5_WdAssertion(v58);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  if ( a6 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a6[3]);
  v19 = (*((_BYTE *)DXGPROCESS::GetCurrent(v16) + 275) & 4) != 0;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v79);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v79);
  if ( !(_DWORD)v10 )
  {
    v78 = WdLogNewEntry5_WdError(v21, v20);
    LODWORD(v29) = -1073741811;
    *(_QWORD *)(v78 + 24) = this;
    *(_QWORD *)(v78 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v78);
    if ( !v80 )
      return (unsigned int)v29;
LABEL_62:
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v79, v71, v72, v73);
    goto LABEL_39;
  }
  Global = DXGGLOBAL::GetGlobal();
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, (unsigned int)v10, 2LL, v23);
  v29 = ObjectA;
  if ( !ObjectA )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
    LODWORD(v29) = -1073741811;
    v59[3] = this;
    v59[4] = v10;
    v59[5] = -1073741811LL;
LABEL_44:
    WdLogEvent5_WdWarning(v59);
LABEL_47:
    v66 = v80 == 0;
    goto LABEL_49;
  }
  v30 = *(unsigned int *)(*(_QWORD *)(ObjectA + 128) - 44LL);
  if ( (v30 & 2) != 0 && !(*(unsigned int (**)(void))(*(_QWORD *)(*((_QWORD *)this + 5) + 72LL) + 208LL))() )
  {
    v68 = WdLogNewEntry5_WdEvent(v30);
    LODWORD(v29) = -1073741790;
    *(_QWORD *)(v68 + 24) = -1073741790LL;
    WdLogEvent5_WdEvent(v68);
    goto LABEL_47;
  }
  if ( *(_DWORD *)(v29 + 124) != *(_DWORD *)(a2 + 8) )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdError(v30, v25);
    v64[3] = this;
    v65 = *(unsigned int *)(v29 + 124);
    LODWORD(v29) = -1073741811;
    v64[4] = v65;
    v64[5] = *(unsigned int *)(a2 + 8);
    v64[6] = -1073741811LL;
LABEL_46:
    WdLogEvent5_WdError(v64);
    goto LABEL_47;
  }
  if ( (*(_DWORD *)(v29 + 12) & 4) != 0 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdError(v30, v25);
    LODWORD(v29) = -1073741811;
    v64[3] = this;
    v64[4] = -1073741811LL;
    goto LABEL_46;
  }
  if ( v19 )
    goto LABEL_16;
  v31 = *(_DWORD *)(v29 + 104);
  if ( *(_DWORD *)(a2 + 32) != v31 )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v25, v27, v28);
    v59[3] = this;
    v59[4] = *(unsigned int *)(a2 + 32);
    v60 = *(unsigned int *)(v29 + 104);
    LODWORD(v29) = -1073741811;
    v59[6] = -1073741811LL;
    v59[5] = v60;
    goto LABEL_44;
  }
  if ( v31 )
    memmove(*(void **)(a2 + 24), *(const void **)(v29 + 96), v31);
LABEL_16:
  v32 = 96LL * *(unsigned int *)(a2 + 8);
  if ( !is_mul_ok(*(unsigned int *)(a2 + 8), 0x60uLL) )
    v32 = -1LL;
  v13 = (D3DDDI_ALLOCATIONINFO *)operator new(v32, 0x4B677844u, PagedPool);
  if ( !v13 )
  {
    v67 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
    LODWORD(v29) = -1073741801;
    v67[3] = this;
    v67[4] = *(unsigned int *)(a2 + 8);
    v67[5] = -1073741801LL;
    WdLogEvent5_WdWarning(v67);
    v66 = v80 == 0;
LABEL_49:
    if ( !v66 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v79, v61, v62, v63);
    return (unsigned int)v29;
  }
  v37 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 40);
  v38 = *(unsigned int *)(a2 + 48);
  v81.hDevice = *(_DWORD *)a2;
  v81.NumAllocations = *(_DWORD *)(a2 + 8);
  v81.hGlobalShare = v10;
  v81.pStandardAllocation = v37;
  v81.PrivateDriverDataSize = v38;
  v81.pAllocationInfo = v13;
  v81.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v81.Flags & 0xFFFFFF3E | 1);
  if ( v19 || (_DWORD)v38 == *(_DWORD *)(v29 + 120) )
  {
    if ( (_DWORD)v38 )
      memmove(v37, *(const void **)(v29 + 112), v38);
    v39 = *(char **)(a2 + 56);
    v40 = 0LL;
    v41 = *(_QWORD **)(v29 + 128);
    v82 = 0;
    if ( !*(_DWORD *)(a2 + 8) )
    {
LABEL_31:
      if ( v80 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v79, v33, v35, v40);
      v47 = DXGDEVICE::CreateAllocation(
              this,
              &v81,
              0,
              1u,
              0LL,
              0LL,
              (struct COREDEVICEACCESS *)a6,
              a5,
              a8,
              a9,
              a10,
              0LL);
      v29 = v47;
      if ( v47 < 0 )
      {
        v76 = WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
        *(_QWORD *)(v76 + 24) = v29;
        WdLogEvent5_WdWarning(v76);
      }
      else
      {
        hResource = v81.hResource;
        if ( !v81.hResource )
        {
          v77 = WdLogNewEntry5_WdAssertion(v49, v48, v50, v51);
          *(_QWORD *)(v77 + 24) = 6654LL;
          WdLogEvent5_WdAssertion(v77);
        }
        v53 = *(_DWORD **)(a2 + 16);
        v54 = 0LL;
        *(_DWORD *)(a2 + 64) = v14;
        *(_DWORD *)(a2 + 68) = hResource;
        if ( *(_DWORD *)(a2 + 8) )
        {
          pAllocationInfo = v81.pAllocationInfo;
          do
          {
            v56 = 3 * v54;
            v54 = (unsigned int)(v54 + 1);
            v56 *= 32LL;
            *v53 = *(D3DKMT_HANDLE *)((char *)&pAllocationInfo->hAllocation + v56);
            v53 += 20;
            *((_QWORD *)v53 - 9) = *(_QWORD *)(a2 + 56)
                                 + (unsigned int)(*(_DWORD *)((char *)&pAllocationInfo->pPrivateDriverData + v56)
                                                - *(_DWORD *)(a2 + 56));
            *(v53 - 16) = *(UINT *)((char *)&pAllocationInfo->PrivateDriverDataSize + v56);
          }
          while ( (unsigned int)v54 < *(_DWORD *)(a2 + 8) );
        }
      }
      goto LABEL_39;
    }
    while ( 1 )
    {
      v35 = *((unsigned int *)v41 - 2);
      v42 = 0xFFFFFFFFLL;
      v43 = (unsigned int)v35 + v14;
      if ( (unsigned int)v43 >= v14 )
        v42 = (unsigned int)v43;
      v29 = (unsigned int)v43 < v14 ? (int)0xC0000095 : 0;
      if ( (unsigned int)v43 < v14 )
        break;
      if ( (unsigned int)v42 > *(_DWORD *)(a2 + 64) )
      {
        v75 = WdLogNewEntry5_WdWarning(v43, v42, v35, v40);
        v29 = -1073741801LL;
        goto LABEL_56;
      }
      v44 = (const void *)*(v41 - 2);
      if ( v44 )
      {
        memmove(v39, v44, v35);
        LODWORD(v40) = v82;
      }
      v45 = (unsigned int)v40;
      v40 = (unsigned int)(v40 + 1);
      v82 = v40;
      v33 = 96 * v45;
      *(D3DKMT_HANDLE *)((char *)&v13->hAllocation + v33) = 0;
      *(const void **)((char *)&v13->pSystemMem + v33) = 0LL;
      LODWORD(v45) = *((_DWORD *)v41 - 11);
      *(UINT *)((char *)&v13->Flags.Value + v33) = 0;
      *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v13->VidPnSourceId + v33) = ((unsigned int)v45 >> 6) & 0xF;
      LODWORD(v45) = *((_DWORD *)v41 - 11);
      *(void **)((char *)&v13->pPrivateDriverData + v33) = v39;
      *(UINT *)((char *)&v13->Flags.Value + v33) = v45 & 1 | ((((unsigned int)v45 | ((unsigned int)v45 >> 12)) & 2) != 0);
      *(UINT *)((char *)&v13->PrivateDriverDataSize + v33) = *((_DWORD *)v41 - 2);
      v46 = *((unsigned int *)v41 - 2);
      v41 = (_QWORD *)*v41;
      v14 += v46;
      v39 += v46;
      if ( (unsigned int)v40 >= *(_DWORD *)(a2 + 8) )
        goto LABEL_31;
    }
    v75 = WdLogNewEntry5_WdWarning(v43, v42, v35, v40);
LABEL_56:
    *(_QWORD *)(v75 + 24) = this;
    *(_QWORD *)(v75 + 32) = v29;
    WdLogEvent5_WdWarning(v75);
    v74 = v80 == 0;
  }
  else
  {
    v69 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v33, v35, v37);
    v69[3] = this;
    v69[4] = *(unsigned int *)(a2 + 48);
    v70 = *(unsigned int *)(v29 + 120);
    LODWORD(v29) = -1073741811;
    v69[5] = v70;
    v69[6] = -1073741811LL;
    WdLogEvent5_WdWarning(v69);
    v74 = v80 == 0;
  }
  if ( !v74 )
    goto LABEL_62;
LABEL_39:
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return (unsigned int)v29;
}
