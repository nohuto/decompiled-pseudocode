/*
 * XREFs of ?ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C00C0454
 * Callers:
 *     DxgkConfigureSharedResource @ 0x1C00FFFD0 (DxgkConfigureSharedResource.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z @ 0x1C00C0304 (-ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00CAD84 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00CADD0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::ConfigureSharedResource(
        PERESOURCE *this,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v6; // rdi
  char v7; // r15
  struct DXGPROCESS *Current; // rsi
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // r8d
  __int64 v13; // rdx
  struct DXGRESOURCE *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // ebx
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  v6 = (unsigned int)a4;
  v7 = a2;
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[13]) )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v20 + 24) = 5067LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !(_DWORD)v6 )
  {
    v21 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v21 + 24) = this;
    v18 = -1073741811;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v21);
    return v18;
  }
  Current = DXGPROCESS::GetCurrent((__int64)this);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 168));
  v10 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v10 < *((_DWORD *)Current + 52)
    && (v11 = *((_QWORD *)Current + 24),
        v12 = *(_DWORD *)(v11 + 16LL * (unsigned int)v10 + 8),
        (((unsigned int)v6 >> 26) & 0x30) == (*(_BYTE *)(v11 + 16LL * (unsigned int)v10 + 8) & 0x30))
    && (v12 & 0x1000) == 0
    && (v12 & 0xF) != 0
    && (v13 = 2 * v10, (*(_BYTE *)(v11 + 8 * v13 + 8) & 0xF) == 4) )
  {
    v14 = *(struct DXGRESOURCE **)(v11 + 8 * v13);
  }
  else
  {
    v14 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v23, v14);
  ExReleasePushLockSharedEx((char *)Current + 168, 0LL);
  KeLeaveCriticalRegion();
  if ( !v23 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17, 0LL);
    v22[3] = this;
    v22[4] = v6;
LABEL_22:
    v18 = -1073741811;
    v22[5] = -1073741811LL;
    goto LABEL_23;
  }
  if ( *(PERESOURCE **)(v23 + 8) != this )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17, v23);
    v22[3] = this;
    v18 = -1073741811;
    v22[4] = v23;
    v22[5] = *(_QWORD *)(v23 + 8);
    v22[6] = -1073741811LL;
LABEL_23:
    WdLogEvent5_WdWarning(v22);
    goto LABEL_15;
  }
  if ( (*(_DWORD *)(v23 + 4) & 1) == 0 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17, v23);
    v22[3] = this;
    v22[4] = v23;
    goto LABEL_22;
  }
  LOBYTE(v15) = v7;
  v18 = DXGDEVICE::ConfigureSharedResourceHelper(this, v15, a3, *(struct DXGSHAREDRESOURCE **)(v23 + 56), a5, 1);
LABEL_15:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v23);
  return v18;
}
