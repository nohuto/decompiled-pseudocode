/*
 * XREFs of ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C01459CC
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00EBA10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::RemoveResourceFromDeviceList(struct _KTHREAD **this, struct DXGRESOURCE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v7, this + 23);
  if ( a2 == this[7] || *((_QWORD *)a2 + 4) )
  {
    v4 = *((_QWORD *)a2 + 5);
    if ( v4 )
      *(_QWORD *)(v4 + 32) = *((_QWORD *)a2 + 4);
    v5 = *((_QWORD *)a2 + 4);
    if ( v5 )
    {
      *(_QWORD *)(v5 + 40) = *((_QWORD *)a2 + 5);
    }
    else
    {
      if ( this[7] != a2 )
      {
        v6 = WdLogNewEntry5_WdAssertion(0LL);
        *(_QWORD *)(v6 + 24) = 8379LL;
        WdLogEvent5_WdAssertion(v6);
      }
      this[7] = (struct _KTHREAD *)*((_QWORD *)a2 + 5);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
}
