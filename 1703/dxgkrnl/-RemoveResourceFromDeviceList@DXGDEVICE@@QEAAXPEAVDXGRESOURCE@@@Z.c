/*
 * XREFs of ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C00C18A0
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6@Z @ 0x1C00C44B0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00C7DC0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

void __fastcall DXGDEVICE::RemoveResourceFromDeviceList(
        struct _KTHREAD **this,
        struct DXGRESOURCE *a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // r9d
  __int64 v15; // rax
  _BYTE v16[8]; // [rsp+20h] [rbp-28h] BYREF
  char *v17; // [rsp+28h] [rbp-20h]
  int v18; // [rsp+30h] [rbp-18h]

  v4 = (char *)(this + 23);
  v17 = (char *)(this + 23);
  if ( this != (struct _KTHREAD **)-184LL && this[24] == KeGetCurrentThread() )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v13 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v13);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v4, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v14 = *((_DWORD *)v4 + 4);
      if ( v14 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v8, &EventBlockThread, v9, v14);
    }
    ExAcquirePushLockExclusiveEx(v4, 0LL);
  }
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  v18 = 2;
  if ( a2 == this[7] || *((_QWORD *)a2 + 4) )
  {
    v11 = *((_QWORD *)a2 + 5);
    if ( v11 )
      *(_QWORD *)(v11 + 32) = *((_QWORD *)a2 + 4);
    v12 = *((_QWORD *)a2 + 4);
    if ( v12 )
    {
      *(_QWORD *)(v12 + 40) = *((_QWORD *)a2 + 5);
    }
    else
    {
      if ( this[7] != a2 )
      {
        v15 = WdLogNewEntry5_WdAssertion(0LL, v7, v9, v10);
        *(_QWORD *)(v15 + 24) = 7892LL;
        WdLogEvent5_WdAssertion(v15);
      }
      this[7] = (struct _KTHREAD *)*((_QWORD *)a2 + 5);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
}
