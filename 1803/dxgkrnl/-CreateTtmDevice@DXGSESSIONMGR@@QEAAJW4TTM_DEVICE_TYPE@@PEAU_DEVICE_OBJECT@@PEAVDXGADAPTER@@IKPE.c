/*
 * XREFs of ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEAPEAX@Z @ 0x1C01CEE94
 * Callers:
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C0235898 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0CTTMDEVICE@@AEAA@W4TTM_DEVICE_TYPE@@@Z @ 0x1C01CDB70 (--0CTTMDEVICE@@AEAA@W4TTM_DEVICE_TYPE@@@Z.c)
 *     ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C01CFCCC (-Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z.c)
 *     ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C01CFEEC (-QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::CreateTtmDevice(
        __int64 a1,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        struct DXGADAPTER *a4,
        unsigned int a5,
        unsigned int a6,
        CTTMDEVICE **a7)
{
  PVOID v10; // rax
  __int64 v11; // rcx
  CTTMDEVICE *v12; // rbx
  __int64 v13; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbp
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rax

  if ( a7 && (a3 || a4) && ((a5 + 3) & 0xFFFFFFFD) != 0 )
  {
    v10 = operator new[](0x390uLL, 0x4B677844u, PagedPool);
    if ( v10 )
      v12 = (CTTMDEVICE *)CTTMDEVICE::CTTMDEVICE((__int64)v10, 1299018836);
    else
      v12 = 0LL;
    if ( v12 )
    {
      v15 = CTTMDEVICE::Initialize(v12, a3, a4, a5, a6);
      v17 = v15;
      if ( v15 < 0
        || (v19 = CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(
                    (CSERIALIZEDWORKQUEUE *)(a1 + 184),
                    (void (*)(void *))DXGSESSIONMGR::CreateTtmDeviceWorker,
                    v12),
            v17 = v19,
            v19 < 0) )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdError(v16);
        v18[3] = a5;
        v18[4] = a4;
        v18[5] = v17;
        WdLogEvent5_WdError(v18);
        return (unsigned int)v17;
      }
      else
      {
        *a7 = v12;
        return 0LL;
      }
    }
    else
    {
      v13 = WdLogNewEntry5_WdLowResource(v11);
      *(_QWORD *)(v13 + 24) = a5;
      *(_QWORD *)(v13 + 32) = a4;
      WdLogEvent5_WdLowResource(v13);
      return 3221225495LL;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
}
