/*
 * XREFs of DxgGetHandleDataCB @ 0x1C019ECF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0008C00 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C008A3AC (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C008A3F0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

ULONG_PTR __fastcall DxgGetHandleDataCB(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // eax
  ULONG_PTR Count; // rbx
  unsigned int v10; // ecx
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rdx
  struct _EX_RUNDOWN_REF *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _EX_RUNDOWN_REF *v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  struct _EX_RUNDOWN_REF *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // esi
  struct DXGPROCESS *v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // r8
  __int64 v30; // rdx
  int v31; // ecx
  __int64 v32; // rdx
  struct _EX_RUNDOWN_REF *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct _EX_RUNDOWN_REF *v36; // rdx
  __int64 v37; // rcx
  _QWORD *v38; // rax
  struct _EX_RUNDOWN_REF *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  struct _EX_RUNDOWN_REF *v46; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v47[24]; // [rsp+28h] [rbp-58h] BYREF
  char v48[8]; // [rsp+40h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v48);
  Current = DXGPROCESS::GetCurrent(v3, v2);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v47, Current);
  v8 = a1[1];
  Count = 0LL;
  if ( v8 == 1 )
  {
    v10 = (*a1 >> 6) & 0xFFFFFF;
    if ( v10 < *((_DWORD *)Current + 60)
      && (v11 = *((_QWORD *)Current + 28),
          v12 = v10,
          v13 = *(_DWORD *)(v11 + 16LL * v10 + 8),
          ((*a1 >> 25) & 0x60) == (v13 & 0x60))
      && (v13 & 0x2000) == 0
      && (v13 & 0x1F) != 0
      && (v14 = 2 * v12, (*(_BYTE *)(v11 + 8 * v14 + 8) & 0x1F) == 5) )
    {
      v15 = *(struct _EX_RUNDOWN_REF **)(v11 + 8 * v14);
    }
    else
    {
      v15 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v46, v15);
    v18 = v46;
    if ( v46 )
    {
      if ( KeGetCurrentIrql() >= 2u )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46[1].Count + 16) + 16LL) + 192LL) + 64LL)
                        + 40LL);
        if ( *(_DWORD *)(v19 + 28) >= 0x2003u )
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v46, v17);
          v20[3] = 275LL;
          v20[4] = 20LL;
          v20[5] = *(_QWORD *)(*(_QWORD *)(v46[1].Count + 16) + 16LL);
          v20[6] = 0LL;
          v20[7] = 0LL;
          WdLogEvent5_WdCriticalError(v20);
          v18 = v46;
        }
      }
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v18[1].Count + 16) + 16LL)) )
      {
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v22) + 203) )
        {
          v24 = WdLogNewEntry5_WdAssertion(v23);
          *(_QWORD *)(v24 + 24) = 87LL;
          WdLogEvent5_WdAssertion(v24);
LABEL_16:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v46);
          goto LABEL_44;
        }
        v21 = v46;
      }
      if ( (a1[2] & 1) != 0 )
        Count = v21[4].Count;
      else
        Count = *(_QWORD *)(v21[6].Count + 16);
      goto LABEL_16;
    }
    v25 = WdLogNewEntry5_WdWarning(v16, 0LL, v17);
    *(_QWORD *)(v25 + 24) = *a1;
    WdLogEvent5_WdWarning(v25);
    goto LABEL_16;
  }
  if ( v8 == 2 )
  {
    v26 = *a1;
    v27 = DXGPROCESS::GetCurrent(v6, v5);
    v28 = (v26 >> 6) & 0xFFFFFF;
    if ( v28 < *((_DWORD *)v27 + 60)
      && (v29 = *((_QWORD *)v27 + 28),
          v30 = v28,
          v31 = *(_DWORD *)(v29 + 16LL * v28 + 8),
          ((v26 >> 25) & 0x60) == (v31 & 0x60))
      && (v31 & 0x2000) == 0
      && (v31 & 0x1F) != 0
      && (v32 = 2 * v30, (*(_BYTE *)(v29 + 8 * v32 + 8) & 0x1F) == 4) )
    {
      v33 = *(struct _EX_RUNDOWN_REF **)(v29 + 8 * v32);
    }
    else
    {
      v33 = 0LL;
    }
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v46, v33);
    v36 = v46;
    if ( v46 )
    {
      if ( KeGetCurrentIrql() >= 2u )
      {
        v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46[1].Count + 16) + 16LL) + 192LL) + 64LL)
                        + 40LL);
        if ( *(_DWORD *)(v37 + 28) >= 0x2003u )
        {
          v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v46, v35);
          v38[3] = 275LL;
          v38[4] = 20LL;
          v38[5] = *(_QWORD *)(*(_QWORD *)(v46[1].Count + 16) + 16LL);
          v38[6] = 0LL;
          v38[7] = 0LL;
          WdLogEvent5_WdCriticalError(v38);
          v36 = v46;
        }
      }
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v36[1].Count + 16) + 16LL)) )
      {
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v40) + 203) )
        {
          v42 = WdLogNewEntry5_WdAssertion(v41);
          *(_QWORD *)(v42 + 24) = 129LL;
          WdLogEvent5_WdAssertion(v42);
LABEL_37:
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v46);
          goto LABEL_44;
        }
        v39 = v46;
      }
      if ( (HIDWORD(v39->Ptr) & 1) != 0 )
        Count = *(_QWORD *)(v39[7].Count + 16);
      else
        Count = v39[7].Count;
      goto LABEL_37;
    }
    v43 = WdLogNewEntry5_WdWarning(v34, 0LL, v35);
    *(_QWORD *)(v43 + 24) = *a1;
    WdLogEvent5_WdWarning(v43);
    goto LABEL_37;
  }
  v44 = WdLogNewEntry5_WdWarning(v6, v5, v7);
  *(_QWORD *)(v44 + 24) = (int)a1[1];
  WdLogEvent5_WdWarning(v44);
LABEL_44:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v47);
  if ( v48[0] )
    KeUnstackDetachProcess(&ApcState);
  return Count;
}
