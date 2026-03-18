/*
 * XREFs of ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C019544C
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C0097830 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0198BC8 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateAllocation(
        struct VMBCHANNEL__ **this,
        int a2,
        int a3,
        int a4,
        const struct _D3DKMT_CREATEALLOCATION *a5,
        struct _D3DDDI_ALLOCATIONINFO2 *a6,
        void **a7,
        void *a8,
        void *Src,
        char a10,
        char a11,
        unsigned __int8 **a12)
{
  __int64 v13; // rbx
  UINT PrivateRuntimeDataSize; // r10d
  unsigned int v15; // r9d
  __int64 NumAllocations; // r8
  unsigned int v18; // esi
  unsigned int v19; // r10d
  UINT *p_PrivateDriverDataSize; // r11
  unsigned int v21; // edx
  unsigned int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // r15d
  unsigned int v26; // r14d
  _DWORD *v27; // rax
  _DWORD *v28; // rdi
  _DWORD *v29; // r12
  char v30; // si
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // ecx
  D3DKMT_CREATEALLOCATIONFLAGS v32; // eax
  unsigned int v33; // r15d
  unsigned int v34; // eax
  __int64 v35; // rcx
  unsigned int v36; // eax
  _DWORD *v37; // rdx
  unsigned int v38; // r9d
  __int64 v39; // r8
  UINT *v40; // r15
  __int64 v41; // rcx
  _QWORD *v42; // rax
  const void *v43; // rdx
  unsigned int v44; // esi
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r14
  UINT v48; // edx
  __int64 v49; // rcx
  char *v50; // r15
  UINT *v51; // rsi
  __int64 v52; // rdx
  PVOID PoolWithTag; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  int GpadlFromBuffer; // eax
  __int64 v59; // rcx
  struct _MDL *v60; // r9
  int v61; // eax
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  struct _MDL *v67; // [rsp+30h] [rbp-59h]
  unsigned int v68; // [rsp+38h] [rbp-51h]
  unsigned int v69; // [rsp+3Ch] [rbp-4Dh] BYREF
  UINT v70; // [rsp+40h] [rbp-49h]
  _DWORD *v71; // [rsp+48h] [rbp-41h]
  __int64 v72; // [rsp+50h] [rbp-39h]
  __int64 v73; // [rsp+58h] [rbp-31h] BYREF
  int v74; // [rsp+60h] [rbp-29h]
  int v75; // [rsp+64h] [rbp-25h]
  int v76; // [rsp+68h] [rbp-21h]
  int v77; // [rsp+70h] [rbp-19h]
  int v78; // [rsp+74h] [rbp-15h]
  int v79; // [rsp+78h] [rbp-11h]
  int v84; // [rsp+F8h] [rbp+6Fh]

  LODWORD(v13) = 0;
  *a12 = 0LL;
  PrivateRuntimeDataSize = a5->PrivateRuntimeDataSize;
  if ( PrivateRuntimeDataSize + a5->PrivateDriverDataSize < PrivateRuntimeDataSize )
    return 0LL;
  v15 = PrivateRuntimeDataSize + a5->PrivateDriverDataSize;
  NumAllocations = a5->NumAllocations;
  v18 = 0;
  v19 = 0;
  if ( (_DWORD)NumAllocations )
  {
    p_PrivateDriverDataSize = &a6->PrivateDriverDataSize;
    do
    {
      v21 = v18;
      v22 = v18 + *p_PrivateDriverDataSize;
      v23 = -1;
      if ( v22 >= v18 )
        v23 = v18 + *p_PrivateDriverDataSize;
      v18 = v23;
      if ( v22 < v21 )
        return 2147483653LL;
      ++v19;
      p_PrivateDriverDataSize += 24;
    }
    while ( v19 < (unsigned int)NumAllocations );
  }
  if ( v18 + v15 < v15 )
    return 2147483653LL;
  if ( v18 + v15 + 64 < v18 + v15 )
    return 2147483653LL;
  if ( (unsigned __int64)(12 * NumAllocations) > 0xFFFFFFFF )
    return 2147483653LL;
  v24 = 12 * NumAllocations;
  v25 = 12 * NumAllocations;
  if ( 12 * (_DWORD)NumAllocations + v18 + v15 + 64 < v18 + v15 + 64 )
    return 2147483653LL;
  v26 = v24 + v18 + v15 + 64;
  if ( (unsigned int)(NumAllocations - 1) > 0x71B || v18 > 0x20000 )
    return 2147483653LL;
  v84 = 0;
  v27 = operator new[](v24 + v18 + v15 + 64, 0x4B677844u, (POOL_TYPE)512);
  v28 = v27;
  if ( !v27 )
    return 3221225495LL;
  memset(v27, 0, v26);
  v28[4] = 4;
  *(_QWORD *)v28 = 0LL;
  *((_QWORD *)v28 + 1) = 0LL;
  v70 = (v18 + 72 * a5->NumAllocations + 23) & 0xFFFFFFF8;
  v72 = v70;
  v29 = operator new(v70, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( !v29 )
  {
    LODWORD(v13) = -1073741801;
    goto LABEL_60;
  }
  v30 = 0;
  v28[6] = a3;
  v28[2] = a2;
  Flags = a5->Flags;
  v28[7] = a4;
  v28[11] = Flags;
  *((_QWORD *)v28 + 6) = a5->hPrivateRuntimeResourceHandle;
  v28[10] = a5->NumAllocations;
  v28[8] = a5->PrivateRuntimeDataSize;
  v28[9] = a5->PrivateDriverDataSize;
  *((_BYTE *)v28 + 56) = a11;
  v32 = a5->Flags;
  if ( (*(_BYTE *)&v32 & 8) != 0 )
  {
    v30 = 1;
    v28[11] = *(_DWORD *)&Flags & 0xFFFFFFD7 | 0x20;
  }
  else
  {
    if ( (*(_BYTE *)&v32 & 0x20) == 0 )
      goto LABEL_25;
    v30 = 2;
  }
  LOBYTE(v84) = v30;
LABEL_25:
  v33 = v25 + 64;
  v34 = v28[8];
  v35 = v33 + a5->PrivateRuntimeDataSize;
  v69 = v33 + a5->PrivateRuntimeDataSize;
  if ( v34 && Src )
  {
    memmove((char *)v28 + v33, Src, v34);
    v35 = v69;
  }
  v36 = v28[9];
  if ( v36 )
    memmove((char *)v28 + v35, a8, v36);
  v37 = v28 + 16;
  v38 = v28[9] + v69;
  v39 = 0LL;
  v71 = v28 + 16;
  v68 = v38;
  v69 = 0;
  if ( a5->NumAllocations )
  {
    v40 = &a6->PrivateDriverDataSize;
    do
    {
      if ( *((_QWORD *)v40 - 2) )
      {
        v28[11] |= 0x20u;
        v30 |= 2u;
        LOBYTE(v84) = v30;
      }
      else if ( (*(_DWORD *)&a5->Flags & 0x20) != 0 )
      {
        LODWORD(v13) = -1073741811;
        v64 = WdLogNewEntry5_WdAssertion(v35);
        *(_QWORD *)(v64 + 24) = 4759LL;
        WdLogEvent5_WdAssertion(v64);
        goto LABEL_60;
      }
      *v37 = v40[2];
      v37[2] = v40[1];
      v41 = v38 + *v40;
      if ( (unsigned int)v41 > v26 )
      {
        v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v41, v37, v39);
        v42[5] = 0LL;
        v42[6] = 0LL;
        v42[7] = 0LL;
        v42[3] = 275LL;
        v42[4] = 2LL;
        WdLogEvent5_WdCriticalError(v42);
        v37 = v71;
        LODWORD(v39) = v69;
        v38 = v68;
      }
      v37[1] = *v40;
      if ( a10 )
        v43 = a7[(unsigned int)v39];
      else
        v43 = (const void *)*((_QWORD *)v40 - 1);
      memmove((char *)v28 + v38, v43, *v40);
      v38 = *v40 + v68;
      v40 += 24;
      v37 = v71 + 3;
      v39 = v69 + 1;
      v68 = v38;
      v71 += 3;
      v69 = v39;
    }
    while ( (unsigned int)v39 < a5->NumAllocations );
  }
  v44 = v70;
  v69 = v70;
  VmBusSendSyncMessage(*this, (struct DXGKVMB_COMMAND_BASE *)v28, v26, v29, &v69, v67);
  if ( v69 < v44 )
  {
    LODWORD(v13) = -1073741823;
    v66 = WdLogNewEntry5_WdError(v45);
    *(_QWORD *)(v66 + 24) = 4871LL;
    WdLogEvent5_WdError(v66);
    ExFreePoolWithTag(v29, 0);
    goto LABEL_60;
  }
  v47 = 0LL;
  v29[3] = v84;
  v48 = a5->NumAllocations;
  v49 = v48 - 1;
  v50 = (char *)&v29[16 * v49 + 22 + 2 * v49];
  if ( !v48 )
    goto LABEL_58;
  v51 = &a6->PrivateDriverDataSize;
  while ( 1 )
  {
    v52 = (unsigned int)a5->Flags;
    LOBYTE(v49) = (v52 & 8) == 0;
    if ( ((unsigned __int8)v49 & ((v28[11] & 0x20) == 0)) == 0 && (int)v13 >= 0 )
      break;
LABEL_52:
    if ( &v50[*v51] > (char *)v29 + v72 )
    {
      v63 = (_QWORD *)WdLogNewEntry5_WdCriticalError((char *)v29 + v72, v52, v46);
      v63[5] = 0LL;
      v63[6] = 0LL;
      v63[7] = 0LL;
      v63[3] = 275LL;
      v63[4] = 2LL;
      WdLogEvent5_WdCriticalError(v63);
    }
    memmove(a7[v47], v50, *v51);
    v47 = (unsigned int)(v47 + 1);
    v50 += *v51;
    v51 += 24;
    if ( (unsigned int)v47 >= a5->NumAllocations )
      goto LABEL_58;
  }
  if ( (v52 & 8) == 0 )
  {
LABEL_49:
    Global = DXGGLOBAL::GetGlobal(v49);
    v55 = *((_QWORD *)v51 - 2);
    v56 = (unsigned int)v29[18 * v47 + 8];
    v57 = **((_QWORD **)Global + 142);
    v71 = &v29[18 * v47 + 7];
    GpadlFromBuffer = VmbChannelCreateGpadlFromBuffer(v57, 0LL, v55, v56, v71);
    v13 = GpadlFromBuffer;
    if ( GpadlFromBuffer < 0 )
      goto LABEL_51;
    v73 = 0LL;
    v75 = 0;
    v74 = a2;
    v77 = a3;
    v76 = 46;
    v78 = v29[18 * v47 + 4];
    v79 = *v71;
    v61 = VmBusSendSyncMessageStatusReturn(*this, (struct DXGKVMB_COMMAND_BASE *)&v73, 0x28u, v60);
    v13 = v61;
    if ( v61 < 0 )
    {
LABEL_51:
      v62 = WdLogNewEntry5_WdAssertion(v59);
      *(_QWORD *)(v62 + 24) = v13;
      WdLogEvent5_WdAssertion(v62);
    }
    goto LABEL_52;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(_QWORD *)&v29[18 * v47 + 8], 0x47677844u);
  if ( PoolWithTag )
  {
    *((_QWORD *)v51 - 2) = PoolWithTag;
    goto LABEL_49;
  }
  LODWORD(v13) = -1073741801;
  v65 = WdLogNewEntry5_WdLowResource(v49);
  *(_QWORD *)(v65 + 24) = 4819LL;
  WdLogEvent5_WdLowResource(v65);
LABEL_58:
  *a12 = (unsigned __int8 *)v29;
LABEL_60:
  ExFreePoolWithTag(v28, 0);
  return (unsigned int)v13;
}
