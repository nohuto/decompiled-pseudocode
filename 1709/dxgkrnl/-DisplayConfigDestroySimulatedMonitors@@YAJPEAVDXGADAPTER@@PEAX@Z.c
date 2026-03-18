/*
 * XREFs of ?DisplayConfigDestroySimulatedMonitors@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00F60D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     MonitorDestroyAllSameTypeSimulatedMonitor @ 0x1C00F6190 (MonitorDestroyAllSameTypeSimulatedMonitor.c)
 */

__int64 __fastcall DisplayConfigDestroySimulatedMonitors(struct DXGADAPTER *this, void *a2)
{
  unsigned int v2; // ebx
  int v4; // r8d
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v12[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v13[40]; // [rsp+48h] [rbp-30h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 2205LL;
    WdLogEvent5_WdAssertion(v10);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v11, this, 0LL);
  v5 = COREADAPTERACCESS::AcquireExclusive(&v11, v4 + 1);
  if ( v5 >= 0 )
  {
    v5 = MonitorDestroyAllSameTypeSimulatedMonitor(this);
    goto LABEL_8;
  }
  if ( v5 != -1073741130 )
  {
LABEL_8:
    v2 = v5;
    goto LABEL_6;
  }
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
  v8[3] = this;
  v8[4] = *((int *)this + 68);
  v8[5] = *((unsigned int *)this + 67);
LABEL_6:
  COREACCESS::~COREACCESS((COREACCESS *)v13);
  COREACCESS::~COREACCESS((COREACCESS *)v12);
  return v2;
}
