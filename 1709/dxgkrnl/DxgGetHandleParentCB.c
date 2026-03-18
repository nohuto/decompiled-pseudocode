/*
 * XREFs of DxgGetHandleParentCB @ 0x1C019F060
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0008C00 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgGetHandleParentCB(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v5; // rdx
  __int64 v6; // r9
  int v7; // r8d
  __int64 v8; // rdx
  struct _EX_RUNDOWN_REF *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  ULONG_PTR Count; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rax
  struct _EX_RUNDOWN_REF *v17; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v18[24]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v19[8]; // [rsp+40h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  v1 = a1;
  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v19);
  Current = DXGPROCESS::GetCurrent(v3, v2);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v18, Current);
  v5 = ((unsigned int)v1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v5 < *((_DWORD *)Current + 60)
    && (v6 = *((_QWORD *)Current + 28),
        v7 = *(_DWORD *)(v6 + 16LL * (unsigned int)v5 + 8),
        (((unsigned int)v1 >> 25) & 0x60) == (*(_BYTE *)(v6 + 16LL * (unsigned int)v5 + 8) & 0x60))
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
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v17, v9);
  if ( v17 )
  {
    Count = v17[5].Count;
    if ( Count )
    {
      v14 = *(_DWORD *)(Count + 16);
      goto LABEL_13;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v15 + 24) = v1;
    WdLogEvent5_WdWarning(v15);
  }
  v14 = 0;
LABEL_13:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v17);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  if ( v19[0] )
    KeUnstackDetachProcess(&ApcState);
  return v14;
}
