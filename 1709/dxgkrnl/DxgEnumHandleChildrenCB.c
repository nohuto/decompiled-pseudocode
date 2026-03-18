/*
 * XREFs of DxgEnumHandleChildrenCB @ 0x1C019E930
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0008C00 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ??1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C001DC58 (--1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C008A3AC (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C008A3F0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgEnumHandleChildrenCB(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // ecx
  __int64 v9; // rdx
  struct _EX_RUNDOWN_REF *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _EX_RUNDOWN_REF *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  unsigned int v19; // edx
  ULONG_PTR Count; // rcx
  int v21; // eax
  struct _EX_RUNDOWN_REF *v23; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v24[24]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v25[56]; // [rsp+40h] [rbp-48h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v25);
  Current = DXGPROCESS::GetCurrent(v3, v2);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v24, Current);
  v5 = 0;
  v6 = (*a1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v6 < *((_DWORD *)Current + 60)
    && (v7 = *((_QWORD *)Current + 28),
        v8 = *(_DWORD *)(v7 + 16LL * (unsigned int)v6 + 8),
        ((*a1 >> 25) & 0x60) == (*(_BYTE *)(v7 + 16LL * (unsigned int)v6 + 8) & 0x60))
    && (v8 & 0x2000) == 0
    && (v8 & 0x1F) != 0
    && (v9 = 2 * v6, (*(_BYTE *)(v7 + 8 * v9 + 8) & 0x1F) == 4) )
  {
    v10 = *(struct _EX_RUNDOWN_REF **)(v7 + 8 * v9);
  }
  else
  {
    v10 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v23, v10);
  v14 = v23;
  if ( v23 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23[1].Count + 16) + 16LL) + 192LL) + 64LL);
      v17 = *(_QWORD *)(v16 + 40);
      if ( *(_DWORD *)(v17 + 28) >= 0x2003u )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v17, v13);
        v18[3] = 275LL;
        v18[4] = 20LL;
        v18[5] = *(_QWORD *)(*(_QWORD *)(v23[1].Count + 16) + 16LL);
        v18[6] = 0LL;
        v18[7] = 0LL;
        WdLogEvent5_WdCriticalError(v18);
        v14 = v23;
      }
    }
    v19 = a1[1];
    Count = v14[3].Count;
    v21 = 0;
    if ( v19 )
    {
      while ( Count )
      {
        Count = *(_QWORD *)(Count + 64);
        if ( ++v21 >= v19 )
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
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v23);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
  DXGVALIDATIONPROCESSREATTACH::~DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v25);
  return v5;
}
