/*
 * XREFs of DxgGetHandleParentCB @ 0x1C018A140
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000E0D4 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgGetHandleParentCB(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r9
  int v8; // r8d
  __int64 v9; // rdx
  struct _EX_RUNDOWN_REF *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG_PTR Count; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rax
  struct _EX_RUNDOWN_REF *v19; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v20[24]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v21[8]; // [rsp+40h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  v1 = a1;
  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v21);
  Current = DXGPROCESS::GetCurrent(v2);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v20, Current, v4, v5);
  v6 = ((unsigned int)v1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v6 < *((_DWORD *)Current + 52)
    && (v7 = *((_QWORD *)Current + 24),
        v8 = *(_DWORD *)(v7 + 16LL * (unsigned int)v6 + 8),
        (((unsigned int)v1 >> 26) & 0x30) == (*(_BYTE *)(v7 + 16LL * (unsigned int)v6 + 8) & 0x30))
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
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v19, v10);
  if ( v19 )
  {
    Count = v19[5].Count;
    if ( Count )
    {
      v16 = *(_DWORD *)(Count + 16);
      goto LABEL_13;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    *(_QWORD *)(v17 + 24) = v1;
    WdLogEvent5_WdWarning(v17);
  }
  v16 = 0;
LABEL_13:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v19, v11, v13, v14);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  if ( v21[0] )
    KeUnstackDetachProcess(&ApcState);
  return v16;
}
