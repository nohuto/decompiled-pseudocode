/*
 * XREFs of DxgkDispMgrSourceOperation @ 0x1C01DA190
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ @ 0x1C00E8BDC (--1-$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkDispMgrSourceOperation(_OWORD *a1)
{
  HANDLE v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  NTSTATUS v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  int v11; // r8d
  ULONG64 v12; // rdx
  HANDLE Handle[4]; // [rsp+40h] [rbp-28h] BYREF
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  memset(Handle, 0, sizeof(Handle));
  if ( a1 + 2 < a1 || (unsigned __int64)(a1 + 2) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)Handle = *a1;
  *(_OWORD *)&Handle[2] = a1[1];
  Object = 0LL;
  v2 = Handle[1];
  v5 = ObReferenceObjectByHandleWithTag(
         Handle[1],
         0x20000u,
         g_pDxgkDisplayManagerObjectType,
         1,
         0x4B677844u,
         &Object,
         0LL);
  if ( v5 < 0 )
  {
    v7 = WdLogNewEntry5_WdWarning(v4, v3, v6);
    *(_QWORD *)(v7 + 24) = v2;
    WdLogEvent5_WdWarning(v7);
    goto LABEL_9;
  }
  v8 = *((_QWORD *)Object + 1);
  if ( !v8 )
  {
    v9 = WdLogNewEntry5_WdWarning(v4, 0LL, v6);
    *(_QWORD *)(v9 + 24) = 781LL;
    WdLogEvent5_WdWarning(v9);
LABEL_8:
    v5 = -1073741811;
    goto LABEL_9;
  }
  if ( LODWORD(Handle[0]) != 1 )
    goto LABEL_8;
  Handle[2] = *(HANDLE *)(v8 + 32);
  v11 = *(_DWORD *)(v8 + 40);
  v12 = (ULONG64)(a1 + 1);
  if ( (unsigned __int64)(a1 + 1) >= MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  *(HANDLE *)v12 = Handle[2];
  *(_DWORD *)(v12 + 8) = v11;
LABEL_9:
  NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&Object);
  return (unsigned int)v5;
}
