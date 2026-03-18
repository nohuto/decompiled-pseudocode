/*
 * XREFs of ?VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01928F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C008450C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiQueryAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v1; // r15
  _DWORD *v2; // rbx
  __int64 v4; // r14
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // r8
  DXGK_QUERYADAPTERINFOTYPE v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _DXGKARG_QUERYADAPTERINFO v21; // [rsp+28h] [rbp-39h] BYREF
  _BYTE v22[8]; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v23[32]; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v24[40]; // [rsp+80h] [rbp+1Fh] BYREF

  v1 = 0;
  v2 = (_DWORD *)*((_QWORD *)a1 + 9);
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
  v5 = (unsigned int)v2[7];
  if ( (unsigned __int64)*((unsigned int *)a1 + 20) - 39 >= v5 )
  {
    switch ( v2[6] )
    {
      case 1:
        if ( (_DWORD)v5 || v2[8] != 576 )
        {
          v8 = WdLogNewEntry5_WdError((unsigned int)(v2[6] - 1));
          *(_QWORD *)(v8 + 24) = 2592LL;
          goto LABEL_42;
        }
        break;
      case 0xA:
        if ( *(int *)(v4 + 1968) < 0x2000 )
          v9 = 1;
        else
          v9 = *(_DWORD *)(v4 + 248);
        if ( (_DWORD)v5 != 4 )
        {
          v8 = WdLogNewEntry5_WdError((unsigned int)(v2[6] - 10));
          *(_QWORD *)(v8 + 24) = 2625LL;
          goto LABEL_42;
        }
        v10 = (unsigned int)v2[9];
        if ( (unsigned int)v10 >= v9 )
        {
          v8 = WdLogNewEntry5_WdError(v10);
          *(_QWORD *)(v8 + 24) = 2631LL;
          goto LABEL_42;
        }
        v11 = 6 * v10;
        if ( v2[8] != 4LL * *(unsigned __int16 *)(*(_QWORD *)(v4 + 2216) + 8 * v11) )
        {
          v8 = WdLogNewEntry5_WdError(v11);
          *(_QWORD *)(v8 + 24) = 2637LL;
          goto LABEL_42;
        }
        break;
      case 0xD:
        if ( (_DWORD)v5 != 4 || v2[8] != 24 )
        {
          v8 = WdLogNewEntry5_WdError((unsigned int)(v2[6] - 13));
          *(_QWORD *)(v8 + 24) = 2608LL;
          goto LABEL_42;
        }
        break;
      default:
        v7 = (unsigned int)(v2[6] - 14);
        if ( v2[6] == 14 )
        {
          if ( (_DWORD)v5 != 4 || v2[8] != 20 )
          {
            v8 = WdLogNewEntry5_WdError(v7);
            *(_QWORD *)(v8 + 24) = 2616LL;
            goto LABEL_42;
          }
        }
        else
        {
          if ( v2[6] != 15 )
          {
            v6 = WdLogNewEntry5_WdError(v7);
            *(_QWORD *)(v6 + 24) = (int)v2[6];
            goto LABEL_43;
          }
          if ( (_DWORD)v5 != 4 || v2[8] != 24 )
          {
            v8 = WdLogNewEntry5_WdError(v7);
            *(_QWORD *)(v8 + 24) = 2600LL;
LABEL_42:
            v6 = v8;
            goto LABEL_43;
          }
        }
        break;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, (struct DXGADAPTER *const)v4, 0LL);
    v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22);
    if ( v12 >= 0 )
    {
      memset(&v21, 0, 0x28uLL);
      v15 = v2[6];
      v21.Flags.Value |= 1u;
      v21.Type = v15;
      v21.InputDataSize = v2[7];
      v21.pInputData = v2 + 9;
      v16 = v2[8];
      if ( v16 )
      {
        if ( v16 > 0x20000 )
        {
          v17 = WdLogNewEntry5_WdError(v13);
          *(_QWORD *)(v17 + 24) = (unsigned int)v2[8];
          WdLogEvent5_WdError(v17);
          goto LABEL_40;
        }
        v21.OutputDataSize = v2[8];
        v21.pOutputData = operator new(v21.OutputDataSize, 0x4B677844u, 1, (POOL_TYPE)512);
        if ( !v21.pOutputData )
        {
          v19 = WdLogNewEntry5_WdLowResource(v18);
          *(_QWORD *)(v19 + 24) = 2669LL;
          WdLogEvent5_WdLowResource(v19);
          v12 = -1073741801;
        }
      }
      if ( v12 >= 0 )
      {
        if ( (int)DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v4, &v21, v14) >= 0 )
        {
          VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v21.pOutputData, v21.OutputDataSize);
          v1 = 1;
        }
        if ( v21.pOutputData )
          ExFreePoolWithTag(v21.pOutputData, 0);
      }
    }
LABEL_40:
    COREACCESS::~COREACCESS((COREACCESS *)v24);
    COREACCESS::~COREACCESS((COREACCESS *)v23);
    return v1;
  }
  v6 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v6 + 24) = *((unsigned int *)a1 + 20);
  *(_QWORD *)(v6 + 32) = 2584LL;
LABEL_43:
  WdLogEvent5_WdError(v6);
  return 0;
}
