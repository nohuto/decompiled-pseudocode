/*
 * XREFs of DxgkDispMgrReferenceObjectByHandle @ 0x1C01E4200
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ @ 0x1C01091E8 (--1-$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkDispMgrReferenceObjectByHandle(void *a1, ACCESS_MASK a2, _QWORD *a3)
{
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax
  _QWORD *v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v4 = ObReferenceObjectByHandleWithTag(a1, a2, g_pDxgkDisplayManagerObjectType, 1, 0x4B677844u, (PVOID *)&v11, 0LL);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v8 = v11;
    if ( *v11 )
    {
      v11 = 0LL;
      LODWORD(v6) = 0;
      *a3 = v8;
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v9 + 24) = 890LL;
      WdLogEvent5_WdError(v9);
      LODWORD(v6) = -1073741811;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdError(v7);
  }
  NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>((void **)&v11);
  return (unsigned int)v6;
}
