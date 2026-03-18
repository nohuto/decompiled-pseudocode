/*
 * XREFs of ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01805E0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D3BC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkOpenResource @ 0x1C00C0FA0 (DxgkOpenResource.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C00D44B0 (DxgkOpenResourceFromNtHandle.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusOpenResource(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  unsigned int v1; // ebx
  PVOID v3; // r12
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned int v7; // eax
  _DWORD *v8; // r14
  SIZE_T v9; // rax
  _DWORD *v10; // r15
  __int64 v11; // rsi
  unsigned int v12; // eax
  unsigned int v13; // r13d
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rcx
  _QWORD v30[14]; // [rsp+20h] [rbp-79h] BYREF
  _BYTE v31[96]; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v33; // [rsp+108h] [rbp+6Fh]
  __int64 v34; // [rsp+110h] [rbp+77h]

  v1 = 0;
  v3 = 0LL;
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
  v5 = v4;
  if ( !v4 )
    return 0;
  v7 = *(_DWORD *)(v4 + 36);
  if ( v7 > 0x8000 )
    return 0;
  v33 = 4 * v7 + 8;
  v8 = operator new(v33, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( !v8 )
    return 0;
  v9 = 80LL * *(unsigned int *)(v5 + 36);
  if ( !is_mul_ok(*(unsigned int *)(v5 + 36), 0x50uLL) )
    v9 = -1LL;
  v10 = operator new(v9, 0x4B677844u, 1, PagedPool);
  if ( v10 && ((v12 = *(_DWORD *)(v5 + 40)) == 0 || (v3 = operator new(v12, 0x4B677844u, 1, PagedPool)) != 0LL) )
  {
    if ( !*(_BYTE *)(v5 + 28) )
    {
      memset(v30, 0, 0x48uLL);
      LODWORD(v30[0]) = *(_DWORD *)(v5 + 24);
      HIDWORD(v30[0]) = *(_DWORD *)(v5 + 32);
      LODWORD(v30[1]) = *(_DWORD *)(v5 + 36);
      LODWORD(v30[8]) = *(_DWORD *)(v5 + 40);
      v30[2] = v10;
      v30[7] = v3;
      v27 = DxgkOpenResource((ULONG64)v30, v25, v26);
      v11 = v27;
      if ( v27 >= 0 )
      {
        *v8 = HIDWORD(v30[8]);
        if ( *(_DWORD *)(v5 + 36) )
        {
          do
          {
            v29 = v1++;
            v8[v29 + 2] = v10[20 * v29];
          }
          while ( v1 < *(_DWORD *)(v5 + 36) );
        }
        goto LABEL_30;
      }
LABEL_27:
      v28 = WdLogNewEntry5_WdError(v22);
      *(_QWORD *)(v28 + 24) = v11;
      WdLogEvent5_WdError(v28);
      goto LABEL_30;
    }
    memset(v30, 0, 0x68uLL);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v31, *((struct _KTHREAD ***)a1 + 7));
    v13 = *(_DWORD *)(v5 + 32);
    v34 = *((_QWORD *)a1 + 7);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v34 + 208));
    v14 = (v13 >> 6) & 0xFFFFFF;
    if ( v14 < *(_DWORD *)(v34 + 248)
      && (v15 = *(_QWORD *)(v34 + 232),
          v16 = *(_DWORD *)(v15 + 16LL * v14 + 8),
          ((v13 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0x60))
      && (v16 & 0x2000) == 0
      && (v16 & 0x1F) == 0xD )
    {
      v17 = *(_QWORD *)(v15 + 16LL * v14);
    }
    else
    {
      v17 = 0LL;
    }
    ExReleasePushLockSharedEx(v34 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( v17 && *(_DWORD *)v17 == 4 && *(_QWORD *)(v17 + 16) )
    {
      v30[1] = *(_QWORD *)(v17 + 16);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
      LODWORD(v30[0]) = *(_DWORD *)(v5 + 24);
      LODWORD(v30[2]) = *(_DWORD *)(v5 + 36);
      LODWORD(v30[8]) = *(_DWORD *)(v5 + 40);
      v30[3] = v10;
      v30[9] = v3;
      v21 = DxgkOpenResourceFromNtHandle((ULONG64)v30, v19, v20);
      v11 = v21;
      if ( v21 >= 0 )
      {
        *v8 = v30[10];
        if ( *(_DWORD *)(v5 + 36) )
        {
          do
          {
            v23 = v1++;
            v8[v23 + 2] = v10[20 * v23];
          }
          while ( v1 < *(_DWORD *)(v5 + 36) );
        }
        goto LABEL_30;
      }
      goto LABEL_27;
    }
    v24 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v24 + 24) = *(unsigned int *)(v5 + 32);
    WdLogEvent5_WdError(v24);
    LODWORD(v11) = -1073741811;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
  }
  else
  {
    LODWORD(v11) = -1073741801;
  }
LABEL_30:
  v8[1] = v11;
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v8, v33);
  operator delete[](v8);
  operator delete[](v10);
  operator delete[](v3);
  return 1;
}
