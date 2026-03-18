/*
 * XREFs of ?DisplayConfigDestroySimulatedMonitors@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A29E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     MonitorDestroyAllSameTypeSimulatedMonitor @ 0x1C00A2AA0 (MonitorDestroyAllSameTypeSimulatedMonitor.c)
 */

__int64 __fastcall DisplayConfigDestroySimulatedMonitors(struct DXGADAPTER *this, void *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v6; // r8d
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v16[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v17[40]; // [rsp+48h] [rbp-30h] BYREF

  v4 = 0;
  if ( !a2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v14 + 24) = 2820LL;
    WdLogEvent5_WdAssertion(v14);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v15, this, 0LL);
  v7 = COREADAPTERACCESS::AcquireExclusive(&v15, v6 + 1);
  if ( v7 >= 0 )
  {
    v7 = MonitorDestroyAllSameTypeSimulatedMonitor(this);
    goto LABEL_8;
  }
  if ( v7 != -1073741130 )
  {
LABEL_8:
    v4 = v7;
    goto LABEL_6;
  }
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = this;
  v12[4] = *((int *)this + 68);
  v12[5] = *((unsigned int *)this + 67);
LABEL_6:
  COREACCESS::~COREACCESS((COREACCESS *)v17);
  COREACCESS::~COREACCESS((COREACCESS *)v16);
  return v4;
}
