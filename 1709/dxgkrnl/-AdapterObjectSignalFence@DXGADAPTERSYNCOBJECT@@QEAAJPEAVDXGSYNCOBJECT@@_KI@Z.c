/*
 * XREFs of ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KI@Z @ 0x1C008C580
 * Callers:
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@1@@Z @ 0x1C008AB0C (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@1@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendSignalFenceNtShared@DXG_GUEST_GLOBAL_VMBUS@@QEAAJI_K@Z @ 0x1C0197DC0 (-VmBusSendSignalFenceNtShared@DXG_GUEST_GLOBAL_VMBUS@@QEAAJI_K@Z.c)
 */

__int64 __fastcall DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(
        DXGADAPTERSYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        unsigned __int64 a3,
        unsigned int a4)
{
  struct DXGADAPTER *v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  struct DXGGLOBAL *Global; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v18[24]; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v19[80]; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+C0h] [rbp+8h] BYREF

  v8 = *(struct DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
  if ( *((_BYTE *)v8 + 185) )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)this);
    return DXG_GUEST_GLOBAL_VMBUS::VmBusSendSignalFenceNtShared(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 142), a4, a3);
  }
  else
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, v8, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19) < 0 )
    {
      v15 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v15 + 24) = 1047LL;
      WdLogEvent5_WdEvent(v15);
      LODWORD(v12) = 0;
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (struct DXGSYNCOBJECT *)((char *)a2 + 32));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
      v17 = *((_QWORD *)this + 4);
      v9 = *((_QWORD *)this + 2);
      v20 = a3;
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, _DWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(v9 + 504) + 8LL) + 544LL))(
              0LL,
              0LL,
              1LL,
              &v17,
              0,
              &v20);
      v12 = v10;
      if ( v10 < 0 )
      {
        v16 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v16 + 24) = v12;
        WdLogEvent5_WdError(v16);
      }
      else
      {
        LODWORD(v12) = 0;
      }
      if ( v18[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v19);
    return (unsigned int)v12;
  }
}
