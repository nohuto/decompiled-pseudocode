/*
 * XREFs of DxgkFlushHeapTransitions @ 0x1C00A06E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendFlushHeapTransitions@DXGADAPTER@@QEAAJXZ @ 0x1C003039C (-VmBusSendFlushHeapTransitions@DXGADAPTER@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkFlushHeapTransitions(unsigned int *a1)
{
  __int64 v1; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGADAPTER *v11; // rdi
  __int64 v12; // rdx
  struct _MDL *v13; // r9
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  DXGADAPTER *v18; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v19[8]; // [rsp+30h] [rbp-28h] BYREF
  struct DXGADAPTER *v20; // [rsp+38h] [rbp-20h]
  char v21; // [rsp+40h] [rbp-18h]
  struct DXGADAPTER *v22; // [rsp+68h] [rbp+10h] BYREF

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v1 = *a1;
  v22 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v16 = WdLogNewEntry5_WdWarning(v4, v3, v5, v6);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v16);
    return 3221225485LL;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v18, (unsigned int)v1, Current, &v22);
  v11 = v22;
  if ( !v22 )
  {
    v17 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v17 + 24) = v1;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    if ( v18 )
      DXGADAPTER::ReleaseReference(v18);
    return 3221225485LL;
  }
  v20 = v22;
  v21 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
  if ( *((_DWORD *)v11 + 44) == 1 )
  {
    v14 = *((_QWORD *)v22 + 286);
    if ( v14 )
    {
      if ( *((_BYTE *)v22 + 186) )
        DXGADAPTER::VmBusSendFlushHeapTransitions(v22, v12, v14, v13);
      else
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v14 + 432) + 8LL) + 1072LL))(*(_QWORD *)(v14 + 440));
    }
  }
  if ( v21 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
  if ( v18 )
    DXGADAPTER::ReleaseReference(v18);
  return 0LL;
}
