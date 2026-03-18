/*
 * XREFs of ?CommitResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C00155DC
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C0097830 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::CommitResourceHandleSafe(DXGPROCESS *this, struct DXGRESOURCE *a2)
{
  char *v2; // rdi
  unsigned int v5; // edx
  __int64 v6; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // rbx
  __int64 v9; // rax

  v2 = (char *)this + 200;
  DXGPUSHLOCK::AcquireExclusive((DXGPROCESS *)((char *)this + 200));
  v5 = *((_DWORD *)a2 + 4);
  v6 = (v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v6 < *((_DWORD *)this + 60) )
  {
    v7 = *((_QWORD *)this + 28);
    if ( ((v5 >> 25) & 0x60) == (*(_BYTE *)(v7 + 16 * v6 + 8) & 0x60) && (*(_DWORD *)(v7 + 16 * v6 + 8) & 0x1F) != 0 )
    {
      v8 = 2 * (((unsigned __int64)v5 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v7 + 16 * (((unsigned __int64)v5 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        v9 = WdLogNewEntry5_WdAssertion((v5 >> 25) & 0x60);
        *(_QWORD *)(v9 + 24) = 191LL;
        WdLogEvent5_WdAssertion(v9);
      }
      *(_DWORD *)(*((_QWORD *)this + 28) + 8 * v8 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
