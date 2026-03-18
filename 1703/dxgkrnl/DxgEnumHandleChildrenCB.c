/*
 * XREFs of DxgEnumHandleChildrenCB @ 0x1C0189A10
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000E0D4 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ??1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00209C8 (--1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00CAD84 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00CADD0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgEnumHandleChildrenCB(unsigned int *a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r9
  int v9; // ecx
  __int64 v10; // rdx
  struct _EX_RUNDOWN_REF *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _EX_RUNDOWN_REF *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rax
  unsigned int v21; // edx
  ULONG_PTR Count; // rcx
  int v23; // eax
  struct _EX_RUNDOWN_REF *v25; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v26[24]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v27[56]; // [rsp+40h] [rbp-48h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v27);
  Current = DXGPROCESS::GetCurrent(v2);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v26, Current, v4, v5);
  v6 = 0;
  v7 = (*a1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v7 < *((_DWORD *)Current + 52)
    && (v8 = *((_QWORD *)Current + 24),
        v9 = *(_DWORD *)(v8 + 16LL * (unsigned int)v7 + 8),
        ((*a1 >> 26) & 0x30) == (*(_BYTE *)(v8 + 16LL * (unsigned int)v7 + 8) & 0x30))
    && (v9 & 0x1000) == 0
    && (v9 & 0xF) != 0
    && (v10 = 2 * v7, (*(_BYTE *)(v8 + 8 * v10 + 8) & 0xF) == 4) )
  {
    v11 = *(struct _EX_RUNDOWN_REF **)(v8 + 8 * v10);
  }
  else
  {
    v11 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v25, v11);
  v16 = v25;
  if ( v25 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25[1].Count + 16) + 16LL) + 192LL) + 64LL);
      v19 = *(_QWORD *)(v18 + 40);
      if ( *(_DWORD *)(v19 + 28) >= 0x2003u )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v19, v14);
        v20[3] = 275LL;
        v20[4] = 20LL;
        v20[5] = *(_QWORD *)(*(_QWORD *)(v25[1].Count + 16) + 16LL);
        v20[6] = 0LL;
        v20[7] = 0LL;
        WdLogEvent5_WdCriticalError(v20);
        v16 = v25;
      }
    }
    v21 = a1[1];
    Count = v16[3].Count;
    v23 = 0;
    if ( v21 )
    {
      while ( Count )
      {
        Count = *(_QWORD *)(Count + 64);
        if ( ++v23 >= v21 )
          goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      if ( Count )
        v6 = *(_DWORD *)(Count + 16);
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v17 + 24) = *a1;
    WdLogEvent5_WdWarning(v17);
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v25);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26);
  DXGVALIDATIONPROCESSREATTACH::~DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v27);
  return v6;
}
