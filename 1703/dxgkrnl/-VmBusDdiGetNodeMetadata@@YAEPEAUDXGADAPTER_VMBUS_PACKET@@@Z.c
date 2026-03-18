/*
 * XREFs of ?VmBusDdiGetNodeMetadata@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002CA20
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

unsigned __int8 __fastcall VmBusDdiGetNodeMetadata(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int16 *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  _BYTE v13[8]; // [rsp+28h] [rbp-59h] BYREF
  _BYTE v14[32]; // [rsp+30h] [rbp-51h] BYREF
  _BYTE v15[40]; // [rsp+50h] [rbp-31h] BYREF
  _OWORD v16[4]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+37h]
  __int16 v18; // [rsp+C0h] [rbp+3Fh]
  int v19; // [rsp+C4h] [rbp+43h]

  v2 = *((_QWORD *)a1 + 9);
  v3 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 8LL);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, (struct DXGADAPTER *const)v3, 0LL);
  v19 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13);
  if ( v19 >= 0 )
  {
    v5 = *(unsigned int *)(v2 + 16);
    v6 = WORD1(v5);
    if ( *(int *)(v3 + 1944) < 0x2000 )
      v7 = 1LL;
    else
      v7 = *(unsigned int *)(v3 + 248);
    if ( (unsigned int)v6 < (unsigned int)v7 )
    {
      v9 = (unsigned __int16 *)(*(_QWORD *)(v3 + 2192) + 48 * v6);
      if ( (unsigned __int16)v5 < (unsigned int)*v9 )
      {
        v10 = *((_QWORD *)v9 + 3);
        v11 = 74 * v5;
        v16[0] = *(_OWORD *)(v11 + v10);
        v16[1] = *(_OWORD *)(v11 + v10 + 16);
        v16[2] = *(_OWORD *)(v11 + v10 + 32);
        v16[3] = *(_OWORD *)(v11 + v10 + 48);
        v17 = *(_QWORD *)(v11 + v10 + 64);
        v18 = *(_WORD *)(v11 + v10 + 72);
        goto LABEL_11;
      }
      v8 = WdLogNewEntry5_WdWarning(v7, v9, v5, (unsigned __int16)v5);
      *(_QWORD *)(v8 + 24) = 6207LL;
    }
    else
    {
      v8 = WdLogNewEntry5_WdWarning(v7, v4, v5, (unsigned __int16)v5);
      *(_QWORD *)(v8 + 24) = 6199LL;
    }
    WdLogEvent5_WdWarning(v8);
    v19 = -1073741811;
  }
LABEL_11:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v16, 0x50u);
  COREACCESS::~COREACCESS((COREACCESS *)v15);
  COREACCESS::~COREACCESS((COREACCESS *)v14);
  return 1;
}
