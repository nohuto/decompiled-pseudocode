/*
 * XREFs of DxgGetCaptureAddressCB @ 0x1C019EAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0008C00 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgGetCaptureAddressCB(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v5; // rdx
  __int64 v6; // r9
  int v7; // r8d
  __int64 v8; // rdx
  struct _EX_RUNDOWN_REF *v9; // rdx
  ULONG_PTR Count; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int8 CurrentIrql; // al
  bool v14; // cf
  struct _EX_RUNDOWN_REF *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
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
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v23, Current);
  v5 = (*a1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v5 < *((_DWORD *)Current + 60)
    && (v6 = *((_QWORD *)Current + 28),
        v7 = *(_DWORD *)(v6 + 16LL * (unsigned int)v5 + 8),
        ((*a1 >> 25) & 0x60) == (*(_BYTE *)(v6 + 16LL * (unsigned int)v5 + 8) & 0x60))
    && (v7 & 0x2000) == 0
    && (v7 & 0x1F) != 0
    && (v8 = 2 * v5, (*(_BYTE *)(v6 + 8 * v8 + 8) & 0x1F) == 5) )
  {
    v9 = *(struct _EX_RUNDOWN_REF **)(v6 + 8 * v8);
  }
  else
  {
    v9 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v22, v9);
  if ( !v22 )
    goto LABEL_17;
  v11 = *(_QWORD *)(v22[1].Count + 16);
  if ( !v11 || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v11 + 16)) )
    goto LABEL_17;
  CurrentIrql = KeGetCurrentIrql();
  v14 = CurrentIrql < 2u;
  v15 = v22;
  if ( !v14 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22[1].Count + 16) + 16LL) + 192LL) + 64LL);
    v17 = *(_QWORD *)(v16 + 40);
    if ( *(_DWORD *)(v17 + 28) >= 0x2003u )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v17, v12);
      v18[3] = 275LL;
      v18[4] = 20LL;
      v18[5] = *(_QWORD *)(*(_QWORD *)(v22[1].Count + 16) + 16LL);
      v18[6] = 0LL;
      v18[7] = 0LL;
      WdLogEvent5_WdCriticalError(v18);
      v15 = v22;
    }
  }
  Count = v15[6].Count;
  v11 = *(unsigned int *)(Count + 4);
  if ( (v11 & 0x20) != 0 && (v15[9].Count & 0x800) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15[1].Count + 16) + 528LL)
                                                                                       + 8LL)
                                                                           + 216LL))(
      *(_QWORD *)(*(_QWORD *)(v15[1].Count + 16) + 536LL),
      *(_QWORD *)(Count + 8),
      a1 + 1,
      a1 + 2);
    v19 = 0;
  }
  else
  {
LABEL_17:
    v20 = WdLogNewEntry5_WdWarning(v11, Count, v12);
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
