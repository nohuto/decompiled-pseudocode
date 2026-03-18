/*
 * XREFs of DxgEnumHandleChildrenCB @ 0x1C018CC70
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0006E24 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ??1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0024394 (--1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00E6124 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00E6170 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgEnumHandleChildrenCB(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r9
  int v8; // ecx
  __int64 v9; // rdx
  struct _EX_RUNDOWN_REF *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _EX_RUNDOWN_REF *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned int v18; // edx
  ULONG_PTR Count; // rcx
  int v20; // eax
  struct _EX_RUNDOWN_REF *v22; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v23[24]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v24[56]; // [rsp+40h] [rbp-48h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v24);
  Current = DXGPROCESS::GetCurrent(v3, v2);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v23, (struct _KTHREAD **)Current);
  v5 = 0;
  v6 = (*a1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v6 < *((_DWORD *)Current + 62)
    && (v7 = *((_QWORD *)Current + 29),
        v8 = *(_DWORD *)(v7 + 16LL * (unsigned int)v6 + 8),
        ((*a1 >> 25) & 0x60) == (*(_BYTE *)(v7 + 16LL * (unsigned int)v6 + 8) & 0x60))
    && (v8 & 0x2000) == 0
    && (v8 & 0x1F) != 0
    && (v9 = 2 * v6, (v8 & 0x1F) == 4) )
  {
    v10 = *(struct _EX_RUNDOWN_REF **)(v7 + 8 * v9);
  }
  else
  {
    v10 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v22, v10);
  v14 = v22;
  if ( v22 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22[1].Count + 16) + 16LL) + 192LL) + 64LL);
      if ( *(_DWORD *)(*(_QWORD *)(v16 + 40) + 28LL) >= 0x2003u )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16);
        v17[3] = 275LL;
        v17[4] = 20LL;
        v17[5] = *(_QWORD *)(*(_QWORD *)(v22[1].Count + 16) + 16LL);
        v17[6] = 0LL;
        v17[7] = 0LL;
        WdLogEvent5_WdCriticalError(v17);
        v14 = v22;
      }
    }
    v18 = a1[1];
    Count = v14[3].Count;
    v20 = 0;
    if ( v18 )
    {
      while ( Count )
      {
        Count = *(_QWORD *)(Count + 64);
        if ( ++v20 >= v18 )
          goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      if ( Count )
        v5 = *(_DWORD *)(Count + 16);
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = *a1;
    WdLogEvent5_WdWarning(v15);
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v22);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
  DXGVALIDATIONPROCESSREATTACH::~DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v24);
  return v5;
}
