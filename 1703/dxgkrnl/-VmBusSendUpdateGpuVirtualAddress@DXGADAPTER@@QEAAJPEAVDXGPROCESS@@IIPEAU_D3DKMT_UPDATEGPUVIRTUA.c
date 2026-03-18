/*
 * XREFs of ?VmBusSendUpdateGpuVirtualAddress@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@@Z @ 0x1C00324C0
 * Callers:
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01812F0 (DxgkUpdateGpuVirtualAddress.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013970 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z @ 0x1C0032468 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00871E4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0100FA0 (--0DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendUpdateGpuVirtualAddress(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        int a3,
        int a4,
        struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *a5)
{
  unsigned __int64 v8; // r14
  unsigned int v9; // ebx
  _DWORD *v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  D3DKMT_HANDLE hFenceObject; // r12d
  unsigned int v14; // ecx
  D3DKMT_HANDLE v15; // r12d
  __int64 v16; // r8
  unsigned int v17; // edx
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  int v24; // ebx
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *Operations; // rdx
  ULONG64 v26; // rcx
  int v27; // r13d
  int v28; // r12d
  unsigned int v29; // r14d
  unsigned __int64 v30; // rbx
  int v31; // eax
  DXGALLOCATIONREFERENCE *AllocationUnsafe; // rax
  struct _MDL *v33; // r9
  unsigned int v34; // [rsp+20h] [rbp-98h]
  __int64 v35; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v36[8]; // [rsp+30h] [rbp-88h] BYREF
  DXGADAPTER *v37; // [rsp+38h] [rbp-80h]
  char v38; // [rsp+40h] [rbp-78h]
  unsigned int v39; // [rsp+48h] [rbp-70h]
  unsigned int v40; // [rsp+4Ch] [rbp-6Ch]
  _BYTE v41[8]; // [rsp+50h] [rbp-68h] BYREF
  _DWORD *v42; // [rsp+58h] [rbp-60h]
  _BYTE v43[88]; // [rsp+60h] [rbp-58h] BYREF

  v37 = (DXGADAPTER *)this;
  v38 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
  if ( *((_DWORD *)this + 44) != 1 )
  {
    if ( v38 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
    return 3221226166LL;
  }
  v8 = (unsigned __int64)a5->NumOperations << 6;
  if ( v8 > 0xFFFFFFFF )
  {
    LODWORD(v8) = -1;
    v9 = -1073741675;
  }
  else
  {
    v9 = 0;
  }
  v40 = v9;
  if ( (unsigned int)v8 >= 0x10000 || (v39 = v8 + 48, (unsigned int)(v8 + 48) > 0x10000) )
  {
    if ( v38 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
    return 3221225659LL;
  }
  v10 = operator new[]((unsigned int)(v8 + 48), 0x4B677844u, (enum _POOL_TYPE)512);
  v42 = v10;
  if ( !v10 )
  {
    if ( v38 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
    return 3221225495LL;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v43, a2, v11, v12);
  hFenceObject = a5->hFenceObject;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 168));
  v14 = (hFenceObject >> 6) & 0xFFFFFF;
  v15 = hFenceObject >> 30;
  if ( v14 < *((_DWORD *)a2 + 52)
    && (v16 = *((_QWORD *)a2 + 24), v17 = *(_DWORD *)(v16 + 16LL * v14 + 8), v15 == ((v17 >> 4) & 3))
    && (v17 & 0x1000) == 0
    && (v17 & 0xF) != 0
    && (*(_BYTE *)(v16 + 16LL * v14 + 8) & 0xF) == 0xB )
  {
    v18 = *(_QWORD *)(v16 + 16LL * v14);
  }
  else
  {
    v18 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)a2 + 168, 0LL);
  KeLeaveCriticalRegion();
  if ( !v18 )
  {
    v23 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    *(_QWORD *)(v23 + 24) = a5->hFenceObject;
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v23);
    goto LABEL_26;
  }
  v24 = *(_DWORD *)(*(_QWORD *)(v18 + 32) + 76LL);
  v10[2] = 22;
  v10[3] = DXGPROCESS::GetHostProcess(a2);
  *((_QWORD *)v10 + 2) = a5->FenceValue;
  v10[10] = a5->Flags.Value;
  v10[7] = a4;
  v10[6] = a3;
  v10[8] = v24;
  v10[9] = a5->NumOperations;
  Operations = a5->Operations;
  v26 = (ULONG64)Operations + (unsigned int)v8;
  if ( v26 < (unsigned __int64)Operations || v26 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v10 + 12, Operations, (unsigned int)v8);
  v27 = 0;
  v28 = 0;
  v29 = 0;
  if ( !a5->NumOperations )
  {
LABEL_40:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v43);
    v9 = VmBusSendSyncMessageStatusReturn(this[484], (struct DXGKVMB_COMMAND *)v10, v39, v33);
    goto LABEL_41;
  }
  while ( 1 )
  {
    v30 = (unsigned __int64)v29 << 6;
    v31 = *(_DWORD *)((char *)v10 + v30 + 48);
    if ( v31 && v31 != 3 )
      goto LABEL_37;
    v34 = *(_DWORD *)((char *)v10 + v30 + 72);
    if ( v34 != v27 )
      break;
    *(_DWORD *)((char *)v10 + v30 + 72) = v28;
LABEL_37:
    if ( ++v29 >= a5->NumOperations )
      goto LABEL_40;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v35);
  AllocationUnsafe = DXGPROCESS::GetAllocationUnsafe((__int64)a2, (DXGALLOCATIONREFERENCE *)v41, v34);
  DXGALLOCATIONREFERENCE::MoveAssign(&v35, AllocationUnsafe);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v41);
  if ( v35 )
  {
    v27 = *(_DWORD *)((char *)v10 + v30 + 72);
    v28 = *(_DWORD *)(v35 + 96);
    *(_DWORD *)((char *)v10 + v30 + 72) = v28;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v35);
    goto LABEL_37;
  }
  v9 = -1073741811;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v35);
LABEL_26:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v43);
LABEL_41:
  operator delete[](v10);
  if ( v38 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
  return v9;
}
