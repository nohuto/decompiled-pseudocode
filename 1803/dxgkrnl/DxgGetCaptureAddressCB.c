/*
 * XREFs of DxgGetCaptureAddressCB @ 0x1C018CE20
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0006E24 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgGetCaptureAddressCB(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rdi
  unsigned int v5; // ecx
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rdx
  struct _EX_RUNDOWN_REF *v10; // rdx
  ULONG_PTR Count; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int8 CurrentIrql; // al
  bool v15; // cf
  struct _EX_RUNDOWN_REF *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  unsigned int v19; // ebx
  __int64 v20; // rax
  struct _EX_RUNDOWN_REF *v22; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v23[24]; // [rsp+38h] [rbp-11h] BYREF
  _BYTE v24[8]; // [rsp+50h] [rbp+7h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp+Fh] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v24);
  a1[1] = 0;
  *((_QWORD *)a1 + 1) = 0LL;
  Current = DXGPROCESS::GetCurrent(v3, v2);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v23, (struct _KTHREAD **)Current);
  v5 = (*a1 >> 6) & 0xFFFFFF;
  if ( v5 < *((_DWORD *)Current + 62)
    && (v6 = *((_QWORD *)Current + 29),
        v7 = v5,
        v8 = *(_DWORD *)(v6 + 16LL * v5 + 8),
        ((*a1 >> 25) & 0x60) == (v8 & 0x60))
    && (v8 & 0x2000) == 0
    && (v8 & 0x1F) != 0
    && (v9 = 2 * v7, (v8 & 0x1F) == 5) )
  {
    v10 = *(struct _EX_RUNDOWN_REF **)(v6 + 8 * v9);
  }
  else
  {
    v10 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v22, v10);
  if ( !v22 )
    goto LABEL_17;
  v12 = *(_QWORD *)(v22[1].Count + 16);
  if ( !v12 || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v12 + 16)) )
    goto LABEL_17;
  CurrentIrql = KeGetCurrentIrql();
  v15 = CurrentIrql < 2u;
  v16 = v22;
  if ( !v15 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22[1].Count + 16) + 16LL) + 192LL) + 64LL);
    if ( *(_DWORD *)(*(_QWORD *)(v17 + 40) + 28LL) >= 0x2003u )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17);
      v18[3] = 275LL;
      v18[4] = 20LL;
      v18[5] = *(_QWORD *)(*(_QWORD *)(v22[1].Count + 16) + 16LL);
      v18[6] = 0LL;
      v18[7] = 0LL;
      WdLogEvent5_WdCriticalError(v18);
      v16 = v22;
    }
  }
  Count = v16[6].Count;
  v12 = *(unsigned int *)(Count + 4);
  if ( (v12 & 0x20) != 0 && (v16[9].Count & 0x800) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16[1].Count + 16) + 544LL)
                                                                                       + 8LL)
                                                                           + 216LL))(
      *(_QWORD *)(*(_QWORD *)(v16[1].Count + 16) + 552LL),
      *(_QWORD *)(Count + 8),
      a1 + 1,
      a1 + 2);
    v19 = 0;
  }
  else
  {
LABEL_17:
    v20 = WdLogNewEntry5_WdWarning(v12, Count, v13);
    *(_QWORD *)(v20 + 24) = *a1;
    WdLogEvent5_WdWarning(v20);
    v19 = -1073741811;
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v22);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  if ( v24[0] )
    KeUnstackDetachProcess(&ApcState);
  return v19;
}
