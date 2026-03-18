/*
 * XREFs of ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C0181AFC
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00EBA10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0185834 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
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
  UINT PrivateRuntimeDataSize; // r10d
  unsigned int v15; // r8d
  __int64 NumAllocations; // r9
  unsigned int v18; // esi
  unsigned int v19; // r10d
  UINT *p_PrivateDriverDataSize; // r11
  unsigned int v21; // edx
  unsigned int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // r15d
  unsigned int v26; // ebx
  _DWORD *v27; // rax
  _DWORD *v28; // rdi
  _DWORD *v29; // r14
  __int64 v30; // rbx
  D3DKMT_CREATEALLOCATIONFLAGS v31; // edx
  size_t v32; // r8
  __int64 PrivateDriverDataSize; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS v34; // eax
  char v35; // r12
  unsigned int v36; // r15d
  UINT v37; // esi
  UINT v38; // edx
  UINT v39; // r9d
  _DWORD *v40; // r15
  UINT *v41; // rsi
  __int64 v42; // rcx
  _QWORD *v43; // rax
  const void *v44; // rdx
  unsigned int v45; // esi
  __int64 v46; // r15
  UINT v47; // edx
  __int64 v48; // rcx
  char *v49; // r12
  UINT *v50; // rsi
  D3DKMT_CREATEALLOCATIONFLAGS v51; // edx
  __int64 v52; // r15
  PMDL PagesForMdl; // rax
  __int64 v54; // rcx
  PMDL v55; // rbx
  struct DXGGLOBAL *v56; // rax
  int *v57; // r12
  int GpadlFromBuffer; // eax
  __int64 v59; // rcx
  struct _MDL *v60; // r9
  __int64 v61; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v63; // rax
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rcx
  _QWORD *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  struct _MDL *Flags; // [rsp+28h] [rbp-48h]
  UINT v72; // [rsp+30h] [rbp-40h]
  unsigned int v73; // [rsp+34h] [rbp-3Ch] BYREF
  char *v74; // [rsp+38h] [rbp-38h]
  __int64 v75; // [rsp+40h] [rbp-30h]
  __int64 v76; // [rsp+48h] [rbp-28h] BYREF
  int v77; // [rsp+50h] [rbp-20h]
  int v78; // [rsp+54h] [rbp-1Ch]
  int v79; // [rsp+58h] [rbp-18h]
  int v80; // [rsp+60h] [rbp-10h]
  int v81; // [rsp+64h] [rbp-Ch]
  int v82; // [rsp+68h] [rbp-8h]
  int v86; // [rsp+D0h] [rbp+60h]
  int v87; // [rsp+D0h] [rbp+60h]

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
  v86 = 0;
  v27 = operator new[](v24 + v18 + v15 + 64, 0x4B677844u, (POOL_TYPE)512);
  v28 = v27;
  if ( !v27 )
    return 3221225495LL;
  memset(v27, 0, v26);
  v28[4] = 4;
  *(_QWORD *)v28 = 0LL;
  *((_QWORD *)v28 + 1) = 0LL;
  LODWORD(v74) = (v18 + 72 * a5->NumAllocations + 23) & 0xFFFFFFF8;
  v75 = (unsigned int)v74;
  v29 = operator new((unsigned int)v74, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( !v29 )
  {
    LODWORD(v30) = -1073741801;
    goto LABEL_63;
  }
  v28[6] = a3;
  v28[2] = a2;
  v31 = a5->Flags;
  v28[11] = v31;
  v28[7] = a4;
  *((_QWORD *)v28 + 6) = a5->hPrivateRuntimeResourceHandle;
  v28[10] = a5->NumAllocations;
  v32 = a5->PrivateRuntimeDataSize;
  v28[8] = v32;
  PrivateDriverDataSize = a5->PrivateDriverDataSize;
  v28[9] = PrivateDriverDataSize;
  *((_BYTE *)v28 + 56) = a11;
  v34 = a5->Flags;
  if ( (*(_BYTE *)&v34 & 8) != 0 )
  {
    v35 = 1;
    v28[11] = *(_DWORD *)&v31 & 0xFFFFFFD7 | 0x20;
  }
  else
  {
    v35 = 0;
    if ( (*(_BYTE *)&v34 & 0x20) != 0 )
      v35 = 2;
  }
  v36 = v25 + 64;
  v37 = v36 + a5->PrivateRuntimeDataSize;
  LOBYTE(v86) = v35;
  if ( (_DWORD)v32 && Src )
  {
    memmove((char *)v28 + v36, Src, v32);
    PrivateDriverDataSize = (unsigned int)v28[9];
  }
  if ( (_DWORD)PrivateDriverDataSize )
  {
    memmove((char *)v28 + v37, a8, (unsigned int)PrivateDriverDataSize);
    PrivateDriverDataSize = (unsigned int)v28[9];
  }
  v38 = 0;
  v39 = PrivateDriverDataSize + v37;
  v40 = v28 + 16;
  v72 = PrivateDriverDataSize + v37;
  v73 = 0;
  if ( a5->NumAllocations )
  {
    v41 = &a6->PrivateDriverDataSize;
    do
    {
      if ( *((_QWORD *)v41 - 2) )
      {
        v28[11] |= 0x20u;
        v35 |= 2u;
        LOBYTE(v86) = v35;
      }
      else if ( (*(_DWORD *)&a5->Flags & 0x20) != 0 )
      {
        LODWORD(v30) = -1073741811;
        v61 = WdLogNewEntry5_WdAssertion(PrivateDriverDataSize);
        *(_QWORD *)(v61 + 24) = 5462LL;
        WdLogEvent5_WdAssertion(v61);
        goto LABEL_63;
      }
      *v40 = v41[2];
      v40[2] = v41[1];
      v42 = *v41;
      if ( (unsigned int)v42 + v39 > v26 )
      {
        v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v42);
        v43[5] = 0LL;
        v43[6] = 0LL;
        v43[7] = 0LL;
        v43[3] = 275LL;
        v43[4] = 2LL;
        WdLogEvent5_WdCriticalError(v43);
        LODWORD(v42) = *v41;
        v38 = v73;
        v39 = v72;
      }
      v40[1] = v42;
      if ( a10 )
        v44 = a7[v38];
      else
        v44 = (const void *)*((_QWORD *)v41 - 1);
      memmove((char *)v28 + v39, v44, *v41);
      v40 += 3;
      v39 = *v41 + v72;
      v41 += 24;
      v38 = v73 + 1;
      v72 = v39;
      v73 = v38;
    }
    while ( v38 < a5->NumAllocations );
  }
  v45 = (unsigned int)v74;
  v73 = (unsigned int)v74;
  LODWORD(v30) = VmBusSendSyncMessage(*this, (struct DXGKVMB_COMMAND_BASE *)v28, v26, v29, &v73, Flags);
  if ( (int)v30 < 0 )
    goto LABEL_63;
  LODWORD(v30) = -1073741823;
  if ( v73 < v45 )
    goto LABEL_63;
  v46 = 0LL;
  v29[3] = v86;
  LODWORD(v30) = 0;
  v47 = a5->NumAllocations;
  v87 = 0;
  v48 = v47 - 1;
  v49 = (char *)&v29[16 * v48 + 22 + 2 * v48];
  v74 = v49;
  if ( !v47 )
    goto LABEL_62;
  v50 = &a6->PrivateDriverDataSize;
  while ( 1 )
  {
    v51 = a5->Flags;
    LOBYTE(v48) = (*(_BYTE *)&v51 & 8) == 0;
    if ( ((unsigned __int8)v48 & ((v28[11] & 0x20) == 0)) != 0 || (int)v30 < 0 )
      goto LABEL_57;
    v52 = 9 * v46;
    if ( (*(_BYTE *)&v51 & 8) != 0 )
      break;
    Global = DXGGLOBAL::GetGlobal(v48);
    v57 = &v29[2 * v52 + 7];
    GpadlFromBuffer = VmbChannelCreateGpadlFromBuffer(
                        **((_QWORD **)Global + 152),
                        0LL,
                        *((_QWORD *)v50 - 2),
                        (unsigned int)v29[2 * v52 + 8],
                        v57);
LABEL_51:
    LODWORD(v30) = GpadlFromBuffer;
    if ( GpadlFromBuffer < 0 )
    {
      v63 = WdLogNewEntry5_WdAssertion(v59);
      *(_QWORD *)(v63 + 24) = (int)v30;
LABEL_55:
      WdLogEvent5_WdAssertion(v63);
      goto LABEL_56;
    }
    v76 = 0LL;
    v78 = 0;
    v77 = a2;
    v80 = a3;
    v81 = v29[2 * v52 + 4];
    v82 = *v57;
    v79 = 46;
    v64 = VmBusSendSyncMessageStatusReturn(*this, (struct DXGKVMB_COMMAND_BASE *)&v76, 0x28u, v60);
    v30 = v64;
    if ( v64 < 0 )
    {
      v63 = WdLogNewEntry5_WdAssertion(v65);
      *(_QWORD *)(v63 + 24) = v30;
      goto LABEL_55;
    }
LABEL_56:
    LODWORD(v46) = v87;
    v49 = v74;
LABEL_57:
    v66 = *v50;
    if ( &v49[v66] > (char *)v29 + v75 )
    {
      v67 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v66);
      v67[5] = 0LL;
      v67[6] = 0LL;
      v67[7] = 0LL;
      v67[3] = 275LL;
      v67[4] = 2LL;
      WdLogEvent5_WdCriticalError(v67);
      LODWORD(v66) = *v50;
    }
    memmove(a7[(unsigned int)v46], v49, (unsigned int)v66);
    v46 = (unsigned int)(v46 + 1);
    v49 += *v50;
    v87 = v46;
    v50 += 24;
    v74 = v49;
    if ( (unsigned int)v46 >= a5->NumAllocations )
      goto LABEL_62;
  }
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, *(_QWORD *)&v29[2 * v52 + 8], MmCached, 4u);
  v55 = PagesForMdl;
  if ( PagesForMdl )
  {
    *((_QWORD *)v50 - 2) = PagesForMdl;
    v56 = DXGGLOBAL::GetGlobal(v54);
    v57 = &v29[2 * v52 + 7];
    GpadlFromBuffer = VmbChannelCreateGpadlFromMdl(**((_QWORD **)v56 + 152), 0LL, v55, 0LL, 0, v57);
    goto LABEL_51;
  }
  LODWORD(v30) = -1073741801;
  v68 = WdLogNewEntry5_WdLowResource(v54);
  *(_QWORD *)(v68 + 24) = 5532LL;
  WdLogEvent5_WdLowResource(v68);
LABEL_62:
  *a12 = (unsigned __int8 *)v29;
  v29 = 0LL;
LABEL_63:
  operator delete[](v29);
  operator delete[](v28);
  if ( (int)v30 < 0 )
  {
    v70 = WdLogNewEntry5_WdError(v69);
    *(_QWORD *)(v70 + 24) = (int)v30;
    WdLogEvent5_WdError(v70);
  }
  return (unsigned int)v30;
}
