/*
 * XREFs of ?ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C00932C8
 * Callers:
 *     DxgkConfigureSharedResource @ 0x1C00F2D00 (DxgkConfigureSharedResource.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C008A3AC (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C008A3F0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z @ 0x1C0093178 (-ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDEVICE::ConfigureSharedResource(
        PERESOURCE *this,
        __int64 a2,
        void *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  __int64 v6; // rdi
  char v7; // r15
  struct DXGPROCESS *Current; // rsi
  unsigned int v10; // ecx
  __int64 v11; // r9
  int v12; // r8d
  struct _EX_RUNDOWN_REF *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // ebx
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  struct _EX_RUNDOWN_REF *v22; // [rsp+50h] [rbp+8h] BYREF

  v6 = a4;
  v7 = a2;
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[13]) )
  {
    v19 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v19 + 24) = 5087LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !(_DWORD)v6 )
  {
    v20 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v20 + 24) = this;
    v17 = -1073741811;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v20);
    return v17;
  }
  Current = DXGPROCESS::GetCurrent();
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 200));
  v10 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( v10 < *((_DWORD *)Current + 60)
    && (v11 = *((_QWORD *)Current + 28),
        v12 = *(_DWORD *)(v11 + 16LL * v10 + 8),
        (((unsigned int)v6 >> 25) & 0x60) == (v12 & 0x60))
    && (v12 & 0x2000) == 0
    && (v12 & 0x1F) != 0
    && (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0x1F) == 4 )
  {
    v13 = *(struct _EX_RUNDOWN_REF **)(v11 + 16LL * v10);
  }
  else
  {
    v13 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v22, v13);
  ExReleasePushLockSharedEx((char *)Current + 200, 0LL);
  KeLeaveCriticalRegion();
  if ( !v22 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
    v21[3] = this;
    v21[4] = v6;
LABEL_22:
    v17 = -1073741811;
    v21[5] = -1073741811LL;
    goto LABEL_23;
  }
  if ( (PERESOURCE *)v22[1].Count != this )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
    v21[3] = this;
    v17 = -1073741811;
    v21[4] = v22;
    v21[5] = v22[1].Count;
    v21[6] = -1073741811LL;
LABEL_23:
    WdLogEvent5_WdWarning(v21);
    goto LABEL_15;
  }
  if ( (HIDWORD(v22->Ptr) & 1) == 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
    v21[3] = this;
    v21[4] = v22;
    goto LABEL_22;
  }
  LOBYTE(v14) = v7;
  v17 = DXGDEVICE::ConfigureSharedResourceHelper(this, v14, a3, (struct DXGSHAREDRESOURCE *)v22[7].Count, a5, 1);
LABEL_15:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v22);
  return v17;
}
