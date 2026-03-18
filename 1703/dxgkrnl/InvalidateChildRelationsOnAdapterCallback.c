/*
 * XREFs of InvalidateChildRelationsOnAdapterCallback @ 0x1C01AABE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 */

__int64 __fastcall InvalidateChildRelationsOnAdapterCallback(struct _DEVICE_OBJECT **a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  struct _DEVICE_OBJECT *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  _BYTE v12[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v13[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v14[40]; // [rsp+48h] [rbp-30h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, (struct DXGADAPTER *const)a1, 0LL);
  v2 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v12);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = a1[24];
    if ( v4 )
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v4);
      if ( !DeviceAttachmentBaseRef )
      {
        v10 = WdLogNewEntry5_WdAssertion(v6, v5, v8, v9);
        *(_QWORD *)(v10 + 24) = 3134LL;
        WdLogEvent5_WdAssertion(v10);
      }
      IoInvalidateDeviceRelations(DeviceAttachmentBaseRef, BusRelations);
      ObfDereferenceObject(DeviceAttachmentBaseRef);
    }
    v3 = 0;
  }
  else if ( v2 == -1073741130 )
  {
    v3 = 0;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v14);
  COREACCESS::~COREACCESS((COREACCESS *)v13);
  return v3;
}
