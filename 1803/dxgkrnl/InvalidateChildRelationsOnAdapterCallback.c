/*
 * XREFs of InvalidateChildRelationsOnAdapterCallback @ 0x1C01C6C60
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 */

__int64 __fastcall InvalidateChildRelationsOnAdapterCallback(struct _DEVICE_OBJECT **a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  struct _DEVICE_OBJECT *v4; // rcx
  __int64 v5; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rbx
  __int64 v7; // rax
  _BYTE v9[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v10[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v11[40]; // [rsp+48h] [rbp-30h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v9, (struct DXGADAPTER *const)a1, 0LL);
  v2 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v9);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = a1[24];
    if ( v4 )
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v4);
      if ( !DeviceAttachmentBaseRef )
      {
        v7 = WdLogNewEntry5_WdAssertion(v5);
        *(_QWORD *)(v7 + 24) = 2546LL;
        WdLogEvent5_WdAssertion(v7);
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
  COREACCESS::~COREACCESS((COREACCESS *)v11);
  COREACCESS::~COREACCESS((COREACCESS *)v10);
  return v3;
}
