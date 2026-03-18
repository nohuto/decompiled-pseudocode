/*
 * XREFs of DxgGetHandleDataCB @ 0x1C0189DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000E0D4 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00CAD84 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00CADD0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

ULONG_PTR __fastcall DxgGetHandleDataCB(unsigned int *a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  ULONG_PTR Count; // rbx
  unsigned int v12; // ecx
  __int64 v13; // r9
  int v14; // r8d
  struct _EX_RUNDOWN_REF *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _EX_RUNDOWN_REF *v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  struct _EX_RUNDOWN_REF *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // esi
  struct DXGPROCESS *v31; // rax
  unsigned int v32; // ecx
  __int64 v33; // r8
  int v34; // edx
  struct _EX_RUNDOWN_REF *v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  struct _EX_RUNDOWN_REF *v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  struct _EX_RUNDOWN_REF *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  struct _EX_RUNDOWN_REF *v54; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v55[24]; // [rsp+28h] [rbp-58h] BYREF
  char v56[8]; // [rsp+40h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v56);
  Current = DXGPROCESS::GetCurrent(v2);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v55, Current, v4, v5);
  v10 = a1[1];
  Count = 0LL;
  if ( v10 == 1 )
  {
    v12 = (*a1 >> 6) & 0xFFFFFF;
    if ( v12 < *((_DWORD *)Current + 52)
      && (v13 = *((_QWORD *)Current + 24),
          v14 = *(_DWORD *)(v13 + 16LL * v12 + 8),
          ((*a1 >> 26) & 0x30) == (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0x30))
      && (v14 & 0x1000) == 0
      && (v14 & 0xF) != 0
      && (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0xF) == 5 )
    {
      v15 = *(struct _EX_RUNDOWN_REF **)(v13 + 16LL * v12);
    }
    else
    {
      v15 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v54, v15);
    v19 = v54;
    if ( v54 )
    {
      if ( KeGetCurrentIrql() >= 2u )
      {
        v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v54[1].Count + 16) + 16LL) + 192LL) + 64LL)
                        + 40LL);
        if ( *(_DWORD *)(v20 + 28) >= 0x2003u )
        {
          v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v54, v17);
          v21[3] = 275LL;
          v21[4] = 20LL;
          v21[5] = *(_QWORD *)(*(_QWORD *)(v54[1].Count + 16) + 16LL);
          v21[6] = 0LL;
          v21[7] = 0LL;
          WdLogEvent5_WdCriticalError(v21);
          v19 = v54;
        }
      }
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v19[1].Count + 16) + 16LL)) )
      {
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v23, (__int64)v22, v24, v25) + 203) )
        {
          v28 = WdLogNewEntry5_WdAssertion(v27, v26, v24, v25);
          *(_QWORD *)(v28 + 24) = 87LL;
          WdLogEvent5_WdAssertion(v28);
LABEL_16:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v54, (__int64)v22, v24, v25);
          goto LABEL_44;
        }
        v22 = v54;
      }
      if ( (a1[2] & 1) != 0 )
        Count = v22[4].Count;
      else
        Count = *(_QWORD *)(v22[6].Count + 16);
      goto LABEL_16;
    }
    v29 = WdLogNewEntry5_WdWarning(v16, 0LL, v17, v18);
    *(_QWORD *)(v29 + 24) = *a1;
    WdLogEvent5_WdWarning(v29);
    goto LABEL_16;
  }
  if ( v10 == 2 )
  {
    v30 = *a1;
    v31 = DXGPROCESS::GetCurrent(v7);
    v32 = (v30 >> 6) & 0xFFFFFF;
    if ( v32 < *((_DWORD *)v31 + 52)
      && (v33 = *((_QWORD *)v31 + 24),
          v34 = *(_DWORD *)(v33 + 16LL * v32 + 8),
          ((v30 >> 26) & 0x30) == (*(_BYTE *)(v33 + 16LL * v32 + 8) & 0x30))
      && (v34 & 0x1000) == 0
      && (v34 & 0xF) != 0
      && (*(_BYTE *)(v33 + 16LL * v32 + 8) & 0xF) == 4 )
    {
      v35 = *(struct _EX_RUNDOWN_REF **)(v33 + 16LL * v32);
    }
    else
    {
      v35 = 0LL;
    }
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v54, v35);
    v39 = v54;
    if ( v54 )
    {
      if ( KeGetCurrentIrql() >= 2u )
      {
        v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v54[1].Count + 16) + 16LL) + 192LL) + 64LL)
                        + 40LL);
        if ( *(_DWORD *)(v40 + 28) >= 0x2003u )
        {
          v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v54, v37);
          v41[3] = 275LL;
          v41[4] = 20LL;
          v41[5] = *(_QWORD *)(*(_QWORD *)(v54[1].Count + 16) + 16LL);
          v41[6] = 0LL;
          v41[7] = 0LL;
          WdLogEvent5_WdCriticalError(v41);
          v39 = v54;
        }
      }
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v39[1].Count + 16) + 16LL)) )
      {
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v43, (__int64)v42, v44, v45) + 203) )
        {
          v50 = WdLogNewEntry5_WdAssertion(v47, v46, v48, v49);
          *(_QWORD *)(v50 + 24) = 129LL;
          WdLogEvent5_WdAssertion(v50);
LABEL_37:
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v54);
          goto LABEL_44;
        }
        v42 = v54;
      }
      if ( (HIDWORD(v42->Ptr) & 1) != 0 )
        Count = *(_QWORD *)(v42[7].Count + 16);
      else
        Count = v42[7].Count;
      goto LABEL_37;
    }
    v51 = WdLogNewEntry5_WdWarning(v36, 0LL, v37, v38);
    *(_QWORD *)(v51 + 24) = *a1;
    WdLogEvent5_WdWarning(v51);
    goto LABEL_37;
  }
  v52 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
  *(_QWORD *)(v52 + 24) = (int)a1[1];
  WdLogEvent5_WdWarning(v52);
LABEL_44:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v55);
  if ( v56[0] )
    KeUnstackDetachProcess(&ApcState);
  return Count;
}
