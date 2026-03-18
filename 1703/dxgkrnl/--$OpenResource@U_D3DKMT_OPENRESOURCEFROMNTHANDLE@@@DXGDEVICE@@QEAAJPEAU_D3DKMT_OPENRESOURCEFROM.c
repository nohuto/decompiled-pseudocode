/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00C1F00
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0100160 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C0182880 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6@Z @ 0x1C00C44B0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
        DXGDEVICE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        PERESOURCE **a6,
        char a7,
        struct _EPROCESS *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  D3DDDI_ALLOCATIONINFO *v12; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  bool v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  __int64 v25; // rcx
  unsigned int v26; // eax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  D3DKMT_HANDLE v32; // eax
  D3DKMT_CREATESTANDARDALLOCATION *v33; // r9
  size_t v34; // rcx
  char *v35; // r9
  unsigned int v36; // r11d
  _QWORD *v37; // r14
  unsigned int v38; // r10d
  __int64 v39; // rdx
  __int64 v40; // rcx
  const void *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  D3DKMT_HANDLE hResource; // esi
  __int64 v50; // r9
  _DWORD *v51; // r8
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // r10
  __int64 v53; // rdx
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  _QWORD *v61; // rax
  __int64 v62; // rcx
  bool v63; // zf
  _QWORD *v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  char v74[8]; // [rsp+60h] [rbp-59h] BYREF
  char v75; // [rsp+68h] [rbp-51h]
  _D3DKMT_CREATEALLOCATION v76; // [rsp+70h] [rbp-49h] BYREF
  char *v77; // [rsp+100h] [rbp+47h]
  int v78; // [rsp+110h] [rbp+57h]
  unsigned int v79; // [rsp+128h] [rbp+6Fh]

  v12 = 0LL;
  memset(&v76, 0, sizeof(v76));
  v78 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v55 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    *(_QWORD *)(v55 + 24) = 6447LL;
    WdLogEvent5_WdAssertion(v55);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  if ( a6 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a6[3]);
  v19 = (*((_BYTE *)DXGPROCESS::GetCurrent(v15) + 275) & 4) != 0;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v74);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v74);
  if ( !a4 )
  {
    v73 = WdLogNewEntry5_WdError(v21, v20);
    LODWORD(v24) = -1073741811;
    *(_QWORD *)(v73 + 24) = this;
    *(_QWORD *)(v73 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v73);
    if ( !v75 )
      return (unsigned int)v24;
LABEL_63:
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v74, v68, v69, v70);
    goto LABEL_40;
  }
  v24 = *(_QWORD *)(a4 + 16);
  if ( !v24 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    LODWORD(v24) = -1073741811;
    v56[3] = this;
    v56[4] = a4;
    v56[5] = -1073741811LL;
LABEL_45:
    WdLogEvent5_WdWarning(v56);
LABEL_48:
    v63 = v75 == 0;
    goto LABEL_50;
  }
  v25 = *(unsigned int *)(*(_QWORD *)(v24 + 128) - 44LL);
  if ( (v25 & 2) != 0 && !(*(unsigned int (**)(void))(*(_QWORD *)(*((_QWORD *)this + 5) + 72LL) + 208LL))() )
  {
    v65 = WdLogNewEntry5_WdEvent(v25);
    LODWORD(v24) = -1073741790;
    *(_QWORD *)(v65 + 24) = -1073741790LL;
    WdLogEvent5_WdEvent(v65);
    goto LABEL_48;
  }
  if ( *(_DWORD *)(v24 + 124) != *(_DWORD *)(a2 + 16) )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdError(v25, v20);
    v61[3] = this;
    v62 = *(unsigned int *)(v24 + 124);
    LODWORD(v24) = -1073741811;
    v61[4] = v62;
    v61[5] = *(unsigned int *)(a2 + 16);
    v61[6] = -1073741811LL;
LABEL_47:
    WdLogEvent5_WdError(v61);
    goto LABEL_48;
  }
  if ( (*(_DWORD *)(v24 + 12) & 4) != 0 )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdError(v25, v20);
    LODWORD(v24) = -1073741811;
    v61[3] = this;
    v61[4] = -1073741811LL;
    goto LABEL_47;
  }
  if ( v19 )
    goto LABEL_16;
  v26 = *(_DWORD *)(v24 + 104);
  if ( *(_DWORD *)(a2 + 32) != v26 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v20, v22, v23);
    v56[3] = this;
    v56[4] = *(unsigned int *)(a2 + 32);
    v57 = *(unsigned int *)(v24 + 104);
    LODWORD(v24) = -1073741811;
    v56[6] = -1073741811LL;
    v56[5] = v57;
    goto LABEL_45;
  }
  if ( v26 )
    memmove(*(void **)(a2 + 40), *(const void **)(v24 + 96), v26);
