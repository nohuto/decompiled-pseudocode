/*
 * XREFs of ?VmBusDdiQueryAdapterInfo@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002CD80
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00A5924 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00D2FBC (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

char __fastcall VmBusDdiQueryAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  _DWORD *v1; // rsi
  char v2; // r14
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  struct DXGADAPTER *v7; // r15
  int v8; // edi
  unsigned int v9; // edx
  DXGK_QUERYADAPTERINFOTYPE v10; // eax
  unsigned int v11; // eax
  _DXGKARG_QUERYADAPTERINFO v12; // [rsp+28h] [rbp-39h] BYREF
  _BYTE v13[8]; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v14[32]; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v15[40]; // [rsp+80h] [rbp+1Fh] BYREF

  v1 = (_DWORD *)*((_QWORD *)a1 + 9);
  v2 = 0;
  v4 = *((unsigned int *)a1 + 20) - 31LL;
  if ( v4 >= (unsigned int)v1[5] )
  {
    v7 = *(struct DXGADAPTER **)(*((_QWORD *)a1 + 5) + 8LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, v7, 0LL);
    v8 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13);
    if ( v8 >= 0 )
    {
      memset(&v12, 0, 0x28uLL);
      v10 = v1[4];
      v12.Flags.Value |= 1u;
      v12.Type = v10;
      v12.InputDataSize = v1[5];
      v12.pInputData = v1 + 7;
      v11 = v1[6];
      if ( v11 )
      {
        v12.OutputDataSize = v1[6];
        v12.pOutputData = operator new(v11, v9, 1, (enum _POOL_TYPE)512);
        if ( !v12.pOutputData )
          v8 = -1073741801;
      }
      if ( v8 >= 0 )
      {
        if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v7, &v12) >= 0 )
        {
          VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v12.pOutputData, v12.OutputDataSize);
          v2 = 1;
        }
        if ( v12.pOutputData )
          operator delete[](v12.pOutputData);
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v15);
    COREACCESS::~COREACCESS((COREACCESS *)v14);
    return v2;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(a1, v4);
    *(_QWORD *)(v5 + 24) = *((unsigned int *)a1 + 20);
    *(_QWORD *)(v5 + 32) = 6144LL;
    WdLogEvent5_WdError(v5);
    return 0;
  }
}
