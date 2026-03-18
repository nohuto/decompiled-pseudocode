/*
 * XREFs of ?CommitResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C00144F0
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6@Z @ 0x1C00C44B0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::CommitResourceHandleSafe(DXGPROCESS *this, struct DXGRESOURCE *a2)
{
  char *v2; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned __int64 v9; // rbx
  __int64 v10; // rax

  v2 = (char *)this + 168;
  DXGPUSHLOCK::AcquireExclusive((DXGPROCESS *)((char *)this + 168));
  v5 = *((unsigned int *)a2 + 4);
  v6 = (*((_DWORD *)a2 + 4) >> 6) & 0xFFFFFF;
  if ( (unsigned int)v6 < *((_DWORD *)this + 52) )
  {
    v7 = *((_QWORD *)this + 24);
    v8 = *(unsigned int *)(v7 + 16 * v6 + 8);
    if ( (((unsigned int)v5 >> 26) & 0x30) == (*(_BYTE *)(v7 + 16 * v6 + 8) & 0x30) && (v8 & 0xF) != 0 )
    {
      v9 = 2 * (((unsigned __int64)(unsigned int)v5 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v7 + 16 * (((unsigned __int64)(unsigned int)v5 >> 6) & 0xFFFFFF) + 8) & 0x1000) == 0 )
      {
        v10 = WdLogNewEntry5_WdAssertion(((unsigned int)v5 >> 26) & 0x30, v5, v8, v7);
        *(_QWORD *)(v10 + 24) = 190LL;
        WdLogEvent5_WdAssertion(v10);
      }
      *(_DWORD *)(*((_QWORD *)this + 24) + 8 * v9 + 8) &= ~0x1000u;
    }
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
