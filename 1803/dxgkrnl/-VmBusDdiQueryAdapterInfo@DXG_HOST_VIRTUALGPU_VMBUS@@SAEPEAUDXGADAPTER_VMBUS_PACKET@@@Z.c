/*
 * XREFs of ?VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017EA00
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D394 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00F4918 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?GetDriverCapsSizeFromDdiVersion@@YAII@Z @ 0x1C01493A0 (-GetDriverCapsSizeFromDdiVersion@@YAII@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiQueryAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // r15
  _DWORD *v3; // rax
  __int64 v4; // rcx
  _DWORD *v5; // rbx
  unsigned __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // r8
  DXGK_QUERYADAPTERINFOTYPE v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  struct _DXGKARG_QUERYADAPTERINFO v23; // [rsp+28h] [rbp-39h] BYREF
  _BYTE v24[8]; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v25[32]; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v26[40]; // [rsp+80h] [rbp+1Fh] BYREF

  v2 = 0;
  v3 = (_DWORD *)CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
  v5 = v3;
  if ( !v3 )
    return 0;
  v6 = (unsigned int)v3[7];
  v7 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
  if ( (unsigned __int64)*((unsigned int *)a1 + 20) - 39 >= v6 )
  {
    v9 = (unsigned int)(v3[6] - 1);
    switch ( v3[6] )
    {
      case 1:
        if ( (_DWORD)v6 || v3[8] != (unsigned int)GetDriverCapsSizeFromDdiVersion(*(unsigned int *)(v7 + 1664)) )
        {
          v11 = WdLogNewEntry5_WdError(v9);
          *(_QWORD *)(v11 + 24) = 3018LL;
          goto LABEL_46;
        }
        break;
      case 0xA:
        if ( *(int *)(v7 + 2104) < 0x2000 )
          v12 = 1LL;
        else
          v12 = *(unsigned int *)(v7 + 248);
        if ( (_DWORD)v6 )
        {
          if ( (_DWORD)v6 != 4 )
          {
            v11 = WdLogNewEntry5_WdError(v12);
            *(_QWORD *)(v11 + 24) = 3058LL;
            goto LABEL_46;
          }
          v13 = (unsigned int)v3[9];
        }
        else
        {
          v13 = 0LL;
        }
        if ( (unsigned int)v13 >= (unsigned int)v12 )
        {
          v11 = WdLogNewEntry5_WdError(v12);
          *(_QWORD *)(v11 + 24) = 3065LL;
          goto LABEL_46;
        }
        if ( v5[8] != 4LL * *(unsigned __int16 *)(352 * v13 + *(_QWORD *)(v7 + 2360)) )
        {
          v11 = WdLogNewEntry5_WdError(352 * v13);
          *(_QWORD *)(v11 + 24) = 3071LL;
          goto LABEL_46;
        }
        break;
      case 0xD:
        if ( (_DWORD)v6 != 4 || v3[8] != 24 )
        {
          v11 = WdLogNewEntry5_WdError((unsigned int)(v3[6] - 13));
          *(_QWORD *)(v11 + 24) = 3034LL;
          goto LABEL_46;
        }
        break;
      default:
        v10 = (unsigned int)(v3[6] - 14);
        if ( v3[6] == 14 )
        {
          if ( (_DWORD)v6 != 4 || v3[8] != 20 )
          {
            v11 = WdLogNewEntry5_WdError(v10);
            *(_QWORD *)(v11 + 24) = 3042LL;
            goto LABEL_46;
          }
        }
        else
        {
          if ( v3[6] != 15 )
          {
            v8 = WdLogNewEntry5_WdError(v10);
            *(_QWORD *)(v8 + 24) = (int)v5[6];
            goto LABEL_47;
          }
          if ( (_DWORD)v6 != 4 || v3[8] != 24 )
          {
            v11 = WdLogNewEntry5_WdError(v10);
            *(_QWORD *)(v11 + 24) = 3026LL;
LABEL_46:
            v8 = v11;
            goto LABEL_47;
          }
        }
        break;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, (struct DXGADAPTER *const)v7, 0LL);
    v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24);
    if ( v14 >= 0 )
    {
      memset(&v23, 0, sizeof(v23));
      v17 = v5[6];
      v23.Flags.Value |= 1u;
      v23.Type = v17;
      v23.InputDataSize = v5[7];
      v23.pInputData = v5 + 9;
      v18 = v5[8];
      if ( v18 )
      {
        if ( v18 > 0x20000 )
        {
          v19 = WdLogNewEntry5_WdError(v15);
          *(_QWORD *)(v19 + 24) = (unsigned int)v5[8];
          WdLogEvent5_WdError(v19);
          goto LABEL_44;
        }
        v23.OutputDataSize = v5[8];
        v23.pOutputData = operator new(v23.OutputDataSize, 0x4B677844u, 1, (POOL_TYPE)512);
        if ( !v23.pOutputData )
        {
          v21 = WdLogNewEntry5_WdLowResource(v20);
          *(_QWORD *)(v21 + 24) = 3103LL;
          WdLogEvent5_WdLowResource(v21);
          v14 = -1073741801;
        }
      }
      if ( v14 >= 0 )
      {
        if ( (int)DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v7, &v23, v16) >= 0 )
        {
          VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v23.pOutputData, v23.OutputDataSize);
          v2 = 1;
        }
        if ( v23.pOutputData )
          operator delete[](v23.pOutputData);
      }
    }
LABEL_44:
    COREACCESS::~COREACCESS((COREACCESS *)v26);
    COREACCESS::~COREACCESS((COREACCESS *)v25);
    return v2;
  }
  v8 = WdLogNewEntry5_WdError(v4);
  *(_QWORD *)(v8 + 24) = *((unsigned int *)a1 + 20);
  *(_QWORD *)(v8 + 32) = 3009LL;
LABEL_47:
  WdLogEvent5_WdError(v8);
  return 0;
}
