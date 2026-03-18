/*
 * XREFs of DxgGetHandleParentCB @ 0x1C018D030
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0006E24 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgGetHandleParentCB(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rdi
  unsigned int v5; // edx
  __int64 v6; // r9
  __int64 v7; // r8
  int v8; // edx
  __int64 v9; // r8
  struct _EX_RUNDOWN_REF *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  ULONG_PTR Count; // rcx
  unsigned int v15; // ebx
  __int64 v16; // rax
  struct _EX_RUNDOWN_REF *v18; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v19[24]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v20[8]; // [rsp+40h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  v1 = a1;
  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v20);
  Current = DXGPROCESS::GetCurrent(v3, v2);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v19, (struct _KTHREAD **)Current);
  v5 = ((unsigned int)v1 >> 6) & 0xFFFFFF;
  if ( v5 < *((_DWORD *)Current + 62)
    && (v6 = *((_QWORD *)Current + 29),
        v7 = v5,
        v8 = *(_DWORD *)(v6 + 16LL * v5 + 8),
        (((unsigned int)v1 >> 25) & 0x60) == (v8 & 0x60))
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
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v18, v10);
  if ( v18 )
  {
    Count = v18[5].Count;
    if ( Count )
    {
      v15 = *(_DWORD *)(Count + 16);
      goto LABEL_13;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v16 + 24) = v1;
    WdLogEvent5_WdWarning(v16);
  }
  v15 = 0;
LABEL_13:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v18);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  if ( v20[0] )
    KeUnstackDetachProcess(&ApcState);
  return v15;
}
