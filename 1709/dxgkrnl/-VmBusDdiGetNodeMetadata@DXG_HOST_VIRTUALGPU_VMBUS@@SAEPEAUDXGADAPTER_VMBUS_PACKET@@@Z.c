/*
 * XREFs of ?VmBusDdiGetNodeMetadata@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192580
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiGetNodeMetadata(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int16 *v9; // rdx
  __int64 v10; // rdx
  _BYTE v12[8]; // [rsp+28h] [rbp-59h] BYREF
  _BYTE v13[32]; // [rsp+30h] [rbp-51h] BYREF
  _BYTE v14[40]; // [rsp+50h] [rbp-31h] BYREF
  _OWORD v15[5]; // [rsp+78h] [rbp-9h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  memset(v15, 0, sizeof(v15));
  v3 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, (struct DXGADAPTER *const)v3, 0LL);
  HIDWORD(v15[4]) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v12);
  if ( v15[4] >= 0 )
  {
    v5 = *(unsigned int *)(v1 + 24);
    v6 = WORD1(v5);
    if ( *(int *)(v3 + 1968) < 0x2000 )
      v7 = 1LL;
    else
      v7 = *(unsigned int *)(v3 + 248);
    if ( (unsigned int)v6 < (unsigned int)v7 )
    {
      v9 = (unsigned __int16 *)(*(_QWORD *)(v3 + 2216) + 48 * v6);
      if ( (unsigned __int16)v5 < (unsigned int)*v9 )
      {
        v10 = *((_QWORD *)v9 + 3);
        v15[0] = *(_OWORD *)(74 * v5 + v10);
        v15[1] = *(_OWORD *)(74 * v5 + v10 + 16);
        v15[2] = *(_OWORD *)(74 * v5 + v10 + 32);
        v15[3] = *(_OWORD *)(74 * v5 + v10 + 48);
        *(_QWORD *)&v15[4] = *(_QWORD *)(74 * v5 + v10 + 64);
        WORD4(v15[4]) = *(_WORD *)(74 * v5 + v10 + 72);
        goto LABEL_11;
      }
      v8 = WdLogNewEntry5_WdWarning(v7, v9, v5);
      *(_QWORD *)(v8 + 24) = 2714LL;
    }
    else
    {
      v8 = WdLogNewEntry5_WdWarning(v7, v4, v5);
      *(_QWORD *)(v8 + 24) = 2706LL;
    }
    WdLogEvent5_WdWarning(v8);
    HIDWORD(v15[4]) = -1073741811;
  }
LABEL_11:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v15, 0x50u);
  COREACCESS::~COREACCESS((COREACCESS *)v14);
  COREACCESS::~COREACCESS((COREACCESS *)v13);
  return 1;
}
