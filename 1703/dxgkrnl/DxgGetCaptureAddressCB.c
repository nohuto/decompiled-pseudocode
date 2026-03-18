/*
 * XREFs of DxgGetCaptureAddressCB @ 0x1C0189BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000E0D4 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgGetCaptureAddressCB(unsigned int *a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r9
  int v8; // r8d
  __int64 v9; // rdx
  struct _EX_RUNDOWN_REF *v10; // rdx
  ULONG_PTR Count; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int8 CurrentIrql; // al
  bool v16; // cf
  struct _EX_RUNDOWN_REF *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // ebx
  __int64 v25; // rax
  struct _EX_RUNDOWN_REF *v27; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v28[24]; // [rsp+38h] [rbp-11h] BYREF
  _BYTE v29[8]; // [rsp+50h] [rbp+7h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp+Fh] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v29);
  a1[1] = 0;
  *((_QWORD *)a1 + 1) = 0LL;
  Current = DXGPROCESS::GetCurrent(v2);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v28, Current, v4, v5);
  v6 = (*a1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v6 < *((_DWORD *)Current + 52)
    && (v7 = *((_QWORD *)Current + 24),
        v8 = *(_DWORD *)(v7 + 16LL * (unsigned int)v6 + 8),
        ((*a1 >> 26) & 0x30) == (*(_BYTE *)(v7 + 16LL * (unsigned int)v6 + 8) & 0x30))
    && (v8 & 0x1000) == 0
    && (v8 & 0xF) != 0
    && (v9 = 2 * v6, (*(_BYTE *)(v7 + 8 * v9 + 8) & 0xF) == 5) )
  {
    v10 = *(struct _EX_RUNDOWN_REF **)(v7 + 8 * v9);
  }
  else
  {
    v10 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v27, v10);
  if ( !v27 )
    goto LABEL_17;
  v12 = *(_QWORD *)(v27[1].Count + 16);
  if ( !v12 || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v12 + 16)) )
    goto LABEL_17;
  CurrentIrql = KeGetCurrentIrql();
  v16 = CurrentIrql < 2u;
  v17 = v27;
  if ( !v16 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27[1].Count + 16) + 16LL) + 192LL) + 64LL);
    v19 = *(_QWORD *)(v18 + 40);
    if ( *(_DWORD *)(v19 + 28) >= 0x2003u )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v19, v13);
      v20[3] = 275LL;
      v20[4] = 20LL;
      v20[5] = *(_QWORD *)(*(_QWORD *)(v27[1].Count + 16) + 16LL);
      v20[6] = 0LL;
      v20[7] = 0LL;
      WdLogEvent5_WdCriticalError(v20);
      v17 = v27;
    }
  }
  Count = v17[6].Count;
  v12 = *(unsigned int *)(Count + 4);
  if ( (v12 & 0x20) != 0 && (v17[9].Count & 0x800) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17[1].Count + 16) + 432LL)
                                                                                       + 8LL)
                                                                           + 216LL))(
      *(_QWORD *)(*(_QWORD *)(v17[1].Count + 16) + 440LL),
      *(_QWORD *)(Count + 8),
      a1 + 1,
      a1 + 2);
    v24 = 0;
  }
  else
  {
LABEL_17:
    v25 = WdLogNewEntry5_WdWarning(v12, Count, v13, v14);
    *(_QWORD *)(v25 + 24) = *a1;
    WdLogEvent5_WdWarning(v25);
    v24 = -1073741811;
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v27, v21, v22, v23);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
  if ( v29[0] )
    KeUnstackDetachProcess(&ApcState);
  return v24;
}