LABEL_16:
  v27 = 96LL * *(unsigned int *)(a2 + 16);
  if ( !is_mul_ok(*(unsigned int *)(a2 + 16), 0x60uLL) )
    v27 = -1LL;
  v12 = (D3DDDI_ALLOCATIONINFO *)operator new(v27, 0x4B677844u, PagedPool);
  if ( !v12 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
    LODWORD(v24) = -1073741801;
    v64[3] = this;
    v64[4] = *(unsigned int *)(a2 + 16);
    v64[5] = -1073741801LL;
    WdLogEvent5_WdWarning(v64);
    v63 = v75 == 0;
LABEL_50:
    if ( !v63 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v74, v58, v59, v60);
    return (unsigned int)v24;
  }
  v32 = *(_DWORD *)a2;
  v76.hGlobalShare = 0;
  v33 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 56);
  v34 = *(unsigned int *)(a2 + 48);
  v76.hDevice = v32;
  v76.NumAllocations = *(_DWORD *)(a2 + 16);
  v76.pStandardAllocation = v33;
  v76.PrivateDriverDataSize = v34;
  v76.pAllocationInfo = v12;
  v76.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v76.Flags ^ (*(_BYTE *)&v76.Flags ^ (unsigned __int8)(a7 << 7)) & 0x80 | 0x41);
  if ( v19 || (_DWORD)v34 == *(_DWORD *)(v24 + 120) )
  {
    if ( (_DWORD)v34 )
      memmove(v33, *(const void **)(v24 + 112), v34);
    v35 = *(char **)(a2 + 72);
    v36 = 0;
    v37 = *(_QWORD **)(v24 + 128);
    v77 = v35;
    v79 = 0;
    if ( !*(_DWORD *)(a2 + 16) )
    {
LABEL_32:
      if ( v75 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v74, v28, v30, (__int64)v35);
      v44 = DXGDEVICE::CreateAllocation(
              this,
              &v76,
              0,
              1u,
              (struct _DXGSHAREDALLOCOBJECT *)a4,
              0LL,
              (struct COREDEVICEACCESS *)a6,
              a5,
              a8,
              a9,
              a10,
              0LL);
      v24 = v44;
      if ( v44 < 0 )
      {
        v71 = WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
        *(_QWORD *)(v71 + 24) = v24;
        WdLogEvent5_WdWarning(v71);
      }
      else
      {
        hResource = v76.hResource;
        if ( !v76.hResource )
        {
          v72 = WdLogNewEntry5_WdAssertion(v46, v45, v47, v48);
          *(_QWORD *)(v72 + 24) = 6654LL;
          WdLogEvent5_WdAssertion(v72);
        }
        v50 = 0LL;
        v51 = *(_DWORD **)(a2 + 24);
        *(_DWORD *)(a2 + 64) = v78;
        *(_DWORD *)(a2 + 80) = hResource;
        if ( *(_DWORD *)(a2 + 16) )
        {
          pAllocationInfo = v76.pAllocationInfo;
          do
          {
            v53 = 3 * v50;
            v50 = (unsigned int)(v50 + 1);
            v53 *= 32LL;
            *v51 = *(D3DKMT_HANDLE *)((char *)&pAllocationInfo->hAllocation + v53);
            v51 += 20;
            *((_QWORD *)v51 - 9) = *(_QWORD *)(a2 + 72)
                                 + (unsigned int)(*(_DWORD *)((char *)&pAllocationInfo->pPrivateDriverData + v53)
                                                - *(_DWORD *)(a2 + 72));
            *(v51 - 16) = *(UINT *)((char *)&pAllocationInfo->PrivateDriverDataSize + v53);
          }
          while ( (unsigned int)v50 < *(_DWORD *)(a2 + 16) );
        }
      }
      goto LABEL_40;
    }
    v30 = 0LL;
    while ( 1 )
    {
      v38 = *((_DWORD *)v37 - 2);
      v39 = 0xFFFFFFFFLL;
      v40 = v38 + (unsigned int)v30;
      if ( (unsigned int)v40 >= (unsigned int)v30 )
        v39 = (unsigned int)v40;
      v24 = (unsigned int)v40 < (unsigned int)v30 ? (int)0xC0000095 : 0;
      if ( (unsigned int)v40 < (unsigned int)v30 )
        break;
      if ( (unsigned int)v39 > *(_DWORD *)(a2 + 64) )
      {
        v66 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v30, v35);
        v24 = -1073741801LL;
        goto LABEL_57;
      }
      v41 = (const void *)*(v37 - 2);
      if ( v41 )
      {
        memmove(v35, v41, v38);
        LODWORD(v30) = v78;
        v35 = v77;
        v36 = v79;
      }
      v42 = v36++;
      v79 = v36;
      v28 = 96 * v42;
      *(D3DKMT_HANDLE *)((char *)&v12->hAllocation + v28) = 0;
      *(const void **)((char *)&v12->pSystemMem + v28) = 0LL;
      LODWORD(v42) = *((_DWORD *)v37 - 11);
      *(UINT *)((char *)&v12->Flags.Value + v28) = 0;
      *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v12->VidPnSourceId + v28) = ((unsigned int)v42 >> 6) & 0xF;
      LODWORD(v42) = *((_DWORD *)v37 - 11);
      *(void **)((char *)&v12->pPrivateDriverData + v28) = v35;
      *(UINT *)((char *)&v12->Flags.Value + v28) = v42 & 1 | ((((unsigned int)v42 | ((unsigned int)v42 >> 12)) & 2) != 0);
      *(UINT *)((char *)&v12->PrivateDriverDataSize + v28) = *((_DWORD *)v37 - 2);
      v43 = *((unsigned int *)v37 - 2);
      v37 = (_QWORD *)*v37;
      v30 = (unsigned int)(v43 + v30);
      v35 += v43;
      v78 = v30;
      v77 = v35;
      if ( v36 >= *(_DWORD *)(a2 + 16) )
        goto LABEL_32;
    }
    v66 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v30, v35);
LABEL_57:
    v66[3] = this;
    v66[4] = v24;
  }
  else
  {
    v66 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v28, v30, v33);
    v66[3] = this;
    v66[4] = *(unsigned int *)(a2 + 48);
    v67 = *(unsigned int *)(v24 + 120);
    LODWORD(v24) = -1073741811;
    v66[6] = -1073741811LL;
    v66[5] = v67;
  }
  WdLogEvent5_WdWarning(v66);
  if ( v75 )
    goto LABEL_63;
LABEL_40:
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)v24;
}
