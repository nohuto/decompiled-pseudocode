/*
 * XREFs of DxgGetHandleDataCB @ 0x1C009C080
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0006E24 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00E6124 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00E6170 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgGetHandleDataCB(unsigned int *a1)
{
  struct DXGPROCESS *Current; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // ecx
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rdx
  struct DXGALLOCATION *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // esi
  struct DXGPROCESS *v26; // rax
  unsigned int v27; // ecx
  __int64 v28; // r8
  __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // rdx
  struct DXGRESOURCE *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v45[24]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v46[8]; // [rsp+40h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v46);
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v45, (struct _KTHREAD **)Current);
  v6 = a1[1];
  v7 = 0LL;
  if ( v6 == 1 )
  {
    v8 = (*a1 >> 6) & 0xFFFFFF;
    if ( v8 < *((_DWORD *)Current + 62)
      && (v9 = *((_QWORD *)Current + 29),
          v10 = v8,
          v11 = *(_DWORD *)(v9 + 16LL * v8 + 8),
          ((*a1 >> 25) & 0x60) == (v11 & 0x60))
      && (v11 & 0x2000) == 0
      && (v11 & 0x1F) != 0
      && (v12 = 2 * v10, (v11 & 0x1F) == 5) )
    {
      v13 = *(struct DXGALLOCATION **)(v9 + 8 * v12);
    }
    else
    {
      v13 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v44, v13);
    v16 = v44;
    if ( v44 )
    {
      if ( KeGetCurrentIrql() >= 2u )
      {
        v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v44 + 8) + 16LL) + 16LL) + 192LL)
                                    + 64LL)
                        + 40LL);
        if ( *(_DWORD *)(v20 + 28) >= 0x2003u )
        {
          v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20);
          v21[3] = 275LL;
          v21[4] = 20LL;
          v21[5] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v44 + 8) + 16LL) + 16LL);
          v21[6] = 0LL;
          v21[7] = 0LL;
          WdLogEvent5_WdCriticalError(v21);
          v16 = v44;
        }
      }
      if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 16LL) + 16LL)) )
        goto LABEL_11;
      if ( !*((_DWORD *)DXGGLOBAL::GetGlobal(v18) + 223) )
      {
        v17 = v44;
LABEL_11:
        if ( (a1[2] & 1) != 0 )
          v7 = *(_QWORD *)(v17 + 32);
        else
          v7 = *(_QWORD *)(*(_QWORD *)(v17 + 48) + 16LL);
        goto LABEL_13;
      }
      v23 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v23 + 24) = 87LL;
      WdLogEvent5_WdAssertion(v23);
    }
    else
    {
      v24 = WdLogNewEntry5_WdWarning(v14, 0LL, v15);
      *(_QWORD *)(v24 + 24) = *a1;
      WdLogEvent5_WdWarning(v24);
    }
LABEL_13:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v44);
    goto LABEL_14;
  }
  if ( v6 == 2 )
  {
    v25 = *a1;
    v26 = DXGPROCESS::GetCurrent();
    v27 = (v25 >> 6) & 0xFFFFFF;
    if ( v27 < *((_DWORD *)v26 + 62)
      && (v28 = *((_QWORD *)v26 + 29),
          v29 = v27,
          v30 = *(_DWORD *)(v28 + 16LL * v27 + 8),
          ((v25 >> 25) & 0x60) == (v30 & 0x60))
      && (v30 & 0x2000) == 0
      && (v30 & 0x1F) != 0
      && (v31 = 2 * v29, (v30 & 0x1F) == 4) )
    {
      v32 = *(struct DXGRESOURCE **)(v28 + 8 * v31);
    }
    else
    {
      v32 = 0LL;
    }
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v44, v32);
    v35 = v44;
    if ( v44 )
    {
      if ( KeGetCurrentIrql() >= 2u )
      {
        v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v44 + 8) + 16LL) + 16LL) + 192LL)
                                    + 64LL)
                        + 40LL);
        if ( *(_DWORD *)(v36 + 28) >= 0x2003u )
        {
          v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36);
          v37[3] = 275LL;
          v37[4] = 20LL;
          v37[5] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v44 + 8) + 16LL) + 16LL);
          v37[6] = 0LL;
          v37[7] = 0LL;
          WdLogEvent5_WdCriticalError(v37);
          v35 = v44;
        }
      }
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v35 + 8) + 16LL) + 16LL)) )
      {
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v39) + 223) )
        {
          v41 = WdLogNewEntry5_WdAssertion(v40);
          *(_QWORD *)(v41 + 24) = 129LL;
          WdLogEvent5_WdAssertion(v41);
LABEL_41:
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v44);
          goto LABEL_14;
        }
        v38 = v44;
      }
      if ( (*(_DWORD *)(v38 + 4) & 1) != 0 )
        v7 = *(_QWORD *)(*(_QWORD *)(v38 + 56) + 16LL);
      else
        v7 = *(_QWORD *)(v38 + 56);
      goto LABEL_41;
    }
    v42 = WdLogNewEntry5_WdWarning(v33, 0LL, v34);
    *(_QWORD *)(v42 + 24) = *a1;
    WdLogEvent5_WdWarning(v42);
    goto LABEL_41;
  }
  v43 = WdLogNewEntry5_WdWarning(v4, v3, v5);
  *(_QWORD *)(v43 + 24) = (int)a1[1];
  WdLogEvent5_WdWarning(v43);
LABEL_14:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v45);
  if ( v46[0] )
    KeUnstackDetachProcess(&ApcState);
  return v7;
}
