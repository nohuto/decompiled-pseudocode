/*
 * XREFs of ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEAPEAX@Z @ 0x1C011B5B8
 * Callers:
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C01091F8 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0CTTMDEVICE@@AEAA@W4TTM_DEVICE_TYPE@@@Z @ 0x1C01196A8 (--0CTTMDEVICE@@AEAA@W4TTM_DEVICE_TYPE@@@Z.c)
 *     ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C01196FC (-Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z.c)
 *     ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C011B880 (-QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
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
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbp
  int v17; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax

  if ( a7 && (a3 || a4) && ((a5 + 3) & 0xFFFFFFFD) != 0 )
  {
    v10 = operator new(0x390uLL, 0x4B677844u, PagedPool);
    if ( v10 )
      v12 = (CTTMDEVICE *)CTTMDEVICE::CTTMDEVICE((__int64)v10, 1299018836);
    else
      v12 = 0LL;
    if ( v12 )
    {
      v13 = CTTMDEVICE::Initialize(v12, a3, a4, a5, a6);
      v16 = v13;
      if ( v13 < 0
        || (v17 = CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(
                    (CSERIALIZEDWORKQUEUE *)(a1 + 184),
                    (void (*)(void *))DXGSESSIONMGR::CreateTtmDeviceWorker,
                    v12),
            v16 = v17,
            v17 < 0) )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
        v21[3] = a5;
        v21[4] = a4;
        v21[5] = v16;
        WdLogEvent5_WdError(v21);
        return (unsigned int)v16;
      }
      else
      {
        *a7 = v12;
        return 0LL;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdLowResource(v11);
      *(_QWORD *)(v20 + 24) = a5;
      *(_QWORD *)(v20 + 32) = a4;
      WdLogEvent5_WdLowResource(v20);
      return 3221225495LL;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
}
