/*
 * XREFs of ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0094FE8
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C0097830 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009B620 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::RemoveResourceFromDeviceList(struct _KTHREAD **this, struct DXGRESOURCE *a2)
{
  DXGPUSHLOCK *v2; // rsi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  char *v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  v2 = (DXGPUSHLOCK *)(this + 23);
  v10 = (char *)(this + 23);
  if ( this != (struct _KTHREAD **)-184LL && this[24] == KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v7);
  }
  DXGPUSHLOCK::AcquireExclusive(v2);
  v11 = 2;
  if ( a2 == this[7] || *((_QWORD *)a2 + 4) )
  {
    v5 = *((_QWORD *)a2 + 5);
    if ( v5 )
      *(_QWORD *)(v5 + 32) = *((_QWORD *)a2 + 4);
    v6 = *((_QWORD *)a2 + 4);
    if ( v6 )
    {
      *(_QWORD *)(v6 + 40) = *((_QWORD *)a2 + 5);
    }
    else
    {
      if ( this[7] != a2 )
      {
        v8 = WdLogNewEntry5_WdAssertion(0LL);
        *(_QWORD *)(v8 + 24) = 7925LL;
        WdLogEvent5_WdAssertion(v8);
      }
      this[7] = (struct _KTHREAD *)*((_QWORD *)a2 + 5);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
}
