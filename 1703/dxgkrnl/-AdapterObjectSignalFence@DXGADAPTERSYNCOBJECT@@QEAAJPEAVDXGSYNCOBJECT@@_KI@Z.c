/*
 * XREFs of ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KI@Z @ 0x1C008B578
 * Callers:
 *     ?VmBusSignalFence@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0033000 (-VmBusSignalFence@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KI@Z @ 0x1C008B518 (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KI@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendSignalFenceNtShared@@YAJI_K@Z @ 0x1C00317B8 (-VmBusSendSignalFenceNtShared@@YAJI_K@Z.c)
 */

__int64 __fastcall DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(
        DXGADAPTERSYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        __int64 a3,
        int a4)
{
  struct DXGADAPTER *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v21[24]; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v22[8]; // [rsp+68h] [rbp+7h] BYREF
  _BYTE v23[32]; // [rsp+70h] [rbp+Fh] BYREF
  _BYTE v24[40]; // [rsp+90h] [rbp+2Fh] BYREF
  __int64 v25; // [rsp+C8h] [rbp+67h] BYREF

  v7 = *(struct DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
  if ( *((_BYTE *)v7 + 186) )
    return VmBusSendSignalFenceNtShared(a4, a3);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, v7, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22) < 0 )
  {
    v18 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v18 + 24) = 1026LL;
    WdLogEvent5_WdEvent(v18);
    LODWORD(v16) = 0;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGSYNCOBJECT *)((char *)a2 + 32), v8, v9);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
    v20 = *((_QWORD *)this + 4);
    v10 = *((_QWORD *)this + 2);
    v25 = a3;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v10 + 408) + 8LL)
                                                                                           + 544LL))(
            0LL,
            0LL,
            1LL,
            &v20,
            0,
            &v25);
    v16 = v11;
    if ( v11 < 0 )
    {
      v19 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v19 + 24) = v16;
      WdLogEvent5_WdError(v19);
    }
    else
    {
      LODWORD(v16) = 0;
    }
    if ( v21[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21, v12, v14, v15);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v24);
  COREACCESS::~COREACCESS((COREACCESS *)v23);
  return (unsigned int)v16;
}
