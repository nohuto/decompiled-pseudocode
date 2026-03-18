/*
 * XREFs of ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017DC90
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D45C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00975C4 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     DxgkShareObjectsInternal @ 0x1C00D54D8 (DxgkShareObjectsInternal.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00F8734 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C017B3F4 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateNtSharedObject(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2)
{
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v4; // r14
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rcx
  char *Src; // rsi
  __int64 v14; // r14
  unsigned int v15; // edx
  int v16; // r9d
  int EntryType; // eax
  int v18; // r15d
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  DXGAUTOPUSHLOCK *v28; // rcx
  __int64 v29; // rax
  _BYTE v31[24]; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v32[24]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v33[3]; // [rsp+80h] [rbp-9h] BYREF
  int v34; // [rsp+98h] [rbp+Fh]
  __int128 v35; // [rsp+A0h] [rbp+17h]
  int v36; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v37; // [rsp+100h] [rbp+77h] BYREF
  __int64 v38; // [rsp+108h] [rbp+7Fh] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  v36 = 0;
  v4 = (struct _KTHREAD **)Current;
  v5 = operator new[](0x20uLL, 0x4B677844u, PagedPool);
  v7 = (__int64)v5;
  if ( v5 )
  {
    *(_DWORD *)v5 = 0;
    v5[1] = 0LL;
    *((_DWORD *)v5 + 4) = 0;
    *((_DWORD *)v5 + 6) = 1;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
  {
    v8 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v8 + 24) = 4210LL;
    WdLogEvent5_WdLowResource(v8);
    goto LABEL_38;
  }
  v9 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  v10 = v9;
  if ( !v9 )
    return v9;
  v11 = 0LL;
  v38 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v31, v4);
  Src = (char *)(v10 + 24);
  v14 = (__int64)(v4 + 29);
  v15 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
  if ( v15 >= *(_DWORD *)(v14 + 16) )
    goto LABEL_36;
  v12 = 2LL * v15;
  v16 = *(_DWORD *)(*(_QWORD *)v14 + 16LL * v15 + 8);
  if ( ((*(_DWORD *)Src >> 25) & 0x60) != (*(_BYTE *)(*(_QWORD *)v14 + 16LL * v15 + 8) & 0x60)
    || (v16 & 0x2000) != 0
    || (v16 & 0x1F) == 0 )
  {
    goto LABEL_36;
  }
  EntryType = HMGRTABLE::GetEntryType(v14, v15);
  v18 = EntryType;
  if ( EntryType != 4 )
  {
    if ( EntryType == 8 )
    {
      v22 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
      if ( (unsigned int)v22 < *(_DWORD *)(v14 + 16)
        && (v23 = *(_DWORD *)(*(_QWORD *)v14 + 16 * v22 + 8),
            ((*(_DWORD *)Src >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v14 + 16 * v22 + 8) & 0x60))
        && (v23 & 0x2000) == 0
        && (v23 & 0x1F) == 8 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)v14 + 16LL * (unsigned int)v22);
      }
      else
      {
        v11 = 0LL;
      }
      goto LABEL_28;
    }
    if ( EntryType == 11 )
    {
      v12 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
      if ( (unsigned int)v12 < *(_DWORD *)(v14 + 16) )
      {
        v19 = (unsigned int)v12;
        v12 = *(unsigned int *)(*(_QWORD *)v14 + 16LL * (unsigned int)v12 + 8);
        if ( ((*(_DWORD *)Src >> 25) & 0x60) == (v12 & 0x60) && (v12 & 0x2000) == 0 && (v12 & 0x1F) != 0 )
        {
          v20 = 2 * v19;
          v12 &= 0x1Fu;
          if ( (_BYTE)v12 == (_BYTE)EntryType )
          {
            v21 = *(_QWORD *)(*(_QWORD *)v14 + 8 * v20);
            if ( v21 )
            {
              v11 = *(_QWORD *)(v21 + 32);
LABEL_28:
              _InterlockedIncrement((volatile signed __int32 *)(v11 + 24));
              goto LABEL_29;
            }
          }
        }
      }
    }
LABEL_36:
    v29 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v29 + 24) = *(unsigned int *)Src;
    WdLogEvent5_WdError(v29);
    v28 = (DXGAUTOPUSHLOCK *)v31;
    goto LABEL_37;
  }
LABEL_29:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
  if ( v18 == 4 )
  {
    v33[1] = 0LL;
    v33[2] = 0LL;
    v37 = 0LL;
    LODWORD(v33[0]) = 48;
    v34 = 512;
    v35 = 0LL;
    if ( (int)DxgkShareObjectsInternal(0LL, 0, 0LL, 1u, Src, (PVOID *)v33, 0x10000000u, &v38, (PVOID *)&v37) < 0 )
    {
      v25 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v25 + 24) = *(unsigned int *)Src;
      WdLogEvent5_WdError(v25);
      goto LABEL_38;
    }
    v11 = *(_QWORD *)(v37 + 16);
  }
  *(_QWORD *)(v7 + 16) = v38;
  *(_DWORD *)v7 = v18;
  *(_QWORD *)(v7 + 8) = v11;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v32,
    *((struct _KTHREAD ***)a1 + 7));
  v36 = HMGRTABLE::AllocHandle((unsigned int *)(*((_QWORD *)a1 + 7) + 232LL), v7, 13, 0, 0);
  if ( !v36 )
  {
    v27 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v27 + 24) = 4291LL;
    WdLogEvent5_WdError(v27);
  }
  v28 = (DXGAUTOPUSHLOCK *)v32;
LABEL_37:
  DXGAUTOPUSHLOCK::Release(v28);
LABEL_38:
  if ( !v36 && v7 )
    DXGSHAREDVMOBJECT::ReleaseReference((int *)v7);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v36, 4u);
  LOBYTE(v9) = 1;
  return v9;
}
